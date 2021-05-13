#include <base/quadrature_lib.h>
#include <base/parameter_handler.h>
#include <lac/vector.h>
#include <grid/tria_iterator.h>
#include <dofs/dof_accessor.h>
#include <dofs/dof_handler.h>
#include <dofs/dof_constraints.h>
#include <dofs/dof_tools.h>
#include <fe/fe.h>
#include <fe/fe_dgq.h>

#include <libparest/utilities.h>
#include <libparest/parameter/bounds.h>
#include <libparest/parameter/field_discretization.h>


namespace libparest
{
  namespace Parameter
  {
    namespace Field
    {

/* ---------------------- Triangulations ------------------ */        
    
      template <int dim>
      Triangulations<dim>::Triangulations (const Triangulation<dim>    &old_parameter,
					   const GridTransfer::Base<dim> &mesh_refinement)
      {
      
					 
	parameter.copy_triangulation (old_parameter);
      
					 
					 
	mesh_refinement.refine_grid (parameter);
      }
    


      template <int dim>
      Triangulations<dim>::~Triangulations () 
      {}




/* ---------------------- FiniteElements ------------------ */        

      template <int dim>
      void
      FiniteElements<dim>::Parameters::declare_parameters (ParameterHandler &prm)
      {
	prm.enter_subsection ("Distributed parameter field");
	prm.declare_entry ("Finite element", "discontinuous constant",
			   Patterns::Anything ());
	prm.leave_subsection ();
      }
    


      template <int dim>
      void
      FiniteElements<dim>::Parameters::parse_parameters (ParameterHandler &prm)
      {
	prm.enter_subsection ("Distributed parameter field");
	name = prm.get ("Finite element");
	prm.leave_subsection ();
      }



      template <int dim>
      void
      FiniteElements<dim>::Parameters::delete_parameters ()
      {
	name = "";
      }
    

    
    

      template <int dim>
      FiniteElements<dim>::FiniteElements (const Parameters &parms)
		      :
		      fe (FEHelper<dim>::get_fe(parms.name)),
		      quadrature (FEHelper<dim>::get_quadrature (parms.name)),
		      face_quadrature (dim != 1 ?
				       FEHelper<dim>::get_quadrature_face (parms.name) :
				       *static_cast<const Quadrature<dim-1>*>(0))
      {}



      template <int dim>
      FiniteElements<dim>::~FiniteElements ()
      {}




/* ---------------------- DoFHandlers ------------------ */    

      template <int dim>
      DoFHandlers<dim>::DoFHandlers (Triangulations<dim>       &triangulations,
				     const FiniteElements<dim> &fe)
		      :
		      parameter (triangulations.parameter),
		      fe (&fe),
		      triangulations (&triangulations)
      {
	reinitialize ();
      }



      template <int dim>
      void
      DoFHandlers<dim>::reinitialize ()
      {
	parameter.distribute_dofs (fe->fe);

	parameter_constraints.clear ();
	DoFTools::make_hanging_node_constraints (parameter, parameter_constraints);
	parameter_constraints.close ();
      }



      template <int dim>
      DoFHandlers<dim>::~DoFHandlers () 
      {}


/* ---------------------- DiscretizedField ------------------ */

      template <int dim>
      DiscretizedField<dim>::
      DiscretizedField (Triangulations          *triangulations,
				   FiniteElements          *finite_elements,
				   const Bounds::Base<dim> &parameter_bounds)
		      :
		      triangulations (triangulations),
		      finite_elements (finite_elements),
		      dof_handlers (0),
		      parameter_bounds (&parameter_bounds)
      {
	dof_handlers = new DoFHandlers (*triangulations,
					*finite_elements);
	recompute_bounds ();
      }



      template <int dim>
      DiscretizedField<dim>::~DiscretizedField ()
      {
	delete_ptr (dof_handlers);
	delete_ptr (finite_elements);
	delete_ptr (triangulations);
      }
    


      template <int dim>
      void
      DiscretizedField<dim>::
      refine_parameterization (const std::vector<bool> &refinement_indicators,
			       const std::vector<bool> &coarsening_indicators)
      {
	triangulations->parameter.load_refine_flags (refinement_indicators);
	triangulations->parameter.load_coarsen_flags (coarsening_indicators);

#ifdef DEBUG
					 
					 
					 
					 
					 
					 
					 
					 
					 
	{
	  std::vector<bool> tmp1 (refinement_indicators.size());
	  std::vector<bool> tmp2 (refinement_indicators.size());
	  triangulations->parameter.prepare_coarsening_and_refinement ();
	  triangulations->parameter.save_refine_flags (tmp1);
	  triangulations->parameter.save_coarsen_flags (tmp2);
	
	  Assert (refinement_indicators == tmp1, ExcInternalError());
	  Assert (coarsening_indicators == tmp2, ExcInternalError());
	}
#endif
      
	triangulations->parameter.execute_coarsening_and_refinement ();
      
	dof_handlers->reinitialize ();
	recompute_bounds ();
      }
    
    

      template <int dim>
      void
      DiscretizedField<dim>::
      set_back_to_bounds (Vector<double> &v) const
      {
	Assert (v.size() == dof_handlers->parameter.n_dofs(), ExcInternalError());
	Assert (lower_bounds.size() == dof_handlers->parameter.n_dofs(), ExcInternalError());
	Assert (upper_bounds.size() == dof_handlers->parameter.n_dofs(), ExcInternalError());
    
	for (unsigned int i=0; i<v.size(); ++i)
	  if (v(i) < lower_bounds[i])
	    v(i) = lower_bounds[i];
	  else
	    if (v(i) > upper_bounds[i])
	      v(i) = upper_bounds[i];
      }


      template <int dim>
      bool
      DiscretizedField<dim>::
      satisfies_bounds (const Vector<double> &v) const
      {
	Assert (v.size() == dof_handlers->parameter.n_dofs(), ExcInternalError());
	Assert (lower_bounds.size() == dof_handlers->parameter.n_dofs(), ExcInternalError());
	Assert (upper_bounds.size() == dof_handlers->parameter.n_dofs(), ExcInternalError());

	for (unsigned int i=0; i<v.size(); ++i)
	  if ((v(i) < lower_bounds[i]) ||
	      (v(i) > upper_bounds[i]))
	    return false;
	return true;
      }



      template <int dim>
      void
      DiscretizedField<dim>::
      at_lower_bounds (const Vector<double> &v,
		       std::vector<bool>    &flags) const
      {
	Assert (v.size() == dof_handlers->parameter.n_dofs(), ExcInternalError());
	Assert (v.size() == flags.size(), ExcInternalError());
	Assert (lower_bounds.size() == dof_handlers->parameter.n_dofs(), ExcInternalError());
	Assert (upper_bounds.size() == dof_handlers->parameter.n_dofs(), ExcInternalError());

	for (unsigned int i=0; i<v.size(); ++i)
	  flags[i] = (v(i) <= lower_bounds[i]);
      }



      template <int dim>
      void
      DiscretizedField<dim>::
      at_upper_bounds (const Vector<double> &v,
		       std::vector<bool>    &flags) const
      {
	Assert (v.size() == dof_handlers->parameter.n_dofs(), ExcInternalError());
	Assert (v.size() == flags.size(), ExcInternalError());
	Assert (lower_bounds.size() == dof_handlers->parameter.n_dofs(), ExcInternalError());
	Assert (upper_bounds.size() == dof_handlers->parameter.n_dofs(), ExcInternalError());

	for (unsigned int i=0; i<v.size(); ++i)
	  flags[i] = (v(i) >= upper_bounds[i]);
      }



      template <int dim>
      void
      DiscretizedField<dim>::
      recompute_bounds ()
      {  
	lower_bounds.resize (dof_handlers->parameter.n_dofs());
	upper_bounds.resize (dof_handlers->parameter.n_dofs());
	parameter_bounds->get_bounds (dof_handlers->parameter,
				      lower_bounds,
				      upper_bounds);
      }


    
      template <int dim>
      void
      DiscretizedField<dim>::
      set_to_mean_of_bounds (Vector<double> &v) const
      {  
	Assert (v.size() == dof_handlers->parameter.n_dofs(), ExcInternalError());
	Assert (v.size() == lower_bounds.size(), ExcInternalError());
	Assert (v.size() == upper_bounds.size(), ExcInternalError());

	for (unsigned int i=0; i<v.size(); ++i)
	  v(i) = (lower_bounds[i] + upper_bounds[i]) / 2;
      }
    
    
    }  
  
    namespace Field
    {
      template class Triangulations<deal_II_dimension>;
      template class FiniteElements<deal_II_dimension>;
      template class DoFHandlers<deal_II_dimension>;
      template class DiscretizedField<deal_II_dimension>;
    }
  
  }
}
