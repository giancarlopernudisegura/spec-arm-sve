//----------------------------   field_discretization.h     ---------------------------
//    $Id: field_discretization.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2003, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   field_discretization.h     ---------------------------
#ifndef __parameter_estimation__parameters_field_discretization_h
#define __parameter_estimation__parameters_field_discretization_h
//----------------------------   field_discretization.h     ---------------------------


#include <base/quadrature.h>
#include <grid/tria.h>
#include <dofs/dof_constraints.h>
#include <fe/fe.h>

#include <libparest/grid_transfer.h>

namespace dealii
{
  class ParameterHandler;
}

namespace libparest
{
  using namespace dealii;


  namespace Parameter
  {
    namespace Field
    {
      namespace Bounds
      {
        template <int dim> class Base;
      }
    }
  }
}



namespace libparest
{

  namespace Parameter
  {
    namespace Field
    {

      template <int dim>
      class Triangulations : public Subscriptor
      {
	public:
	  Triangulations (const Triangulation<dim>      &old_parameter,
			  const GridTransfer::Base<dim> &mesh_refinement);
	
	  virtual ~Triangulations ();
    
	  Triangulation<dim> parameter;
      };



      template <int dim>
      class FiniteElements : public Subscriptor
      {
	public:
	  struct Parameters : public virtual Subscriptor 
	  {
	      std::string name;

	      static void declare_parameters (ParameterHandler &prm);
	    
	      void parse_parameters (ParameterHandler &prm);

	      void delete_parameters ();
	  };

	  FiniteElements (const Parameters &prm);

	  virtual ~FiniteElements ();
	
	  const FiniteElement<dim> &fe;
    
	  const Quadrature<dim>    &quadrature;

	  const Quadrature<dim-1>  &face_quadrature;
      };


      template <int dim>
      class DoFHandlers : public Subscriptor
      {
	public:
	  DoFHandlers (Triangulations<dim>       &triangulations,
		       const FiniteElements<dim> &fe);

	  virtual ~DoFHandlers ();

	  void reinitialize ();
	
	  DoFHandler<dim>      parameter;

	  ConstraintMatrix     parameter_constraints;

	  const SmartPointer<const FiniteElements<dim> > fe;

	  const SmartPointer<const Triangulations<dim> > triangulations;
      };




      template <int dim>
      class DiscretizedField : virtual public Subscriptor
      {
	public:
	  typedef Field::Triangulations<dim> Triangulations;
	  typedef Field::DoFHandlers<dim>    DoFHandlers;
	  typedef Field::FiniteElements<dim> FiniteElements;
    
    
	  DiscretizedField (Triangulations          *triangulation,
				       FiniteElements          *finite_elements,
				       const Bounds::Base<dim> &parameter_bounds);

	  virtual ~DiscretizedField ();
	
	  void refine_parameterization (const std::vector<bool> &refinement_indicators,
					const std::vector<bool> &coarsening_indicators);
	
	  void set_back_to_bounds (Vector<double> &parameters) const;

	  bool satisfies_bounds (const Vector<double> &parameters) const;
      
	  void at_lower_bounds (const Vector<double> &parameters,
				std::vector<bool>    &flags) const;
      
	  void at_upper_bounds (const Vector<double> &parameters,
				std::vector<bool>    &flags) const;

	  SmartPointer<Triangulations>   triangulations;

	  SmartPointer<FiniteElements>   finite_elements;
    
	  SmartPointer<DoFHandlers>      dof_handlers;

	protected:

	  void recompute_bounds ();

	  void set_to_mean_of_bounds (Vector<double> &v) const;
	
	private:
	  std::vector<double> lower_bounds;
	  std::vector<double> upper_bounds;

	  SmartPointer<const Bounds::Base<dim> > parameter_bounds;
      };
    
    } // namespace Field
  }
 
}



//----------------------------   field_discretization.h     ---------------------------
// end of #ifndef __parameter_estimation__parameters_field_discretization_h
#endif
//----------------------------   field_discretization.h     ---------------------------
