/* $Id: me_tomography.cc 3039 2006-10-23 18:54:17Z bangerth $ */


#include <base/logstream.h>
#include <base/utilities.h>
#include <libparest/parallel/control.h>
#include <libparest/top_level.h>
#include <libparest/utilities.h>

#include <me-tomography/me_slave.h>
#include <me-tomography/factories.h>

#include <fstream>
#if !defined(SPEC_WINDOWS)
#include <unistd.h>
#endif /* !SPEC_WINDOWS */
#include <errno.h>
#include <stdio.h>

#if defined(SPEC)
# include <cstdlib>
# include <cstring>
#endif

using namespace dealii;


DeclException2 (ExcCantGetOutputDir,
                std::string, int,
                << "Can't determine output directory from file <" << arg1
                << ">. Error code is " << arg2);

void report_error (const std::exception &e,
		   const std::string    &text,
		   const unsigned int    world_rank,
		   libparest::MessageLog::Client   &message_log)
{
  char hostname[1024];
#if defined(SPEC)
  std::strcpy (hostname, "dummy_host");
#else
  gethostname (&(hostname[0]), 1023);
#endif /* !SPEC */

  message_log << libparest::set_priority(0)
	      << std::endl << std::endl
	      << "----------------- Job "
	      << world_rank
	      << " on "
	      << hostname
	      << " -----------------"
	      << std::endl << std::flush;
  message_log << libparest::set_priority(0)
	      << "Exception on " << text << ": " << e.what() << std::endl
	      << "Aborting!" << std::endl
	      << "----------------------------------------------------"
	      << std::endl << std::flush;
}


static
std::string get_input_file (const int argc,
			    char    **argv)
{
  std::string input_file;

  if (argc == 2)
    input_file = argv[1];

  std::ifstream in (input_file.c_str());
  if ((argc != 2)
      ||
      !in)
    {
      std::cerr << "No parameter files specified, or parameter file does not "
		<< "exist." << std::endl;
      std::cerr << "Usage:\n    "
                << argv[0]
		<< " parameterfile" << std::endl;
      std::exit (1);
    }
  return input_file;
}



std::string get_output_directory (const std::string &input_file)
{


  const std::string command
    = ("cat " + input_file +
       " | grep 'Output directory' "
       " | sed 's/.*= *//'");



  errno = 0;
#if defined(SPEC)
  char output[512];
  int count = 0;
  std::strcpy(output, ".");
  count = std::strlen(output);
#else
  FILE *f = popen(command.c_str(), "r");
  AssertThrow (f != NULL, ExcInternalError());
  AssertThrow (errno == 0, ExcCantGetOutputDir(input_file, errno));

  char output[512];
  int count = fread (output, 1, 511, f);
  if (count != 0)
    if (output[count-1] == '\n')
      --count;
  output[count] = 0;
  pclose (f);
#endif /* !SPEC */

  if (count == 511)
    {
      std::cerr << "output path is too long!" << std::endl;
      std::abort ();
    }

  return output;
}




int do_job (const std::string                   &input_file,
	    libparest::ParallelControl::Control &me_world_control)
{
  const std::string
    number = Utilities::int_to_string(me_world_control.world_rank,
				      Utilities::needed_digits(me_world_control.n_world_processes));
  const std::string name   = std::string("main ") + number;
  libparest::MessageLog::Client main_message_log(*me_world_control.message_log_server, name);

  METomography::ME_Parameters<deal_II_dimension> parameters(me_world_control);

  try
    {
      ParameterHandler prm;
      parameters.declare_parameters(prm);
      prm.read_input (input_file);
      parameters.parse_parameters (prm);
    }
  catch (std::exception &e)
    {
      report_error (e, "reading inupt", me_world_control.world_rank,
		    main_message_log);
      return 1;
    }
  catch (...)
    {
      report_error (std::exception(), "reading inupt", me_world_control.world_rank,
		    main_message_log);
      return 1;
    };






  Assert (!me_world_control.is_message_log_process(), ExcInternalError());
  try
    {
      if (me_world_control.is_master_process())
	{
	  METomography::Slave::Factory<deal_II_dimension>
	    slave_factory (parameters);
	  METomography::Parameter::Factory<deal_II_dimension>
	    par_factory (parameters);
	  libparest::TopLevel::Master<deal_II_dimension>
	    me_server (*me_world_control.message_log_server,
		       me_world_control, parameters);

	  me_server.run (parameters, slave_factory, par_factory);
	}
      else if (!me_world_control.is_message_log_process())
	{
	  METomography::Slave::Factory<deal_II_dimension>
	    slave_factory (parameters);
	  libparest::TopLevel::Client<deal_II_dimension>
	    me_client (*me_world_control.message_log_server,
		       me_world_control, parameters);
	  me_client.run (slave_factory);
	}
      else
	AssertThrow (false, ExcInternalError());
    }
  catch (std::exception &e)
    {
      report_error (e, "running main loop", me_world_control.world_rank,
		    main_message_log);
      return 2;
    }
  catch (...)
    {
      report_error (std::exception(), "running main loop (unknown exception)",
		    me_world_control.world_rank, main_message_log);
      return 3;
    };

  main_message_log << libparest::set_priority(0)
		   << "Done! Closing down "
		   << (me_world_control.is_master_process() ? "master" : "slave")
		   << std::endl << std::flush;
  return 0;
}


int main (int argc, char **argv)
{


  if (true)
    {
      char hostname[1024];
#if defined(SPEC)
      std::strcpy (hostname, "dummy_host");
#else
      gethostname (&(hostname[0]), 1023);
#endif /* !SPEC */

      deal_II_exceptions::set_additional_assert_output (hostname);
    }
  METomography::MessageLog::ServerFactory::set_graphical_mode (false);










  libparest::ParallelControl::Control & me_world_control
    = libparest::ParallelControl::Control::instance();

  deallog.depth_console (0);

  me_world_control.initialize_mpi (argc, argv);


  const std::string input_file = get_input_file(argc,argv);
  METomography::MessageLog::ServerFactory::
    set_logfile_directory (get_output_directory(input_file));
  me_world_control.
    setup_message_log_objects (METomography::MessageLog::ServerFactory::instance());












  int ret_val;
  if (! me_world_control.is_message_log_process())
    ret_val = do_job (input_file, me_world_control);
  else
    {






      std::cout << "Done! Closing down message log object." << std::endl;
      ret_val = 0;
    };

  me_world_control.finalize ();
  return ret_val;
}
