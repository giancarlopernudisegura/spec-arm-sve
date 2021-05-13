#include <libparest/master/master.h>
#include <libparest/utilities.h>

#include <base/utilities.h>

#include <algorithm>

namespace libparest
{
  namespace Master
  {
    
/* ------------- Master::PerStepStatistics -------------- */

    Master::PerStepStatistics::
    PerStepStatistics (const PerStepStatisticsList &slave_statistics)
		    :
		    slave_statistics (slave_statistics),
		    active_constraints (0)
    {}



    Master::PerStepStatistics::
    ~PerStepStatistics ()
    {
      for (unsigned int i=0; i<slave_statistics.size(); ++i)
	delete_ptr (slave_statistics[i]);
      slave_statistics.clear ();
    }



    std::list<std::string>
    Master::PerStepStatistics::
    declare_entries () const
    {
				       
				       
      std::vector<Threads::Thread<std::list<std::string> > > threads;
      unsigned int slave = 0;
      for (PerStepStatisticsList::const_iterator
	     i = slave_statistics.begin();
	   i != slave_statistics.end();
	   ++i, ++slave)
	threads.push_back
	  (Threads::spawn (**i,
			   &libparest::PerStepStatistics::declare_entries)());
      Assert (threads.size() == slave_statistics.size(),
	      ExcInternalError());
  
				       
      std::list<std::string> entries;
      for (unsigned int slave = 0; slave < slave_statistics.size(); ++slave)
	{
	  std::list<std::string> ret_val = threads[slave].return_value();

					   
					   
					   
	  for (std::list<std::string>::iterator p = ret_val.begin();
	       p != ret_val.end(); ++p)
	    *p = std::string("Experiment ") +
		 Utilities::int_to_string(slave, Utilities::needed_digits(slave_statistics.size())) +
		 ": " +
		 *p;

					   
					   
	  entries.insert (entries.end(), ret_val.begin(), ret_val.end());
	};

      entries.push_back ("Active constraints");
  
      return entries;
    }



    std::list<double>
    Master::PerStepStatistics::
    get_values () const
    {
				       
				       
      std::vector<Threads::Thread<std::list<double> > > threads;
      unsigned int slave = 0;
      for (PerStepStatisticsList::const_iterator
	     i = slave_statistics.begin();
	   i != slave_statistics.end();
	   ++i, ++slave)
    
	threads.push_back (Threads::spawn (**i,
					   &libparest::PerStepStatistics::get_values)());

      Assert (threads.size() == slave_statistics.size(),
	      ExcInternalError());

				       
      std::list<double> values;
      for (slave=0; slave<slave_statistics.size(); ++slave)
	{
	  const std::list<double> ret_val = threads[slave].return_value ();
	  values.insert (values.end(), ret_val.begin(), ret_val.end());
	};

      values.push_back (active_constraints);
  
      return values;
    }



/* ----------------------- Master ----------------------- */



    const char * Master::graphical_output_labels[]
    = { "init GN", "rhs", "forward-back", "comp. update",
	"perf. update", "residual", "comp. misfit", "write output",
	"error est."    };

    const unsigned int Master::n_graphical_output_labels 
    = 9;



    Master::
    Master (MessageLog::ServerBase &message_log_server)
		    :
		    parameter_representation (0),
		    message_log (message_log_server, "Master")
    {}



    void
    Master::attach_slave (Slave::Base *new_slave)
    {
      slaves.push_back (new_slave);
    }



    void
    Master::detach_slave (const Slave::Base *slave)
    {
      for (unsigned int i=0; i<slaves.size(); ++i)
	if (slaves[i] == slave)
	  {
	    slaves[i] = 0;
	    slaves.erase (slaves.begin() + i);
	    return;
	  };
  
				       
      Assert (false, ExcSlaveNotFound());
    }



    void
    Master::
    attach_parameter_representation (Parameter::Base *p)
    {
				       
      parameter_representation = p;
    }



    void
    Master::
    initialize ()
    {
				       
				       
      parameter_representation->preset_initial_values (present_iterate);
  
				       
				       
				       
      Threads::ThreadGroup<> threads;
      for (unsigned int i=0; i<slaves.size(); ++i)
	threads += Threads::spawn (*slaves[i], &Slave::Base::initialize)
		   (present_iterate);
      threads.join_all ();
    }



    void
    Master::
    finalize ()
    {
				       
				       
      Threads::ThreadGroup<> threads;
      for (unsigned int i=0; i<slaves.size(); ++i)
	threads += Threads::spawn (*slaves[i], &Slave::Base::finalize)();
      threads.join_all ();

				       
      parameter_representation->finalize ();  
    }



    void
    Master::
    initialize_gauss_newton_step (const unsigned int step_no)
    {
      Assert (parameter_representation != 0, ExcInternalError());

      write_program_status ("init GN", true);

				       
				       
      iteration_number = step_no;
				       
      const unsigned int n_parameters = parameter_representation->n_dofs();  

				       /* ----------- slaves ----------- */

				       
				       
				       
      Threads::ThreadGroup<> threads;
      for (unsigned int i=0; i<slaves.size(); ++i)
	threads += Threads::spawn (*slaves[i],
				   &Slave::Base::initialize_gauss_newton_step)
		   (step_no);
      threads.join_all ();

				       
				       
      std::vector<Vector<double> > rhs_contributions (slaves.size());
      std::vector<Vector<double> > rhs_contributions_a (slaves.size());
      for (unsigned int i=0; i<slaves.size(); ++i)
	{
	  rhs_contributions[i].reinit (n_parameters);
	  rhs_contributions_a[i].reinit (n_parameters);
	  threads += Threads::spawn (*slaves[i], &Slave::Base::compute_rhs)
		     (rhs_contributions[i], rhs_contributions_a[i]);
	}
      threads.join_all ();

				       
				       
				       
				       
      std::vector<Vector<float> > information_contribution (slaves.size());
      for (unsigned int i=0; i<slaves.size(); ++i)
	{
	  information_contribution[i].reinit (n_parameters);
	  threads += Threads::spawn (*slaves[i], &Slave::Base::compute_information)
		     (information_contribution[i]);
	}
      threads.join_all ();

				       
      Vector<float> information_content (n_parameters);
      for (unsigned int i=0; i<slaves.size(); ++i)
	information_content += information_contribution[i];
      information_contribution.resize (0);
      
      
				       /* ----------- master ----------- */

				       
				       
				       
				       
      parameter_representation
	->initialize_gauss_newton_step (iteration_number,
					information_content);

      threads += Threads::spawn (*parameter_representation,
				 &Parameter::Base::build_rhs)
		 (present_iterate, right_hand_side);
      threads += Threads::spawn (*parameter_representation,
				 &Parameter::Base::build_matrices)
		 (present_iterate);

				       /* ----------- bounds ----------- */
      
				       
				       
      active_bounds_constraints = std::vector<bool> (n_parameters, false);
  
				       
				       
				       
				       
				       
      std::vector<bool> at_lower_bound (n_parameters);
      std::vector<bool> at_upper_bound (n_parameters);

      threads += Threads::spawn (*parameter_representation,
				 &Parameter::Base::at_lower_bounds)
		 (present_iterate, at_lower_bound);
      threads += Threads::spawn (*parameter_representation,
				 &Parameter::Base::at_upper_bounds)
		 (present_iterate, at_upper_bound);
      threads.join_all ();

				       
				       
				       
				       
				       
      Vector<double> mu_weights (n_parameters);
      for (unsigned int i=0; i<n_parameters; ++i)
	if (at_lower_bound[i])
	  mu_weights(i) = -1;
	else if (at_upper_bound[i])
	  mu_weights(i) = 1;

				       
				       
				       
      threads.join_all ();
      Vector<double> rhs_a (n_parameters);
      rhs_a = right_hand_side;
      for (unsigned int i=0; i<slaves.size(); ++i)
	{
	  right_hand_side += rhs_contributions[i];
	  rhs_a += rhs_contributions_a[i];
	}

				       
				       
				       
				       
				       
				       
				       
      rhs_a.scale (mu_weights);
      std::vector<bool> inactive_dofs (mu_weights.size(), false);
      std::transform (mu_weights.begin(), mu_weights.end(), inactive_dofs.begin(),
		      std::bind2nd (std::equal_to<double>(), 0));
      Vector<double> mu_a (n_parameters);  
      parameter_representation->get_mass_matrix().solve (mu_a, rhs_a, inactive_dofs);
				       
      rhs_a.reinit (0);

				       
				       
				       
				       
				       
      for (unsigned int i=0; i<n_parameters; ++i)
	if ((mu_a(i) > 0) && (at_lower_bound[i] || at_upper_bound[i]))
	  {
	    active_bounds_constraints[i] = true;
	    right_hand_side(i) = 0;
	  }

      const unsigned int n_fixed = std::count(active_bounds_constraints.begin(),
					      active_bounds_constraints.end(),
					      true);  
      present_statistics->active_constraints = n_fixed;
  
      write_program_status ("init GN", false);
    }



    void
    Master::
    end_gauss_newton_step ()
    {
				       
				       
      Threads::ThreadGroup<> threads;
      threads += Threads::spawn (*parameter_representation,
				 &Parameter::Base::end_gauss_newton_step)();
      for (unsigned int i=0; i<slaves.size(); ++i)
	threads += Threads::spawn (*slaves[i],
				   &Slave::Base::end_gauss_newton_step)();
  
				       
      active_bounds_constraints.clear ();
  
      threads.join_all ();

				       
				       
				       
      present_statistics = 0;
    }



    libparest::PerStepStatistics *
    Master::
    create_and_set_statistics_object ()
    {
      PerStepStatistics::PerStepStatisticsList sub_statistics;
      for (unsigned int i=0; i<slaves.size(); ++i)
	sub_statistics.push_back (slaves[i]->create_and_set_statistics_object());
      present_statistics = new PerStepStatistics(sub_statistics);
      return present_statistics;
    }



    void
    Master::
    compute_updates (const Vector<double> &delta_a)
    {
      write_program_status ("comp. update", true);

				       
				       
				       
      for (unsigned int i=0; i<delta_a.size(); ++i)
	Assert ((active_bounds_constraints[i] == false) ||
		(delta_a(i) == 0),
		ExcInternalError());
  
      update.reinit (parameter_representation->n_dofs());
      update = delta_a;

				       
				       
      Threads::ThreadGroup<> threads;
      for (unsigned int i=0; i<slaves.size(); ++i)
	threads += Threads::spawn (*slaves[i], &Slave::Base::compute_updates)
		   (delta_a);
      threads.join_all ();

      write_program_status ("comp. update", false);
    }



    void
    Master::
    perform_updates (const double step_length)
    {
      write_program_status ("perf. update", true);

				       
      present_iterate.add (step_length, update);
      parameter_representation->set_back_to_bounds (present_iterate);
  
				       
				       



				       
				       
      Threads::ThreadGroup<> threads;
      for (unsigned int i=0; i<slaves.size(); ++i)
	threads += Threads::spawn (*slaves[i],
				   &Slave::Base::perform_updates)
		   (present_iterate, step_length);
      threads.join_all ();

      write_program_status ("perf. update", false);
    }



    void
    Master::
    compute_trial_residual (const std::vector<double>  trial_alpha,
			    std::vector<double>       &residual) const
    {
      write_program_status ("residual", true);

      const unsigned int n_parameters = present_iterate.size();
  
				       
				       
      std::vector<std::vector<double> >
	slave_residuals (slaves.size(), std::vector<double>(trial_alpha.size()));
      std::vector<std::vector<Vector<double>*> >
	slave_contributions (slaves.size(), std::vector<Vector<double>*>(trial_alpha.size()));
      for (unsigned int s=0; s<slaves.size(); ++s)
	for (unsigned int i=0; i<trial_alpha.size(); ++i)
	  slave_contributions[s][i] = new Vector<double> (n_parameters);
  
      Threads::ThreadGroup<> threads;
      for (unsigned int i=0; i<slaves.size(); ++i)
	{
	  threads += Threads::spawn (*slaves[i], &Slave::Base::compute_trial_residual)
		     (trial_alpha, slave_contributions[i], slave_residuals[i]);
	};
  
				       
				       
				       
				       
      std::vector<Vector<double> >
	trial_residual (trial_alpha.size(), Vector<double>(n_parameters));
      std::vector<Vector<double> >
	trial_iterate (trial_alpha.size(),  Vector<double>(n_parameters));
      for (unsigned int i=0; i<trial_alpha.size(); ++i)
	{
	  trial_iterate[i] = present_iterate;
	  if (trial_alpha[i] != 0)
	    trial_iterate[i].add (trial_alpha[i], update);
	  parameter_representation->set_back_to_bounds (trial_iterate[i]);

	  threads += Threads::spawn (*parameter_representation,
				     &Parameter::Base::build_rhs)
		     (trial_iterate[i], trial_residual[i]);
	};

				       
				       
				       
      threads.join_all ();

				       
				       
				       
				       
				       
      for (unsigned int i=0; i<trial_alpha.size(); ++i)
	for (unsigned int s=0; s<slaves.size(); ++s)
	  trial_residual[i] += *slave_contributions[s][i];
      Assert (active_bounds_constraints.size() == n_parameters, ExcInternalError());
      for (unsigned int j=0; j<n_parameters; ++j)
	if (active_bounds_constraints[j] == true)
	  for (unsigned int i=0; i<trial_alpha.size(); ++i)
	    trial_residual[i](j) = 0;
  
				       
				       

      std::vector<double> own_residual(trial_alpha.size());
      for (unsigned int i=0; i<trial_alpha.size(); ++i)
	own_residual[i]
	  = parameter_representation->compute_inverse_mass_norm_square (trial_residual[i]);

				       
				       
      residual = own_residual;
      for (unsigned int i=0; i<trial_alpha.size(); ++i)
	for (unsigned int s=0; s<slaves.size(); ++s)
	  residual[i] += slave_residuals[s][i];
  
      for (unsigned int s=0; s<slaves.size(); ++s)
	for (unsigned int i=0; i<trial_alpha.size(); ++i)
	  delete_ptr (slave_contributions[s][i]);

      write_program_status ("residual", false);











    }



    std::pair<double,double>
    Master::compute_misfits () const
    {
      write_program_status ("comp. misfit", true);

				       
				       
      std::vector<Threads::Thread<std::pair<double,double> > > threads;
      for (unsigned int i=0; i<slaves.size(); ++i)
	threads.push_back (Threads::spawn (*slaves[i], &Slave::Base::compute_misfits)());
  
				       
				       
				       
      std::pair<double,double> misfits (parameter_representation->compute_model_misfit(present_iterate),
					0.);

				       
				       
      for (unsigned int i=0; i<slaves.size(); ++i)
	{
	  misfits.first  += threads[i].return_value().first;
	  misfits.second += threads[i].return_value().second;
	};

      write_program_status ("comp. misfit", false);

      return misfits;
    }



    void
    Master::
    write_solution () const 
    {
      write_program_status ("write output", true);

				       
				       
				       
      parameter_representation->write_solution (present_iterate);

				       
				       
				       
      Threads::ThreadGroup<> threads;
      for (unsigned int i=0; i<slaves.size(); ++i)
	threads += Threads::spawn (*slaves[i], &Slave::Base::write_solution)();
      threads.join_all ();
  
      write_program_status ("write output", false);
    }




    double
    Master::
    estimate_error (Vector<float> &parameter_error,
		    unsigned int  &pe_type)
    {
      write_program_status ("error est.", true);

				       
				       
      std::vector<Vector<float> > error_contributions (slaves.size());
      std::vector<unsigned int>   pe_types (slaves.size());
  
      std::vector<Threads::Thread<double> > threads;
      for (unsigned int i=0; i<slaves.size(); ++i)
	threads.push_back (Threads::spawn (*slaves[i], &Slave::Base::estimate_error)
			   (error_contributions[i], pe_types[i]));

				       
				       
				       
				       
      threads[0].join ();
      const unsigned int pe_size = error_contributions[0].size();
      double error_sum = 0;
      parameter_error.reinit (pe_size);  
      pe_type = pe_types[0];
      for (unsigned int i=0; i<slaves.size(); ++i)
	{
	  threads[i].join ();
	  if (pe_size != 0)
	    parameter_error += error_contributions[i];
	  else
	    Assert (error_contributions[i].size() == 0, ExcInternalError());
      
	  error_sum += threads[i].return_value ();
	  Assert (pe_types[i] == pe_type, ExcInternalError());
	};
  
      write_program_status ("error est.", false);

      return error_sum;
    }



    void
    Master::
    refine_parameterizations (const Vector<float> &parameter_error,
			      const unsigned int   pe_type)
    {
      Vector<double> my_new_parameter;
      std::vector<bool> refinement_indicators, coarsening_indicators;
				       
				       
      parameter_representation->refine_parameterization (parameter_error,
							 pe_type,
							 present_iterate,
							 my_new_parameter,
							 refinement_indicators,
							 coarsening_indicators);

				       
				       
      present_iterate = my_new_parameter;
  
  
      Threads::ThreadGroup<> threads;
				       
				       
      for (unsigned int i=0; i<slaves.size(); ++i)
	threads += Threads::spawn (*slaves[i], &Slave::Base::refine_parameterization)
		   (refinement_indicators, coarsening_indicators);
      threads.join_all ();
    }



    void
    Master::
    refine_slaves ()
    {
      Threads::ThreadGroup<> threads;
      for (unsigned int i=0; i<slaves.size(); ++i)
	threads += Threads::spawn (*slaves[i], &Slave::Base::refine_slave)
		   (present_iterate);
      threads.join_all ();
    }



    unsigned int
    Master::
    compute_global_n_dofs () const
    {
      std::vector<unsigned int> n_dofs (slaves.size());
  
				       
      std::vector<Threads::Thread<unsigned int> > threads;
      for (unsigned int i=0; i<slaves.size(); ++i)
	threads.push_back (Threads::spawn (*slaves[i],
					   &Slave::Base::n_degrees_of_freedom)());

				       
      unsigned int sum = 0;
      for (unsigned int i=0; i<slaves.size(); ++i)
	sum += threads[i].return_value();
  
      return sum;
    }



    Master::SchurComplementMatrix
    Master::
    get_schur_matrix ()
    {
      return SchurComplementMatrix(*this);
    }



    const Vector<double> &
    Master::
    get_schur_rhs () const
    {
      return right_hand_side;
    }



    const Vector<double> &
    Master::
    get_present_iterate () const
    {
      return present_iterate;
    }



    unsigned int
    Master::
    get_iteration_number () const
    {
      return iteration_number;
    }



    void
    Master::
    write_program_status (const std::string &function_name,
			  const bool         on_off) const
    {
      message_log << set_priority(3)
		  << (on_off == true ?
		      "program status: mt" :
		      "program status: mf")
		  << ' '
		  << function_name
		  << std::endl << std::flush;
    }



    void
    Master::
    declare_graphical_output_labels (MessageLog::Client &message_log)
    {
      for (unsigned int i=0; i<n_graphical_output_labels; ++i)
	message_log << set_priority(3)
		    << "program status: declare master: line: "
		    << graphical_output_labels[i]
		    << std::endl << std::flush;
      message_log << set_priority(3)
		  << "program status: declare master: end"
		  << std::endl << std::flush;
    }



    Master::SchurComplementMatrix::
    SchurComplementMatrix (const Master &master_object)
		    :
		    master_object (&master_object)
    {}



    Master::SchurComplementMatrix::
    SchurComplementMatrix (const SchurComplementMatrix &scm)
		    :
		    master_object (scm.master_object)
    {}



    void
    Master::SchurComplementMatrix::
    vmult (Vector<double>       &out,
	   const Vector<double> &in_) const
    {
      master_object->write_program_status ("forward-back", true);

  				     
				       
				       
      const std::vector<bool> &active_constraints
	= master_object->active_bounds_constraints;

				       
				       
				       
      Vector<double> in (in_.size());
      in = in_;
      if (true)
	{
	  std::vector<bool>::const_iterator    c = active_constraints.begin();
	  Vector<double>::iterator             i = in.begin();
	  const Vector<double>::const_iterator e = in.end();

	  for (; i!=e; ++i, ++c)
	    if (*c == true)
	      *i = 0;
	};
  
      master_object->parameter_representation
	->get_regularization_matrix().vmult (out, in);

				       
				       
      std::vector<Vector<double> > tmp (master_object->slaves.size());
      Threads::ThreadGroup<> threads;
      for (unsigned int i=0; i<master_object->slaves.size(); ++i)
	{
	  tmp[i].reinit (out.size());
	  threads += Threads::spawn (*master_object->slaves[i],
				     &Slave::Base::forward_backward)
		     (in, tmp[i]);
	};
      threads.join_all ();
  
				       
      for (unsigned int i=0; i<master_object->slaves.size(); ++i)
	out += tmp[i];

				       
				       
				       
				       
				       
				       
				       
				       
				       
				       
				       
				       
      if (true)
	{
	  std::vector<bool>::const_iterator    c = active_constraints.begin();
	  Vector<double>::iterator             o = out.begin();
	  const Vector<double>::const_iterator e = out.end();
	  Vector<double>::const_iterator       i = in_.begin();

	  for (; o!=e; ++o, ++c, ++i)
	    if (*c == true)
	      *o = *i;
	};

      master_object->write_program_status ("forward-back", false);
    }



    void
    Master::SchurComplementMatrix::
    multiple_vmult (std::vector<Vector<double> >       &out,
                    const std::vector<Vector<double> > &in_) const
    {
      Assert (out.size() == in_.size(), ExcInternalError());
      
      master_object->write_program_status ("forward-back", true);

  				     
				       
				       
      const std::vector<bool> &active_constraints
	= master_object->active_bounds_constraints;

				       
				       
				       
      std::vector<Vector<double> > in (in_.size());

      for (unsigned int v=0; v<in.size(); ++v)
	{
          in[v].reinit (in_[v].size());
          in[v] = in_[v];
          
	  std::vector<bool>::const_iterator    c = active_constraints.begin();
	  Vector<double>::iterator             i = in[v].begin();
	  const Vector<double>::const_iterator e = in[v].end();

	  for (; i!=e; ++i, ++c)
	    if (*c == true)
	      *i = 0;
	};
  
      master_object->parameter_representation
	->get_regularization_matrix().multiple_vmult (out, in);

				       
				       
      std::vector<std::vector<Vector<double> > >
        tmp (master_object->slaves.size(),
             std::vector<Vector<double> > (in.size()));
      Threads::ThreadGroup<> threads;
      for (unsigned int i=0; i<master_object->slaves.size(); ++i)
	{
          for (unsigned int v=0; v<in.size(); ++v)
            tmp[i][v].reinit (out[v].size());
          
	  threads += Threads::spawn (*master_object->slaves[i],
				     &Slave::Base::multiple_forward_backward)
		     (in, tmp[i]);
	}
      threads.join_all ();
  
				       
      for (unsigned int i=0; i<master_object->slaves.size(); ++i)
        for (unsigned int v=0; v<in.size(); ++v)
          out[v] += tmp[i][v];

				       
				       
				       
				       
				       
				       
				       
				       
				       
				       
				       
				       
      for (unsigned int v=0; v<in.size(); ++v)
	{
	  std::vector<bool>::const_iterator    c = active_constraints.begin();
	  Vector<double>::iterator             o = out[v].begin();
	  const Vector<double>::const_iterator e = out[v].end();
	  Vector<double>::const_iterator       i = in_[v].begin();

	  for (; o!=e; ++o, ++c, ++i)
	    if (*c == true)
	      *o = *i;
	};

      master_object->write_program_status ("forward-back", false);
    }
    


    double
    Master::SchurComplementMatrix::
    matrix_scalar_product (const Vector<double> &u,
			   const Vector<double> &v) const
    {
      Vector<double> tmp (u.size());
      vmult (tmp, v);
      return tmp*u;
    }



    unsigned int
    Master::SchurComplementMatrix::m() const
    {
      return master_object->parameter_representation->n_dofs();
    }



    unsigned int
    Master::SchurComplementMatrix::n() const
    {
      return master_object->parameter_representation->n_dofs();
    }



    const std::vector<bool> &
    Master::SchurComplementMatrix::get_active_constraints() const
    {
      return master_object->active_bounds_constraints;
    }
 
  }
}
