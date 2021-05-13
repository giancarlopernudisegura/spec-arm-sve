/* $Id: state_discretization.cc 3709 2008-09-04 02:59:34Z bangerth $ */


#include <libparest/slave/stationary/state_discretization.h>
#include <libparest/grid_transfer.h>
#include <libparest/utilities.h>

#include <base/thread_management.h>
#include <lac/block_vector.h>
#include <grid/grid_refinement.h>
#include <dofs/dof_tools.h>
#include <dofs/dof_renumbering.h>
#include <numerics/solution_transfer.h>

#include <functional>
#include <algorithm>

namespace libparest
{
  namespace Slave
  {

    namespace Stationary
    {
      namespace Discretization
      {
/* ------------------- Discretization::Triangulations ---------------- */

	template <int dim>
	Triangulations<dim>::
	Triangulations (const Triangulation<dim>    &old_global,
			const GridTransfer::Base<dim> &mesh_refinement)
	{
	  global.copy_triangulation (old_global);
	  mesh_refinement.refine_grid (global);
	}



	template <int dim>
	Triangulations<dim>::~Triangulations () 
	{}


/* ------------------- Discretization::FiniteElements ---------------- */

	template <int dim>
	FiniteElements<dim>::FiniteElements (const ProblemDescription &problem_description,
					     const std::string        &fe_state,
					     const std::string        &fe_parameter)
			:
			global (FEHelper<dim>::get_fe(fe_state,
						      problem_description.n_primal_variables +
						      problem_description.n_primal_variables,
						      fe_parameter,
						      problem_description.n_parameter_variables)),
			state     (FEHelper<dim>::get_fe(fe_state,
							 problem_description.n_primal_variables)),
			parameter (FEHelper<dim>::get_fe(fe_parameter,
							 problem_description.n_parameter_variables)),
			quadrature (FEHelper<dim>::get_quadrature (fe_state)),
			face_quadrature (dim != 1 ?
					 FEHelper<dim>::get_quadrature_face (fe_state) :
					 *static_cast<const Quadrature<dim-1>*>(0))
	{}



/* ------------------- Discretization::DoFHandlers ---------------- */


	template <int dim>
	DoFHandlers<dim>::
	DoFHandlers (const ProblemDescription      &problem_description,
		     Triangulations<dim>           &triangulations,
		     const FiniteElements<dim>     &fe,
		     const ParameterDiscretization &pd,
		     const bool                     renumber_dofs_CMK,
		     const Table<2,bool>           &mask)
			:
			global (triangulations.global),
			parameter_discretization (&pd),
			problem_description (problem_description),
			fe (&fe),
			renumber_dofs_CMK (renumber_dofs_CMK),
			coupling_mask (fe.global.n_components(),
				       fe.global.n_components())
	{
	  const unsigned int n_components = fe.global.n_components();
	  
					   
					   
					   
	  if (mask.size() != TableIndices<2>())
	    {
	      Assert (mask.n_rows() == n_components, ExcInternalError());
	      Assert (mask.n_cols() == n_components, ExcInternalError());

	      coupling_mask = mask;
	    }
	  else
	    {
					       
					       
					       
					       
					       
					       
	      for (unsigned int i=0; i<n_components; ++i)
		for (unsigned int j=0; j<n_components; ++j)
		  if ((problem_description.is_primal_variable(i) &&
		       problem_description.is_primal_variable(j) &&
		       (i == j))
		      ||
		      (problem_description.is_primal_variable(i) &&
		       problem_description.is_dual_variable(j))
		      ||
		      (problem_description.is_dual_variable(i) &&
		       problem_description.is_primal_variable(j))
		      ||
		      (problem_description.is_dual_variable(i) &&
		       problem_description.is_parameter_variable(j))
		      ||
		      (problem_description.is_parameter_variable(i) &&
		       problem_description.is_dual_variable(j))
		      ||
		      (problem_description.is_parameter_variable(i) &&
		       problem_description.is_parameter_variable(j)))
		    coupling_mask[i][j] = true;	      
	    }
	  
	      
	  
	  reinitialize ();
	}



	template <int dim>
	DoFHandlers<dim>::~DoFHandlers () 
	{}



	template <int dim>
	void
	DoFHandlers<dim>::
	reinitialize ()
	{
					   
					   
	  is_parameter_dof.clear ();
	  constraints.clear ();
	  block_sizes.clear ();
	  true_block_sizes.clear ();
  
					   
	  global.distribute_dofs (fe->global);

					   
					   
	  if (renumber_dofs_CMK)
	    DoFRenumbering::Cuthill_McKee (global);

					   
					   
					   
	  DoFRenumbering::component_wise (global);

					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
	  Threads::ThreadGroup<> threads;
  
	  Threads::Thread<> ptgm_thread
	    = Threads::spawn (parameter_to_global_map,
			      &InterGridMap<DoFHandler<dim> >::make_mapping)
	    (parameter_discretization->parameter, global);

					   
	  const unsigned int n_components = global.get_fe().n_components();
	  std::vector<unsigned int> dofs_per_component (n_components);
	  void (*xp1) (const DoFHandler<dim> &, std::vector<unsigned int> &,
		       std::vector<unsigned int>)
	    = &DoFTools::template count_dofs_per_component<dim>;
	  std::vector<unsigned int> dummy;
	  Threads::Thread<> dof_count_thread
	    = Threads::spawn (xp1)(global, dofs_per_component, dummy);
  
	  threads += Threads::spawn (global_to_parameter_map,
				     &InterGridMap<DoFHandler<dim> >::make_mapping)
		     (global, parameter_discretization->parameter);
  
					   
	  is_parameter_dof.resize (0);
	  is_parameter_dof.resize (global.n_dofs(), false);
	  const std::vector<bool> component_select_parameter
	    = problem_description.get_parameter_variables ();

	  void (*xp2) (const DoFHandler<dim> &, const std::vector<bool> &,
		       std::vector<bool> &, const bool)
	    = &DoFTools::template extract_dofs<dim>;
	  threads += Threads::spawn (xp2)(global, component_select_parameter,
					  is_parameter_dof, false);

					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
	  ptgm_thread.join ();
	  dof_count_thread.join ();

					   
					   
					   
	  const unsigned int
	    n_primal_variables    = problem_description.n_primal_variables,
	    n_dual_variables      = problem_description.n_dual_variables,
	    n_parameter_variables = problem_description.n_parameter_variables;
  
	  block_sizes.resize (3);
	  unsigned int component = 0;
	  for (; component<n_primal_variables; ++component)
	    block_sizes[0] += dofs_per_component[component];
	  for (; component<n_primal_variables+n_dual_variables; ++component)
	    block_sizes[1] += dofs_per_component[component];
	  for (; component<problem_description.n_variables; ++component)
	    block_sizes[2] += dofs_per_component[component];
	  Assert (block_sizes[0] == block_sizes[1], ExcInternalError());
  
					   
					   
					   
					   
					   
					   
					   
	  BlockCompressedSetSparsityPattern csp;
	  csp.reinit (3U,3U);
	  for (unsigned int i=0; i<3; ++i)
	    for (unsigned int j=0; j<3; ++j)
	      csp.block(i,j).reinit (block_sizes[i], block_sizes[j]);
	  csp.collect_sizes ();
  
					   
					   
					   
					   
					   
	  std::vector<std::vector<bool> >
	    cellwise_sparsity(n_components, std::vector<bool>(n_components, false));
	  for (unsigned int i=0; i<n_components; ++i)
	    for (unsigned int j=0; j<n_components; ++j)
	      cellwise_sparsity[i][j] = coupling_mask[i][j];

	  void (*msp) (const DoFHandler<dim> &,
		       const std::vector<std::vector<bool> > &,
		       BlockCompressedSetSparsityPattern &)
	    = &DoFTools::template make_sparsity_pattern<DoFHandler<dim>,BlockCompressedSetSparsityPattern>;
	  threads += Threads::spawn (msp)(global, cellwise_sparsity, csp);

					   
	  constraints.clear ();
	  std::vector<std::map<unsigned int, float> > intergrid_constraint_representation;

	  void (* const p2) (const DoFHandler<dim> &, ConstraintMatrix &)
	    = &DoFTools::make_hanging_node_constraints;
	  threads += Threads::spawn (p2)(global, constraints);
					   
	  Assert (n_parameter_variables == 1, ExcInternalError());
	  void (*xp3) (const DoFHandler<dim>              &,
		       const unsigned int                  ,
		       const DoFHandler<dim>              &,
		       const unsigned int                  ,
		       const InterGridMap<DoFHandler<dim> > &,
		       std::vector<std::map<unsigned int, float> > &)
	    = &DoFTools::template compute_intergrid_transfer_representation<dim>;
	  threads += Threads::spawn (xp3)(parameter_discretization->parameter, 0,
					  global, n_primal_variables+n_dual_variables,
					  parameter_to_global_map,
					  intergrid_constraint_representation);

					   
					   
					   
					   
					   
					   
	  threads.join_all ();
	  constraints.close ();
	  constraints.condense (csp);
	  sparsity.copy_from (csp);
	  csp.reinit (0,0);

	  Assert (block_sizes[0] == block_sizes[1], ExcInternalError());

					   
					   
	  true_block_sizes = block_sizes;
	  true_block_sizes[2] = parameter_discretization->parameter.n_dofs();

					   
					   
					   
					   
					   
					   
					   
	  for (unsigned int i=0; i<block_sizes[0]+block_sizes[1]; ++i)
	    Assert (intergrid_constraint_representation[i].size() == 0,
		    ExcInternalError());

	  const unsigned int n_parameter_dofs
	    = parameter_discretization->parameter.n_dofs();
	  transfer_sparsity.copy_from (block_sizes[2],
				       n_parameter_dofs,
				       intergrid_constraint_representation.begin()
				       + block_sizes[0] + block_sizes[1],
				       intergrid_constraint_representation.end());
	  transfer_matrix.reinit (transfer_sparsity);
	  transfer_matrix.copy_from (intergrid_constraint_representation.begin()
				     + block_sizes[0] + block_sizes[1],
				     intergrid_constraint_representation.end());
	}

  

	template <int dim>
	unsigned int
	DoFHandlers<dim>::max_intergrid_level_difference () const
	{
	  unsigned int max_depth = 0;
  
	  typename DoFHandler<dim>::active_cell_iterator
	    coarse_grid_cell = parameter_discretization->parameter.begin_active(),
	    coarse_grid_end  = parameter_discretization->parameter.end();
	  for (; coarse_grid_cell!=coarse_grid_end; ++coarse_grid_cell)
	    {
	      const typename DoFHandler<dim>::cell_iterator
		global_cell = parameter_to_global_map[coarse_grid_cell];
	      max_depth = std::max (max_depth,
				    global_cell->max_refinement_depth());
	    };
  
	  return max_depth;
	}



	template <int dim>
	void
	DoFHandlers<dim>::
	expand_parameter (const Vector<double> &coarse_parameter,
			  Vector<double>       &fine_solution) const
	{
	  transfer_matrix.vmult (fine_solution, coarse_parameter);
	}



	template <int dim>
	void
	DoFHandlers<dim>::
	interpolate_parameter (const BlockVector<double> &fine_solution,
			       Vector<double>            &coarse_parameter) const
	{
	  Assert (coarse_parameter.size() ==
		  parameter_discretization->parameter.n_dofs(),
		  ExcInternalError());

	  const FiniteElement<dim> &fe_global = global.get_fe(),
				   &fe_parm   = parameter_discretization->parameter.get_fe();
  
	  const unsigned int dofs_per_cell_global = fe_global.dofs_per_cell,
			     dofs_per_cell_parm   = fe_parm.dofs_per_cell;
  
	  Vector<double> local_dof_values_global (dofs_per_cell_global);
	  Vector<double> local_dof_values_parm (dofs_per_cell_parm);
  
	  typename DoFHandler<dim>::active_cell_iterator
	    coarse_grid_cell = parameter_discretization->parameter.begin_active(),
	    coarse_grid_end  = parameter_discretization->parameter.end();

	  const unsigned parameter_variable
	    = (problem_description.n_primal_variables +
	       problem_description.n_dual_variables);
					   
					   
					   
					   
	  Assert (parameter_variable == problem_description.n_variables-1,
		  ExcInternalError());
      
	  for (; coarse_grid_cell!=coarse_grid_end; ++coarse_grid_cell)
	    {
	      parameter_to_global_map[coarse_grid_cell]
		->get_interpolated_dof_values (fine_solution,
					       local_dof_values_global);
	      for (unsigned int i=0; i<dofs_per_cell_global; ++i)
		if (fe_global.system_to_component_index(i).first ==
		    parameter_variable)
		  local_dof_values_parm(fe_global.system_to_component_index(i).second) =
		    local_dof_values_global(i);

	      coarse_grid_cell->set_dof_values (local_dof_values_parm,
						coarse_parameter);
	    };
	}



	template <int dim>
	void
	DoFHandlers<dim>::
	condense_parameter (const Vector<double> &fine_rhs,
			    Vector<double>       &coarse_rhs) const
	{
	  transfer_matrix.Tvmult (coarse_rhs, fine_rhs);
	}



/* ------------------- Base::PerStepStatistics ---------------- */


	template <int dim>
	Base<dim>::PerStepStatistics::PerStepStatistics ()
			:
			n_cells (0),
			primal_dofs (0),
			global_dofs (0)
	{}



	template <int dim>
	std::list<std::string>
	Base<dim>::PerStepStatistics::
	declare_entries () const
	{
	  std::list<std::string> entries;
	  entries.push_back ("Number of cells");
	  entries.push_back ("Number of primal dofs");
	  entries.push_back ("Number of global dofs");
	  return entries;
	}



	template <int dim>
	std::list<double>
	Base<dim>::PerStepStatistics::
	get_values () const
	{
	  std::list<double> values;
	  values.push_back (n_cells);
	  values.push_back (primal_dofs);
	  values.push_back (global_dofs);
	  return values;
	}


/* ------------------- Base ---------------- */
    
	template <int dim>
	Base<dim>::Base ()
			:
			triangulations (0),
			finite_elements (0),
			dof_handlers (0)
	{}



	template <int dim>
	Base<dim>::~Base ()
	{
	  delete_ptr (dof_handlers);
	  delete_ptr (finite_elements);
	  delete_ptr (triangulations);
	}
    


	template <int dim>
	void
	Base<dim>::
	fill_statistics (PerStepStatistics &statistics) const
	{
	  statistics.n_cells     = triangulations->global.n_active_cells();
	  statistics.global_dofs = dof_handlers->global.n_dofs();
	  statistics.primal_dofs = dof_handlers->block_sizes[0];
	}



	template <int dim>
	void
	Base<dim>::
	do_refine_discretization (const Vector<float>            &error_indicators,
				  const std::pair<double,double> &refinement_fraction,
				  BlockVector<double>            &vector_for_conversion,
				  const unsigned int              max_n_cells)
	{
	  Assert (error_indicators.size() ==
		  this->triangulations->global.n_active_cells(),
		  ExcInternalError());
	  Assert (vector_for_conversion.size() ==
		  this->dof_handlers->global.n_dofs(),
		  ExcInternalError());

					   
					   
					   
					   
	  Vector<double> tmp1 (this->dof_handlers->global.n_dofs());
	  tmp1 = vector_for_conversion;

					   
					   
					   
	  SolutionTransfer<dim> soltrans (this->dof_handlers->global);

	  GridRefinement::
	    refine_and_coarsen_fixed_fraction (this->triangulations->global,
					       error_indicators,
					       refinement_fraction.first,
					       refinement_fraction.second,
					       max_n_cells);
	  
					   
					   
					   
					   
					   
					   
					   
					   
					   
	  InterGridMap<Triangulation<dim> > tmp_parameter_to_global_map;
	  tmp_parameter_to_global_map.make_mapping (this->dof_handlers->parameter_discretization
						    ->triangulations->parameter,
						    this->triangulations->global);
	  for (typename Triangulation<dim>::active_cell_iterator parameter_cell
		 = (this->dof_handlers->parameter_discretization->triangulations
		    ->parameter.begin_active());
	       parameter_cell != (this->dof_handlers->parameter_discretization
				  ->triangulations->parameter.end());
	       ++parameter_cell)
	    {
	      const typename Triangulation<dim>::cell_iterator
		global_cell = tmp_parameter_to_global_map[parameter_cell];

	      if (global_cell->active())
		{
		  global_cell->clear_coarsen_flag ();
		  global_cell->set_refine_flag ();
		}
	      else
		{
						   
						   
						   
						   
		  for (unsigned int c=0; c<global_cell->n_children(); ++c)
		    if (global_cell->child(c)->active())
		      global_cell->child(c)->clear_coarsen_flag ();
		};
	    };

					   
					   
	  this->triangulations->global.prepare_coarsening_and_refinement();
	  soltrans.prepare_for_coarsening_and_refinement(tmp1);
	  this->triangulations->global.execute_coarsening_and_refinement ();
  
					   
					   
	  this->dof_handlers->reinitialize ();

					   
	  Vector<double> tmp2 (this->dof_handlers->global.n_dofs());
	  soltrans.interpolate (tmp1, tmp2);

					   
					   
	  this->dof_handlers->constraints.distribute (tmp2);
  
	  vector_for_conversion.reinit (this->dof_handlers->block_sizes);
	  for (unsigned int i=0; i<this->dof_handlers->global.n_dofs(); ++i)
	    vector_for_conversion(i) = tmp2(i);
	}
	
      }
    }




    namespace Stationary
    {
      template
      class Discretization::Triangulations<deal_II_dimension>;

      template
      class Discretization::FiniteElements<deal_II_dimension>;

      template
      class Discretization::DoFHandlers<deal_II_dimension>;

      template
      class Discretization::Base<deal_II_dimension>;
    }
  }
}
