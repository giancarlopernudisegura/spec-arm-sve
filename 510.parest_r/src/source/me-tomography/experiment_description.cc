#include <me-tomography/experiment_description.h>
#include <me-tomography/synthetic_data.h>
#include <me-tomography/me_slave.h>
#include <me-tomography/boundary_sources.h>

#include <base/parameter_handler.h>
#include <base/function.h>
#include <libparest/slave/stationary/boundary_values.h>
#include <libparest/utilities.h>



namespace METomography
{


  template <int dim>
  ExperimentDescription<dim>::Parameters::Parameters ()
  {}



  template <int dim>
  void
  ExperimentDescription<dim>::Parameters::
  declare_parameters (ParameterHandler &prm)
  {
    prm.enter_subsection ("Experiment description");
    {
      prm.declare_entry ("Forcing mode", "point on surface",
			 Patterns::Anything(),
			 "A name for a function that describes the known right hand side "
			 "of the inverse problem. This includes both predefined functions "
			 "such as a gaussian, concentric circles, etc, as well as source "
			 "descriptions measured in actual experiments.");
    }
    prm.leave_subsection ();
  }



  template <int dim>
  void
  ExperimentDescription<dim>::Parameters::
  parse_parameters (ParameterHandler &prm)
  {
    prm.enter_subsection ("Experiment description");
    {
      forcing_mode = prm.get("Forcing mode");
    }
    prm.leave_subsection ();
  }



  template <int dim>
  void
  ExperimentDescription<dim>::Parameters::
  delete_parameters ()
  {
    forcing_mode = "point on surface";
  }






  template <int dim>
  ExperimentDescription<dim>::
  ExperimentDescription (const Parameters   &parameters,
			 const unsigned int  experiment_no,
			 const unsigned int  n_experiments)
		  :
		  state_boundary_values (0),
		  global_boundary_values (0),
		  experiment_no (experiment_no),
		  n_experiments (n_experiments)
  {
    state_boundary_values
      = BoundarySources::PlanarZ8::
      parse_forcing_function<dim> (parameters.forcing_mode,
				   experiment_no,
				   n_experiments);
      
    if (state_boundary_values == 0)
      state_boundary_values = BoundarySources::BreastPhantomGeometry::
			      parse_forcing_function<dim> (parameters.forcing_mode,
							   experiment_no,
							   n_experiments);
      
				     
    if (state_boundary_values == 0)
      {
	std::cerr << "Unknown boundary source name <"
		  << parameters.forcing_mode
		  << ">!" << std::endl;
	AssertThrow (false, ExcInternalError());
      }

  
				     
				     
				     
    global_boundary_values
      = new libparest::Slave::Stationary::BoundaryValues<dim> (*state_boundary_values,
							       ProblemDescription());
  }



  template <int dim>
  ExperimentDescription<dim>::~ExperimentDescription ()
  {
    libparest::delete_ptr (global_boundary_values);
    libparest::delete_ptr (state_boundary_values);
  }





  template <int dim>
  MeasurementRepresentation<dim>::Parameters::Parameters ()
		  :
		  measurement_type ("synthetic"),
		  experimental_scaling_factor (1)
  {}
  


  template <int dim>
  void
  MeasurementRepresentation<dim>::Parameters::
  declare_parameters (ParameterHandler &prm)
  {
    prm.enter_subsection ("Experiment description");
    {
      prm.enter_subsection ("Measurement representation");
      {
	prm.declare_entry ("Measurement type", "synthetic",
			   Patterns::Anything(),
			   "Whether measurements are to be obtained a) from synthetic data, "
			   "or b) from files that describe actual measurements.");
	prm.declare_entry ("Experimental scaling factor", "1",
			   Patterns::Double (),
			   "Since experiments have unknown optical transmission properties "
			   "of camera, lenses, etc, the measurements we get have an unknown "
			   "amplitude and are only known up to an unknown factor. This can "
			   "be dealt with using referenced misfit functions to scale this "
			   "unknown factor out, or by multiplying the data with a guessed "
			   "value of this factor. This parameter denotes this value. It "
			   "is only used for experimental data read in from file.");
        
	SyntheticData<dim>::Parameters::declare_parameters (prm);
      }
      prm.leave_subsection ();
    }
    prm.leave_subsection ();
  }



  template <int dim>
  void
  MeasurementRepresentation<dim>::Parameters::
  parse_parameters (ParameterHandler &prm)
  {
    prm.enter_subsection ("Experiment description");
    {
      prm.enter_subsection ("Measurement representation");
      {
	measurement_type =  prm.get ("Measurement type");
	experimental_scaling_factor
	  = prm.get_double ("Experimental scaling factor");
        
	SyntheticData<dim>::Parameters::parse_parameters (prm);
      }
      prm.leave_subsection ();
    }
    prm.leave_subsection ();
  }


  
  template <int dim>
  void
  MeasurementRepresentation<dim>::Parameters::
  delete_parameters ()
  {
    measurement_type = "synthetic";
    experimental_scaling_factor = 1;
    
    SyntheticData<dim>::Parameters::delete_parameters ();
  }
  


  template <int dim>
  MeasurementRepresentation<dim>::
  MeasurementRepresentation (const ME_Parameters<dim>         &global_parameters,
			     const ExperimentDescription<dim> &experiment_description,
			     const std::string                &fe_state,
			     const unsigned int                experiment_number)
		  :
		  parameters (&global_parameters),
		  synthetic_data (0),
		  experimental_data (0)
  {
    if (parameters->measurement_type == "synthetic")
      synthetic_data = new SyntheticData<dim>(global_parameters,
					      global_parameters,
					      experiment_description,
					      fe_state,
					      experiment_number);
    else if (parameters->measurement_type.find ("experimental") == 0)
      {
					 
	std::string file_base_name (parameters->measurement_type,
				    std::string ("experimental").size(),
				    std::string::npos);
	while ((file_base_name.size() > 0)
	       &&
	       (file_base_name[0] == ' '))
	  file_base_name.erase (0,1);

       

	experimental_data =
	  BoundarySources::PlanarZ8
	  ::create_experimental_function<dim>(file_base_name,
					      BoundarySources::fluorescence_components,
					      parameters->experimental_scaling_factor,
					      experiment_number,
					      global_parameters.n_experiments);
      }
    else if (parameters->measurement_type.find ("phantom: experimental") == 0)
      {
					 
	std::string file_base_name (parameters->measurement_type,
				    std::string ("phantom: experimental").size(),
				    std::string::npos);
	while ((file_base_name.size() > 0)
	       &&
	       (file_base_name[0] == ' '))
	  file_base_name.erase (0,1);

       

	experimental_data =
	  BoundarySources::BreastPhantomGeometry
	  ::create_experimental_function<dim>(file_base_name,
					      BoundarySources::fluorescence_components,
					      parameters->experimental_scaling_factor,
					      experiment_number,
					      global_parameters.n_experiments);
      }
    else
      AssertThrow (false,
		   ExcMessage((std::string("This measurement is not implemented: ")
			       +
			       parameters->measurement_type).c_str()));
  }
  


  template <int dim>
  MeasurementRepresentation<dim>::~MeasurementRepresentation ()
  {
				     
				     
    if (synthetic_data != 0)
      {
	libparest::delete_ptr (synthetic_data);
	Assert (experimental_data == 0, ExcInternalError());
      }
    else if (experimental_data != 0)
      {
	libparest::delete_ptr (experimental_data);
	Assert (synthetic_data == 0, ExcInternalError());
      }
    else
      {
	Assert (synthetic_data == 0, ExcInternalError());
	Assert (experimental_data == 0, ExcInternalError());
      }
  }



  template <int dim>
  void
  MeasurementRepresentation<dim>::finalize ()
  {      
				     
				     
    if (synthetic_data != 0)
      {
	libparest::delete_ptr (synthetic_data);
	Assert (experimental_data == 0, ExcInternalError());
      }
    else if (experimental_data != 0)
      {
	libparest::delete_ptr (experimental_data);
	Assert (synthetic_data == 0, ExcInternalError());
      }
    else
      {
	Assert (synthetic_data == 0, ExcInternalError());
	Assert (experimental_data == 0, ExcInternalError());
      }
  }
  


  template <int dim>
  void
  MeasurementRepresentation<dim>::
  initialize_gauss_newton_step (const unsigned int step_no)
  {
				     
				     
    if (synthetic_data != 0)
      synthetic_data->initialize_gauss_newton_step (step_no);
  }
  
  

  template <int dim>
  void
  MeasurementRepresentation<dim>::
  end_gauss_newton_step ()
  {
				     
				     
    if (synthetic_data != 0)
      synthetic_data->end_gauss_newton_step ();
  }



  template <int dim>
  void
  MeasurementRepresentation<dim>::write_solution () const
  {
				     
				     
    if (synthetic_data != 0)
      synthetic_data->write_solution ();
  }



  template <int dim>
  void
  MeasurementRepresentation<dim>::
  reinitialize (const Triangulation<dim> &new_triangulation)
  {
				     
				     
    if (synthetic_data != 0)
      synthetic_data->reinitialize (new_triangulation);
  }



  template <int dim>
  libparest::Slave::Stationary::MeasurementGetter::Factories::Base<dim> *
  MeasurementRepresentation<dim>::
  get_measurement_getter_factory () const
  {
    if (synthetic_data != 0)
      return
	new
	libparest::Slave::Stationary::MeasurementGetter::Factories::
	SyntheticData<dim> (*synthetic_data);
    
    else if (experimental_data != 0)
      return
	new
	libparest::Slave::Stationary::MeasurementGetter::Factories::
	MeasurementFunction<dim> (*experimental_data);

    else
      Assert (false, ExcNotImplemented());
    
    return 0;
  }


  

  template class ExperimentDescription<deal_II_dimension>;
  template class MeasurementRepresentation<deal_II_dimension>;
}
