#include <libparest/parallel/control.h>
#include <libparest/parallel/message_log.h>
#include <libparest/parallel/tools.h>
#include <libparest/utilities.h>

#include <base/utilities.h>
#include <base/multithread_info.h>

#include <string>
#include <iostream>
#if !defined(SPEC_WINDOWS)
#include <unistd.h>
#endif /* !SPEC_WINDOWS */
#include <cerrno>

#ifdef HAVE_STD_STRINGSTREAM
std::ostringstream filename;
#else
std::ostrstream filename;
#endif


namespace libparest
{

  DeclException1 (ExcInvalidNumberOfProcesses,
		  int,
		  << "There seem to be " << arg1
		  << " processes, but this does not seem to be a reasonable number.");



  namespace ParallelControl
  {

    SystemInfo::SystemInfo ()
		    :
		    hostname ("<uninitialized>"),
		    n_cpus (0),
		    load_per_cpu (-1)
    {}

  

    void
    SystemInfo::initialize ()
    {
      hostname     = Utilities::System::get_hostname ();
      n_cpus       = multithread_info.n_cpus;
      load_per_cpu = Utilities::System::get_cpu_load() / n_cpus;
    }



    std::string
    SystemInfo::copy_to_string () const
    {
#ifdef HAVE_STD_STRINGSTREAM
      std::ostringstream s;
#else
      std::ostrstream s;
#endif
      s << hostname << " "
	<< n_cpus << " "
	<< load_per_cpu;
#ifndef HAVE_STD_STRINGSTREAM    
      s << std::ends;
#endif
      return s.str();
    }


    void
    SystemInfo::copy_from_string (const std::string &in)
    {
#ifdef HAVE_STD_STRINGSTREAM
      std::istringstream i(in.c_str());
#else
      std::istrstream i(in.c_str());
#endif
      i >> hostname;
      i >> n_cpus;
      i >> load_per_cpu;
    }
  

  
    Base::~Base ()
    {}



    bool Base::is_master_process () const
    {
      return world_rank == world_master_rank;
    }



    bool Base::is_message_log_process () const
    {
      return world_rank == world_message_log_rank;
    }
  
  

#if DEAL_II_USE_MPI == 1

    namespace MPI
    {
      Control::Control () {}

      Control::~Control ()
      {
	if (finalize_called == false)
	  finalize ();
      }



      void
      Control::initialize_mpi (int    &argc,
			       char **&argv) 
      {
					 
	::MPI::Init (argc, argv);
	AssertThrow (::MPI::Is_initialized(), ExcErrorOnInit());

	
	
	
	errno = 0;
    
	finalize_called = false;
  
					 
					 
					 
					 
					 
					 
					 
					 
	const unsigned int buffer_size = 2048*20;
    
	::MPI::Attach_buffer (new char[buffer_size], buffer_size);
      

  
	n_world_processes = ::MPI::COMM_WORLD.Get_size ();
	Assert (n_world_processes >= 3, ExcInvalidNumberOfProcesses(n_world_processes));
	Assert (n_world_processes <= 512, ExcInvalidNumberOfProcesses(n_world_processes));


					 
					 
					 
	dedicate_processes ();
    
					 
					 
					 
					 
	if (true)
	  {
	    std::vector<int> index;
	    std::vector<int> edges;
					     
					     
					     
					     
					     
	    for (unsigned int rank=0; rank<n_world_processes; ++rank)
	      {
		if (rank == world_master_rank)
		  {
		    for (unsigned int i=0; i<n_world_processes; ++i)
		      if (i!=world_master_rank)
			edges.push_back (i);
		  }
		else
		  if (rank == world_message_log_rank)
		    {
		      for (unsigned int i=0; i<n_world_processes; ++i)
			if (i!=world_message_log_rank)
			  edges.push_back (i);
		    }
		  else
		    {
		      edges.push_back (world_master_rank);
		      edges.push_back (world_message_log_rank);
		    }

		index.push_back (edges.size());
	      }
      
					     
					     
					     
	    me_world = ::MPI::COMM_WORLD.Create_graph (n_world_processes, 
						     &*index.begin(),
						     &*edges.begin(), false);
	    me_world.Set_errhandler (::MPI::ERRORS_THROW_EXCEPTIONS);
	    world_rank = me_world.Get_rank ();
	    Assert (world_rank == static_cast<unsigned int>(::MPI::COMM_WORLD.Get_rank()),
		    ExcInternalError());
	  }
  
					 
					 
	if (true)
	  {
	    std::vector<int> index;
	    std::vector<int> edges;
					     
					     
					     
	    for (unsigned int rank=0; rank<n_world_processes; ++rank)
	      {
		if (rank==world_message_log_rank)
		  for (unsigned int i=1; i<n_world_processes; ++i)
		    edges.push_back (i);
		else
		  edges.push_back (world_message_log_rank);
	  
		index.push_back (edges.size());
	      }
					     
					     
					     
	    me_message_communicator
	      = ::MPI::COMM_WORLD.Create_graph (n_world_processes, 
					      &*index.begin(),
					      &*edges.begin(), false);
	    me_message_communicator.Set_errhandler (::MPI::ERRORS_THROW_EXCEPTIONS);
	  }

					 
					 
					 
	if (true)
	  {
					     
					     
					     
					     
	    const int k = world_message_log_rank;
	    ::MPI::Intracomm tmp
	      =  ::MPI::COMM_WORLD.Create (me_world.Get_group().Excl(1, &k));
	  
					     
					     
					     
					     
					     
	    if (world_rank != world_message_log_rank)
	      {
		std::vector<int> index;
		std::vector<int> edges;
						 
						 
						 
						 
		for (unsigned int rank=0; rank<n_world_processes; ++rank)
		  if (rank!=world_message_log_rank)
		    {
		      if (rank==world_master_rank)
			{
			  for (unsigned int i=1; i<n_world_processes; ++i)
			    if (i!=world_message_log_rank)
			      edges.push_back (i);
			}
		      else
			edges.push_back (world_master_rank);
	    
		      index.push_back (edges.size());
		    }

						 
						 
						 
						 
						 
		for (unsigned int i=0; i<edges.size(); ++i)
		  if (static_cast<unsigned int>(edges[i]) > world_message_log_rank)
		    --edges[i];
      
						 
						 
						 
						 
		me_master_slaves
		  = tmp.Create_graph (n_world_processes-1, &*index.begin(),
				      &*edges.begin(), false);
      
						 
						 
						 
		me_master_slaves.Set_errhandler (::MPI::ERRORS_THROW_EXCEPTIONS);
		n_ms_processes = me_master_slaves.Get_size();
		Assert (n_ms_processes == n_world_processes-1, ExcInternalError());

						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
		ms_rank = me_master_slaves.Get_rank();
		ms_master_rank = (world_master_rank < world_message_log_rank ?
				  world_master_rank :
				  world_master_rank-1);

		if (world_rank == world_master_rank)
		  Assert (ms_rank == ms_master_rank, ExcInternalError());
	      }
	  }
  
					 
					 
	std::cout << "Initialized: " << world_rank
		  << " out of " << n_world_processes    
		  << " on " << Utilities::System::get_hostname()
		  << (world_rank == world_master_rank ?
		      " (master)" :
		      (world_rank == world_message_log_rank ?
		       " (message log server)" :
		       ""))
		  << " (master: " << world_master_rank
		  << ", message log server: " << world_message_log_rank
		  << ")"
		  << std::endl;
      }



      void
      Control::initialize (const unsigned int n_slaves) 
      {
					 
					 
					 
					 
	if (world_rank == world_message_log_rank)
	  return;

					 
					 
					 
					 
					 
					 
					 
	slave_on_process.resize (n_slaves);
	for (unsigned int slave=0; slave<n_slaves; ++slave)
	  slave_on_process[slave] = n_ms_processes-1-(slave%n_ms_processes);
  
					 
					 
	process_has_slave.resize (n_ms_processes);
	for (unsigned int slave=0; slave<n_slaves; ++slave)
	  process_has_slave[slave_on_process[slave]].insert (slave);

					 
					 
					 
	n_external_slaves = 0;
	for (unsigned int slave=0; slave<n_slaves; ++slave)
	  if (slave_on_process[slave] != ms_master_rank)
	    ++n_external_slaves;

					 
					 
					 
					 
					 
					 
					 
					 
					 
	master_slave_communicator.resize (n_slaves);
	if (ms_rank == ms_master_rank)
	  {
					     
					     
	    for (unsigned int slave=0; slave<n_slaves; ++slave)
	      {	  
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
		if (slave_on_process[slave] != ms_master_rank)
		  {
						     
						     
						     
						     
		    const int ranks[2] = { ms_master_rank, slave_on_process[slave] };
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
		    master_slave_communicator[slave]
		      =
		      me_master_slaves.Create (me_master_slaves.Get_group().Incl(2, ranks));
		    master_slave_communicator[slave]
		      .Set_errhandler (::MPI::ERRORS_THROW_EXCEPTIONS);

						     
						     
		    master_slave_communicator[slave].Bsend (&slave, 1, ::MPI::UNSIGNED,
							    1, 0);
	      
		  }
	      }
	  }
	else
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
	  {
	    for (unsigned int slave=0; slave<n_slaves; ++slave)
	      if (slave_on_process[slave] != ms_master_rank)
		{
						   
						   
						   
						   
		  const int ranks[2] = { ms_master_rank, slave_on_process[slave] };
						   
						   
						   
						   
						   
						   
						   
						   
						   
						   
						   
						   
						   
		  ::MPI::Intracomm comm
		    =
		    me_master_slaves.Create (me_master_slaves.Get_group().Incl(2, ranks));

		  if (slave_on_process[slave] == ms_rank)
		    {
						       
						       
						       
						       
						       
						       
						       
						       
		      master_slave_communicator[slave] = comm;
		      master_slave_communicator[slave]
			.Set_errhandler (::MPI::ERRORS_THROW_EXCEPTIONS);
		
		
		
						       
						       
						       
						       
						       
		      int s;
		      master_slave_communicator[slave].Recv (&s, 1, ::MPI::UNSIGNED,
							     0, 0);
		    }
		}
	  }

					 
					 
					 
					 
	me_master_slaves.Barrier ();
      }



      void
      Control::finalize () 
      {
					 
	if (finalize_called == true)
	  return;

					 
	MPI_Tools::sent_message_stats.write_statistics (std::cerr);
	
					 
					 
					 
					 
					 
					 
	sleep (5);
  
					 
					 
	delete_ptr (message_log_server);

					 
					 
					 
					 
					 

	void *buf;
	::MPI::Detach_buffer (buf);
	delete[] reinterpret_cast<char*>(buf);
  
	::MPI::Finalize ();

					 
					 
	finalize_called = true;
      }



      void
      Control::dedicate_processes ()
      {    
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
    
					 
					 
	if (true)
	  {
	    host_info.resize (n_world_processes);

	    const unsigned int this_rank = ::MPI::COMM_WORLD.Get_rank();
	    Assert (this_rank < n_world_processes,
		    ExcInternalError());
	
	    host_info[this_rank].initialize ();
    
					     
					     
	    const unsigned int max_string_size = 1024;
	
					     
					     
					     
					     
					     
					     
					     
	    for (unsigned int sender=0; sender<n_world_processes; ++sender)
					       
	      if (sender == this_rank)
		{
		  const std::string this_info_string
		    = host_info[this_rank].copy_to_string();
		  Assert (this_info_string.size() < max_string_size,
			  ExcInternalError());
						   
						   
						   
		  char msg[max_string_size];
		  std::copy (this_info_string.begin(),
			     this_info_string.end(),
			     &msg[0]);
		  msg[this_info_string.size()] = 0;

						   
						   
		  for (unsigned int receiver=0; receiver<n_world_processes; ++receiver)
		    if (receiver != sender)
		      {



		    
			::MPI::COMM_WORLD.Bsend (&msg[0], max_string_size,
					       ::MPI::CHAR, receiver, 0);


		      }
		}
	      else
						 
		{
						   
						   
						   
						   
		  char msg[max_string_size];



		    
		  ::MPI::COMM_WORLD.Recv (&msg[0], max_string_size,
					MPI_CHAR, sender, 0);

		  host_info[sender].copy_from_string (std::string(msg));
		}
	  }
    
					 
					 
					 
					 
					 
					 
					 
					 
					 
	std::map<std::string,double> host_cpu_loads;
	for (unsigned int i=0; i<n_world_processes; ++i)
	  host_cpu_loads[host_info[i].hostname] = host_info[i].load_per_cpu;


  
					 
					 
	std::map<std::string,unsigned int> processes_per_host;
	for (unsigned int i=0; i<n_world_processes; ++i)
	  ++processes_per_host[host_info[i].hostname];
					 
					 
	unsigned int highest_pph       = 0;
	typedef std::map<std::string,unsigned int>::const_iterator pph_iterator;
	for (pph_iterator i=processes_per_host.begin(); i!=processes_per_host.end(); ++i)
	  if (i->second > highest_pph)
	    highest_pph = i->second;
  
					 
					 
					 
					 
					 
					 
	for (pph_iterator i=processes_per_host.begin(); i!=processes_per_host.end(); ++i)
	  if (i->second == highest_pph)
	    {
	      const std::string &message_log_host = i->first;
	      for (unsigned int j=0; j<n_world_processes; ++j)
		if (host_info[j].hostname == message_log_host)
		  {
		    world_message_log_rank = j;
		    --processes_per_host[message_log_host];
		    break;
		  }
	      break;
	    }

					 
					 
	highest_pph       = 0;
	for (pph_iterator i=processes_per_host.begin(); i!=processes_per_host.end(); ++i)
	  if (i->second > highest_pph)
	    highest_pph = i->second;
  
	for (pph_iterator i=processes_per_host.begin(); i!=processes_per_host.end(); ++i)
	  if (i->second == highest_pph)
	    {
	      const std::string &master_host = i->first;
	      for (unsigned int j=0; j<n_world_processes; ++j)
		if (j != world_message_log_rank)
		  if (host_info[j].hostname == master_host)
		    {
		      world_master_rank = j;
		      --processes_per_host[master_host];
		      break;
		    }
	      break;
	    }
      }



      void
      Control::
      setup_message_log_objects (const MessageLog::ServerFactory &factory)
      {  
	if (world_rank == world_message_log_rank)
	  {
      
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
	    message_log_server = factory.create ();
	    static MessageLog::MPI::MasterSideRelay
	      message_relay (*message_log_server,
			     me_message_communicator,
			     mpi_mutex);
	    message_relay.run_event_loop ();
	    delete_ptr (message_log_server);
	  }
	else
	  {
					     
					     
					     
					     
					     
	    message_log_server = new MessageLog::MPI::Server (me_message_communicator,
							      world_message_log_rank,
							      mpi_mutex);
	  }
      }
    
    }
  

#else 

    namespace Local
    {
  
      Control::Control ()
      {
	world_rank = world_master_rank = 0;
	world_message_log_rank = static_cast<unsigned int>(-1);
	n_world_processes = 1;
	n_external_slaves = 0;
      }
    


      Control::~Control ()
      {}



      void
      Control::initialize_mpi (int &, char **&)
      {}

  
      void
      Control::
      setup_message_log_objects (const MessageLog::ServerFactory &factory)
      {  
	message_log_server = factory.create ();
      }



      void
      Control::initialize (unsigned int n_slaves)
      {
	slave_on_process.resize (n_slaves);
	for (unsigned int slave=0; slave<n_slaves; ++slave)
	  slave_on_process[slave] = 0;

					 
					 
	process_has_slave.resize (1);
	for (unsigned int slave=0; slave<n_slaves; ++slave)
	  process_has_slave[0].insert (slave);

	host_info.resize (1);
	host_info[0].initialize ();
      }



      void
      Control::finalize ()      
      {
	delete_ptr (message_log_server);
      }
    }

  
#endif 



				     
    Control Control::instance_variable;

    Control & Control::instance ()
    {
      return instance_variable;
    }
  
  }
 
}
