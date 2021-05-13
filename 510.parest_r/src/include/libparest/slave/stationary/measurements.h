//----------------------------   stationary_measurements.h     ---------------------------
//    $Id: measurements.h 3734 2008-12-14 20:05:24Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2004, 2005, 2006, 2008, 2009 by Wolfgang Bangerth
//
//----------------------------   stationary_measurements.h     ---------------------------
#ifndef __parameter_estimation__stationary_measurements_h
#define __parameter_estimation__stationary_measurements_h
//----------------------------   stationary_measurements.h     ---------------------------


#include <base/subscriptor.h>
#include <base/thread_management.h>
#include <base/smartpointer.h>
#include <dofs/dof_handler.h>
#include <fe/fe_values.h>
#include <libparest/slave/stationary/problem_description.h>

#include <set>

namespace dealii
{
  template <int>     class Function;
  template <int,int> class Tensor;
  template <int dim> class Quadrature;
  template <class T> class Vector;
  template <class T> class BlockVector;
  template <class T> class BlockSparseMatrix;
  template <int dim> class Point;
}


namespace libparest
{
  using namespace dealii;


  namespace Slave
  {
    
    namespace Stationary
    {
      namespace Discretization
      {
	template <int dim> class Base;
      }
      template <int dim> class SyntheticDataBase;


      namespace MeasurementGetter
      {
        namespace MeasurementType
        {
          enum Type
          {
                values, gradients
          };
        }
        
	namespace CellGetter
	{
	  template <int dim>
	  class Base
	  {
	    public:
	      virtual ~Base ();

	      virtual
	      void
	      get_values (const typename Triangulation<dim>::active_cell_iterator &cell,
			  std::vector<Vector<double> >                            &values) = 0;

	      virtual
	      void
	      get_gradients (const typename Triangulation<dim>::active_cell_iterator &cell,
			     std::vector<std::vector<Tensor<1,dim> > >               &gradients) = 0;
	  };

      

	  template <int dim>
	  class SyntheticData : public Base<dim>
	  {
	    public:
	      SyntheticData (const SyntheticDataBase<dim> &synthetic_data,
			     const Quadrature<dim>        &quadrature,
			     const MeasurementType::Type   measurement_type);

	      virtual
	      void
	      get_values (const typename Triangulation<dim>::active_cell_iterator &cell,
			  std::vector<Vector<double> >                            &values);

	      virtual
	      void
	      get_gradients (const typename Triangulation<dim>::active_cell_iterator &cell,
			     std::vector<std::vector<Tensor<1,dim> > >               &gradients);
	    private:
	      FEValues<dim> fe_values;

	      const SmartPointer<const SyntheticDataBase<dim> > synthetic_data;
	  };


	  template <int dim>
	  class MeasurementFunction : public Base<dim>
	  {
	    public:
	      MeasurementFunction (const Function<dim>          &function,
                                   const Quadrature<dim>        &quadrature,
                                   const MeasurementType::Type   measurement_type);

	      virtual
	      void
	      get_values (const typename Triangulation<dim>::active_cell_iterator &cell,
			  std::vector<Vector<double> >                            &values);

	      virtual
	      void
	      get_gradients (const typename Triangulation<dim>::active_cell_iterator &cell,
			     std::vector<std::vector<Tensor<1,dim> > >               &gradients);
	    private:
	      FEValues<dim> fe_values;

	      const SmartPointer<const Function<dim> > function;
	  };
          


	  template <int dim>
	  class ZeroFunction : public Base<dim>
	  {
	    public:
	      ZeroFunction ();

	      virtual
	      void
	      get_values (const typename Triangulation<dim>::active_cell_iterator &,
			  std::vector<Vector<double> >                            &values);

	      virtual
	      void
	      get_gradients (const typename Triangulation<dim>::active_cell_iterator &,
			     std::vector<std::vector<Tensor<1,dim> > >               &gradients);
	  };
	}


	namespace FaceGetter
	{
	  template <int dim>
	  class Base
	  {
	    public:
	      virtual ~Base ();
	

	      virtual
	      void
	      get_values (const typename Triangulation<dim>::active_cell_iterator &cell,
			  const unsigned int                                       face_no,
			  std::vector<Vector<double> >                            &values) = 0;

	      virtual
	      void
	      get_gradients (const typename Triangulation<dim>::active_cell_iterator &cell,
			     const unsigned int                                       face_no,
			     std::vector<std::vector<Tensor<1,dim> > >               &gradients) = 0;
	  };



	  template <int dim>
	  class SyntheticData : public Base<dim>
	  {
	    public:
	      SyntheticData (const SyntheticDataBase<dim> &synthetic_data,
			     const Quadrature<dim-1>      &quadrature,
			     const MeasurementType::Type   measurement_type);
      
	      virtual
	      void
	      get_values (const typename Triangulation<dim>::active_cell_iterator &cell,
			  const unsigned int                                       face_no,
			  std::vector<Vector<double> >                            &values);

	      virtual
	      void
	      get_gradients (const typename Triangulation<dim>::active_cell_iterator &cell,
			     const unsigned int                                       face_no,
			     std::vector<std::vector<Tensor<1,dim> > >               &gradients);
	    private:
	      FEFaceValues<dim> fe_face_values;

	      const SmartPointer<const SyntheticDataBase<dim> > synthetic_data;
	  };



	  template <int dim>
	  class MeasurementFunction : public Base<dim>
	  {
	    public:
	      MeasurementFunction (const Function<dim>          &function,
                                   const Quadrature<dim-1>      &quadrature,
                                   const MeasurementType::Type   measurement_type);
      
	      virtual
	      void
	      get_values (const typename Triangulation<dim>::active_cell_iterator &cell,
			  const unsigned int                                       face_no,
			  std::vector<Vector<double> >                            &values);

	      virtual
	      void
	      get_gradients (const typename Triangulation<dim>::active_cell_iterator &cell,
			     const unsigned int                                       face_no,
			     std::vector<std::vector<Tensor<1,dim> > >               &gradients);
	    private:
	      FEFaceValues<dim> fe_face_values;

	      const SmartPointer<const Function<dim> > function;
	  };
          




	  template <int dim>
	  class ZeroFunction : public Base<dim>
	  {
	    public:
	      ZeroFunction ();

	      virtual
	      void
	      get_values (const typename Triangulation<dim>::active_cell_iterator &,
			  const unsigned int                                       ,
			  std::vector<Vector<double> >                            &values);

	      virtual
	      void
	      get_gradients (const typename Triangulation<dim>::active_cell_iterator &,
			     const unsigned int                                       ,
			     std::vector<std::vector<Tensor<1,dim> > >               &gradients);
	  };
	}


	namespace Factories
	{
	  template <int dim>
	  class Base
	  {
	    public:
	      virtual ~Base ();

	      virtual
	      CellGetter::Base<dim>*
	      create (const Quadrature<dim> &quadrature,
                      const MeasurementType::Type measurement_type) const = 0;

	      virtual
	      FaceGetter::Base<dim>*
	      create (const Quadrature<dim-1> &quadrature,
                      const MeasurementType::Type measurement_type) const = 0;
	  };


	  template <int dim>
	  class SyntheticData : public Base<dim>
	  {
	    public:
	      SyntheticData (const SyntheticDataBase<dim> &synthetic_data);
	  
	      virtual
	      CellGetter::SyntheticData<dim>*
	      create (const Quadrature<dim> &quadrature,
                      const MeasurementType::Type  measurement_type) const;

	      virtual
	      FaceGetter::SyntheticData<dim>*
	      create (const Quadrature<dim-1> &quadrature,
                      const MeasurementType::Type  measurement_type) const;
	  
	    private:
	      const SmartPointer<const SyntheticDataBase<dim> > synthetic_data;
	  };



	  template <int dim>
	  class MeasurementFunction : public Base<dim>
	  {
	    public:
	      MeasurementFunction (const Function<dim> &function);
	  
	      virtual
	      CellGetter::MeasurementFunction<dim>*
	      create (const Quadrature<dim> &quadrature,
                      const MeasurementType::Type  measurement_type) const;

	      virtual
	      FaceGetter::MeasurementFunction<dim>*
	      create (const Quadrature<dim-1> &quadrature,
                      const MeasurementType::Type  measurement_type) const;
	  
	    private:
	      const SmartPointer<const Function<dim> > function;
	  };

      
	  template <int dim>
	  class ZeroFunction : public Base<dim>
	  {
	    public:
	      ZeroFunction ();
	      
	      virtual
	      CellGetter::ZeroFunction<dim>*
	      create (const Quadrature<dim> &quadrature,
                      const MeasurementType::Type  measurement_type) const;

	      virtual
	      FaceGetter::ZeroFunction<dim>*
	      create (const Quadrature<dim-1> &quadrature,
                      const MeasurementType::Type  measurement_type) const;
	  };
	}
      }   



      namespace Measurements
      {
  

	template <int dim, typename number>
	class Base : public Subscriptor
	{
	  public:
	    typedef Discretization::Base<dim> StateDiscretization;

	    Base (const libparest::Slave::Stationary::ProblemDescription &problem_description);
      
	    virtual ~Base () {};
    
	    virtual
	    double
	    compute_data_misfit (const StateDiscretization        &state_discretization,
				 const BlockVector<double>        &present_iterate,
				 const MeasurementGetter::Factories::Base<dim> &getter_factory) const;

	    virtual
	    void
	    build_rhs_contribution (const StateDiscretization        &state_discretization,
				    const BlockVector<double>        &present_iterate,
				    const MeasurementGetter::Factories::Base<dim> &getter_factory,
				    BlockVector<double>              &output_vector) const;

	    virtual
	    void
	    build_matrix_contribution (const StateDiscretization        &state_discretization,
				       const BlockVector<double>        &present_iterate,
				       const MeasurementGetter::Factories::Base<dim> &getter_factory,
				       BlockSparseMatrix<number>        &global_matrix) const;

	    virtual
	    void
	    m_prime (const StateDiscretization    &state_discretization,
                     const DoFHandler<dim>        &extended_dof_handler,
		     const Vector<double>         &present_iterate,
		     const Vector<double>         &weights,
		     const MeasurementGetter::Factories::Base<dim> &getter_factory,
		     Vector<float>                &output_vector) const;

            virtual
            void
            initialize_gauss_newton_step (const StateDiscretization        &state_discretization,
                                          const BlockVector<double>        &present_iterate,
                                          const MeasurementGetter::Factories::Base<dim> &getter_factory);
            
	  protected:
	    const SmartPointer<const libparest::Slave::Stationary::ProblemDescription> problem_description;

	    virtual
	    void
	    compute_data_misfit_1 (const StateDiscretization        &state_discretization,
				   const BlockVector<double>        &present_iterate,
				   const MeasurementGetter::Factories::Base<dim> &getter_factory,
				   const unsigned int                begin,
				   const unsigned int                end,
				   double                           &misfit_contribution) const = 0;

	    virtual
	    void
	    build_rhs_contribution_1 (const StateDiscretization        &state_discretization,
				      const BlockVector<double>        &present_iterate,
				      const MeasurementGetter::Factories::Base<dim> &getter_factory,
				      BlockVector<double>              &output_vector,
				      const unsigned int                begin,
				      const unsigned int                end,
				      Threads::ThreadMutex             &mutex) const = 0;

	    virtual
	    void
	    build_matrix_contribution_1 (const StateDiscretization        &state_discretization,
					 const BlockVector<double>        &present_iterate,
					 const MeasurementGetter::Factories::Base<dim> &getter_factory,
					 BlockSparseMatrix<number>        &global_matrix,
					 const unsigned int                begin,
					 const unsigned int                end,
					 Threads::ThreadMutex             &mutex) const = 0;

	    virtual
	    void
	    m_prime_1 (const StateDiscretization    &state_discretization,
                       const DoFHandler<dim>        &extended_dof_handler,
		       const Vector<double>         &present_iterate,
		       const Vector<double>         &weights,
		       const MeasurementGetter::Factories::Base<dim> &getter_factory,
		       Vector<float>                &output_vector,
		       const unsigned int            begin,
		       const unsigned int            end) const = 0;
	};


        class BoundaryMeasurementBase
        {
          public:
	    BoundaryMeasurementBase (const std::set<unsigned char> &boundary_indicators);

            BoundaryMeasurementBase (const unsigned char boundary_indicator);
            
          protected:
            bool
            is_measurement_boundary (const unsigned char boundary_indicator) const;
            
          private:
            const std::set<unsigned char> boundary_indicators;
        };
        

	template <int dim, typename number>
	class L2_norm : public Base<dim,number>
	{
	  public:
	    typedef typename Base<dim,number>::StateDiscretization	StateDiscretization;
      
	    L2_norm (const libparest::Slave::Stationary::ProblemDescription &problem_description);

	  protected:
	    virtual
	    void
	    compute_data_misfit_1 (const StateDiscretization        &state_discretization,
				   const BlockVector<double>        &present_iterate,
				   const MeasurementGetter::Factories::Base<dim> &getter_factory,
				   const unsigned int                begin,
				   const unsigned int                end,
				   double                           &misfit_contribution) const;

	    virtual
	    void
	    build_rhs_contribution_1 (const StateDiscretization        &state_discretization,
				      const BlockVector<double>        &present_iterate,
				      const MeasurementGetter::Factories::Base<dim> &getter_factory,
				      BlockVector<double>              &output_vector,
				      const unsigned int                begin,
				      const unsigned int                end,
				      Threads::ThreadMutex             &mutex) const;

	    virtual
	    void
	    build_matrix_contribution_1 (const StateDiscretization        &state_discretization,
					 const BlockVector<double>        &present_iterate,
					 const MeasurementGetter::Factories::Base<dim> &getter_factory,
					 BlockSparseMatrix<number>        &global_matrix,
					 const unsigned int                begin,
					 const unsigned int                end,
					 Threads::ThreadMutex             &mutex) const;

	    virtual
	    void
	    m_prime_1 (const StateDiscretization    &state_discretization,
                       const DoFHandler<dim>        &extended_dof_handler,
		       const Vector<double>         &present_iterate,
		       const Vector<double>         &weights,
		       const MeasurementGetter::Factories::Base<dim> &getter_factory,
		       Vector<float>                &output_vector,
		       const unsigned int            begin,
		       const unsigned int            end) const;
	};




	template <int dim, typename number>
	class H1_seminorm : public Base<dim, number>
	{
	  public:
	    typedef typename Base<dim,number>::StateDiscretization StateDiscretization;
      
	    H1_seminorm (const libparest::Slave::Stationary::ProblemDescription &problem_description);      

	  protected:
	    virtual
	    void
	    compute_data_misfit_1 (const StateDiscretization        &state_discretization,
				   const BlockVector<double>        &present_iterate,
				   const MeasurementGetter::Factories::Base<dim> &getter_factory,
				   const unsigned int                begin,
				   const unsigned int                end,
				   double                           &misfit_contribution) const;

	    virtual
	    void
	    build_rhs_contribution_1 (const StateDiscretization        &state_discretization,
				      const BlockVector<double>        &present_iterate,
				      const MeasurementGetter::Factories::Base<dim> &getter_factory,
				      BlockVector<double>              &output_vector,
				      const unsigned int                begin,
				      const unsigned int                end,
				      Threads::ThreadMutex             &mutex) const;

	    virtual
	    void
	    build_matrix_contribution_1 (const StateDiscretization        &state_discretization,
					 const BlockVector<double>        &present_iterate,
					 const MeasurementGetter::Factories::Base<dim> &getter_factory,
					 BlockSparseMatrix<number>        &output_matrix,
					 const unsigned int                begin,
					 const unsigned int                end,
					 Threads::ThreadMutex             &mutex) const;

	    virtual
	    void
	    m_prime_1 (const StateDiscretization    &state_discretization,
                       const DoFHandler<dim>        &extended_dof_handler,
		       const Vector<double>         &present_iterate,
		       const Vector<double>         &weights,
		       const MeasurementGetter::Factories::Base<dim> &getter_factory,
		       Vector<float>                &output_vector,
		       const unsigned int            begin,
		       const unsigned int            end) const;
	};

  

	template <int dim, typename number>
	class L2_4_stripes : public Base<dim, number>
	{
	  public:
	    typedef typename Base<dim,number>::StateDiscretization StateDiscretization;
      
	    L2_4_stripes (const libparest::Slave::Stationary::ProblemDescription &problem_description);
      

	  protected:
	    virtual
	    void
	    compute_data_misfit_1 (const StateDiscretization        &state_discretization,
				   const BlockVector<double>        &present_iterate,
				   const MeasurementGetter::Factories::Base<dim> &getter_factory,
				   const unsigned int                begin,
				   const unsigned int                end,
				   double                           &misfit_contribution) const;

	    virtual
	    void
	    build_rhs_contribution_1 (const StateDiscretization        &state_discretization,
				      const BlockVector<double>        &present_iterate,
				      const MeasurementGetter::Factories::Base<dim> &getter_factory,
				      BlockVector<double>              &output_vector,
				      const unsigned int                begin,
				      const unsigned int                end,
				      Threads::ThreadMutex             &mutex) const;

	    virtual
	    void
	    build_matrix_contribution_1 (const StateDiscretization        &state_discretization,
					 const BlockVector<double>        &present_iterate,
					 const MeasurementGetter::Factories::Base<dim> &getter_factory,
					 BlockSparseMatrix<number>        &global_matrix,
					 const unsigned int                begin,
					 const unsigned int                end,
					 Threads::ThreadMutex             &mutex) const;

	    virtual
	    void
	    m_prime_1 (const StateDiscretization    &state_discretization,
                       const DoFHandler<dim>        &extended_dof_handler,
		       const Vector<double>         &present_iterate,
		       const Vector<double>         &weights,
		       const MeasurementGetter::Factories::Base<dim> &getter_factory,
		       Vector<float>                &output_vector,
		       const unsigned int            begin,
		       const unsigned int            end) const;

	  private:

	    static bool inside_subdomain (const Point<dim> &p);	    
	};



	template <int dim, typename number>
	class Neumann_boundary : public Base<dim, number>,
                                 public BoundaryMeasurementBase
	{
	  public:
	    typedef typename Base<dim,number>::StateDiscretization StateDiscretization;
      
	    Neumann_boundary (const libparest::Slave::Stationary::ProblemDescription &problem_description,
			      const unsigned char      boundary_indicator,
			      const std::vector<bool> &component_mask = std::vector<bool>());

	    Neumann_boundary (const libparest::Slave::Stationary::ProblemDescription &problem_description,
			      const std::set<unsigned char> &boundary_indicators,
			      const std::vector<bool> &component_mask = std::vector<bool>());
            
	  protected:
	    virtual
	    void
	    compute_data_misfit_1 (const StateDiscretization        &state_discretization,
				   const BlockVector<double>        &present_iterate,
				   const MeasurementGetter::Factories::Base<dim> &getter_factory,
				   const unsigned int                begin,
				   const unsigned int                end,
				   double                           &misfit_contribution) const;

	    virtual
	    void
	    build_rhs_contribution_1 (const StateDiscretization        &state_discretization,
				      const BlockVector<double>        &present_iterate,
				      const MeasurementGetter::Factories::Base<dim> &getter_factory,
				      BlockVector<double>              &output_vector,
				      const unsigned int                begin,
				      const unsigned int                end,
				      Threads::ThreadMutex             &mutex) const;

	    virtual
	    void
	    build_matrix_contribution_1 (const StateDiscretization        &state_discretization,
					 const BlockVector<double>        &present_iterate,
					 const MeasurementGetter::Factories::Base<dim> &getter_factory,
					 BlockSparseMatrix<number>        &global_matrix,
					 const unsigned int                begin,
					 const unsigned int                end,
					 Threads::ThreadMutex             &mutex) const;

	    virtual
	    void
	    m_prime_1 (const StateDiscretization    &state_discretization,
                       const DoFHandler<dim>        &extended_dof_handler,
		       const Vector<double>         &present_iterate,
		       const Vector<double>         &weights,
		       const MeasurementGetter::Factories::Base<dim> &getter_factory,
		       Vector<float>                &output_vector,
		       const unsigned int            begin,
		       const unsigned int            end) const;

	  private:

	    const std::vector<bool> component_mask;
	};



	template <int dim, typename number>
	class Dirichlet_boundary : public Base<dim, number>,
                                   public BoundaryMeasurementBase
	{
	  public:
	    typedef typename Base<dim,number>::StateDiscretization StateDiscretization;
      
	    Dirichlet_boundary (const libparest::Slave::Stationary::ProblemDescription &problem_description,
                                const unsigned char      boundary_indicator,
                                const std::vector<bool> &component_mask = std::vector<bool>());

	    Dirichlet_boundary (const libparest::Slave::Stationary::ProblemDescription &problem_description,
                                const std::set<unsigned char> &boundary_indicators,
                                const std::vector<bool> &component_mask = std::vector<bool>());
            
	  protected:
	    virtual
	    void
	    compute_data_misfit_1 (const StateDiscretization        &state_discretization,
				   const BlockVector<double>        &present_iterate,
				   const MeasurementGetter::Factories::Base<dim> &getter_factory,
				   const unsigned int                begin,
				   const unsigned int                end,
				   double                           &misfit_contribution) const;

	    virtual
	    void
	    build_rhs_contribution_1 (const StateDiscretization        &state_discretization,
				      const BlockVector<double>        &present_iterate,
				      const MeasurementGetter::Factories::Base<dim> &getter_factory,
				      BlockVector<double>              &output_vector,
				      const unsigned int                begin,
				      const unsigned int                end,
				      Threads::ThreadMutex             &mutex) const;

	    virtual
	    void
	    build_matrix_contribution_1 (const StateDiscretization        &state_discretization,
					 const BlockVector<double>        &present_iterate,
					 const MeasurementGetter::Factories::Base<dim> &getter_factory,
					 BlockSparseMatrix<number>        &global_matrix,
					 const unsigned int                begin,
					 const unsigned int                end,
					 Threads::ThreadMutex             &mutex) const;

	    virtual
	    void
	    m_prime_1 (const StateDiscretization    &state_discretization,
                       const DoFHandler<dim>        &extended_dof_handler,
		       const Vector<double>         &present_iterate,
		       const Vector<double>         &weights,
		       const MeasurementGetter::Factories::Base<dim> &getter_factory,
		       Vector<float>                &output_vector,
		       const unsigned int            begin,
		       const unsigned int            end) const;

	  private:
	    const std::vector<bool> component_mask;
	};



        template <int dim, typename number>
        class WeightedDirichletBoundary : public Base<dim,number>,
                                          public BoundaryMeasurementBase
        {
          public:
            typedef
            typename libparest::Slave::Stationary::Measurements
            ::Base<dim,number>::StateDiscretization
            StateDiscretization;

            typedef
            MeasurementGetter::Factories::Base<dim>
            MeasurementGetterFactory;
      
            WeightedDirichletBoundary (const libparest::Slave::Stationary::ProblemDescription &problem_description,
                                       const Function<dim>           &weight_function,
                                       const std::set<unsigned char> &boundary_indicators,
                                       const std::vector<bool> &component_mask = std::vector<bool>());
        
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
                                         const MeasurementGetter::Factories::Base<dim> &getter_factory,
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
            const SmartPointer<const Function<dim> > weight_function;
            
            const std::vector<bool> component_mask;
        };


        

// ---------- some inline functions ----------------------

        inline
        bool
        BoundaryMeasurementBase::
        is_measurement_boundary (const unsigned char boundary_indicator) const
        {
          return (boundary_indicators.find (boundary_indicator)
                  !=
                  boundary_indicators.end());
        }
      }
    } 
  }
}


//----------------------------   stationary_measurements.h     ---------------------------
// end of #ifndef __parameter_estimation__stationary_measurements_h
#endif
//----------------------------   stationary_measurements.h     ---------------------------
