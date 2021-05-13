//----------------------------   experiment_description.h     ---------------------------
//    $Id: experiment_description.h 3738 2008-12-14 22:49:40Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2008, 2009 by Wolfgang Bangerth
//
//----------------------------   experiment_description.h     ---------------------------
#ifndef __parameter_estimation__experiment_description_h
#define __parameter_estimation__experiment_description_h
//----------------------------   experiment_description.h     ---------------------------


#include "config.h"
#include "problem_description.h"
#include "me_parameters.h"

#include <base/smartpointer.h>
#include <grid/tria.h>

#include <libparest/slave/stationary/measurements.h>
#include <libparest/slave/stationary/synthetic_data.h>

namespace dealii
{
  class ParameterHandler;
  template <int> class Function;
}

namespace METomography
{
  template <int dim> class TomographyParameters;
  template <int dim> class ME_Parameters;
  template <int dim> class SyntheticData;
  

  template <int dim>
  class ExperimentDescription : public Subscriptor
  {
    public:
      struct Parameters
      {
	  Parameters ();

	  std::string forcing_mode;
	  
	  static void declare_parameters (ParameterHandler &prm);

	  void parse_parameters (ParameterHandler &prm);

	  void delete_parameters ();
      };

      ExperimentDescription (const Parameters   &parameters,
			     const unsigned int  experiment_no,
                             const unsigned int  n_experiments);

      ~ExperimentDescription ();

      const Function<dim> &
      get_state_boundary_values () const;

      const Function<dim> &
      get_global_boundary_values () const;
      
    private:
      SmartPointer<const Function<dim> > state_boundary_values;
    
      SmartPointer<const Function<dim> > global_boundary_values;    
      
      const unsigned int experiment_no;
      const unsigned int n_experiments;
  };


  
  template <int dim>
  class MeasurementRepresentation
  {
    public:

      class Parameters : public SyntheticData<dim>::Parameters
      {
	public:
	  std::string measurement_type;

          double experimental_scaling_factor;
          

	  Parameters ();
	  
	  static void declare_parameters (ParameterHandler &prm);

	  void parse_parameters (ParameterHandler &prm);

	  void delete_parameters ();	  
      };
      
      MeasurementRepresentation (const ME_Parameters<dim>         &global_parameters,
                                 const ExperimentDescription<dim> &experiment_description,
                                 const std::string                &fe_state,
                                 const unsigned int                experiment_number);


      ~MeasurementRepresentation ();

      void finalize ();

      void initialize_gauss_newton_step (const unsigned int step_no);
      
      void end_gauss_newton_step ();

      void write_solution () const;

      void reinitialize (const Triangulation<dim> &new_triangulation);

      libparest::Slave::Stationary::MeasurementGetter::Factories::Base<dim> *
      get_measurement_getter_factory () const;
      
    private:
      const SmartPointer<const Parameters> parameters;
      
      SmartPointer<SyntheticData<dim> > synthetic_data;

      SmartPointer<const Function<dim> > experimental_data;
  };



/* -------------------- inline and template functions -------------- */  

  template <int dim>
  inline
  const Function<dim> &
  ExperimentDescription<dim>::get_state_boundary_values () const
  {
    return *state_boundary_values;
  }



  template <int dim>
  inline
  const Function<dim> &
  ExperimentDescription<dim>::get_global_boundary_values () const
  {
    return *global_boundary_values;
  }
}


//----------------------------   experiment_description.h     ---------------------------
// end of #ifndef __parameter_estimation__experiment_description_h
#endif
//----------------------------   experiment_description.h     ---------------------------


