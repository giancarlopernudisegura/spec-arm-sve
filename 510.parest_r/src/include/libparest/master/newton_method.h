//----------------------------   newton_method.h     ---------------------------
//    $Id: newton_method.h 3547 2008-02-08 00:48:46Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2008, 2009 by Wolfgang Bangerth
//
//----------------------------   newton_method.h     ---------------------------
#ifndef __libparest__newton_method_h
#define __libparest__newton_method_h
//----------------------------   newton_method.h     ---------------------------


#include <base/smartpointer.h>
#include <lac/full_matrix.h>
#include <libparest/global_parameters.h>
#include <libparest/parameter/base.h>
#include <libparest/master/master.h>
#include <libparest/statistics.h>
#include <libparest/slave/factory.h>


namespace libparest
{
  using namespace dealii;
  
  
  namespace Master
  {
    

    template <int dim>
    class NewtonMethod 
    {
      public:
	struct Parameters : public virtual Subscriptor
	{
	    Parameters ();
	
	    unsigned int max_inner_cg_iterations;

	    double reduction_goal;
	
	    unsigned int output_step_interval;

	    unsigned int max_iterations;

	    double target_measurement_misfit;

            std::string solver_type;

            bool write_hessian;


            bool write_schur_rhs;
            
	    struct MeshRefinementDetails
	    {
		MeshRefinementDetails ();
		
		unsigned int min_initial_steps;
		unsigned int max_initial_steps;
		double       initial_reduction;
		double       reduction_per_mesh;
		double       minimal_step_length;
		double       minimal_average_step_length;
	    };

	    MeshRefinementDetails mesh_refinement_details;
	    
	    static void declare_parameters (ParameterHandler &prm);

	    void parse_parameters (ParameterHandler &prm);    

	    void delete_parameters ();
	};

	class PerStepStatistics : public libparest::PerStepStatistics
	{
	  public:
	    PerStepStatistics ();
	  
	    ~PerStepStatistics ();
	  
	    virtual
	    std::list<std::string>
	    declare_entries () const;

	    virtual
	    std::list<double>
	    get_values () const;

	  private:
	    SmartPointer<libparest::PerStepStatistics> master_slave_statistics;
	    SmartPointer<libparest::PerStepStatistics> parameters_statistics;

	    unsigned int global_n_dofs;
          
	    double global_data_misfit;

	    double model_misfit;

	    double step_length;

	    double final_residual;

	    double final_parameter_error;
	  
	    unsigned int n_cg_iterations;
	  
	    friend class NewtonMethod;
	};
    
	NewtonMethod (const Parameters            &parameters,
		      const GlobalParameters<dim> &global_parameters,
		      MessageLog::ServerBase      &message_log_server,
		      Parameter::Base             &parameter_representation);

	virtual ~NewtonMethod ();
    
	virtual void initialize (const Slave::Factory &slave_factory);

	void run ();

	virtual bool output_requested (const bool before_refinement) const;
    
      protected:
	const SmartPointer<const Parameters>             parameters;
	const SmartPointer<const GlobalParameters<dim> > global_parameters;

	mutable MessageLog::Client message_log;

	unsigned int iteration_number;

	SmartPointer<Parameter::Base> parameter_representation;

	SmartPointer<Master>              me_master;
	std::vector<SmartPointer<Slave::Base> > me_slaves;

	Statistics statistics;

	std::vector<bool> grid_refinement_after_step;
    
	SmartPointer<PerStepStatistics> present_statistics;
    
	virtual void finalize ();

	void create_slaves (const Slave::Factory &slave_factory);

	virtual void compute_initial_statistics ();

	virtual void initialize_gauss_newton_step ();

	virtual void end_gauss_newton_step ();

	virtual void process_statistics ();
    
	void solve_and_set_update ();
    
	void compute_and_set_step_length ();
    
	virtual void postprocess ();

	virtual void write_solutions ();
    
	void maybe_refine_grid ();

	virtual bool advocate_grid_refinement () const;

	void
	get_explicit_schur_matrix (const Master::SchurComplementMatrix &scm,
				   FullMatrix<double> &m) const;


	void
	get_symmetrized_explicit_schur_matrix (const Master::SchurComplementMatrix &scm,
					       FullMatrix<double> &m) const;
	
	virtual libparest::PerStepStatistics *
	create_and_set_statistics_object ();

      private:
        bool solve_system_iteratively (Vector<double> &update);
        
        void solve_system_directly (FullMatrix<double> &explicit_matrix,
				    Vector<double>     &update);
    };
 
  }
  
}


//----------------------------   newton_method.h     ---------------------------
// end of #ifndef __libparest__newton_method_h
#endif
//----------------------------   newton_method.h     ---------------------------
