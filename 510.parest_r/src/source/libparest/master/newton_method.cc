#include <libparest/utilities.h>
#include <libparest/master/step_length_control.h>
#include <libparest/master/newton_method.h>
#include <libparest/grid_transfer.h>
#include <libparest/parallel/control.h>
#include <libparest/utilities.h>
#include <base/parameter_handler.h>
#include <base/utilities.h>
#include <lac/vector_memory.h>
#include <lac/solver_control.h>
#include <lac/precondition.h>
#include <lac/solver_selector.h>
#include <dofs/dof_handler.h>
#include <dofs/dof_accessor.h>
#include <grid/tria_iterator.h>
#include <fe/fe.h>
#include <numerics/vectors.h>
#include <numerics/data_out.h>

#include <fstream>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <cmath>

namespace libparest
{
  namespace Master
  {

    template <int dim>
    NewtonMethod<dim>::Parameters::Parameters ()
		    :
		    max_inner_cg_iterations (0),
		    reduction_goal (1e-3),
		    output_step_interval (1),
		    max_iterations (1),
		    target_measurement_misfit (0),
                    solver_type ("cg"),
                    write_hessian (false),
		    write_schur_rhs (false)
    {}



    template <int dim>
    NewtonMethod<dim>::Parameters::MeshRefinementDetails::
    MeshRefinementDetails ()
		    :
		    min_initial_steps (1),
		    max_initial_steps (5),
		    initial_reduction (0.01),
		    reduction_per_mesh (1./std::sqrt(std::sqrt(2.))),
		    minimal_step_length (0.15),
		    minimal_average_step_length (0.25)
    {}
    


    template <int dim>
    void
    NewtonMethod<dim>::Parameters::
    declare_parameters (ParameterHandler &prm)
    {
      prm.enter_subsection ("Newton method");
      {
	prm.declare_entry ("Max inner CG iterations", "100",
			   Patterns::Integer(),
			   "The maximal number of iterations performed to solve the Schur "
			   "complement system. If this number is exceeded, the iterative "
			   "solve is considered to have failed, and a direct solve is "
			   "attempted.");
	prm.declare_entry ("Reduction goal", "0.001",
			   Patterns::Double(),
			   "A reduction factor by which we would like to reduce the nonlinear "
			   "residual before the mesh is refined again. If we can't achieve "
			   "this reduction, for example because nonlinear iterations stall, "
			   "then the mesh is refined anyway to enlarge the search space.");
	prm.declare_entry ("Output step interval", "1",
			   Patterns::Integer(),
			   "The interval between successive nonlinear iterations where "
			   "graphical output is to be generated. Graphical output is "
			   "always generated in the iteration before a mesh is refined.");
	prm.declare_entry ("Maximal number of iterations", "1",
			   Patterns::Integer(),
			   "The maximal number of nonlinear iterations.");
	prm.declare_entry ("Target measurement misfit", "0",
			   Patterns::Double(),
			   "The measurement misfit that, if reached, is considered to be "
			   "sufficient to stop nonlinear iterations and call the solution "
			   "converged.");
        prm.declare_entry ("Solver type", "cg",
                           Patterns::Selection(SolverSelector<>::get_solver_names()
                                               + "|direct"),
			   "The iterative or direct solver that is to be used in solving the "
			   "Schur complement system.");
        prm.declare_entry ("Write hessian", "false",
                           Patterns::Bool(),
			   "Whether or not to write the full Hessian matrix, i.e. the "
			   "Schur complement matrix, to disk in each iteration. Computing the "
			   "Hessian matrix is a very expensive procedure.");
        prm.declare_entry ("Write Schur rhs", "false",
                           Patterns::Bool(),
			   "Whether or not to write the right hand side vector of the Schur "
			   "complement equations to disk.");
        
	prm.enter_subsection ("Mesh refinement details");
	{
	  prm.declare_entry ("Min initial steps", "1",
			     Patterns::Integer(),
			     "Minimal number of steps to be done on the first mesh");
	  prm.declare_entry ("Max initial steps", "5",
			     Patterns::Integer(),
			     "Maximal number of steps to be done on the first mesh");
	  prm.declare_entry ("Initial reduction", "0.01",
			     Patterns::Double (),
			     "Residual reduction requires on initial mesh");
					   
					   
					   
	  prm.declare_entry ("Reduction per mesh", "0.84089642",
			     Patterns::Double (),
			     "Reduction in residual on the present mesh over the previous "
			     "one before we can do the next mesh refinement step.");
	  prm.declare_entry ("Minimal step length", "0.15",
			     Patterns::Double (),
			     "Minimal step length; if smaller than this value, we force "
			     "mesh refinement");
	  prm.declare_entry ("Minimal average step length", "0.25",
			     Patterns::Double (),
			     "Minimal average step length to be obtained over three steps "
			     "or mesh refinement is forced");
	}
	prm.leave_subsection ();
      }
      prm.leave_subsection ();
    }



    template <int dim>
    void
    NewtonMethod<dim>::Parameters::
    parse_parameters (ParameterHandler &prm)
    {
      prm.enter_subsection ("Newton method");
      {
	max_inner_cg_iterations = prm.get_integer ("Max inner CG iterations");
	reduction_goal          = prm.get_double ("Reduction goal");
	output_step_interval    = prm.get_integer ("Output step interval");
	max_iterations = prm.get_integer ("Maximal number of iterations");
	target_measurement_misfit = prm.get_double ("Target measurement misfit");
        solver_type = prm.get ("Solver type");

        write_hessian = prm.get_bool ("Write hessian");
	write_schur_rhs = prm.get_bool ("Write Schur rhs");
        
        prm.enter_subsection ("Mesh refinement details");
	{
	  mesh_refinement_details.min_initial_steps
	    = prm.get_integer ("Min initial steps");
	  mesh_refinement_details.max_initial_steps
	    = prm.get_integer ("Max initial steps");
	  mesh_refinement_details.initial_reduction
	    = prm.get_double ("Initial reduction");
	  mesh_refinement_details.reduction_per_mesh
	    = prm.get_double ("Reduction per mesh");
	  mesh_refinement_details.minimal_step_length
	    = prm.get_double ("Minimal step length");
	  mesh_refinement_details.minimal_average_step_length
	    = prm.get_double ("Minimal average step length");
	}
	prm.leave_subsection ();
      }
      prm.leave_subsection ();
      
      AssertThrow (max_inner_cg_iterations > 0, ExcInternalError());
      AssertThrow (reduction_goal > 0, ExcInternalError());
      AssertThrow (output_step_interval > 0, ExcInternalError());
      AssertThrow (max_iterations > 0, ExcInternalError());      
    }



    template <int dim>
    void
    NewtonMethod<dim>::Parameters::
    delete_parameters ()
    {
      max_inner_cg_iterations   = 0;
      reduction_goal            = 0;
      output_step_interval      = 1;
      max_iterations            = 1;
      target_measurement_misfit = 0;

      solver_type     = "cg";
      write_hessian   = false;
      write_schur_rhs = false;
      
      mesh_refinement_details = MeshRefinementDetails();
    }




    template <int dim>
    NewtonMethod<dim>::PerStepStatistics::PerStepStatistics ()
		    :
		    master_slave_statistics (0),
		    parameters_statistics (0),
		    global_n_dofs (0),
		    global_data_misfit (0),
		    model_misfit (0),
		    step_length (0),
		    final_residual (0),
		    n_cg_iterations (0)
    {}



    template <int dim>
    NewtonMethod<dim>::PerStepStatistics::~PerStepStatistics () 
    {
      delete_ptr (master_slave_statistics);
      delete_ptr (parameters_statistics);
    }



    template <int dim>
    std::list<std::string>
    NewtonMethod<dim>::PerStepStatistics::declare_entries () const
    {
      std::list<std::string> entries;
      entries.push_back ("Global number of degrees of freedom");
      entries.push_back ("Data misfit");
      entries.push_back ("Model misfit");
      entries.push_back ("Chosen step length");
      entries.push_back ("Final residual");
      entries.push_back ("Final parameter error");
      entries.push_back ("Number of inner CG iterations");

      std::list<std::string> entries1 = master_slave_statistics->declare_entries();
      std::list<std::string> entries2 = parameters_statistics->declare_entries();
      entries.insert (entries.end(),
		      entries1.begin(),
		      entries1.end());
      entries.insert (entries.end(),
		      entries2.begin(),
		      entries2.end());
      return entries;
    }



    template <int dim>
    std::list<double>
    NewtonMethod<dim>::PerStepStatistics::get_values () const
    {
      std::list<double> values;

      values.push_back (global_n_dofs);
      values.push_back (global_data_misfit);
      values.push_back (model_misfit);
      values.push_back (step_length);
      values.push_back (final_residual);
      values.push_back (final_parameter_error);
      values.push_back (n_cg_iterations);

      std::list<double> values1 = master_slave_statistics->get_values();
      std::list<double> values2 = parameters_statistics->get_values();
      values.insert (values.end(),
		     values1.begin(),
		     values1.end());
      values.insert (values.end(),
		     values2.begin(),
		     values2.end());
      return values;
    }

 


    template <int dim>
    NewtonMethod<dim>::
    NewtonMethod (const Parameters            &parameters,
		  const GlobalParameters<dim> &global_parameters,
		  MessageLog::ServerBase      &message_log_server,
		  Parameter::Base             &parameter_representation)
		    :
		    parameters (&parameters),
		    global_parameters (&global_parameters),
		    message_log (message_log_server,
				 "GaussNewton"),
		    parameter_representation (&parameter_representation),
		    me_master (0)
    {
				       
				       
      Assert (this->global_parameters->me_world_control.is_master_process (),
	      ExcInternalError());
    }



    template <int dim>
    NewtonMethod<dim>::~NewtonMethod ()
    {
				       
				       
				       
      while (me_slaves.size() > 0)
	{
	  me_master->detach_slave (me_slaves.back());
	  delete_ptr (me_slaves.back());
	  me_slaves.resize (me_slaves.size()-1);
	};

      delete_ptr (me_master);
    }



    template <int dim>
    void
    NewtonMethod<dim>::run ()
    {
				       
      for (iteration_number=1; true; ++iteration_number)
	{
	  initialize_gauss_newton_step ();
	  solve_and_set_update ();
	  compute_and_set_step_length ();
	  postprocess ();

	  const bool stop_if = (iteration_number >= parameters->max_iterations)
			       ||
			       (present_statistics->model_misfit <
				parameters->target_measurement_misfit);
	  
	  end_gauss_newton_step ();

	  if (stop_if)
	    break;
	  
	  maybe_refine_grid ();
	};

      finalize ();
    }



    template <int dim>
    void
    NewtonMethod<dim>::initialize (const Slave::Factory &slave_factory)
    {
      me_master = new Master(message_log.get_server());
      me_master->attach_parameter_representation (parameter_representation);

      create_slaves (slave_factory);
  
				       
      me_master->initialize ();

				       
				       
      compute_initial_statistics ();

				       
				       
				       
				       
      grid_refinement_after_step.push_back (false);
    }

  

    template <int dim>
    void
    NewtonMethod<dim>::finalize ()
    {
      me_master->finalize ();
    }



    template <int dim>
    void
    NewtonMethod<dim>::create_slaves (const Slave::Factory &slave_factory) 
    {
				       
				       
				       
      std::vector<Threads::Thread<std::pair<Slave::Base *,
	Threads::Thread<> > > > threads;
      for (unsigned int j=0; j<this->global_parameters->n_experiments; ++j)
	threads.push_back (Threads::spawn (slave_factory, &Slave::Factory::create_slave)
			   (this->global_parameters->me_world_control,
			    message_log.get_server(),
			    j, this->global_parameters->n_experiments));
  
      this->me_slaves.resize (this->global_parameters->n_experiments);
      for (unsigned int j=0; j<me_slaves.size(); ++j)
	this->me_slaves[j] = threads[j].return_value().first;
  
				       
				       
      for (unsigned int j=0; j<this->global_parameters->n_experiments; ++j)
	this->me_master->attach_slave (this->me_slaves[j]);
    }



    template <int dim>
    void
    NewtonMethod<dim>::compute_initial_statistics () 
    {
      iteration_number = 0;

				       
				       
      statistics.add_step (create_and_set_statistics_object());
  
				       
				       
      Threads::Thread<std::pair<double,double> >
	misfit_thread = Threads::spawn (*me_master, &Master::compute_misfits)();

      const double model_error
	= parameter_representation->compute_model_error (me_master->get_present_iterate());
      misfit_thread.join ();
      const std::pair<double,double> misfits = misfit_thread.return_value();
  
      const unsigned int global_n_dofs = me_master->compute_global_n_dofs();
  
      message_log << set_priority(1)
		  << "Step " << iteration_number
		  << ": N=" << global_n_dofs
		  << ", m(u-z)="
		  << std::setprecision(3) << misfits.second
		  << ", beta r(a)=" << misfits.first
		  << ", J=" << misfits.first + misfits.second
		  << ", error=" << model_error
		  << std::endl << std::flush;

      present_statistics->global_n_dofs         = global_n_dofs;
      present_statistics->global_data_misfit    = misfits.second;
      present_statistics->model_misfit          = misfits.first;
      present_statistics->final_parameter_error = model_error;

				       
				       
				       
				       
				       
				       
				       
				       
				       
      
      message_log << std::endl << std::flush;
    }



    template <int dim>
    void
    NewtonMethod<dim>::initialize_gauss_newton_step () 
    {      
      message_log << set_priority(0)
		  << "Step " << iteration_number
		  << ": starting"
		  << std::endl << std::flush;
      message_log << set_priority(3)
		  << "program status: si" << iteration_number
		  << std::endl << std::flush;

      statistics.add_step (create_and_set_statistics_object());
  
      me_master->initialize_gauss_newton_step (iteration_number);

				       
				       
				       
				       
				       
				       
				       
				       
				       
      if (iteration_number == 1)
	{
	  std::vector<double> res  (1, 0.);
	  std::vector<double> alpha(1, 0.);
	  me_master->compute_trial_residual (alpha, res);
	  dynamic_cast<PerStepStatistics*>(statistics[0])->final_residual = res[0];
	};
    }



    template <int dim>
    void
    NewtonMethod<dim>::end_gauss_newton_step () 
    {
				       
				       
				       
      me_master->end_gauss_newton_step ();
  
				       
				       
      process_statistics ();
  
				       
      message_log << set_priority(0)
		  << "Step " << iteration_number << ": stop"
		  << std::endl << std::flush;
      message_log << set_priority(0)
		  << std::endl << std::flush;
    }



    template <int dim>
    void
    NewtonMethod<dim>::process_statistics ()
    {
				       
				       
				       
      present_statistics = 0;

				       
				       
      std::string filename = global_parameters->output_directory +
			     "statistics";
      std::ofstream out(filename.c_str());
      AssertThrow (out, ExcIO());
      out << statistics;
    }



    template <int dim>
    void
    NewtonMethod<dim>::solve_and_set_update ()
    {
      message_log << set_priority(1)
		  << "Step " << iteration_number << ": solving..."
		  << std::endl << std::flush;

      const unsigned int n_parameters = me_master->get_schur_rhs().size();

				       
				       
				       
				       
				       
				       
				       
				       
      FullMatrix<double> explicit_schur_matrix;
      if (parameters->write_hessian == true)
	{
          const std::string filename =
            global_parameters->output_directory +
            Utilities::int_to_string (iteration_number,3) +
            "-hessian";
          std::ofstream out(filename.c_str());
          AssertThrow (out, ExcIO());

	  get_symmetrized_explicit_schur_matrix (me_master->get_schur_matrix(),
						 explicit_schur_matrix);
	  for (unsigned int i=0; i<explicit_schur_matrix.m(); ++i)
            {
              for (unsigned int j=0; j<explicit_schur_matrix.n(); ++j)
                out << explicit_schur_matrix(i,j) << ' ';
              out << std::endl;
            }
	}

      if (parameters->write_schur_rhs == true)
	{
	  const Vector<double> &schur_rhs = me_master->get_schur_rhs();

          const std::string filename =
            global_parameters->output_directory +
            Utilities::int_to_string (iteration_number,3) +
            "-schur_rhs";
          std::ofstream out(filename.c_str());
          AssertThrow (out, ExcIO());

	  for (unsigned int i=0; i<schur_rhs.size(); ++i)
	    out << schur_rhs(i) << std::endl;
	} 
	
				       
      Vector<double> update (n_parameters);
      
                                       
                                       
                                       
                                       
                                       
                                       
                                       
      if (n_parameters == 1)
        {
                                           
          const Vector<double> &schur_rhs = me_master->get_schur_rhs();

          me_master->get_schur_matrix().vmult (update, schur_rhs);
          
          if (update(0) != 0)
            update(0) = schur_rhs(0) * schur_rhs(0) / update(0);
          else
            update(0) = 0;
        }
      else
        {
          if (parameters->solver_type != "direct")
            {
              present_statistics->n_cg_iterations = n_parameters;
              const bool retry = solve_system_iteratively (update);

	      if (retry == true)
		solve_system_directly (explicit_schur_matrix, update);
            }
          else
            solve_system_directly (explicit_schur_matrix, update);
        }
      
				       
				       
      parameter_representation->satisfy_constraints (me_master->get_present_iterate(),
						     update);
  
      message_log << set_priority(1)
		  << "Step " << iteration_number << ": computing state/adjoint updates"
		  << std::endl << std::flush;

      me_master->compute_updates (update);
    }



    template <int dim>
    bool
    NewtonMethod<dim>::solve_system_iteratively (Vector<double> &update)
    {
				       
      const Master::SchurComplementMatrix
        schur_matrix = me_master->get_schur_matrix();
      const Vector<double> &schur_rhs = me_master->get_schur_rhs();

      const double initial_residual = schur_rhs.l2_norm();
      
                                       
                                       
                                       
      try 
        {
          // For the SPEC benchmark version 510.parest, cap number of iterations, for more 
          // comparable work, despite minor FP differences.  The small criterion is an 
          // additional cap: in cases where the solver would normally exit after 0 or 1 
          // iterations, but does not due to minor FP diffs, then it will soon exit 
          // when it hits the criterion.
          SolverControl
            solver_control (std::min(50U,
                                     schur_rhs.size()),
                            1e-100);
          PrimitiveVectorMemory<> vector_memory;
          SolverSelector<> cg (parameters->solver_type, solver_control,
                               vector_memory);

	  try
	    {
	      cg.solve (schur_matrix, update, schur_rhs,
			PreconditionIdentity());
	    }
	  catch (SolverControl::NoConvergence &)
	    {
	      // simply ignore solver failures because of not reaching the
	      // tolerance of zero (which is unattainable in any case).
	      //
	      // there is code below that handles this condition gracefully
	      throw;
	    }
	  

          present_statistics->n_cg_iterations = solver_control.last_step();

          message_log << set_priority(1)
                      << "Step " << iteration_number << ": solved in "
                      << solver_control.last_step()
                      << " iterations"
                      << std::endl << std::flush;
        }
      catch (SolverControl::NoConvergence &e)
        {
                                           
                                           
                                           
                                           
                                           
                                           
                                           
                                           
          if (e.last_residual/initial_residual < 0.5)
            {
              message_log << set_priority(1)
                          << "Step " << iteration_number
                          << ": inner solver failed with residual reduction of "
                          << std::setprecision(3)	
                          << e.last_residual/initial_residual
                          << "; accepting anyway"
                          << std::endl << std::flush;
              present_statistics->n_cg_iterations = e.last_step;
            }
          else
            {
                                               
                                               
                                               
                                               
                                               
                                               
                                               
                                               
              message_log << set_priority(1)
                          << "Step " << iteration_number
                          << ": inner solver failed with residual increase "
                          << std::setprecision(3)	
                          << e.last_residual/initial_residual
                          << "; trying explicit solve"
                          << std::endl << std::flush;
              present_statistics->n_cg_iterations = e.last_step +
                                                    schur_rhs.size();

              return true;
            }
        }
      return false;
    }



    template <int dim>
    void
    NewtonMethod<dim>::solve_system_directly (FullMatrix<double> &explicit_matrix,
					      Vector<double>     &update)
    {
				       
				       
      if (explicit_matrix.m() == 0)
	{
	  const Master::SchurComplementMatrix
	    schur_matrix = me_master->get_schur_matrix();
	  
	  get_symmetrized_explicit_schur_matrix (schur_matrix,
						 explicit_matrix);
	}
      
      const Vector<double> &schur_rhs = me_master->get_schur_rhs();

                                       
      if (schur_rhs.l2_norm() == 0)
	{
	  update = 0;
	  return;
	}

      explicit_matrix.gauss_jordan ();
      explicit_matrix.vmult (update, schur_rhs);
    }
    


    template <int dim>
    void
    NewtonMethod<dim>::compute_and_set_step_length ()
    {
      message_log << set_priority(2)
		  << "Step " << iteration_number << ": computing step length"
		  << std::endl << std::flush;

      const std::pair<double,double>
	step_length = StepLengthControl::LineSearch(*me_master).compute_step_length ();
  
      message_log << set_priority(1)
                  << "Step " << iteration_number << ", alpha: "
                  << std::setprecision(3) << step_length.first
                  << ", final residual: "
                  << std::setprecision(5) << step_length.second
		  << std::endl << std::flush;
      present_statistics->step_length    = step_length.first;
      present_statistics->final_residual = step_length.second;

      me_master->perform_updates (step_length.first);
    }



    template <int dim>
    void
    NewtonMethod<dim>::postprocess ()
    {
				       
				       
				       
				       
      if (output_requested (false))
	{
	  message_log << set_priority(1)
		      << "Step " << iteration_number << ": Writing solutions..."
		      << std::endl << std::flush;      
	  write_solutions ();
	};

      message_log << set_priority(1)
		  << "Step " << iteration_number << ": postprocessing"
		  << std::endl << std::flush;

				       
				       
      Threads::Thread<std::pair<double,double> >
	misfit_thread = Threads::spawn (*me_master, &Master::compute_misfits)();

      const double model_error
	= parameter_representation->compute_model_error (me_master->get_present_iterate());
  
      misfit_thread.join ();
      const std::pair<double,double> misfits = misfit_thread.return_value();

      const unsigned int global_n_dofs = me_master->compute_global_n_dofs();  
  
      message_log << set_priority(1)
		  << "Step " << iteration_number
		  << ": N=" << global_n_dofs
		  << ", m(u-z)="
		  << std::setprecision(3) << misfits.second
		  << ", beta r(a)=" << misfits.first
		  << ", J=" << misfits.first + misfits.second
		  << ", error=" << model_error
		  << std::endl << std::flush;
  
      present_statistics->global_n_dofs         = global_n_dofs;
      present_statistics->global_data_misfit    = misfits.second;
      present_statistics->model_misfit          = misfits.first;
      present_statistics->final_parameter_error = model_error;

				       
				       
				       
				       

      parameter_representation->consider_misfits (misfits.second,
						  misfits.first);
    }



    template <int dim>
    void
    NewtonMethod<dim>::write_solutions ()
    {
      me_master->write_solution();
    }



    template <int dim>
    void
    NewtonMethod<dim>::maybe_refine_grid ()
    {
				       
      const bool do_refine = advocate_grid_refinement ();
      grid_refinement_after_step.push_back (do_refine);

				       
				       
      if (do_refine == true)
	{
					   
					   
	  if (output_requested (true))
	    {
	      message_log << set_priority(1)
			  << "Writing solutions..."
			  << std::endl << std::flush;	  
	      write_solutions ();
	    };
      
	  message_log << set_priority(1)
		      << "Estimating error..."
		      << std::endl << std::flush;
      
					   
					   
					   
	  Vector<float> parameter_error;
	  unsigned int pe_type;
	  const double total_error =  me_master->estimate_error (parameter_error,
								 pe_type);

					   
					   
	  if (total_error != 0)
	    message_log << set_priority(1)
			<< "Total error="
			<< std::setprecision(3) << total_error
			<< std::endl << std::flush;

					   
					   
					   
	  me_master->refine_parameterizations (parameter_error, pe_type);

	  message_log << set_priority(2)
		      << "New parameter discretization: "
		      << parameter_representation->n_dofs()
		      << " dofs."
		      << std::endl << std::flush;
	  message_log << set_priority(2)
		      << "Refining slaves and recomputing measurements... "
		      << std::endl << std::flush;

					   
					   
					   
					   
	  me_master->refine_slaves ();
      
	  message_log << set_priority(0)      
		      << std::endl << std::flush;
	};
    }



    template <int dim>
    bool
    NewtonMethod<dim>::advocate_grid_refinement () const
    {
      Assert (statistics.size() == iteration_number + 1, ExcInternalError());
      Assert (grid_refinement_after_step.size() == iteration_number,
	      ExcInternalError());
  
				       
				       
				       
				       
				       
      if (statistics.size() <= 1)
	return false;

				       
				       
				       
				       
				       
				       
				       
				       
      if (dynamic_cast<const PerStepStatistics*>(statistics.back())->step_length
	  <
	  parameters->mesh_refinement_details.minimal_step_length)
	{
	  message_log << set_priority(2)
		      << "Forcing refinement: last step length too small"
		      << std::endl << std::flush;
	  return true;
	}

				       
				       
				       
				       

				       
      const unsigned int this_iteration = statistics.size()-1;
  
				       
				       
      const double this_residual
	= dynamic_cast<const PerStepStatistics*>(statistics.back())->final_residual;
      const double first_residual
	= dynamic_cast<const PerStepStatistics*>(statistics[0])->final_residual;
  
				       
				       
				       
				       
				       
				       
      std::vector<double> end_residuals;
      for (unsigned int i=1; i<iteration_number; ++i)
	if (grid_refinement_after_step[i])
	  end_residuals.push_back (dynamic_cast<const PerStepStatistics*>(statistics[i])
				   ->final_residual);

				       
				       
      std::vector<double> start_residuals;
      Assert (statistics.size() >= 2, ExcInternalError());
      start_residuals.push_back (dynamic_cast<const PerStepStatistics*>(statistics[1])
				 ->final_residual);
      for (unsigned int i=2; i<iteration_number; ++i)
	if (grid_refinement_after_step[i-1])
	  end_residuals.push_back (dynamic_cast<const PerStepStatistics*>(statistics[i])
				   ->final_residual);
  
				       
				       
      const bool grid_has_ever_been_refined = (end_residuals.size() != 0);

				       
				       
      std::vector<double> last_step_lengths;
      std::vector<double> last_residuals;
      for (int i=iteration_number-1; i>=0; --i)
	if (grid_refinement_after_step[i] == false)
	  {
	    last_step_lengths.insert (last_step_lengths.begin(),
				      dynamic_cast<const PerStepStatistics*>(statistics[i])
				      ->step_length);
	    last_residuals.insert (last_residuals.begin(),
				   dynamic_cast<const PerStepStatistics*>(statistics[i])
				   ->final_residual);
	  }
	else
	  break;
				       
      const unsigned int n_steps_on_last_grid = last_step_lengths.size();
  
				       
				       
				       
				       
				       
      if (grid_has_ever_been_refined == false)
	{
	  Assert (this_iteration <=
		  parameters->mesh_refinement_details.max_initial_steps,
		  ExcInternalError());

	  if (this_iteration <
	      parameters->mesh_refinement_details.min_initial_steps)
	    return false;
	  else if (this_residual <
		   parameters->mesh_refinement_details.initial_reduction*first_residual)
	    {
	      message_log << set_priority(2)
			  << "Forcing refinement: initial reduction goal "
			  << std::setprecision(3)
			  << (parameters->mesh_refinement_details.initial_reduction *
			      first_residual)
			  << " reached"
			  << std::endl << std::flush;
	      return true;
	    }
	  else if (this_iteration ==
		   parameters->mesh_refinement_details.max_initial_steps)
	    {
	      message_log << set_priority(2)
			  << "Forcing refinement: too little progress on initial grid (goal was "
			  << std::setprecision(3)
			  << (parameters->mesh_refinement_details.initial_reduction *
			      first_residual)
			  << ")" << std::endl << std::flush;
	      return true;
	    }
	  else
	    return false;
	}

				       
				       
				       
				       
				       
      const double last_end_residual   = end_residuals.back();
      const double last_start_residual = start_residuals.back();

				       
				       
				       
      const double next_goal = std::min(last_end_residual,
					last_start_residual) *
			       parameters->mesh_refinement_details.reduction_per_mesh;
      if (this_residual < next_goal)
	{
	  message_log << set_priority(2)
		      << "Forcing refinement: reduction goal "
		      << std::setprecision(3)
		      << next_goal << " reached"
		      << std::endl << std::flush;
	  return true;
	}

				       
				       
				       
				       
				       
				       
				       
				       
				       
				       
      if (n_steps_on_last_grid >= 2)
	{
	  const unsigned int
	    n_refinements = std::count (grid_refinement_after_step.begin(),
					grid_refinement_after_step.end(), true);
	  const double relaxed_goal = first_residual *
				      parameters->mesh_refinement_details.initial_reduction *
				      std::pow (0.5, 1.*n_refinements);
	  if (this_residual < relaxed_goal)
	    {
	      message_log << set_priority(2)
			  << "Forcing refinement: relaxed reduction goal "
			  << std::setprecision(3)
			  << relaxed_goal << " reached"
			  << std::endl << std::flush;
	      return true;
	    }
	}

				       
				       
				       
      if ((n_steps_on_last_grid >= 3)
	  &&
	  (std::accumulate (last_step_lengths.end()-3, last_step_lengths.end(), 0.)
	   < 3*parameters->mesh_refinement_details.minimal_average_step_length))
	{
	  message_log << set_priority(2)
		      << "Forcing refinement: average step lengths too small"
		      << std::endl << std::flush;
	  return true;
	}

				       
				       
      if ((n_steps_on_last_grid >= 2) &&
	  (last_residuals[last_residuals.size()-1] >
	   last_residuals[last_residuals.size()-2]))
	{
	  message_log << set_priority(2)
		      << "Forcing refinement: residual increased"
		      << std::endl << std::flush;
	  return true;
	}

				       
				       
      return false;
    }



    template <int dim>
    PerStepStatistics *
    NewtonMethod<dim>::create_and_set_statistics_object ()
    {
      present_statistics = new PerStepStatistics();
      present_statistics->master_slave_statistics
	= me_master->create_and_set_statistics_object ();
      present_statistics->parameters_statistics
	= parameter_representation->create_and_set_statistics_object ();
  
      return present_statistics;
    }



    template <int dim>
    void
    NewtonMethod<dim>::
    get_explicit_schur_matrix (const Master::SchurComplementMatrix &scm,
			       FullMatrix<double> &m) const
    {
				       
      m.reinit (scm.m(), scm.n());

                                       
                                       
      std::vector<Vector<double> > in (m.m()), out (m.m());
      for (unsigned int i=0; i<m.m(); ++i)
	{
          in[i].reinit (m.m());
          in[i](i) = 1.;
          
          out[i].reinit (m.m());
        }

      scm.multiple_vmult (out, in);
      
      for (unsigned int i=0; i<m.m(); ++i)
        for (unsigned int j=0; j<m.m(); ++j)
          m(i,j) = out[i](j);
    }



    template <int dim>
    void
    NewtonMethod<dim>::
    get_symmetrized_explicit_schur_matrix (const Master::SchurComplementMatrix &scm,
					   FullMatrix<double> &explicit_schur_matrix) const
    {
				       
				       
				       
				       
				       
				       
				       
				       
				       
				       
				       
				       
				       
				       
				       
				       
				       
				       
      get_explicit_schur_matrix (scm, explicit_schur_matrix);
      explicit_schur_matrix.symmetrize ();

      for (unsigned int i=0; i<explicit_schur_matrix.m(); ++i)
	if (scm.get_active_constraints()[i] == true)
	  {
	    for (unsigned int j=0; j<explicit_schur_matrix.n(); ++j)
	      explicit_schur_matrix(j,i) = explicit_schur_matrix(i,j) = 0;
	    explicit_schur_matrix(i,i) = 1.;
	  }
    }
    


    template <int dim>
    bool
    NewtonMethod<dim>::output_requested (const bool before_refinement) const
    {
      const bool it_is_time
	= (((iteration_number % parameters->output_step_interval) == 0)
	   ||
	   (iteration_number == parameters->max_iterations-1));

      if (before_refinement == false)
	return it_is_time;
      else
					 
					 
					 
					 
	return !it_is_time;
    }




    template class NewtonMethod<deal_II_dimension>; 
  }
}
