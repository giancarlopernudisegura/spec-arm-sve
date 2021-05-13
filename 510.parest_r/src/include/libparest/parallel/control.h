//----------------------------   parallel_control.h     ---------------------------
//    $Id: control.h 3503 2007-12-12 23:01:24Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2004, 2009 by Wolfgang Bangerth
//
//----------------------------   parallel_control.h     ---------------------------
#ifndef __libparest__parallel_control_h
#define __libparest__parallel_control_h
//----------------------------   parallel_control.h     ---------------------------


#include <libparest/message_log.h>
#include <libparest/parallel/mpi.h>

#include <vector>
#include <set>


namespace libparest
{

  namespace ParallelControl
  {

    class SystemInfo
    {
      public:
	SystemInfo ();
      
	void initialize ();

	std::string copy_to_string () const;

	void copy_from_string (const std::string &in);
      
	std::string hostname;

	unsigned int n_cpus;
      
	double load_per_cpu;
    };
    

  

    struct Data
    {
      public:
	unsigned int world_rank;

	unsigned int world_master_rank;
      
	unsigned int world_message_log_rank;

	unsigned int ms_rank;
	unsigned int ms_master_rank;
    
	unsigned int n_world_processes;

	unsigned int n_ms_processes;

	unsigned n_external_slaves;
    
	std::vector<unsigned int> slave_on_process;
	std::vector<std::set<unsigned int> > process_has_slave;

	std::vector<SystemInfo> host_info;
      
	MessageLog::ServerBase *message_log_server;

	mutable Threads::ThreadMutex  mpi_mutex;
    };


    class Base : public Data
    {
      public:
	virtual ~Base ();
      
	virtual void initialize_mpi (int    &argc,
				     char **&argv) = 0;

	virtual void initialize (const unsigned int n_experiments) = 0;

	virtual void finalize () = 0;

	bool is_master_process () const;

	bool is_message_log_process () const;
    };



#if DEAL_II_USE_MPI == 1

    namespace MPI
    {
      class Control : public Base
      {
	private:
	  static Control instance_variable;

	  Control ();
      
	public:
	  virtual ~Control ();

	  static Control & instance ();
    
	  virtual void initialize_mpi (int    &argc,
				       char **&argv);
		     
	  void setup_message_log_objects (const MessageLog::ServerFactory &factory);

	  virtual void initialize (const unsigned int n_slaves);
    
	  virtual void finalize ();
    
	  mutable ::MPI::Graphcomm me_world;

	  mutable ::MPI::Graphcomm me_master_slaves;
    

	  mutable std::vector< ::MPI::Intracomm> master_slave_communicator;

	  DeclException0 (ExcErrorOnInit);
	  DeclException1 (ExcNotEnoughProcesses,
			  int,
			  << "There are only " << arg1
			  << " processes, but at least 2 are needed.");
    
	private:
	  ::MPI::Graphcomm me_message_communicator;

	  bool finalize_called;
    
	  void dedicate_processes ();
      };
    }

    using MPI::Control;


#else  // if DEAL_II_USE_MPI == 1

    namespace Local
    {
      class Control : public ParallelControl::Base
      {
	private:
	  static Control instance_variable;

	  Control ();
      
	public:
	  virtual ~Control ();

	  static Control & instance ();


	  virtual void initialize_mpi (int &, char **&);

	  void setup_message_log_objects (const MessageLog::ServerFactory &factory);

	  virtual void initialize (const unsigned int);        
	  virtual void finalize ();
      };
    }

    using Local::Control;

#endif  // if DEAL_II_USE_MPI == 1
  
  }
 
}


//----------------------------   parallel_control.h     ---------------------------
// end of #ifndef __libparest__parallel_control_h
#endif
//----------------------------   parallel_control.h     ---------------------------
