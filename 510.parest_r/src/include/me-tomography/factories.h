//----------------------------   factories.h     ---------------------------
//    $Id: factories.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2003, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   factories.h     ---------------------------
#ifndef __parameter_estimation__factories_h
#define __parameter_estimation__factories_h
//----------------------------   factories.h     ---------------------------


#include <libparest/slave/factory.h>
#include <libparest/parameter/factory.h>

#include "config.h"
#include "me_parameters.h"

#include <string>


namespace METomography
{
  namespace Slave
  {
    template <int dim>
    class Factory : public libparest::Slave::Factory
    {
      public:
        Factory (const libparest::GlobalParameters<dim> &parameters);

	virtual
	void
	initialize_graphical_output (const unsigned int  slave_no,
				     const unsigned int  total_slaves,
				     libparest::MessageLog::Client &message_log) const;
      
      protected:
	const SmartPointer<const ME_Parameters<dim> > parameters;
    
	virtual
	libparest::Slave::Base *
	create_local_slave (libparest::MessageLog::ServerBase &message_log_server,
			    const unsigned int      slave_index,
			    const unsigned int      n_total_slaves) const;
    };
  }


  namespace Parameter
  {
    
    template <int dim>
    class Factory : public libparest::Parameter::Factory
    {
      public:
        Factory (const libparest::GlobalParameters<dim> &parameters);
    
	virtual 
	libparest::Parameter::Base * create () const;

      protected:
	const SmartPointer<const ME_Parameters<dim> > parameters;
    };
  }



  namespace MessageLog
  {

    class ServerFactory : public libparest::MessageLog::ServerFactory 
    {
      private:
        ServerFactory ();

        static ServerFactory instance_variable;
      
      public:
        static ServerFactory & instance ();
      
	static void set_logfile_directory (const std::string &logfile_dir);

	static void set_graphical_mode (const bool graphical_output_requested);

	virtual libparest::MessageLog::ServerBase * create () const;
      
      private:
	static std::string logfile_directory;
      
	static bool graphical_output_requested;

	static bool closed_down;
    };  
  }
}


//----------------------------   factories.h     ---------------------------
// end of #ifndef __parameter_estimation__factories_h
#endif
//----------------------------   factories.h     ---------------------------
