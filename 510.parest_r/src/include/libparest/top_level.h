//----------------------------   top_level.h     ---------------------------
//    $Id: top_level.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2003, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   top_level.h     ---------------------------
#ifndef __libparest__top_level_h
#define __libparest__top_level_h
//----------------------------   top_level.h     ---------------------------

#include <base/smartpointer.h>
#include <base/parameter_handler.h>

#include <libparest/message_log.h>
#include <libparest/parallel/control.h>
#include <libparest/global_parameters.h>
#include <libparest/master/newton_method.h>
#include <libparest/parameter/factory.h>


namespace libparest
{
  using namespace dealii;



  namespace TopLevel
  {

    template <int dim>
    class Base
    {
      public:    
	Base (MessageLog::ServerBase      &message_log_server,
	      ParallelControl::Control    &me_world_control,
	      const GlobalParameters<dim> &parameters);
    
	virtual ~Base ();
    
      protected:

	MessageLog::ServerBase &message_log_server;
    
	const SmartPointer<const GlobalParameters<dim> > parameters;
    
	ParallelControl::Control &me_world_control;
    };



    template <int dim>
    class Master : public  Base<dim>
    {
      public:
	Master (MessageLog::ServerBase      &message_log_server,
		ParallelControl::Control    &me_world_control,
		const GlobalParameters<dim> &parameters);

	void run (const typename libparest::Master::NewtonMethod<dim>::Parameters &newton_parameters,
		  const Slave::Factory                 &slave_factory,
		  const Parameter::Factory             &par_factory);

      private:
	MessageLog::Client message_log;

	void print_info (const unsigned int max_outer_iterations);

	void initialize_graphical_output (const Slave::Factory &slave_factory);
    };


    template <int dim>
    class Client : public  Base<dim>
    {
      public:
	Client (MessageLog::ServerBase      &message_log_server,
		ParallelControl::Control    &me_world_control,
		const GlobalParameters<dim> &parameters);

	void run (const Slave::Factory &slave_factory);

      private:
	MessageLog::Client message_log;

	void run_slave (const unsigned int    experiment_number,
			const Slave::Factory &slave_factory);
    };
  }
 
}

#endif // __libparest__top_level_h
