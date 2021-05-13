//----------------------------   parameter_base.h     ---------------------------
//    $Id: base.h 3433 2007-07-11 20:56:58Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2003, 2004, 2006, 2007, 2009 by Wolfgang Bangerth
//
//----------------------------   parameter_base.h     ---------------------------
#ifndef __libparest__parameter_base_h
#define __libparest__parameter_base_h
//----------------------------   parameter_base.h     ---------------------------

#include <base/subscriptor.h>
#include <base/smartpointer.h>
#include <lac/vector.h>

#include <vector>

namespace libparest
{
  class PerStepStatistics;
}

namespace libparest
{
  using namespace dealii;


  namespace Parameter
  {


    class Base : virtual public Subscriptor
    {
      public:
        class MatrixRepresentation 
        {
          public:
	    virtual ~MatrixRepresentation ();
	    
            virtual
            void
            vmult (Vector<double>       &out,
                   const Vector<double> &in) const = 0;

            virtual
            void
            multiple_vmult (std::vector<Vector<double> >       &out,
                            const std::vector<Vector<double> > &in) const = 0;
            
            virtual void solve (Vector<double>          &x,
                                const Vector<double>    &b,
                                const std::vector<bool> &inactive_parameters) const = 0;
        };

        Base ();

        virtual ~Base ();
    
        virtual
	void
	initialize_gauss_newton_step (const unsigned int   step_no,
				      const Vector<float> &information_per_dof);

        virtual void end_gauss_newton_step ();

        virtual PerStepStatistics *
        create_and_set_statistics_object () = 0;
    
        virtual unsigned int n_dofs () const = 0;

        virtual void preset_initial_values (Vector<double> &initial_iterate) const = 0;

        virtual void finalize () = 0;

        virtual void write_solution (const Vector<double> &present_iterate) const = 0;
    
        virtual void build_matrices (const Vector<double> &linearization_point) = 0;

        virtual void build_rhs (const Vector<double> &linearization_point,
                                Vector<double>       &output_vector) const = 0;

        virtual void set_back_to_bounds (Vector<double> &parameters) const = 0;

        virtual bool satisfies_bounds (const Vector<double> &parameters) const = 0;

        virtual void at_lower_bounds (const Vector<double> &parameters,
                                      std::vector<bool>    &flags) const = 0;

        virtual void at_upper_bounds (const Vector<double> &parameters,
                                      std::vector<bool>    &flags) const = 0;

        virtual void at_bounds (const Vector<double> &parameters,
                                std::vector<bool>    &lower_flags,
                                std::vector<bool>    &upper_flags) const;

        virtual void satisfy_constraints (const Vector<double> &present_iterate,
                                          Vector<double>       &update) const = 0;
    
        virtual double compute_inverse_mass_norm_square (const Vector<double> &v) const = 0;
    
        virtual double compute_model_misfit (const Vector<double> &iterate) const = 0;

	virtual void consider_misfits (const double data_misfit,
				       const double model_misfit);
	
        virtual double compute_model_error (const Vector<double> &iterate) const = 0;

        virtual void refine_parameterization (const Vector<float>  &parameter_error,
                                              const unsigned int    pe_type,
                                              const Vector<double> &old_parameter_values,
                                              Vector<double>       &new_parameter_values,
                                              std::vector<bool>    &refinement_indicators,
                                              std::vector<bool>    &coarsening_indicators) = 0;
    
        virtual const MatrixRepresentation & get_regularization_matrix () const = 0;

        virtual const MatrixRepresentation & get_mass_matrix () const = 0;

	virtual
	void
	scale_information_content_to_density (const Vector<float> &content,
					      Vector<float>       &density) const = 0;
	
        unsigned int get_iteration_number () const;

      protected:

	Vector<float> information_per_dof;
	
      private:

        unsigned int iteration_number;
    };
    
  }
  
}



//----------------------------   parameter_base.h     ---------------------------
// end of #ifndef __libparest__parameter_base_h
#endif
//----------------------------   parameter_base.h     ---------------------------
