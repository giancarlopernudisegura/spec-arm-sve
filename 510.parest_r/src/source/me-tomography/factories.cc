/* $Id: factories.cc 2973 2006-08-08 22:02:01Z bangerth $ */

#include <libparest/parameter/field.h>
#include <me-tomography/factories.h>
#include <me-tomography/me_slave.h>
#include <me-tomography/coefficient.h>

#include <fstream>



namespace METomography
{


  namespace Slave
  {    
    template <int dim>
    Factory<dim>::
    Factory (const libparest::GlobalParameters<dim> &parameters)
		    :
		    parameters (&(dynamic_cast<const ME_Parameters<dim> &>(parameters)))
    {}



    template <int dim>
    libparest::Slave::Base *
    Factory<dim>::
    create_local_slave (libparest::MessageLog::ServerBase &message_log_server,
			const unsigned int j,
			const unsigned int /*total*/) const
    {
      return new Slave<dim> (*parameters, *parameters,
			     message_log_server, j);
    }



    template <int dim>
    void
    Factory<dim>::
    initialize_graphical_output (const unsigned int  slave_no,
				 const unsigned int  /*total_slaves*/,
				 libparest::MessageLog::Client &message_log) const
    {
      Slave<dim>::declare_graphical_output_labels (message_log, slave_no);
    }
  }
  


  namespace Parameter
  {
    template <int dim>
    Factory<dim>::
    Factory (const libparest::GlobalParameters<dim> &parameters)
		    :
		    parameters (&(dynamic_cast<const ME_Parameters<dim> &>(parameters)))
    {}



    template <int dim>
    libparest::Parameter::Base *
    Factory<dim>::
    create () const
    {
      return 
	new ScalarField<dim> (*parameters, *parameters,
			      ScalarField<dim>::master,
			      *parameters->coarse_grid,
			      *parameters->coefficient);
    }
  }
  




  namespace MessageLog 
  {
    ServerFactory
    ServerFactory::instance_variable;

    std::string
    ServerFactory::logfile_directory;
  
    bool
    ServerFactory::closed_down = false;

    bool
    ServerFactory::graphical_output_requested = false;
  

  
    ServerFactory::ServerFactory ()
    {}
  
  
    ServerFactory &
    ServerFactory::instance () 
    {
      return instance_variable;
    }

  

    void
    ServerFactory::
    set_logfile_directory (const std::string &logfile_dir)
    {
      logfile_directory = logfile_dir;
    }



    void
    ServerFactory::
    set_graphical_mode (const bool p)
    {
      graphical_output_requested = p;
    }



    libparest::MessageLog::ServerBase *
    ServerFactory::create () const
    {
      libparest::MessageLog::ServerBase * message_log_server = new libparest::MessageLog::Server;

				       
				       
				       
				       
				       
				       
				       
				       
      message_log_server
	->attach_filter (new libparest::MessageLog::Filters::OStream(std::cout, 2, false));

      std::string logfile_path = logfile_directory;
      if ((logfile_path.size() != 0) &&
	  (logfile_path[logfile_path.size()-1] != '/'))
	logfile_path += '/';
      logfile_path += "log";
      message_log_server
	->attach_filter (new  libparest::MessageLog::Filters::OFStream(logfile_path, 2, true));
    
				       
				       
				       
				       
      if (graphical_output_requested)
	message_log_server
	  ->attach_filter (new libparest::MessageLog::Filters::GraphicalOutput);

      return message_log_server;
    }
  }

  
  

  template class Slave::Factory<deal_II_dimension>;
  template class Parameter::Factory<deal_II_dimension>;
}
