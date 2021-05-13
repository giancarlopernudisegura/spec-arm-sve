#if DEAL_II_USE_MPI == 1

#include <libparest/utilities.h>
#include <libparest/parallel/multiple_experiments.h>
#include <libparest/parallel/tools.h>

#include <iostream>

namespace libparest
{

  namespace MasterSlaveCommunications
  {
    namespace MPI
    {

      Client::Client (Slave::Base &slave,
		      ::MPI::Intracomm          &communicator,
		      Threads::ThreadMutex    &mpi_mutex)
		      :
		      slave (&slave),
		      communicator (communicator, mpi_mutex),
		      mpi_mutex (mpi_mutex)
      {}



      void
      Client::run_event_loop ()
      {
	::MPI::Status status;
  
					 
					 
					 
					 
					 
					 
					 
	if (true)
	  {
	    MPI_Tools::poll_for_incoming_message (communicator, mpi_mutex);
      
	    unsigned int i;
	    MPI_Tools::P2PIStream(communicator) >> i;	    

	    Assert (i == slave->get_experiment_number(), ExcInternalError());
	  }
  
	while (true)
	  {
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
	    MPI_Tools::poll_for_incoming_message (communicator, mpi_mutex);

					     
					     
	    int info;
	    MPI_Tools::P2PIStream p2p_initiator(communicator);
	    p2p_initiator >> info;

	    const unsigned int sender = p2p_initiator.last_status().Get_source ();
	    const unsigned int tag    = p2p_initiator.last_status().Get_tag ();

	    Assert (tag == static_cast<unsigned int>(info), ExcInternalError());
	    
					     
					     
					     
					     
					     
	    MPI_Tools::P2PIOStream p2p_communication (communicator,tag,sender);
	    
	    switch (tag)
	      {
		case tag_initialize:
		{
						   
						   
						   
		  Vector<double> initial_a;

		  p2p_communication >> initial_a;

		  slave->initialize (initial_a);

						   
		  p2p_communication << tag;

		  break;
		}
	   
		case tag_finalize:
		{
						   
						   
						   
		  slave->finalize ();
						   
		  p2p_communication << tag;

		  return;
		}

		case tag_initialize_gauss_newton_step:
		{
		  unsigned int step_no;
		  p2p_communication >> step_no;
		  slave->initialize_gauss_newton_step (step_no);

						   
		  p2p_communication << tag;

		  break;
		}
	   
		case tag_end_gauss_newton_step:
		{
		  slave->end_gauss_newton_step ();
		  p2p_communication << tag;

		  break;
		}


		case tag_create_statistics_object:
		{
		  unsigned int index;
		  p2p_communication >> index;
		  Assert (statistics_objects.find(index) == statistics_objects.end(),
			  ExcInternalError());

		  statistics_objects[index] = slave->create_and_set_statistics_object ();

		  p2p_communication << tag;

		  break;
		}
	   
		case tag_compute_rhs:
		{
		  unsigned int size;
		  p2p_communication >> size;
		  
		  Vector<double> rhs(size);
		  Vector<double> rhs_a(size);

		  slave->compute_rhs (rhs, rhs_a);

		  p2p_communication << rhs << rhs_a;

		  break;
		}

		case tag_compute_information:
		{
		  unsigned int size;
		  p2p_communication >> size;
		  
		  Vector<float> information(size);

		  slave->compute_information (information);

		  p2p_communication << information;

		  break;
		}

		case tag_forward_backward:
		{
		  Vector<double> test_parameter;
		  p2p_communication >> test_parameter;

		  Vector<double> result(test_parameter.size());		  
		  slave->forward_backward (test_parameter, result);

		  p2p_communication << result;

		  break;
		}

		case tag_multiple_forward_backward:
		{
		  unsigned int n_vectors;
		  p2p_communication >> n_vectors;
		  
		  std::vector<Vector<double> > test_parameters (n_vectors);
		  p2p_communication >> test_parameters;

		  std::vector<Vector<double> > results (n_vectors,
							Vector<double>(test_parameters[0].size()));
		  slave->multiple_forward_backward (test_parameters, results);

		  p2p_communication << results;
		  
		  break;
		}
		
	   
		case tag_compute_updates:
		{
		  Vector<double> delta_a;
		  p2p_communication >> delta_a;

		  slave->compute_updates (delta_a);

						   
		  p2p_communication << tag;

		  break;
		}

		case tag_perform_updates:
		{
		  Vector<double> new_parameter;
		  double step_length;
	    
		  p2p_communication >> new_parameter >> step_length;
	    
		  slave->perform_updates (new_parameter, step_length);
	    
		  p2p_communication << new_parameter.size();

		  break;
		}
	   
		case tag_compute_trial_residual:
		{
		  std::vector<double> trial_alpha;
		  unsigned int vec_length;
		  
		  p2p_communication >> trial_alpha >> vec_length;

		  std::vector<double> residual(trial_alpha.size());
		  std::vector<Vector<double>*> slave_contribution (trial_alpha.size());
		  for (unsigned int i=0; i<trial_alpha.size(); ++i)
		    slave_contribution[i] = new Vector<double>(vec_length);
	    
	    
		  slave->compute_trial_residual (trial_alpha, slave_contribution, residual);

		  p2p_communication << slave_contribution << residual;

		  for (unsigned int i=0; i<slave_contribution.size(); ++i)
		    libparest::delete_ptr (slave_contribution[i]);

		  break;
		}
	   
		case tag_compute_misfits:
		{
		  const std::pair<double,double> misfits =  slave->compute_misfits ();
		  p2p_communication << misfits.first << misfits.second;
	    
		  break;
		}

		case tag_write_solution:
		{
		  slave->write_solution();
		  p2p_communication << tag;
	    
		  break;
		}

		case tag_estimate_error:
		{
		  unsigned int vec_length;
		  p2p_communication >> vec_length;
		  
		  Vector<float> parameter_errors (vec_length);
		  unsigned int pe_type = 0;
	    
		  const double error_sum = slave->estimate_error (parameter_errors, pe_type);

						   
						   
						   
						   
						   
		  Assert (parameter_errors.size() == vec_length, ExcInternalError());
		  
		  p2p_communication << pe_type << error_sum << parameter_errors;
	    
		  break;
		}

		case tag_refine_parameterization:
		{
		  std::vector<bool> refinement_indicators;
		  std::vector<bool> coarsening_indicators;

		  p2p_communication >> refinement_indicators >> coarsening_indicators;

		  slave->refine_parameterization (refinement_indicators, 
						  coarsening_indicators);

		  p2p_communication << tag;

		  break;
		}
	   
		case tag_refine_slave:
		{
		  Vector<double> new_parameter_values;
	    
		  p2p_communication >> new_parameter_values;
	    
		  slave->refine_slave (new_parameter_values);
	    
		  p2p_communication << tag;

		  break;
		}

		case tag_get_n_dofs:
		{
		  p2p_communication << slave->n_degrees_of_freedom();
            
		  break;
		}
          
		case tag_statistics_declare_entries:
		{
		  unsigned int index;
		  p2p_communication >> index;
		  Assert (statistics_objects.find(index) != statistics_objects.end(),
			  ExcInternalError());

		  p2p_communication << statistics_objects[index]->declare_entries();

		  break;
		}

		case tag_statistics_get_values:
		{
		  unsigned int index;
		  p2p_communication >> index;		  
		  Assert (statistics_objects.find(index) != statistics_objects.end(),
			  ExcInternalError());

		  p2p_communication << statistics_objects[index]->get_values();

		  break;
		}
	   
	   
		default:
		      AssertThrow (false, ExcInvalidTag(tag));
	      }
	  }
      }





      Server::Server (::MPI::Intracomm    &communicator,
		      Threads::ThreadMutex    &mpi_mutex,
		      const std::string       &base_name,
		      const unsigned int       experiment_number,
		      MessageLog::ServerBase  &message_log_server)
		      :
		      Slave::Base (base_name,
				   experiment_number,
				   message_log_server),
		      communicator (communicator, mpi_mutex),
		      mpi_mutex (mpi_mutex),
		      slave_rank (communicator.Get_rank() == 0 ? 1 : 0),
		      next_statistics_object_index (0)
      {
	Assert (static_cast<const ::MPI::Intracomm &>(communicator).Get_size() == 2, ExcInternalError());

					 
					 
					 
					 
					 
					 
					 
	MPI_Tools::P2POStream(this->communicator,4321,slave_rank) << experiment_number;
      }



      void
      Server::initialize (const Vector<double> &initial_a)
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,tag_initialize,slave_rank);
	p2p_communication << /* initiator= */ tag_initialize;
	
	p2p_communication << initial_a;

	unsigned int info;
	p2p_communication >> info;
	Assert (info == tag_initialize, ExcInternalError());
      }



      void
      Server::finalize ()
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,tag_finalize,slave_rank);
	p2p_communication << /* initiator= */ tag_finalize;

	unsigned int info;
	p2p_communication >> info;

	Assert (info == tag_finalize, ExcInternalError());
      }



      void
      Server::initialize_gauss_newton_step (const unsigned int step_no)
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,tag_initialize_gauss_newton_step,slave_rank);
	p2p_communication << /* initiator= */ tag_initialize_gauss_newton_step;
	
	p2p_communication << step_no;

	unsigned int info;
	p2p_communication >> info;
	Assert (info == tag_initialize_gauss_newton_step, ExcInternalError());
      }



      void
      Server::end_gauss_newton_step ()
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,tag_end_gauss_newton_step,slave_rank);
	p2p_communication << /* initiator= */ tag_end_gauss_newton_step;

	unsigned int info;
	p2p_communication >> info;
	Assert (info == tag_end_gauss_newton_step, ExcInternalError());
      }



      libparest::PerStepStatistics *
      Server::create_and_set_statistics_object ()
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,tag_create_statistics_object,slave_rank);
	p2p_communication << /* initiator= */ tag_create_statistics_object;

	const unsigned int this_index = next_statistics_object_index;
	p2p_communication << this_index;

	unsigned int info;
	p2p_communication >> info;

	Assert (info == tag_create_statistics_object, ExcInternalError());

	++next_statistics_object_index;
	return new PerStepStatistics (this_index, this);
      }



      void
      Server::compute_rhs (Vector<double> &rhs,
			   Vector<double> &rhs_a)
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,tag_compute_rhs,slave_rank);
	p2p_communication << /* initiator= */ tag_compute_rhs;
	
	p2p_communication << rhs.size();
	p2p_communication >> rhs >> rhs_a;
      }



      void
      Server::compute_information (Vector<float> &information) const
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,tag_compute_information,slave_rank);
	p2p_communication << /* initiator= */ tag_compute_information;
	
	p2p_communication << information.size();
	p2p_communication >> information;
      }
      


      void
      Server::forward_backward (const Vector<double> &test_parameter,
				Vector<double>       &result)
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,tag_forward_backward,slave_rank);
	p2p_communication << /* initiator= */ tag_forward_backward;
	
	p2p_communication << test_parameter;
	p2p_communication >> result;
      }



      void
      Server::
      multiple_forward_backward (const std::vector<Vector<double> > &test_parameters,
				 std::vector<Vector<double> >       &results)
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,
						 tag_multiple_forward_backward,
						 slave_rank);
	p2p_communication << /* initiator= */ tag_multiple_forward_backward;

	p2p_communication << static_cast<unsigned int>(test_parameters.size())
			  << test_parameters;
	p2p_communication >> results;
      }
      


      void
      Server::compute_updates (const Vector<double> &delta_a)
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,tag_compute_updates,slave_rank);
	p2p_communication << /* initiator= */ tag_compute_updates;
	
	p2p_communication << delta_a;

	unsigned int info;
	p2p_communication >> info;
	Assert (info == tag_compute_updates, ExcInternalError());
      }



      void
      Server::perform_updates (const Vector<double> &new_parameter,
			       const double          step_length)
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,tag_perform_updates,slave_rank);
	p2p_communication << /* initiator= */ tag_perform_updates;
	
	p2p_communication << new_parameter << step_length;

	unsigned int size;
	p2p_communication >> size;

	Assert (size == new_parameter.size(), ExcInternalError());
      }



      void
      Server::compute_trial_residual (const std::vector<double>     trial_alpha,
				      std::vector<Vector<double>*> &slave_contribution,
				      std::vector<double>          &residual) const
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,tag_compute_trial_residual,slave_rank);
	p2p_communication << /* initiator= */ tag_compute_trial_residual;

	p2p_communication << trial_alpha << slave_contribution[0]->size();
	p2p_communication >> slave_contribution >> residual;
      }



      std::pair<double,double>
      Server::compute_misfits () const
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,tag_compute_misfits,slave_rank);
	p2p_communication << /* initiator= */ tag_compute_misfits;

	std::pair<double,double> misfits;
	p2p_communication >> misfits.first >> misfits.second;

	return misfits;
      }



      void
      Server::write_solution () const
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,tag_write_solution,slave_rank);
	p2p_communication << /* initiator= */ tag_write_solution;

	unsigned int info;
	p2p_communication >> info;
	Assert (info == tag_write_solution, ExcInternalError());
      }



      double
      Server::estimate_error (Vector<float> &parameter_error,
			      unsigned int  &pe_type)
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,tag_estimate_error,slave_rank);
	p2p_communication << /* initiator= */ tag_estimate_error;

	p2p_communication << parameter_error.size();
	
	double error_sum;
	p2p_communication >> pe_type >> error_sum
			 >> parameter_error;

	return error_sum;
      }



      void
      Server::refine_parameterization (const std::vector<bool> &refinement_indicators,
				       const std::vector<bool> &coarsening_indicators)
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,tag_refine_parameterization,slave_rank);
	p2p_communication << /* initiator= */ tag_refine_parameterization;
	
	p2p_communication << refinement_indicators << coarsening_indicators;

	unsigned int info;
	p2p_communication >> info;
	Assert (info == tag_refine_parameterization, ExcInternalError());
      }



      void
      Server::refine_slave (const Vector<double> &new_parameter_values)
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,tag_refine_slave,slave_rank);
	p2p_communication << /* initiator= */ tag_refine_slave;
	
	p2p_communication << new_parameter_values;

	unsigned int info;
	p2p_communication >> info;
	Assert (info == tag_refine_slave, ExcInternalError());
      }



      unsigned int
      Server::n_degrees_of_freedom () const
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,tag_get_n_dofs,slave_rank);
	p2p_communication << /* initiator= */ tag_get_n_dofs;

	unsigned int info;
	p2p_communication >> info;

	return info;
      }



      std::list<std::string>
      Server::statistics_declare_entries (const unsigned int statistics_object_index) const
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,tag_statistics_declare_entries,slave_rank);
	p2p_communication << /* initiator= */ tag_statistics_declare_entries;
	
	p2p_communication << statistics_object_index;

	std::list<std::string> entry_names;
	p2p_communication >> entry_names;

	return entry_names;
      }




      std::list<double>
      Server::statistics_get_values (const unsigned int statistics_object_index) const
      {
	MPI_Tools::P2PIOStream p2p_communication(communicator,tag_statistics_get_values,slave_rank);
	p2p_communication << /* initiator= */ tag_statistics_get_values;
	
	p2p_communication << statistics_object_index;

	std::list<double> values;
	p2p_communication >> values;

	return values;
      }



      Server::PerStepStatistics::PerStepStatistics (const unsigned int   index,
						    const Server *server)
		      :
		      index (index),
		      server (server)
      {}




      std::list<std::string>
      Server::PerStepStatistics::declare_entries () const
      {
					 
	if (cached_entry_names.size() == 0)
	  cached_entry_names = server->statistics_declare_entries (index);

					 
	return cached_entry_names;
      }



      std::list<double>
      Server::PerStepStatistics::get_values () const
      {
					 
	if (cached_values.size() == 0)
	  cached_values = server->statistics_get_values (index);

					 
	return cached_values;
      }
    
    }
  }
 
}


#endif  
