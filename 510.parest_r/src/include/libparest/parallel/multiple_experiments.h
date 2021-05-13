//----------------------------   parallel_multiple_experiments.h     ---------------------------
//    $Id: multiple_experiments.h 3503 2007-12-12 23:01:24Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2004, 2007, 2009 by Wolfgang Bangerth
//
//----------------------------   parallel_multiple_experiments.h     ---------------------------
#ifndef __libparest__parallel_multiple_experiments_h
#define __libparest__parallel_multiple_experiments_h
//----------------------------   parallel_multiple_experiments.h     ---------------------------


#if DEAL_II_USE_MPI == 1

#include <libparest/slave/slave.h>
#include <libparest/master/master.h>
#include <libparest/parallel/tools.h>
#include <libparest/parallel/mpi.h>


namespace libparest
{

  namespace MasterSlaveCommunications
  {
    namespace MPI
    {
    
      enum Tags
      {
	    tag_initialize,
	    tag_finalize,
	    tag_initialize_gauss_newton_step,
	    tag_end_gauss_newton_step,
	    tag_create_statistics_object,
	    tag_compute_rhs,
	    tag_compute_information,
	    tag_forward_backward,
	    tag_multiple_forward_backward,
	    tag_compute_updates,
	    tag_perform_updates,
	    tag_compute_trial_residual,
	    tag_compute_misfits,
	    tag_write_solution,
	    tag_estimate_error,
	    tag_refine_parameterization,
	    tag_refine_slave,
	    tag_get_n_dofs,
	    tag_statistics_declare_entries,
	    tag_statistics_get_values
      };



      class Client : public Subscriptor
      {
	public:
	  Client (Slave::Base          &slave,
		  ::MPI::Intracomm     &communicator,
		  Threads::ThreadMutex &mpi_mutex);

	  void run_event_loop ();    

	  DeclException1 (ExcInvalidTag,
			  int,
			  << "Received invalid tag with value " << arg1);
    
	private:
	  SmartPointer<Slave::Base> slave;

          const MPI_Tools::MPIStream communicator;

	  Threads::ThreadMutex &mpi_mutex;

	  std::map<unsigned int, SmartPointer<PerStepStatistics> > statistics_objects;
      };




      class Server : public Slave::Base
      {
	public:
	  Server (::MPI::Intracomm         &communicator,
		  Threads::ThreadMutex     &mpi_mutex,
		  const std::string        &base_name,
		  const unsigned int        experiment_number,
		  MessageLog::ServerBase   &message_log_server);
    
	  virtual void initialize (const Vector<double> &initial_a);

	  virtual void finalize ();
    
	  virtual void initialize_gauss_newton_step (const unsigned int step_no);

	  virtual void end_gauss_newton_step ();
    
	  virtual libparest::PerStepStatistics *
	  create_and_set_statistics_object ();

	  virtual void compute_rhs (Vector<double> &rhs,
				    Vector<double> &rhs_a);

	  virtual void compute_information (Vector<float> &contribution) const;

	  virtual void forward_backward (const Vector<double> &test_parameter,
					 Vector<double>       &result);

	  virtual
	  void
	  multiple_forward_backward (const std::vector<Vector<double> > &test_parameters,
				     std::vector<Vector<double> >       &results);
	  
	  virtual void compute_updates (const Vector<double> &delta_a);

	  virtual void perform_updates (const Vector<double> &new_parameter,
					const double          step_length);

	  virtual void compute_trial_residual (const std::vector<double>     trial_alpha,
					       std::vector<Vector<double>*> &slave_contribution,
					       std::vector<double>          &residual) const;

	  virtual std::pair<double,double> compute_misfits () const;
    
	  virtual void write_solution () const;

	  virtual
	  double
	  estimate_error (Vector<float> &parameter_error,
			  unsigned int  &pe_type);
    
	  virtual
	  void
	  refine_parameterization (const std::vector<bool> &refinement_indicators,
				   const std::vector<bool> &coarsening_indicators);

	  virtual
	  void
	  refine_slave (const Vector<double> &new_parameters);

	  virtual
	  unsigned int
	  n_degrees_of_freedom () const;
    
	private:
	  class PerStepStatistics : public libparest::PerStepStatistics
	  {
	    public:
	      PerStepStatistics (const unsigned int  index,
				 const Server       *server);
	
	      virtual
	      std::list<std::string>
	      declare_entries () const;

	      virtual
	      std::list<double>
	      get_values () const;

	    private:
	      const unsigned int                index;

	      const SmartPointer<const Server> server;

	      mutable std::list<std::string> cached_entry_names;
	      mutable std::list<double>      cached_values;
	  };
    
	  const MPI_Tools::MPIStream communicator;

	  Threads::ThreadMutex &mpi_mutex;

	  const int slave_rank;

	  unsigned int next_statistics_object_index;



	  std::list<std::string>
	  statistics_declare_entries (const unsigned int statistics_object_index) const;

	  std::list<double>
	  statistics_get_values (const unsigned int statistics_object_index) const;
    
    
	  friend class PerStepStatistics;
      };
 
    }


				     // import names into the present
				     // namespace
    using MPI::Client;
    using MPI::Server;
  }
 
}


#endif //#if DEAL_II_USE_MPI == 1


//----------------------------   parallel_multiple_experiments.h     ---------------------------
// end of #ifndef __libparest__parallel_multiple_experiments_h
#endif
//----------------------------   parallel_multiple_experiments.h     ---------------------------
