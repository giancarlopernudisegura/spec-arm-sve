#include <libparest/slave/slave.h>
#include <libparest/utilities.h>

#include <base/utilities.h>
#include <base/multithread_info.h>


namespace libparest
{
  namespace Slave
  {
    

/* ----------------------- Base ----------------------- */


    Base::Base (const std::string      &base_name,
		const unsigned int      experiment_number,
		MessageLog::ServerBase &message_log_server)
		    :
		    experiment_number (experiment_number),
		    iteration_number (0),
		    message_log (message_log_server,
				 get_full_name(base_name, experiment_number))
    {}



    void
    Base::finalize ()
    {}



    void
    Base::initialize_gauss_newton_step (const unsigned int step_no)
    {
      iteration_number = step_no;
    }



    void
    Base::
    multiple_forward_backward (const std::vector<Vector<double> > &test_parameters,
                               std::vector<Vector<double> >       &results)
    {
      Assert (test_parameters.size() == results.size(),
              ExcInternalError());

                                       
                                       
      Threads::ThreadGroup<> threads;
      for (unsigned int i=0; i<multithread_info.n_default_threads; ++i)
        threads
          +=
          Threads::spawn (*this, &Base::threaded_forward_backward)
          (test_parameters, results,
           i, multithread_info.n_default_threads);

      threads.join_all ();
    }



    void
    Base::
    threaded_forward_backward (const std::vector<Vector<double> > &test_parameters,
                               std::vector<Vector<double> >       &results,
                               const unsigned int                  thread_no,
                               const unsigned int                  n_threads)
    {
      for (unsigned int i=0; i<test_parameters.size(); ++i)
        if (i % n_threads == thread_no)
          forward_backward (test_parameters[i], results[i]);
    }
    


    unsigned int
    Base::get_experiment_number () const
    {
      return experiment_number;
    }



    unsigned int
    Base::get_iteration_number () const
    {
      return iteration_number;
    }



    std::string
    Base::get_full_name (const std::string   &base_name,
			 const unsigned  int experiment_number)
    {
#ifdef HAVE_STD_STRINGSTREAM
      std::ostringstream o;
#else
      std::ostrstream o;
#endif
      o << base_name << ' ' << experiment_number;
#ifndef HAVE_STD_STRINGSTREAM
      o << std::ends;
#endif
      return o.str();
    }




    void
    Base::write_program_status (const std::string &function_name,
				const bool         on_off) const
    {

      message_log << set_priority(3)
		  << (on_off == true ?
		      "program status: et" :
		      "program status: ef")
		  << Utilities::int_to_string(get_experiment_number(),3)
		  << ' '
		  << function_name
		  << std::endl << std::flush;
    }
 
  }
  
}
