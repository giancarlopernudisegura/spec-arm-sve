//----------------------------   parallel_message_log.h     ---------------------------
//    $Id: message_log.h 3503 2007-12-12 23:01:24Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2009 by Wolfgang Bangerth
//
//----------------------------   parallel_message_log.h     ---------------------------
#ifndef __libparest__parallel_message_log_h
#define __libparest__parallel_message_log_h
//----------------------------   parallel_message_log.h     ---------------------------



#if DEAL_II_USE_MPI == 1

#include <libparest/message_log.h>
#include <libparest/parallel/mpi.h>


namespace libparest
{

  namespace MessageLog
  {
    namespace MPI
    {
      class MasterSideRelay
      {
	public:
	  MasterSideRelay (MessageLog::ServerBase &global_message_log,
			   ::MPI::Intracomm       &communicator,
			   Threads::ThreadMutex   &mpi_mutex);

	  void run_event_loop ();
    
	private:    
	  MessageLog::ServerBase  &global_message_log;

	  ::MPI::Intracomm &communicator;

	  Threads::ThreadMutex &mpi_mutex;
      };



      class Server : public MessageLog::ServerBase
      {
	public:
	  Server (::MPI::Intracomm     &communicator,
		  const unsigned int    server_rank,
		  Threads::ThreadMutex &mpi_mutex);

	  virtual ~Server ();

	  virtual unsigned int register_client (const std::string &name);

	  virtual void deregister_client (const unsigned int id);

	  virtual void put_message (const unsigned int  id,
				    const std::string  &message,
				    const unsigned int  priority);

	  DeclException2 (ExcMessageTooLong,
			  int, std::string,
			  << "Message '" << arg2
			  << "' is too long, having a length of "
			  << arg1 << " bytes.");
	private:    
	  ::MPI::Intracomm &communicator;

	  const unsigned int server_rank;


	  Threads::ThreadMutex &mpi_mutex;
      };

    }
  }
 
}


#endif // if DEAL_II_USE_MPI == 1


//----------------------------   parallel_message_log.h     ---------------------------
// end of #ifndef __libparest__parallel_message_log_h
#endif
//----------------------------   parallel_message_log.h     ---------------------------
