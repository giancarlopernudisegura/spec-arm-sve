//----------------------------   slave/factory.h     ---------------------------
//    $Id: factory.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2003, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   slave/factory.h     ---------------------------
#ifndef __libparest__slave_factory_h
#define __libparest__slave_factory_h
//----------------------------   slave/factory.h     ---------------------------

#include <base/thread_management.h>
#include <libparest/slave/slave.h>
#include <libparest/parallel/control.h>

#include <utility>

namespace libparest
{
  using namespace dealii;



  namespace Slave
  {
    
    class Factory 
    {
      public:
	virtual ~Factory ();
    
	virtual 
	std::pair<libparest::Slave::Base *, Threads::Thread<> >
	create_slave (const ParallelControl::Control &parallel_control,
		      MessageLog::ServerBase      &message_log_server,
		      const unsigned int           slave_no,
		      const unsigned int           total_slaves) const;

					 /**
					  * Ask the class that is used for
					  * the @p slave_noth slave
					  * object to write some strings
					  * to the provided message log
					  * object that will initialize
					  * the latter's graphical output
					  * capabilities.
					  */
	virtual
	void
	initialize_graphical_output (const unsigned int  slave_no,
				     const unsigned int  total_slaves,
				     MessageLog::Client &message_log) const = 0;

      protected:
					 /**
					  * Create a slave object
					  * locally. Has to be overridden
					  * by derived classes.
					  */
	virtual 
	libparest::Slave::Base *
	create_local_slave (MessageLog::ServerBase &message_log_server,
			    const unsigned int      slave_no,
			    const unsigned int      total_slaves) const = 0;

      private:
					 /**
					  * Creare a local slave, couple
					  * it with a client-side relay
					  * object, and run the message
					  * loop of that object.
					  */
	void run_slave_relay_detached (const ParallelControl::Control &parallel_control,
				       MessageLog::ServerBase      &message_log_server,
				       const unsigned int slave_no,
				       const unsigned int total_slaves) const;
    };
 
  }
  
}


#endif // __libparest__slave_factory_h
