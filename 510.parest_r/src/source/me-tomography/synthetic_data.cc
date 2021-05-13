#include <me-tomography/synthetic_data.h>
#include <me-tomography/forward.h>
#include <base/parameter_handler.h>
#include <dofs/dof_renumbering.h>

#include <libparest/slave/stationary/boundary_values.h>

#include <complex>


namespace METomography
{
  using namespace libparest::Slave::Stationary;
  
  template <int dim>
  const ProblemDescription SyntheticData<dim>::problem_description;

  


  template <int dim>
  SyntheticData<dim>::Parameters::Parameters ()
                  :
                  SyntheticDataBase<dim>::Parameters (),
                  unknown_source_amplitude (0),
                  unknown_source_phase (0)
  {}



  template <int dim>
  void
  SyntheticData<dim>::Parameters::
  declare_parameters (ParameterHandler &prm)
  {
    SyntheticDataBase<dim>::Parameters::declare_parameters (prm);
    prm.enter_subsection ("Synthetic data");
    {
      prm.declare_entry ("Unknown source amplitude", "1",
                         Patterns::Double(0),
			 "A multiplication factor for the computed values of "
			 "synthetic measurements. This can be used to test referenced "
			 "measurement schemes, in analogy to the "
			 "'Experiment description|Measurement representation|"
			 "Experimental scaling factor' parameter.");
      prm.declare_entry ("Unknown source phase", "0",
                         Patterns::Double(0, 360),
			 "The corresponding phase for the 'Unknown source amplitude' value.");
    }
    prm.leave_subsection ();
  }



  template <int dim>
  void
  SyntheticData<dim>::Parameters::
  parse_parameters (ParameterHandler &prm)
  {
    SyntheticDataBase<dim>::Parameters::parse_parameters (prm);
    prm.enter_subsection ("Synthetic data");
    {
      unknown_source_amplitude = prm.get_double ("Unknown source amplitude");
      unknown_source_phase     = prm.get_double ("Unknown source phase");      
    }
    prm.leave_subsection ();
  }



  template <int dim>
  void
  SyntheticData<dim>::Parameters::
  delete_parameters ()
  {
    SyntheticDataBase<dim>::Parameters::delete_parameters ();

    unknown_source_amplitude = 0;
    unknown_source_phase     = 0;
  }
  

  

  



  template <int dim>
  SyntheticData<dim>::SyntheticData (const Parameters   &parameters,
                                     const TomographyParameters<dim> &global_parameters,
				     const ExperimentDescription<dim> &experiment_description,
                                     const std::string  &fe_state,
                                     const unsigned int  experiment_no)
		  :
		  SyntheticDataBase<dim> (parameters, fe_state,
					  experiment_no, problem_description),
                  parameters (&parameters),
		  experiment_description (&experiment_description),
                  coefficient (global_parameters.coefficient)
  {}


  
  template <int dim>
  void
  SyntheticData<dim>::
  setup_and_solve_system (const ConstraintMatrix &constraints)
  {
    ForwardSolver::solve_forward_problem (*this->dof_handler,
                                          constraints,
                                          *this->quadrature,
                                          *this->face_quadrature,
                                          std::polar (parameters->unknown_source_amplitude,
                                                      parameters->unknown_source_phase *
                                                      2*3.14159265359 / 360),
                                          ZeroFunction<dim>(4),
                                          experiment_description->get_state_boundary_values(),
                                          *coefficient,
                                          this->measurement);
  }



  template <int dim>
  void
  SyntheticData<dim>::renumber_dofs () 
  {
    DoFRenumbering::Cuthill_McKee (*this->dof_handler);
				     
				     
    DoFRenumbering::component_wise (*this->dof_handler);
  }



  template class SyntheticData<deal_II_dimension>;
}
