//----------------------------   stationary_slave.h     ---------------------------
//    $Id: slave.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2003, 2004, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   stationary_slave.h     ---------------------------
#ifndef __parameter_estimation__stationary_slave_h
#define __parameter_estimation__stationary_slave_h
//----------------------------   stationary_slave.h     ---------------------------


#include <libparest/slave/slave.h>
#include <libparest/slave/stationary/state_discretization.h>
#include <lac/block_vector.h>

namespace libparest
{
  using namespace dealii;


  namespace Slave
  {
    namespace Stationary
    {
      namespace GlobalMatrix
      {
	template <typename> class Matrix;
      }
      

      template <int dim, typename number>
      class Slave :  public libparest::Slave::Base
      {
	public:
	  typedef
	  Parameter::Field::DiscretizedField<dim>
	  ParameterDiscretization;

	  typedef
	  Stationary::Discretization::Base<dim>
	  StateDiscretization;
      
      
	  Slave (const std::string      &base_name,
		 const unsigned int      experiment_number,
		 MessageLog::ServerBase &message_log_server);

	  virtual ~Slave ();

	  virtual void initialize_gauss_newton_step (const unsigned int step_no);
    
	  virtual void end_gauss_newton_step ();


	  virtual
	  void
	  build_rhs (const BlockVector<double> &linearization_point,
		     BlockVector<double>       &output_vector) const = 0;

	  virtual void compute_rhs (Vector<double> &rhs,
				    Vector<double> &rhs_a);

	  virtual void forward_backward (const Vector<double> &test_parameter,
					 Vector<double>       &result);

	  virtual void compute_updates (const Vector<double> &delta_a);

	  virtual void perform_updates (const Vector<double> &new_parameter,
					const double          step_length);

	  virtual
	  void
	  refine_parameterization (const std::vector<bool> &refinement_indicators,
				   const std::vector<bool> &coarsening_indicators);
      
	  virtual
	  void
	  compute_trial_residual (const std::vector<double>     trial_alpha,
				  std::vector<Vector<double>*> &slave_contribution,
				  std::vector<double>          &residual) const;

	  virtual
	  unsigned int
	  n_degrees_of_freedom () const;

	  const GlobalMatrix::Matrix<number> &
	  get_global_matrix () const;
	  
	protected:
	  GlobalMatrix::Matrix<number> *global_matrix;
    
	  BlockVector<double> present_iterate;

	  BlockVector<double> update;
      
	  Vector<float> cellwise_errors;
    
	  BlockVector<double> right_hand_side;
      
    
	  SmartPointer<ParameterDiscretization>  parameter_discretization;
	  SmartPointer<StateDiscretization>      state_discretization;
    
	  SmartPointer<typename StateDiscretization::PerStepStatistics> present_statistics;
      
	  virtual void build_matrix_and_rhs () = 0;

	private:
	  virtual double compute_trial_residual_1 (const double    trial_alpha,
						   Vector<double> &slave_contribution) const;
      
      };

    }
 
  }
}


//----------------------------   stationary_slave.h     ---------------------------
// end of #ifndef __parameter_estimation__stationary_slave_h
#endif
//----------------------------   stationary_slave.h     ---------------------------
