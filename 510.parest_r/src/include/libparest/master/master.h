//----------------------------   master.h     ---------------------------
//    $Id: master.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2003, 2004, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   master.h     ---------------------------
#ifndef __libparest__master_h
#define __libparest__master_h
//----------------------------   master.h     ---------------------------


#include <libparest/parameter/base.h>
#include <libparest/message_log.h>
#include <libparest/master/step_length_control.h>
#include <libparest/statistics.h>
#include <libparest/slave/slave.h>
#include <base/subscriptor.h>
#include <base/smartpointer.h>
#include <vector>



namespace libparest
{
  class PerStepStatistics;
}


namespace libparest
{
  using namespace dealii;
  
  
  namespace Master
  {
    
    class Master : public Subscriptor,
		   public StepLengthControl::ResidualComputationBase
    {
      public:
	class PerStepStatistics : public libparest::PerStepStatistics
	{
	  public:
	    typedef libparest::PerStepStatistics BaseClass;
	    typedef std::vector<SmartPointer<BaseClass> > PerStepStatisticsList;
	  
	    PerStepStatistics (const PerStepStatisticsList &slave_statistics);

	    virtual ~PerStepStatistics ();
	  
	    virtual
	    std::list<std::string>
	    declare_entries () const;

	    virtual
	    std::list<double>
	    get_values () const;

	  private:
	    PerStepStatisticsList slave_statistics;

	    unsigned int active_constraints;
	  
	    friend class Master;
	};

	class SchurComplementMatrix;
    
	Master (MessageLog::ServerBase &message_log_server);
    
	typedef std::vector<SmartPointer<Slave::Base> > SlaveList;

	void attach_slave (Slave::Base *new_slave);

	void detach_slave (const Slave::Base *slave);
    
	void attach_parameter_representation (Parameter::Base *p);

	void initialize ();
    
	void finalize ();

	virtual void initialize_gauss_newton_step (const unsigned int step_no);

	virtual void end_gauss_newton_step ();
    
	virtual libparest::PerStepStatistics *
	create_and_set_statistics_object ();
    
	void compute_updates (const Vector<double> &delta_a);

	void perform_updates (const double step_length);

	void compute_trial_residual (const std::vector<double>  trial_alpha,
				     std::vector<double>       &residual) const;
    
	virtual std::pair<double,double> compute_misfits () const;
    
	virtual void write_solution () const;

	virtual
	double
	estimate_error (Vector<float> &parameter_error,
			unsigned int  &pe_type);
    
	virtual
	void
	refine_parameterizations (const Vector<float> &parameter_error,
				  const unsigned int   pe_type);

	virtual
	void
	refine_slaves ();

	virtual
	unsigned int
	compute_global_n_dofs () const;
    
	SchurComplementMatrix get_schur_matrix ();

	const Vector<double> & get_schur_rhs () const;
    
	const Vector<double> & get_present_iterate () const;

	unsigned int get_iteration_number () const;

	static
	void
	declare_graphical_output_labels (MessageLog::Client &message_log);

	DeclException0 (ExcSlaveNotFound);
    
      protected:
	static const char        *graphical_output_labels[];
	static const unsigned int n_graphical_output_labels;

	unsigned int iteration_number;

	SlaveList slaves;

	SmartPointer<Parameter::Base> parameter_representation;

	Vector<double> present_iterate;

	Vector<double> update;

	Vector<double> right_hand_side;

	std::vector<bool> active_bounds_constraints;
    
	mutable MessageLog::Client message_log;

	SmartPointer<PerStepStatistics> present_statistics;

	void write_program_status (const std::string &function,
				   const bool         on_off) const;
    
	friend class SchurComplementMatrix;
    };



    class Master::SchurComplementMatrix
    {
      private:    
	SchurComplementMatrix (const Master &master_object);

      public:

	SchurComplementMatrix (const SchurComplementMatrix &scm);
    
	void vmult (Vector<double>       &out,
		    const Vector<double> &in) const;

        void multiple_vmult (std::vector<Vector<double> >       &out,
                             const std::vector<Vector<double> > &in) const;

	double matrix_scalar_product (const Vector<double> &u,
				      const Vector<double> &v) const;
    
	unsigned int m () const;
    
	unsigned int n () const;

	const std::vector<bool> &
	get_active_constraints () const;
    
      private:
	const SmartPointer<const Master> master_object;

	friend class Master;
    };
  }
  
}



//----------------------------   master.h     ---------------------------
// end of #ifndef __libparest__master_h
#endif
//----------------------------   master.h     ---------------------------
