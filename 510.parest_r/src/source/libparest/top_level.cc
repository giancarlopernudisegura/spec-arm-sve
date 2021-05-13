#include <libparest/top_level.h>
#include <libparest/utilities.h>

#include <base/utilities.h>

#include <memory>
#if !defined(SPEC_WINDOWS)
#include <unistd.h>
#endif /* !SPEC_WINDOWS */
#include <cstring>

#define DEAL_II_USE_MPI 0

namespace libparest
{

  namespace TopLevel
  {
    template <int dim>
    Base<dim>::Base (MessageLog::ServerBase      &message_log_server,
		     ParallelControl::Control    &me_world_control,
		     const GlobalParameters<dim> &parameters)
		    :
		    message_log_server (message_log_server),
		    parameters (&parameters),
		    me_world_control (me_world_control)
    {}



    template <int dim>
    Base<dim>::~Base ()
    {}



  

    template <int dim>
    Master<dim>::Master (MessageLog::ServerBase      &message_log_server,
			 ParallelControl::Control    &me_world_control,
			 const GlobalParameters<dim> &parameters)
		    :
		    Base<dim> (message_log_server,
			       me_world_control,
			       parameters),
		    message_log (message_log_server,
				 std::string("master (") +
				 Utilities::int_to_string(me_world_control.world_rank,
                                                          Utilities::needed_digits(me_world_control.n_world_processes)) +
				 ")")
    {}


    template <int dim>
    void Master<dim>::print_info (const unsigned int max_outer_iterations)
    {
      char hostname[1024];
#if defined(SPEC)
      std::strcpy (hostname, "dummy_host");
#else
      gethostname (&(hostname[0]), 1023);
#endif /* !SPEC */

      std::string title_name = "me on ";
      title_name += hostname;
      message_log << set_priority(3)
		  << "program status: program name: "
		  << title_name
		  << std::endl << std::flush;
      
      message_log << set_priority(3)
		  << "program status: global info: "
		  << this->parameters->n_experiments
		  << " "
		  << max_outer_iterations
		  << std::endl << std::flush;
      message_log << set_priority(2)
		  << "Starting master..."
		  << std::endl << std::flush;
    }
  

  
    template <int dim>
    void Master<dim>::initialize_graphical_output (const Slave::Factory &slave_factory)
    {
    
      for (unsigned int i=0; i<this->parameters->n_experiments; ++i)
	slave_factory.initialize_graphical_output (i,
						   this->parameters->n_experiments,
						   message_log);

      libparest::Master::Master::declare_graphical_output_labels (message_log);
    }
  


    template <int dim>
    void Master<dim>::run (const typename libparest::Master::NewtonMethod<dim>::Parameters &newton_parameters,
			   const Slave::Factory                   &slave_factory,
			   const Parameter::Factory               &par_factory) 
    {
      this->me_world_control.initialize (this->parameters->n_experiments);  

      print_info (newton_parameters.max_iterations);
      initialize_graphical_output (slave_factory);

				       
				       
      std::auto_ptr<Parameter::Base>
	parameter_representation (par_factory.create ());
      message_log << set_priority(2)
		  << "New master parameter discretization: "
		  << parameter_representation->n_dofs()
		  << " parameter dofs."
		  << std::endl << std::flush;
    
				       
      libparest::Master::NewtonMethod<dim>
	newton_method (newton_parameters, *this->parameters,
		       message_log.get_server (),
		       *parameter_representation);
      newton_method.initialize (slave_factory);

				       
      newton_method.run ();
    }
  



  
    template <int dim>
    Client<dim>::Client (MessageLog::ServerBase      &message_log_server,
			 ParallelControl::Control    &me_world_control,
			 const GlobalParameters<dim> &parameters)
		    :
		    Base<dim> (message_log_server,
			       me_world_control,
			       parameters),
		    message_log (message_log_server,
				 std::string("client (") +
				 Utilities::int_to_string(me_world_control.world_rank,
                                                          Utilities::needed_digits(me_world_control.n_world_processes)) +
				 ")")
    {
      Assert (DEAL_II_USE_MPI,
	      ExcMessage("We should not have gotten here!!!"));
    }



    template <int dim>
    void Client<dim>::run (const Slave::Factory &slave_factory) 
    {
				       
      this->me_world_control.initialize (this->parameters->n_experiments);
  
				       
				       
				       
				       
      Threads::ThreadGroup<> threads;
      for (std::set<unsigned int>::const_iterator
	     i=(this->me_world_control.
		process_has_slave[this->me_world_control.ms_rank].begin());
	   i!=(this->me_world_control.
	       process_has_slave[this->me_world_control.ms_rank].end());
	   ++i)
	{
	  const unsigned int experiment_number = *i;
	  threads += Threads::spawn (*this, &Client<dim>::run_slave)
		     (experiment_number, slave_factory);
	};

				       
      threads.join_all ();
    }




    template <int dim>
    void
    Client<dim>::run_slave (const unsigned int    experiment_number,
			    const Slave::Factory &slave_factory)
    {
      Assert (DEAL_II_USE_MPI, ExcInternalError());
    
				       
				       
				       
      message_log << set_priority(3)
		  << "Starting slave " << experiment_number
		  << std::endl << std::flush;

				       
				       
				       
      std::pair<Slave::Base *, Threads::Thread<> >
	me_slave (slave_factory.create_slave (this->me_world_control,
					      message_log.get_server(),
					      experiment_number,
					      this->parameters->n_experiments));
      Assert (me_slave.first == 0, ExcInternalError());

				       
      me_slave.second.join ();
    }



    template class Base<deal_II_dimension>;
    template class Master<deal_II_dimension>;
    template class Client<deal_II_dimension>;
  }
}
