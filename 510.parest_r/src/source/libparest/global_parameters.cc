/* $Id: global_parameters.cc 2976 2006-08-09 17:32:36Z bangerth $ */

#include <libparest/global_parameters.h>
#include <base/data_out_base.h>
#include <base/parameter_handler.h>

namespace libparest
{

  template <int dim>
  GlobalParameters<dim>::
  GlobalParameters (const ParallelControl::Control &me_world_control)
		  :
		  me_world_control (me_world_control),
		  output_directory ("/this/path/should/not/exist/"),
		  output_format ("gnuplot"),
		  n_experiments (1)
  {}



  template <int dim>
  void
  GlobalParameters<dim>::declare_parameters (ParameterHandler &prm)
  {
    prm.enter_subsection ("Global options");
    if (true)
      {
	prm.declare_entry ("Output directory", "data",
			   Patterns::Anything(),
			   "The name of the directory to which output is going to be written.");
	prm.declare_entry ("Output format", "gnuplot",
			   Patterns::Selection(DataOutInterface<dim>::
					       get_output_format_names()),
			   "The format for graphical output.");
	prm.declare_entry ("Number of experiments", "1",
			   Patterns::Integer(),
			   "The overall number of independent experiments.");
      };
    prm.leave_subsection ();
  }



  template <int dim>
  void
  GlobalParameters<dim>::parse_parameters (ParameterHandler &prm)
  {
    prm.enter_subsection ("Global options");
    if (true)
      {
	output_directory = prm.get("Output directory");
	if (output_directory[output_directory.size()-1] != '/')
	  output_directory += '/';
	output_format = prm.get("Output format");
	n_experiments = prm.get_integer ("Number of experiments");

	AssertThrow (n_experiments > 0, ExcInternalError());
      };
    prm.leave_subsection ();
  }



  template <int dim>
  void
  GlobalParameters<dim>::delete_parameters () 
  {
    output_directory = "/this/path/should/not/exist/";
    output_format    = "gnuplot";
    n_experiments    = 1;
  }




  template class GlobalParameters<deal_II_dimension>;
}
