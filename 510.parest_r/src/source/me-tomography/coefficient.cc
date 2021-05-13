/* $Id: coefficient.cc 3806 2009-05-13 12:44:14Z bangerth $ */

#include <me-tomography/coefficient.h>
#include <me-tomography/geometry.h>

#include <libparest/utilities.h>

#include <base/parameter_handler.h>


namespace METomography
{
  template <int dim>
  ScalarField<dim>::Parameters::Parameters ()
		  :
		  measurement_refinements ("")
  {}



  template <int dim>
  void
  ScalarField<dim>::Parameters::declare_parameters (ParameterHandler &prm)
  {
    BaseClass::Parameters::declare_parameters (prm);

    prm.enter_subsection ("Distributed parameter field");
    prm.declare_entry ("Refinements on measurement boundary", "",
		       Patterns::Anything (),
		       "A sequence of characters 'g' and 'm', which are interpreted "
		       "from left to right. A 'g' indicates global refinement, an 'm' "
		       "indicates refinement towards the measurement part of the boundary.");
    prm.declare_entry ("Lower bound", "0",
		       Patterns::Anything(),
		       "The lower bound for the dye concentration. Should be bigger "
		       "than zero to make physical sense.");
    prm.declare_entry ("Upper bound", "2.5",
		       Patterns::Anything(),
		       "The upper bound for the dye concentration. Typical values for "
		       "the upper bound are between 0.1 and 2.");
    prm.leave_subsection ();
  }



  template <int dim>
  void
  ScalarField<dim>::Parameters::parse_parameters (ParameterHandler &prm)
  {
    BaseClass::Parameters::parse_parameters (prm);

    prm.enter_subsection ("Distributed parameter field");
    measurement_refinements = prm.get ("Refinements on measurement boundary");

    libparest::delete_ptr (parameter_bounds);
    parameter_bounds = new libparest::Parameter::Field::Bounds::
		       SimpleScalarBounds<dim> (0.0, 2.5);
    
    prm.leave_subsection ();
  }



  template <int dim>
  void
  ScalarField<dim>::Parameters::delete_parameters ()
  {
    BaseClass::Parameters::delete_parameters ();
    measurement_refinements = "";
    libparest::delete_ptr (parameter_bounds);
  }
  
  
  

  
  template <int dim>
  ScalarField<dim>::
  ScalarField (const Parameters                       &parameters,
	       const libparest::GlobalParameters<dim> &global_parameters,
	       const ParameterAssociation              parameter_association,
	       const Triangulation<dim>               &coarse_grid,
	       const Function<dim>                    &exact_coefficient)
		  :
		  BaseClass (parameters, global_parameters, parameter_association,
			     coarse_grid,
							      
							      
							      
							      
							      
							      
							      
			     GridTransfer::InitialMeshRefinement<dim>
			     (parameters.initial_refinement,
			      parameters.measurement_refinements),
			     *parameters.parameter_bounds,
			     exact_coefficient)
  {}



  template <int dim>
  void
  ScalarField<dim>::
  preset_initial_values (Vector<double> &present_iterate) const
  {
    present_iterate.reinit (this->n_dofs());
    Assert (present_iterate.size() == this->dof_handlers->parameter.n_dofs(),
	    ExcInternalError());

				     
				     
				     
				     
				     
				     
				     
    present_iterate = 0;
    this->set_back_to_bounds (present_iterate);

				     
				     
				     
				     
				     
				     
    this->dof_handlers->parameter_constraints.distribute (present_iterate);
  }
  
  
  template class ScalarField<deal_II_dimension>;
}
