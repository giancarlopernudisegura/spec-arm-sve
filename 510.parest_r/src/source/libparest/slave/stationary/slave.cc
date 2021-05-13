/* $Id: slave.cc 2721 2006-06-07 20:08:56Z wolf $ */

#include <libparest/slave/stationary/slave.h>
#include <libparest/slave/stationary/global_matrix.h>
#include <libparest/utilities.h>


namespace libparest
{
  namespace Slave
  {
    namespace Stationary
    {
  
/* ------------------ Slave ----------------- */  


      template <int dim, typename number>
      Slave<dim,number>::
      Slave (const std::string      &base_name,
             const unsigned int      experiment_number,
             MessageLog::ServerBase &message_log_server)
		      :
		      Slave::Base (base_name,
				   experiment_number,
				   message_log_server),
                      global_matrix (0)
      {}



      template <int dim, typename number>
      Slave<dim,number>::~Slave ()
      {
					 
					 
	delete_ptr (global_matrix);
      }





      template <int dim, typename number>
      void
      Slave<dim,number>::
      initialize_gauss_newton_step (const unsigned int step_no)
      {
	write_program_status ("init GN", true);
	Slave::Base::initialize_gauss_newton_step (step_no);
	build_matrix_and_rhs ();
	write_program_status ("init GN", false);
      }



      template <int dim, typename number>
      void
      Slave<dim,number>::
      end_gauss_newton_step ()
      {
					 
					 
	state_discretization->fill_statistics (*present_statistics);
  
					 
					 
					 
					 
					 
	global_matrix->clear ();
	right_hand_side.reinit (0,0);
	update.reinit (0,0);


					 
					 
					 
	present_statistics = 0;  
      }



      template <int dim, typename number>
      void
      Slave<dim,number>::
      compute_trial_residual (const std::vector<double>     trial_alpha,
			      std::vector<Vector<double>*> &slave_contribution,
			      std::vector<double>          &residual) const
      {
	write_program_status ("residual", true);

	const unsigned int n_alphas = trial_alpha.size();
	Assert (slave_contribution.size() == n_alphas, ExcInternalError());
	Assert (residual.size() == n_alphas, ExcInternalError());

	std::vector<Threads::Thread<double> > threads;
	for (unsigned int i=0; i<n_alphas; ++i)
	  threads.push_back (Threads::spawn (*this,
                                             &Slave<dim,number>::compute_trial_residual_1)
			     (trial_alpha[i], *slave_contribution[i]));
	for (unsigned int i=0; i<n_alphas; ++i)
	  residual[i] = threads[i].return_value();

	write_program_status ("residual", false);
      }



      template <int dim, typename number>
      void
      Slave<dim,number>::
      refine_parameterization (const std::vector<bool> &refinement_indicators,
			       const std::vector<bool> &coarsening_indicators)
      {
	this->parameter_discretization->refine_parameterization (refinement_indicators,
								 coarsening_indicators);

	this->message_log << set_priority(3)
			  << "New parameter discretization: "
			  << this->parameter_discretization->triangulations->parameter.n_active_cells()
			  << " cells, "
			  << this->parameter_discretization->dof_handlers->parameter.n_dofs()
			  << " parameter dofs."
			  << std::endl << std::flush;
      }



      template <int dim, typename number>
      unsigned int
      Slave<dim,number>::
      n_degrees_of_freedom () const 
      {
	return state_discretization->dof_handlers->global.n_dofs();
      }



      template <int dim, typename number>
      const GlobalMatrix::Matrix<number> &
      Slave<dim,number>::
      get_global_matrix () const 
      {
	return *global_matrix;
      }
      


      template <int dim, typename number>
      double
      Slave<dim,number>::
      compute_trial_residual_1 (const double    trial_alpha,
				Vector<double> &slave_contribution) const
      {
					 
	const std::vector<unsigned int> &block_sizes
	  = state_discretization->dof_handlers->block_sizes;

	BlockVector<double> trial_residual;
	BlockVector<double> trial_iterate (block_sizes);
	trial_iterate = present_iterate;
	if (trial_alpha != 0)
	  trial_iterate.add (trial_alpha, update);

					 
					 
	if (true)
	  {
	    Vector<double> tmp(parameter_discretization->dof_handlers->parameter.n_dofs());
	    state_discretization->dof_handlers->interpolate_parameter (trial_iterate, tmp);
	    parameter_discretization->set_back_to_bounds (tmp);
	    state_discretization->dof_handlers->expand_parameter (tmp,
								  trial_iterate.block(2));
	  };
  
  
	build_rhs (trial_iterate, trial_residual);
					 
					 
					 
					 
					 
					 
	trial_iterate = trial_residual;
	global_matrix->A_inverse->vmult (trial_residual.block(0));
	global_matrix->A_inverse->vmult (trial_residual.block(1));
	state_discretization->dof_handlers->constraints.distribute (trial_residual);

					 
					 
	const double
          residual = (trial_iterate.block(0) * trial_residual.block(0) +
                      trial_iterate.block(1) * trial_residual.block(1));

	Assert (residual >= 0, ExcInternalError());

	slave_contribution = trial_residual.block(2);

	return residual;
      }





      template <int dim, typename number>
      void
      Slave<dim,number>::
      compute_rhs (Vector<double> &rhs,
                   Vector<double> &rhs_a)
      {
	write_program_status ("rhs", true);


	BlockVector<number> tmp (state_discretization->dof_handlers->true_block_sizes);
					 
	tmp.block(1) = right_hand_side.block(1);
	global_matrix->A_inverse->vmult (tmp.block(1));
	global_matrix->M        ->vmult (tmp.block(0), tmp.block(1));
  
					 
	tmp.block(1) = right_hand_side.block(0);
	tmp.block(1) -= tmp.block(0);
  
					 

        global_matrix->A_inverse->Tvmult (tmp.block(1));
	global_matrix->C_T      ->vmult (rhs, tmp.block(1));

					 
					 
	rhs.scale (-1.);
	rhs += right_hand_side.block(2);
  
					 
					 
	rhs_a = right_hand_side.block(2);

	write_program_status ("rhs", false);
      }



      template <int dim, typename number>
      void
      Slave<dim,number>::
      forward_backward (const Vector<double> &test_parameter,
                        Vector<double>       &result)
      {
	Assert (test_parameter.size() == result.size(), ExcInternalError());
	
	write_program_status ("forward-back", true);

	BlockVector<number> tmp (state_discretization->dof_handlers->true_block_sizes);

					 
	global_matrix->C        ->vmult (tmp.block(0), test_parameter);
	global_matrix->A_inverse->vmult (tmp.block(0));
	global_matrix->M        ->vmult (tmp.block(1), tmp.block(0));
	global_matrix->A_inverse->Tvmult (tmp.block(1));
	global_matrix->C_T      ->vmult (result, tmp.block(1));

	write_program_status ("forward-back", false);
      }



      template <int dim, typename number>
      void
      Slave<dim,number>::
      compute_updates (const Vector<double> &delta_a)
      {
	write_program_status ("comp. update", true);

	BlockVector<double> tmp (state_discretization->dof_handlers->block_sizes);
	state_discretization->dof_handlers->expand_parameter (delta_a, tmp.block(2));

					 
	update.reinit (state_discretization->dof_handlers->block_sizes);
	update.block(2) = tmp.block(2);
  
					 
					 
					 
					 
	global_matrix->C->vmult (tmp.block(0), delta_a);
	update.block(0) = right_hand_side.block(1);
	update.block(0) -= tmp.block(0);
	global_matrix->A_inverse->vmult (update.block(0));
					 
	state_discretization->dof_handlers->constraints.distribute (update);


					 
					 
					 
					 
	global_matrix->M->vmult (tmp.block(0), update.block(0));
	update.block(1) = right_hand_side.block(0);
	update.block(1) -= tmp.block(0);
	global_matrix->A_inverse->Tvmult (update.block(1));
					 
	state_discretization->dof_handlers->constraints.distribute (update);

	write_program_status ("comp. update", false);
      }



      template <int dim, typename number>
      void
      Slave<dim,number>::
      perform_updates (const Vector<double> &new_parameter,
                       const double          step_length)
      {


	write_program_status ("perf. update", true);

					 
					 
	present_iterate.block(0).add (step_length, update.block(0));
	present_iterate.block(1).add (step_length, update.block(1));

					 
					 
					 
					 
	state_discretization->dof_handlers
          ->expand_parameter (new_parameter,
                              present_iterate.block(2));
    
					 
					 
	update.reinit (0, 0);

	write_program_status ("perf. update", false);
      }


  


      template
      class Slave<deal_II_dimension,double>;

      template
      class Slave<deal_II_dimension,float>;
    }
  }
}
