#include <libparest/slave/factory.h>
#include <libparest/parallel/multiple_experiments.h>

#include <memory>

namespace libparest
{
  namespace Slave
  {
    
    Factory::~Factory () 
    {}



#if DEAL_II_USE_MPI != 1

    std::pair<Slave::Base *, Threads::Thread<> >
    Factory::create_slave (const ParallelControl::Control &,
			   MessageLog::ServerBase &message_log_server,
			   const unsigned int      slave_no,
			   const unsigned int      total_slaves) const
    {
      Assert (slave_no < total_slaves, ExcInternalError());

      return std::make_pair (create_local_slave (message_log_server,
						 slave_no, total_slaves),
			     Threads::Thread<>());
    }

#else

    std::pair<Slave::Base *, Threads::Thread<> >
    Factory::create_slave (const ParallelControl::Control &parallel_control,
				  MessageLog::ServerBase        &message_log_server,
				  const unsigned int           slave_no,
				  const unsigned int           total_slaves) const
    {
      Assert (slave_no < total_slaves, ExcInternalError());

				       
				       
      if (parallel_control.is_master_process())
	{
	  const bool slave_is_local = (parallel_control.slave_on_process[slave_no]
				       == parallel_control.ms_rank);
	  if (slave_is_local)
	    return std::make_pair (create_local_slave (message_log_server,
						       slave_no, total_slaves),
				   Threads::Thread<>());
	  else
	    {
					       
					       
					       
					       
					       
					       
					       
					       
					       
					       
	      return
		std::make_pair (new MasterSlaveCommunications::Server (parallel_control.master_slave_communicator[slave_no],
								     parallel_control.mpi_mutex,
								     "Slave Srv", slave_no,
								     message_log_server),
				Threads::Thread<>());
	    } 
	}
      else if (!parallel_control.is_message_log_process())
	{
					   
					   
					   
					   
					   
					   
					   
	  Assert (parallel_control.slave_on_process[slave_no]
		  == parallel_control.ms_rank,
		  ExcInternalError());
      
					   
					   
					   
					   
					   
	  Threads::Thread<> detached_thread
	    = Threads::spawn (*this, &Factory::run_slave_relay_detached)
	    (parallel_control, message_log_server,
	     slave_no, total_slaves);
      
	  return std::make_pair(static_cast<Slave::Base *>(0),
				detached_thread);
	}
      else
	Assert (false,
		ExcMessage ("We should not get to this place on the message log process!"));

      return std::pair<Slave::Base *, Threads::Thread<> >();
    }


#endif



#if DEAL_II_USE_MPI != 1

    void
    Factory::
    run_slave_relay_detached (const ParallelControl::Control &,
			      MessageLog::ServerBase &,
			      const unsigned int,
			      const unsigned int) const
    {
      Assert (false, ExcInternalError());
    }


#else


    void
    Factory::
    run_slave_relay_detached (const ParallelControl::Control &parallel_control,
			      MessageLog::ServerBase        &message_log_server,
			      const unsigned int slave_no,
			      const unsigned int total_slaves) const
    {
      Assert (DEAL_II_USE_MPI, ExcInternalError());
				       
				       
      std::auto_ptr<Slave::Base>
	slave (create_local_slave (message_log_server, slave_no, total_slaves));
  
      MasterSlaveCommunications::Client slave_relay (*slave.get(),
						     parallel_control.master_slave_communicator[slave_no],
						     parallel_control.mpi_mutex);

      slave_relay.run_event_loop ();

				       
				       
				       
    }

#endif
 
  }
}
