/* $Id: me_parameters.cc 3015 2006-09-04 19:52:03Z bangerth $ */


#include <grid/tria_boundary_lib.h>
#include <grid/grid_generator.h>
#include <base/parameter_handler.h>
#include <base/function.h>
#include <me-tomography/me_parameters.h>
#include <me-tomography/me_slave.h>
#include <me-tomography/material_properties.h>
#include <me-tomography/geometry.h>
#include <me-tomography/targets.h>
#include <libparest/parameter/bounds.h>
#include <libparest/utilities.h>

#include <map>
#include <fstream>


namespace METomography
{

/* ---------------------- TomographyParameters ------------------ */


  template <int dim>
  TomographyParameters<dim>::
  TomographyParameters (const Control &me_world_control)
		  :
		  libparest::GlobalParameters<dim> (me_world_control),
                  coarse_grid (0),
                  coefficient (0)
  {}



  template <int dim>
  TomographyParameters<dim>::~TomographyParameters ()
  {
    delete_parameters ();
  }



  template <int dim>
  void TomographyParameters<dim>::delete_parameters () 
  {
    libparest::delete_ptr (coarse_grid);

    coefficient = 0;
    initial_mesh = Geometry::default_geometry_name<dim> ();

    libparest::GlobalParameters<dim>::delete_parameters ();
  }



  template <int dim>
  void TomographyParameters<dim>::declare_parameters (ParameterHandler &prm) 
  {
    prm.enter_subsection ("Global options");
    {
      prm.declare_entry ("Coarse mesh", Geometry::default_geometry_name<dim> (),
			 Patterns::Anything(),
			 "A name that describes the geometry to be used.");
      prm.declare_entry ("Data", Targets::default_target_name<dim>(),
			 Patterns::Selection (Targets::target_names<dim>()),
			 "The name of a target description. Target descriptions are "
			 "used when a) computing synthetic data, and b) to compute the "
			 "error between the true value and a reconstruction.");
    }
    prm.leave_subsection ();

    libparest::GlobalParameters<dim>::declare_parameters (prm);
  }



  template <int dim>
  void TomographyParameters<dim>::parse_parameters (ParameterHandler &prm)
  {
    prm.enter_subsection ("Global options");
    {
      const Targets::TargetBase<dim> &target
        = Targets::target_descriptor<dim> (prm.get ("Data"));
      coefficient     = &target.get_q ();
      
				       
				       
      coarse_grid
        = new Triangulation<dim>(Triangulation<dim>::smoothing_on_refinement);
      Geometry::make_coarse_grid (prm.get("Coarse mesh"),
                                  *coarse_grid);
    }
    prm.leave_subsection ();

    libparest::GlobalParameters<dim>::parse_parameters (prm);
  }

  
/* ---------------------- ME_Parameters ------------------ */


  template <int dim>
  ME_Parameters<dim>::ME_Parameters (const Control     &me_world_control)
		  :
		  TomographyParameters<dim> (me_world_control)
  {}



  template <int dim>
  ME_Parameters<dim>::~ME_Parameters ()
  {}



  template <int dim>
  void
  ME_Parameters<dim>::declare_parameters (ParameterHandler &prm)
  {
    TomographyParameters<dim>::declare_parameters (prm);
    libparest::Master::NewtonMethod<dim>::Parameters::declare_parameters (prm);

    ExperimentDescription<dim>::Parameters::declare_parameters (prm);
    MeasurementRepresentation<dim>::Parameters::declare_parameters (prm);
    
    prm.enter_subsection ("Discretization");
    {
      Slave::Slave<dim>::Parameters::declare_parameters (prm);
      ScalarField<dim>::Parameters::declare_parameters (prm);
    }
    prm.leave_subsection ();
  }



  template <int dim>
  void
  ME_Parameters<dim>::parse_parameters (ParameterHandler &prm)
  {
    TomographyParameters<dim>::parse_parameters (prm);
    libparest::Master::NewtonMethod<dim>::Parameters::parse_parameters (prm);

    ExperimentDescription<dim>::Parameters::parse_parameters (prm);
    MeasurementRepresentation<dim>::Parameters::parse_parameters (prm);

    prm.enter_subsection ("Discretization");
    {
      Slave::Slave<dim>::Parameters::parse_parameters (prm);
      ScalarField<dim>::Parameters::parse_parameters (prm);
    }
    prm.leave_subsection ();

				     
				     
				     
				     
				     
				     
				     
				     
    std::ofstream out ((this->output_directory + "/me.prm").c_str());
    prm.print_parameters (out, ParameterHandler::Text);
  }




  template <int dim>
  void
  ME_Parameters<dim>::delete_parameters ()
  {
    TomographyParameters<dim>::delete_parameters ();
    MeasurementRepresentation<dim>::Parameters::delete_parameters ();
    ExperimentDescription<dim>::Parameters::delete_parameters ();
    Slave::Slave<dim>::Parameters::delete_parameters ();
    libparest::Master::NewtonMethod<dim>::Parameters::delete_parameters ();
    ScalarField<dim>::Parameters::delete_parameters ();
  }




  template class TomographyParameters<deal_II_dimension>;
  template class ME_Parameters<deal_II_dimension>;
}
