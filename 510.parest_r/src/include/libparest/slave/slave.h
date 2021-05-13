//----------------------------   slave.h     ---------------------------
//    $Id: slave.h 3430 2007-07-10 03:49:27Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2003, 2004, 2006, 2007, 2009 by Wolfgang Bangerth
//
//----------------------------   slave.h     ---------------------------
#ifndef __libparest__slave_h
#define __libparest__slave_h
//----------------------------   slave.h     ---------------------------


#include <libparest/message_log.h>
#include <libparest/master/step_length_control.h>
#include <libparest/statistics.h>
#include <base/subscriptor.h>
#include <lac/vector.h>
#include <vector>

namespace libparest
{
  class PerStepStatistics;
}


namespace libparest
{
  using namespace dealii;


  namespace Slave
  {

    class Base : public Subscriptor
    {
      public:
	Base (const std::string    &base_name,
	      const unsigned int    experiment_number,
	      MessageLog::ServerBase &message_log_server);

	virtual void initialize (const Vector<double> &initial_a) = 0;

	virtual void finalize ();
    
	virtual void initialize_gauss_newton_step (const unsigned int step_no);

	virtual void end_gauss_newton_step () = 0;
    
	virtual PerStepStatistics *
	create_and_set_statistics_object () = 0;
    
	virtual void compute_rhs (Vector<double> &rhs,
				  Vector<double> &rhs_a) = 0;

	virtual void compute_information (Vector<float> &contribution) const = 0;
	
	virtual
        void
        forward_backward (const Vector<double> &test_parameter,
                          Vector<double>       &result) = 0;

	virtual
        void
        multiple_forward_backward (const std::vector<Vector<double> > &test_parameters,
                                   std::vector<Vector<double> >       &results);
        
	virtual void compute_updates (const Vector<double> &delta_a) = 0;

	virtual void perform_updates (const Vector<double> &new_parameter,
				      const double          step_length) = 0;

	virtual void compute_trial_residual (const std::vector<double>     trial_alpha,
					     std::vector<Vector<double>*> &slave_contribution,
					     std::vector<double>          &residual) const = 0;

	virtual std::pair<double,double> compute_misfits () const = 0;
    
	virtual void write_solution () const = 0;

	virtual
	double
	estimate_error (Vector<float> &parameter_error,
			unsigned int  &pe_type) = 0;

	virtual
	void
	refine_parameterization (const std::vector<bool> &refinement_indicators,
				 const std::vector<bool> &coarsening_indicators) = 0;

	virtual
	void
	refine_slave (const Vector<double> &new_parameters) = 0;

	virtual
	unsigned int
	n_degrees_of_freedom () const = 0;
    
	unsigned int get_experiment_number () const;

	unsigned int get_iteration_number () const;
    
      protected:
	const unsigned int experiment_number;

	unsigned int iteration_number;
    
	mutable MessageLog::Client message_log;
    
	void write_program_status (const std::string &function,
				   const bool         on_off) const;
    
      private:
	static std::string get_full_name (const std::string  &base_name,
					  const unsigned int  experiment_number);

	virtual
        void
        threaded_forward_backward (const std::vector<Vector<double> > &test_parameters,
                                   std::vector<Vector<double> >       &results,
                                   const unsigned int                  thread_no,
                                   const unsigned int                  n_threads);
    };
 
  }

}


//----------------------------   slave.h     ---------------------------
// end of #ifndef __libparest__slave_h
#endif
//----------------------------   slave.h     ---------------------------
