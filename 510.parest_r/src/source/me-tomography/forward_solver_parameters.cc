/* $Id: forward_solver_parameters.cc 3015 2006-09-04 19:52:03Z bangerth $ */
/* Author: Wolfgang Bangerth, University of Texas, 2003 */

#include <me-tomography/forward_solver_parameters.h>
#include <me-tomography/geometry.h>
#include <me-tomography/targets.h>
#include <base/data_out_base.h>


namespace METomography
{
  namespace ForwardSolver
  {
    template <int dim>
    void
    Parameters<dim>::declare_parameters (ParameterHandler &prm)
    {
      prm.enter_subsection ("Global options");
      {
        prm.declare_entry ("Output directory", "output/",
                           Patterns::Anything());
	prm.declare_entry ("Output format", "gnuplot",
			   Patterns::Selection(DataOutInterface<dim>::
					       get_output_format_names()));
        prm.declare_entry ("Evaluators", "output, surface output");
        prm.declare_entry ("Number of experiments", "1",
                           Patterns::Integer());
        prm.declare_entry ("Number of this experiment", "0",
                           Patterns::Integer());
        prm.declare_entry ("Data", Targets::default_target_name<dim>(),
                           Patterns::Selection (Targets::target_names<dim>()));
        prm.declare_entry ("Coarse mesh", Geometry::default_geometry_name<3>(),
                           Patterns::Anything());
        prm.declare_entry ("Initial refinement", "1",
                           Patterns::Integer ());
        prm.declare_entry ("Refinements on measurement boundary", "2",
                           Patterns::Integer ());
        prm.declare_entry ("Refinement criterion", "kelly",
                           Patterns::Selection ("kelly|global|kelly+weights"));
        prm.declare_entry ("Number of iterations", "3",
                           Patterns::Integer ());
      }
      prm.leave_subsection ();
      
      ExperimentDescription<dim>::Parameters::declare_parameters (prm);
    }



    template <int dim>
    void
    Parameters<dim>::parse_parameters (ParameterHandler &prm)
    {
      prm.enter_subsection ("Global options");
      {
        output_directory = prm.get ("Output directory");
	if (output_directory[output_directory.size()-1] != '/')
	  output_directory += '/';

	output_format        = prm.get ("Output format");
        evaluators           = prm.get ("Evaluators");

        n_experiments        = prm.get_integer ("Number of experiments");
	experiment_no        = prm.get_integer ("Number of this experiment");
        AssertThrow (experiment_no < n_experiments,
                     ExcIndexRange (experiment_no, 0, n_experiments));

        target               = prm.get ("Data");
        coarse_mesh          = prm.get ("Coarse mesh");

        initial_refinement   = prm.get_integer ("Initial refinement");
        refinement_criterion = prm.get ("Refinement criterion");
        n_measurement_refinements = prm.get_integer ("Refinements on measurement boundary");

        if (refinement_criterion == "kelly+weights")
          AssertThrow (coarse_mesh == "breast phantom",
                       ExcMessage ("Weighted Kelly only makes sense for the breast "
                                   "phantom geometry!"));
        
        n_steps              = prm.get_integer ("Number of iterations");
      }
      prm.leave_subsection ();

      ExperimentDescription<dim>::Parameters::parse_parameters (prm);
    }



    template <int dim>
    void
    Parameters<dim>::delete_parameters ()
    {
      output_directory          = "output/";
      output_format             = "gnuplot";
      evaluators                = "output, surface output";
      n_experiments             = 1;
      experiment_no             = 0;
      target                    = "single target";
      coarse_mesh               = Geometry::default_geometry_name<3>();
      initial_refinement        = 1;
      n_measurement_refinements = 2;
      n_steps                   = 3;
      
      ExperimentDescription<dim>::Parameters::delete_parameters ();
    }
    
  }
}


namespace METomography
{
  namespace ForwardSolver
  {
    template class Parameters<deal_II_dimension>;
  }
}
