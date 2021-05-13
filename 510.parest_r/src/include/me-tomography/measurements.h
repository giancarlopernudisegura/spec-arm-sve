//----------------------------   measurements.h     ---------------------------
//    $Id: measurements.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2004, 2005, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   measurements.h     ---------------------------
#ifndef __parameter_estimation__measurements_h
#define __parameter_estimation__measurements_h
//----------------------------   measurements.h     ---------------------------


#include <libparest/slave/stationary/measurements.h>

#include <complex>

#include "config.h"


namespace METomography
{
  namespace Measurements
  {
    using namespace libparest::Slave::Stationary;

    namespace ScaledWeightedDirichletMeasurements
    {
    
      template <int dim, typename number>
      class Base
        : public libparest::Slave::Stationary::Measurements::Base<dim,number>,
          public libparest::Slave::Stationary::Measurements::BoundaryMeasurementBase
      {
        public:
          typedef
          typename libparest::Slave::Stationary::Measurements
          ::Base<dim,number>::StateDiscretization
          StateDiscretization;

          typedef
          MeasurementGetter::Factories::Base<dim>
          MeasurementGetterFactory;
      
          Base (const libparest::Slave::Stationary::ProblemDescription &problem_description,
                const Function<dim>           &weight_function,
                const std::set<unsigned char> &boundary_indicators);
        
        protected:
          virtual
          void
          compute_data_misfit_1 (const StateDiscretization      &state_discretization,
                                 const BlockVector<double>      &present_iterate,
                                 const MeasurementGetterFactory &getter_factory,
                                 const unsigned int              begin,
                                 const unsigned int              end,
                                 double                         &misfit_contribution) const;

          virtual
          void
          build_rhs_contribution_1 (const StateDiscretization      &state_discretization,
                                    const BlockVector<double>      &present_iterate,
                                    const MeasurementGetterFactory &getter_factory,
                                    BlockVector<double>            &output_vector,
                                    const unsigned int              begin,
                                    const unsigned int              end,
                                    Threads::ThreadMutex           &mutex) const;

          virtual
          void
          build_matrix_contribution_1 (const StateDiscretization      &state_discretization,
                                       const BlockVector<double>      &present_iterate,
                                       const MeasurementGetterFactory &getter_factory,
                                       BlockSparseMatrix<number>      &global_matrix,
                                       const unsigned int              begin,
                                       const unsigned int              end,
                                       Threads::ThreadMutex           &mutex) const;

          virtual
          void
          m_prime_1 (const StateDiscretization    &state_discretization,
                     const DoFHandler<dim>        &extended_dof_handler,
                     const Vector<double>         &present_iterate,
                     const Vector<double>         &weights,
                     const MeasurementGetterFactory &getter_factory,
                     Vector<float>                &output_vector,
                     const unsigned int            begin,
                     const unsigned int            end) const;

          virtual
          std::complex<double>
          scaling_factor (const StateDiscretization      &state_discretization,
                          const BlockVector<double>      &present_iterate,
                          const MeasurementGetterFactory &getter_factory) const = 0;
        protected:
          const SmartPointer<const Function<dim> > weight_function;
      };


      template <int dim, typename number>
      class Pure_L2 : public Base<dim,number>
      {
        public:
          typedef
          typename libparest::Slave::Stationary::Measurements
          ::Base<dim,number>::StateDiscretization
          StateDiscretization;

          typedef
          MeasurementGetter::Factories::Base<dim>
          MeasurementGetterFactory;

          Pure_L2 (const libparest::Slave::Stationary::ProblemDescription &problem_description,
                   const Function<dim>           &weight_function,
                   const std::set<unsigned char> &boundary_indicators);

        protected:
          virtual
          std::complex<double>
          scaling_factor (const StateDiscretization      &state_discretization,
                          const BlockVector<double>      &present_iterate,
                          const MeasurementGetterFactory &getter_factory) const;
          
      };
      


      template <int dim, typename number>
      class L2_Real : public Base<dim,number>
      {
        public:
          typedef
          typename libparest::Slave::Stationary::Measurements
          ::Base<dim,number>::StateDiscretization
          StateDiscretization;

          typedef
          MeasurementGetter::Factories::Base<dim>
          MeasurementGetterFactory;

          L2_Real (const libparest::Slave::Stationary::ProblemDescription &problem_description,
                   const Function<dim>           &weight_function,
                   const std::set<unsigned char> &boundary_indicators);

        protected:
          virtual
          std::complex<double>
          scaling_factor (const StateDiscretization      &state_discretization,
                          const BlockVector<double>      &present_iterate,
                          const MeasurementGetterFactory &getter_factory) const;
          
      };



      template <int dim, typename number>
      class L2_Complex : public Base<dim,number>
      {
        public:
          typedef
          typename libparest::Slave::Stationary::Measurements
          ::Base<dim,number>::StateDiscretization
          StateDiscretization;

          typedef
          MeasurementGetter::Factories::Base<dim>
          MeasurementGetterFactory;

          L2_Complex (const libparest::Slave::Stationary::ProblemDescription &problem_description,
                      const Function<dim>           &weight_function,
                      const std::set<unsigned char> &boundary_indicators);

        protected:
          virtual
          std::complex<double>
          scaling_factor (const StateDiscretization      &state_discretization,
                          const BlockVector<double>      &present_iterate,
                          const MeasurementGetterFactory &getter_factory) const;
          
      };
      
    }
    

    namespace ReferencedMeasurements
    {
      namespace ReferencePointDetermination
      {
	enum ReferencePointDetermination
	{
	      automatic,
	      as_parameter
	};
      }
      
      template <int dim, typename number>
      class RatioOverRatioMinusOne
	: public libparest::Slave::Stationary::Measurements::Base<dim,number>,
          public libparest::Slave::Stationary::Measurements::BoundaryMeasurementBase
      {
	public:
	  typedef
	  typename libparest::Slave::Stationary::Measurements
	  ::Base<dim,number>::StateDiscretization
	  StateDiscretization;

	  typedef
	  MeasurementGetter::Factories::Base<dim>
	  MeasurementGetterFactory;
      
	  RatioOverRatioMinusOne (const libparest::Slave::Stationary::ProblemDescription &problem_description,
				  const Function<dim>           &weight_function,
				  const std::set<unsigned char> &boundary_indicator);
      
	protected:
	  virtual
	  void
	  compute_data_misfit_1 (const StateDiscretization      &state_discretization,
				 const BlockVector<double>      &present_iterate,
				 const MeasurementGetterFactory &getter_factory,
				 const unsigned int              begin,
				 const unsigned int              end,
				 double                         &misfit_contribution) const;

	  virtual
	  void
	  build_rhs_contribution_1 (const StateDiscretization      &state_discretization,
				    const BlockVector<double>      &present_iterate,
				    const MeasurementGetterFactory &getter_factory,
				    BlockVector<double>            &output_vector,
				    const unsigned int              begin,
				    const unsigned int              end,
				    Threads::ThreadMutex           &mutex) const;

	  virtual
	  void
	  build_matrix_contribution_1 (const StateDiscretization      &state_discretization,
				       const BlockVector<double>      &present_iterate,
				       const MeasurementGetterFactory &getter_factory,
				       BlockSparseMatrix<number>      &global_matrix,
				       const unsigned int              begin,
				       const unsigned int              end,
				       Threads::ThreadMutex           &mutex) const;

	  virtual
	  void
	  m_prime_1 (const StateDiscretization    &state_discretization,
                     const DoFHandler<dim>        &extended_dof_handler,
		     const Vector<double>         &present_iterate,
		     const Vector<double>         &weights,
		     const MeasurementGetterFactory &getter_factory,
		     Vector<float>                &output_vector,
		     const unsigned int            begin,
		     const unsigned int            end) const;

	  DeclException1 (ExcDiagNotPositive,
			  double,
			  << "A diagonal element of the second derivative matrix "
			  << "is not positive, but rather has value " << arg1);

        protected:
          const SmartPointer<const Function<dim> > weight_function;
      };


      template <int dim, typename number>
      class RatioMinusRatio
	: public libparest::Slave::Stationary::Measurements::Base<dim,number>,
          public libparest::Slave::Stationary::Measurements::BoundaryMeasurementBase
      {
	public:
	  typedef
	  typename libparest::Slave::Stationary::Measurements
	  ::Base<dim,number>::StateDiscretization
	  StateDiscretization;

	  typedef
	  MeasurementGetter::Factories::Base<dim>
	  MeasurementGetterFactory;
      
	  RatioMinusRatio (const libparest::Slave::Stationary::ProblemDescription &problem_description,
			   const Function<dim>           &weight_function,
                           const std::set<unsigned char> &boundary_indicator);
      
          virtual
          void
          initialize_gauss_newton_step (const StateDiscretization        &state_discretization,
                                        const BlockVector<double>        &present_iterate,
                                        const MeasurementGetter::Factories::Base<dim> &getter_factory);

        protected:
	  virtual
	  void
	  compute_data_misfit_1 (const StateDiscretization      &state_discretization,
				 const BlockVector<double>      &present_iterate,
				 const MeasurementGetterFactory &getter_factory,
				 const unsigned int              begin,
				 const unsigned int              end,
				 double                         &misfit_contribution) const;

	  virtual
	  void
	  build_rhs_contribution_1 (const StateDiscretization      &state_discretization,
				    const BlockVector<double>      &present_iterate,
				    const MeasurementGetterFactory &getter_factory,
				    BlockVector<double>            &output_vector,
				    const unsigned int              begin,
				    const unsigned int              end,
				    Threads::ThreadMutex           &mutex) const;

	  virtual
	  void
	  build_matrix_contribution_1 (const StateDiscretization      &state_discretization,
				       const BlockVector<double>      &present_iterate,
				       const MeasurementGetterFactory &getter_factory,
				       BlockSparseMatrix<number>      &global_matrix,
				       const unsigned int              begin,
				       const unsigned int              end,
				       Threads::ThreadMutex           &mutex) const;

	  virtual
	  void
	  m_prime_1 (const StateDiscretization    &state_discretization,
                     const DoFHandler<dim>        &extended_dof_handler,
		     const Vector<double>         &present_iterate,
		     const Vector<double>         &weights,
		     const MeasurementGetterFactory &getter_factory,
		     Vector<float>                &output_vector,
		     const unsigned int            begin,
		     const unsigned int            end) const;

        private:
          std::complex<double> z_ref, complete_z_ref;

          Point<dim> reference_point;

	  unsigned int reference_vertex;

        protected:
          const SmartPointer<const Function<dim> > weight_function;
      };
      
    }
  }
}



//----------------------------   measurements.h     ---------------------------
// end of #ifndef __parameter_estimation__measurements_h
#endif
//----------------------------   measurements.h     ---------------------------
