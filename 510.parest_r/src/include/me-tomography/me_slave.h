//----------------------------   me_slave.h     ---------------------------
//    $Id: me_slave.h 3523 2008-01-18 01:36:59Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009 by Wolfgang Bangerth
//
//----------------------------   me_slave.h     ---------------------------
#ifndef __parameter_estimation__me_slave_h
#define __parameter_estimation__me_slave_h
//----------------------------   me_slave.h     ---------------------------

#include <base/smartpointer.h>
#include <lac/block_vector.h>
#include <lac/block_sparse_matrix.h>
#include <lac/sparse_ilu.h>
#include <libparest/parameter/field.h>
#include <libparest/global_parameters.h>
#include <libparest/statistics.h>
#include <libparest/slave/stationary/slave.h>
#include <libparest/slave/stationary/global_matrix.h>
#include <libparest/slave/stationary/measurements.h>
#include <libparest/slave/stationary/evaluations.h>

#include "config.h"
#include "synthetic_data.h"
#include "me_parameters.h"
#include "state_discretization.h"
#include "problem_description.h"
#include "experiment_description.h"
#include "coefficient.h"

#include <list>


namespace METomography
{
  using namespace libparest::Slave::Stationary;

  namespace Slave
  {
    namespace internal
    {
      template <int dim> class AssemblerData;

      class SparseDirectSPEC
      {
	public:
	  void initialize (const SparsityPattern &sparsity_pattern);

	  template <typename number>
	  void factorize (const SparseMatrix<number> &matrix);

	  template <typename number>
	  void solve (Vector<number> &rhs_and_solution) const;

	  Threads::ThreadMutex & get_synchronisation_lock () const;

	private:
	  mutable Threads::ThreadMutex synchronisation_lock;

	  dealii::SparseILU<double> preconditioner;
	  const SparseMatrix<double> *matrix;
      };
      
    }
  }

  
  namespace Slave
  {
    template <typename number>
    class Sparse_A_BlockInverse : public libparest::Slave::Stationary::GlobalMatrix::Matrix_A_Inverse<number>
    {
      public:
        Sparse_A_BlockInverse (const SparseMatrix<number> &all_of_A);

        virtual void vmult (Vector<double> &v) const;
        virtual void vmult (Vector<float> &v) const;

        virtual void Tvmult (Vector<double> &v) const;
        virtual void Tvmult (Vector<float> &v) const;

        DeclException3 (ExcInvalidMatrixEntry,
                        unsigned int, unsigned int, double,
                        << "The upper right block of the state matrix "
                        << "should be empty, but the entry ("
                        << arg1 << ',' << arg2
                        << ") has a value of " << arg3);
      private:
        SparsityPattern      sparsity_pattern;
        SparseMatrix<number> B;

	SparseMatrix<number> A_m;
	SparseMatrix<number> A_x;
	
	internal::SparseDirectSPEC inverse_matrix_1, inverse_matrix_2;
	
        mutable BlockVector<double>  tmp;
        mutable Threads::ThreadMutex mutex;


        template <typename T>
        void do_vmult (Vector<T> &v) const;

        template <typename T>
        void do_Tvmult (Vector<T> &v) const;                
    };


    template <int dim>
    class Slave : public libparest::Slave::Stationary::Slave<dim,float_type>
    {
      public:
	typedef
	libparest::Parameter::Field::DiscretizedField<dim>
	ParameterDiscretization;
    
	typedef
	typename libparest::Slave::Stationary::Slave<dim,float_type>::StateDiscretization
	StateDiscretization;
    
	struct Parameters : public virtual Subscriptor
	{
	    Parameters ();
	
	    enum MisfitFunctional {
		  L2_norm,
		  L2_boundary_norm,
		  L2_weighted_boundary_norm,
                  L2_weighted_boundary_norm_real_scaling,
                  L2_weighted_boundary_norm_complex_scaling,
		  ratio_over_ratio_minus_one,
		  ratio_minus_ratio
	    };

	    enum RefinementCriterion { dwr, dwr2,
				       u, lambda,
				       grad_u, grad_lambda,
				       grad_grad_u, grad_grad_lambda,
				       weighted_grad_grad, global
	    };
	

	    std::string         fe_state;

	    RefinementCriterion refinement_criterion;
	
	    unsigned int        initial_refinement;

	    std::string measurement_refinements;

	    std::pair<double,double> refinement_fraction;

	    unsigned int             max_n_cells;
	    
	    bool                renumber_dofs_CMK;

	    bool                output_grids;

	    bool                inhibit_output;

	    bool                output_magnitude_and_phase;
	    
	    MisfitFunctional    misfit_functional;

	    std::string measurement_weights;
	    typename ScalarField<dim>::PassedRefinementIndicatorTypes
	    parameter_refinement;

            typedef
            std::list<boost::shared_ptr<const libparest::Slave::Stationary::Evaluations::Base<dim> > >
            EvaluationsList;
            
            EvaluationsList evaluations;
            
	    static void declare_parameters (ParameterHandler &prm);

	    void parse_parameters (ParameterHandler &prm);

	    void delete_parameters ();
	};


	class PerStepStatistics : public libparest::Slave::Stationary::Slave<dim,float_type>::StateDiscretization::PerStepStatistics
	{
	  public:
	    PerStepStatistics ();
	
	    virtual
	    std::list<std::string>
	    declare_entries () const;
	
	    virtual
	    std::list<double>
	    get_values () const;

	  private:
	    double data_misfit;

	    friend class Slave;
	};
    
    
	Slave (const Parameters         &parameters,
	       const ME_Parameters<dim> &global_parameters,
	       libparest::MessageLog::ServerBase   &message_log_server,
	       const unsigned int        experiment_number);

	virtual ~Slave ();
    
	virtual void initialize (const Vector<double> &initial_a);

	virtual void finalize ();    

        virtual void initialize_gauss_newton_step (const unsigned int step_no);
    
        virtual void end_gauss_newton_step ();

	virtual void compute_information (Vector<float> &contribution) const;

	virtual libparest::PerStepStatistics *
	create_and_set_statistics_object ();

	virtual std::pair<double,double> compute_misfits () const;

	virtual void write_solution () const;

	virtual
	double
	estimate_error (Vector<float> &parameter_error,
			unsigned int  &pe_type);

	virtual
	void
	refine_slave (const Vector<double> &new_parameters);

	static
	void
	declare_graphical_output_labels (libparest::MessageLog::Client &message_log,
					 const unsigned int  experiment_no);

        DeclException1 (ExcInvalidResidual,
                        double,
                        << "An invalid residual has been found: " << arg1);

	DeclException1 (ExcInvalidValue,
			double,
			<< "An invalid value has been detected: " << arg1);
      protected:
	static const ProblemDescription problem_description;
      
      private:
	typedef typename DoFHandler<dim>::cell_iterator cell_iterator;
	typedef typename DoFHandler<dim>::active_cell_iterator active_cell_iterator;

	class GlobalMatrix : public libparest::Slave::Stationary::GlobalMatrix::Matrix<float_type>
	{
	  public:
	    GlobalMatrix (const Slave<dim> &slave_object);

	    virtual void build_matrix (const BlockVector<double> &linearization_point);

	    virtual void invert_state_matrix ();
	    
	  private:
	    typedef typename DoFHandler<dim>::cell_iterator cell_iterator;
	    typedef typename DoFHandler<dim>::active_cell_iterator active_cell_iterator;

	    SmartPointer<const Slave<dim> > slave_object;

	    void
	    assemble_matrix (const typename DoFHandler<dim>::active_cell_iterator &cell,
			     internal::AssemblerData<dim>                         &data);

	    void
	    copy_local_to_global_matrix (const internal::AssemblerData<dim> &data);
	};

	static const char        *graphical_output_labels[];
	static const unsigned int n_graphical_output_labels;
    
	const SmartPointer<const Parameters>          parameters;
	const SmartPointer<const ME_Parameters<dim> > global_parameters;

	SmartPointer<ExperimentDescription<dim> > experiment_description;

        MeasurementRepresentation<dim> measurement_representation;

	SmartPointer<const Function<dim> > measurement_weights;
        
	SmartPointer<libparest::Slave::Stationary::Measurements::Base<3,float_type> > measurement_functional;

	std::vector<bool> is_dirichlet_boundary_dof;
      
	void initialize_with_discretization ();
    
	void preset_initial_values ();

	void set_correct_boundary_values ();
      
	virtual void build_matrix_and_rhs ();

	virtual void build_rhs (const BlockVector<double> &linearization_point,
				BlockVector<double>       &output_vector) const;

	void build_rhs_1 (const BlockVector<double>  &linearization_point,
			  BlockVector<double>        &output_vector,
			  const active_cell_iterator &begin,
			  const active_cell_iterator &end,
			  Threads::ThreadMutex       &mutex) const;

	void
	compute_parameter_discretization_multipliers (Vector<float> &v) const;
    
	void
	compute_parameter_discretization_multipliers_1 (const unsigned int  begin,
							const unsigned int  end,
							Vector<float>      &v) const;

	static
	double
	collect_values_from_children (const cell_iterator &cell);
    
	virtual
	double
	compute_trial_residual_1 (const double    trial_alpha,
				  Vector<double> &slave_contribution) const;

	SparseMatrix<double> inverse_norm_matrix;

	void compute_inverse_norm_matrix ();

	friend class GlobalMatrix;
    };
  }
}


//----------------------------   me_slave.h     ---------------------------
// end of #ifndef __parameter_estimation__me_slave_h
#endif
//----------------------------   me_slave.h     ---------------------------
