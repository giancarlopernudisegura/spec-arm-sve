/* $Id: measurements.cc 3698 2008-08-25 19:45:50Z bangerth $ */



#include <libparest/slave/stationary/measurements.h>
#include <libparest/slave/stationary/synthetic_data.h>
#include <libparest/slave/stationary/state_discretization.h>

#include <base/multithread_info.h>
#include <base/function.h>
#include <base/quadrature_lib.h>
#include <lac/block_vector.h>
#include <lac/block_sparse_matrix.h>
#include <fe/fe_values.h>

#include <me-tomography/measurements.h>
#include <me-tomography/geometry.h>

#include <numeric>
#include <complex>


namespace 
{
				   /**
				    * Return the scalar product of two
				    * complex numbers. This is the
				    * derivative of the norm operation
				    * on complex numbers.
				    */
  inline
  double complex_scalar_product (const std::complex<double> &a,
				 const std::complex<double> &b)
  {
    return a.real()*b.real() + a.imag()*b.imag();
  }
}


namespace METomography
{
  namespace Measurements
  {
    using namespace libparest::Slave::Stationary;

    
    namespace ScaledWeightedDirichletMeasurements
    {
      template <int dim, typename number>
      Base<dim,number>::
      Base (const libparest::Slave::Stationary::ProblemDescription &problem_description,
            const Function<dim>           &weight_function,
            const std::set<unsigned char> &boundary_indicators)
                      :
                      libparest::Slave::Stationary::Measurements::Base<dim,number> (problem_description),
                      libparest::Slave::Stationary::Measurements::BoundaryMeasurementBase (boundary_indicators),
                      weight_function (&weight_function)
      {}

    
    
      template <int dim, typename number>
      void
      Base<dim,number>::
      compute_data_misfit_1 (const StateDiscretization        &state_discretization,
                             const BlockVector<double>        &present_iterate,
                             const MeasurementGetterFactory &getter_factory,
                             const unsigned int                begin,
                             const unsigned int                end,
                             double                           &data_misfit) const
      {
        const Quadrature<dim-1> &quadrature
          = state_discretization.finite_elements->face_quadrature;

        const unsigned int n_q_points = quadrature.n_quadrature_points;

        std::auto_ptr<MeasurementGetter::FaceGetter::Base<dim> >
          measurement_getter (getter_factory.create (quadrature, MeasurementGetter::MeasurementType::values));      

        const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
    
        FEFaceValues<dim>  fe_values (fe_global, quadrature,
                                      UpdateFlags(update_values      |
                                                  update_q_points    |
                                                  update_JxW_values));
    
        std::vector<Vector<double> >
          iterate_values (n_q_points,
                          Vector<double>(this->problem_description->n_variables));
        std::vector<Vector<double> >
          measurement_values (n_q_points,
                              Vector<double>(this->problem_description->n_primal_variables));
    
        std::vector<double> weight_values (n_q_points);

        const std::complex<double> scaling_factor
          = this->scaling_factor (state_discretization, present_iterate,
                                  getter_factory);
        
        typename DoFHandler<dim>::active_cell_iterator
          cell = state_discretization.dof_handlers->global.begin_active(),
          endc = state_discretization.dof_handlers->global.begin_active();
        std::advance (cell, static_cast<signed int>(begin));
        std::advance (endc, static_cast<signed int>(end));  

        for (; cell!=endc; ++cell)
          for (unsigned int face_no=0;
               face_no<GeometryInfo<dim>::faces_per_cell;
               ++face_no)
            if (cell->face(face_no)->at_boundary() &&
                this->is_measurement_boundary (cell->face(face_no)->boundary_indicator()))
              {
                fe_values.reinit (cell, face_no);

                                                 
                                                 
                fe_values.get_function_values  (present_iterate, iterate_values);

                weight_function->value_list (fe_values.get_quadrature_points(),
                                             weight_values);
	    
                measurement_getter->get_values (cell, face_no, measurement_values);
      
                for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
                  {
                    const std::complex<double>
                      u (iterate_values[q_point](2),
                         iterate_values[q_point](3)),
                      z (measurement_values[q_point](2),
                         measurement_values[q_point](3));

                    data_misfit += 0.5 * complex_scalar_product (u-scaling_factor*z,
                                                                 u-scaling_factor*z) *
                                   weight_values[q_point] *
                                   fe_values.JxW(q_point);
		    Assert (deal_II_numbers::is_finite(data_misfit),
			    ExcInternalError());
                  }
              }
      }



      template <int dim, typename number>
      void
      Base<dim,number>::
      build_rhs_contribution_1 (const StateDiscretization        &state_discretization,
                                const BlockVector<double>        &linearization_point,
                                const MeasurementGetterFactory &getter_factory,
                                BlockVector<double>              &output_vector,
                                const unsigned int                begin,
                                const unsigned int                end,
                                Threads::ThreadMutex             &mutex) const
      {
        const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
        const unsigned int dofs_per_cell    = fe_global.dofs_per_cell,
                           n_q_points       = state_discretization.finite_elements
                                              ->face_quadrature.n_quadrature_points;
  
        std::auto_ptr<MeasurementGetter::FaceGetter::Base<dim> >
          measurement_getter (getter_factory.create (state_discretization.finite_elements->face_quadrature,
                                                     MeasurementGetter::MeasurementType::values));
      
        FEFaceValues<dim>  fe_values (fe_global,
                                      state_discretization.finite_elements->face_quadrature,
                                      UpdateFlags(update_values      |
                                                  update_q_points    |
                                                  update_JxW_values));
  
                                         
                                         
        std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
  
                                         
                                         
                                         
                                         
        std::vector<Vector<double> >
          linearization_point_values (n_q_points,
                                      Vector<double>(this->problem_description->n_variables));
        std::vector<Vector<double> >
          measurement_values (n_q_points,
                              Vector<double> (this->problem_description->n_primal_variables));
  
                                         
        Vector<double> cell_vector (dofs_per_cell);

        std::vector<double> weight_values (n_q_points);

        const std::complex<double> scaling_factor
          = this->scaling_factor (state_discretization, linearization_point,
                                  getter_factory);

        typename DoFHandler<dim>::active_cell_iterator
          cell = state_discretization.dof_handlers->global.begin_active(),
          endc = state_discretization.dof_handlers->global.begin_active();
        std::advance (cell, static_cast<signed int>(begin));
        std::advance (endc, static_cast<signed int>(end));  

        for (; cell!=endc; ++cell)
          for (unsigned int face_no=0;
               face_no<GeometryInfo<dim>::faces_per_cell;
               ++face_no)
            if (cell->face(face_no)->at_boundary() &&
                this->is_measurement_boundary (cell->face(face_no)->boundary_indicator()))
              {
                fe_values.reinit (cell, face_no);
                cell_vector = 0;
                cell->get_dof_indices (dof_indices_on_cell);

                                                 
                                                 
                fe_values.get_function_values  (linearization_point,
                                                linearization_point_values);

                weight_function->value_list (fe_values.get_quadrature_points(),
                                             weight_values);

                measurement_getter->get_values (cell, face_no, measurement_values);
      
                for (unsigned int q_point=0;
                     q_point<fe_values.n_quadrature_points;
                     ++q_point)
                  {
                    const std::complex<double>
                      u (linearization_point_values[q_point](2),
                         linearization_point_values[q_point](3)),
                      z (measurement_values[q_point](2),
                         measurement_values[q_point](3));
                  
                    for (unsigned int i=0; i<dofs_per_cell; ++i)
                      {
                        const unsigned int
                          component = fe_global.system_to_component_index(i).first;

                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                        if ((component < 2) || (component >= 4))
                          continue;
			
                        const std::complex<double>
                          phi_i (fe_values.shape_value_component(i,q_point,2),
                                 fe_values.shape_value_component(i,q_point,3));
                      
                        cell_vector(i) -= complex_scalar_product (u-scaling_factor*z,
                                                                  phi_i) *
                                          weight_values[q_point] *
                                          fe_values.JxW(q_point);
                      }
                  }
	      
	
                                                 
                                                 
                                                 
                                                 
                                                 
                mutex.acquire ();
                for (unsigned int i=0; i<dofs_per_cell; ++i)
                  output_vector(dof_indices_on_cell[i])
                    += static_cast<float>(cell_vector(i));
                mutex.release ();
              }
      }
  


      template <int dim, typename number>
      void
      Base<dim,number>::
      build_matrix_contribution_1 (const StateDiscretization        &state_discretization,
                                   const BlockVector<double>        &/*linearization_point*/,
                                   const MeasurementGetterFactory &/*getter_factory*/,
                                   BlockSparseMatrix<number>        &global_matrix,
                                   const unsigned int                begin,
                                   const unsigned int                end,
                                   Threads::ThreadMutex             &mutex) const
      {
        const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
        const unsigned int dofs_per_cell    = fe_global.dofs_per_cell;
  
        FEFaceValues<dim>  fe_values (fe_global, state_discretization.finite_elements->face_quadrature,
                                      UpdateFlags(update_values      |
                                                  update_q_points    |
                                                  update_JxW_values));

                                         
                                         
        std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
  
                                         
        FullMatrix<double> cell_matrix (dofs_per_cell, dofs_per_cell);

        std::vector<double> weight_values (fe_values.n_quadrature_points);

        typename DoFHandler<dim>::active_cell_iterator
          cell = state_discretization.dof_handlers->global.begin_active(),
          endc = state_discretization.dof_handlers->global.begin_active();
        std::advance (cell, static_cast<signed int>(begin));
        std::advance (endc, static_cast<signed int>(end));  

        for (; cell!=endc; ++cell)
          for (unsigned int face_no=0;
               face_no<GeometryInfo<dim>::faces_per_cell;
               ++face_no)
            if (cell->face(face_no)->at_boundary() &&
                this->is_measurement_boundary (cell->face(face_no)->boundary_indicator()))
              {
                fe_values.reinit (cell, face_no);

                weight_function->value_list (fe_values.get_quadrature_points(),
                                             weight_values);
                cell_matrix = 0;
                cell->get_dof_indices (dof_indices_on_cell);

                                                 
                                                 
                for (unsigned int q_point=0;
                     q_point<fe_values.n_quadrature_points;
                     ++q_point)
                  for (unsigned int i=0; i<dofs_per_cell; ++i)
                    for (unsigned int j=0; j<dofs_per_cell; ++j)
                      {
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                        const unsigned int
                          component_i = fe_global.system_to_component_index(i).first,
                          component_j = fe_global.system_to_component_index(j).first;
		      
                        if ((component_i != component_j) ||
                            !this->problem_description->is_primal_variable(component_i) ||
                            !this->problem_description->is_primal_variable(component_j) ||
                            (component_i < 2))
                          continue;

                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                        const std::complex<double>
                          phi_i (fe_values.shape_value_component(i,q_point,2),
                                 fe_values.shape_value_component(i,q_point,3)),
                          phi_j (fe_values.shape_value_component(j,q_point,2),
                                 fe_values.shape_value_component(j,q_point,3));
                          
                        cell_matrix (i,j) += (complex_scalar_product (phi_i, phi_j) *
                                              weight_values[q_point] *
                                              fe_values.JxW(q_point));
                      }



                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                mutex.acquire ();
                for (unsigned int i=0; i<dofs_per_cell; ++i)
                  for (unsigned int j=0; j<dofs_per_cell; ++j)
                    global_matrix.add(dof_indices_on_cell[i],
                                      dof_indices_on_cell[j],
                                      static_cast<float>(cell_matrix(i,j)));
                mutex.release ();
              }  
      }  



      template <int dim, typename number>
      void
      Base<dim,number>::
      m_prime_1 (const StateDiscretization    &,
                 const DoFHandler<dim>        &,
                 const Vector<double>         &,
                 const Vector<double>         &,
                 const MeasurementGetterFactory &,
                 Vector<float>                &,
                 const unsigned int            ,
                 const unsigned int            ) const
      {
        Assert (false, ExcNotImplemented());
      }

    

#if deal_II_dimension == 1

      template <>
      void
      Base<1,double>::
      build_rhs_contribution_1 (const StateDiscretization        &,
                                const BlockVector<double>        &,
                                const MeasurementGetter::Factories::Base<1> &,
                                BlockVector<double>              &,
                                const unsigned int                ,
                                const unsigned int                ,
                                Threads::ThreadMutex             &) const
      {
        Assert (false, ExcNotImplemented());
      }



      template <>
      void
      Base<1,float>::
      build_rhs_contribution_1 (const StateDiscretization        &,
                                const BlockVector<double>        &,
                                const MeasurementGetter::Factories::Base<1> &,
                                BlockVector<double>              &,
                                const unsigned int                ,
                                const unsigned int                ,
                                Threads::ThreadMutex             &) const
      {
        Assert (false, ExcNotImplemented());
      }
    

    
      template <>
      void
      Base<1,double>::
      build_matrix_contribution_1 (const StateDiscretization        &,
                                   const BlockVector<double>        &,
                                   const MeasurementGetter::Factories::Base<1> &,
                                   BlockSparseMatrix<double>        &,
                                   const unsigned int                ,
                                   const unsigned int                ,
                                   Threads::ThreadMutex             &) const
      {
        Assert (false, ExcNotImplemented());
      }



      template <>
      void
      Base<1,float>::
      build_matrix_contribution_1 (const StateDiscretization        &,
                                   const BlockVector<double>        &,
                                   const MeasurementGetter::Factories::Base<1> &,
                                   BlockSparseMatrix<double>        &,
                                   const unsigned int                ,
                                   const unsigned int                ,
                                   Threads::ThreadMutex             &) const
      {
        Assert (false, ExcNotImplemented());
      }
    

    
      template <>
      void
      Base<1,double>::
      m_prime_1 (const StateDiscretization       &,
                 const DoFHandler<1>            &,
                 const Vector<double>           &,
                 const Vector<double>           &,
                 const MeasurementGetter::Factories::Base<1> &,
                 Vector<float>                  &,
                 const unsigned int              ,
                 const unsigned int              ) const
      {
        Assert (false, ExcNotImplemented());
      }



      template <>
      void
      Base<1,float>::
      m_prime_1 (const StateDiscretization       &,
                 const DoFHandler<1>            &,
                 const Vector<double>           &,
                 const Vector<double>           &,
                 const MeasurementGetter::Factories::Base<1> &,
                 Vector<float>                  &,
                 const unsigned int              ,
                 const unsigned int              ) const
      {
        Assert (false, ExcNotImplemented());
      }
    

    
      template <>
      void
      Base<1,double>::
      compute_data_misfit_1 (const StateDiscretization        &,
                             const BlockVector<double>        &,
                             const MeasurementGetter::Factories::Base<1> &,
                             const unsigned int                ,
                             const unsigned int                ,
                             double                           &) const
      {
        Assert (false, ExcNotImplemented());
      }



      template <>
      void
      Base<1,float>::
      compute_data_misfit_1 (const StateDiscretization        &,
                             const BlockVector<double>        &,
                             const MeasurementGetter::Factories::Base<1> &,
                             const unsigned int                ,
                             const unsigned int                ,
                             double                           &) const
      {
        Assert (false, ExcNotImplemented());
      }
    
#endif


      template <int dim, typename number>
      Pure_L2<dim,number>::
      Pure_L2 (const libparest::Slave::Stationary::ProblemDescription &problem_description,
               const Function<dim>           &weight_function,
               const std::set<unsigned char> &boundary_indicators)
                      :
                      Base<dim,number> (problem_description,
                                        weight_function,
                                        boundary_indicators)
      {}



      template <int dim, typename number>
      std::complex<double>
      Pure_L2<dim,number>::
      scaling_factor (const StateDiscretization      &/*state_discretization*/,
                      const BlockVector<double>      &/*present_iterate*/,
                      const MeasurementGetterFactory &/*getter_factory*/) const
      {
        return 1.;
      }




      template <int dim, typename number>
      L2_Real<dim,number>::
      L2_Real (const libparest::Slave::Stationary::ProblemDescription &problem_description,
               const Function<dim>           &weight_function,
               const std::set<unsigned char> &boundary_indicators)
                      :
                      Base<dim,number> (problem_description,
                                        weight_function,
                                        boundary_indicators)
      {}



      template <int dim, typename number>
      std::complex<double>
      L2_Real<dim,number>::
      scaling_factor (const StateDiscretization      &state_discretization,
                      const BlockVector<double>      &present_iterate,
                      const MeasurementGetterFactory &getter_factory) const
      {
        double enumerator=0, denominator=0;

        const Quadrature<dim-1> &quadrature
          = state_discretization.finite_elements->face_quadrature;

        const unsigned int n_q_points = quadrature.n_quadrature_points;

        std::auto_ptr<MeasurementGetter::FaceGetter::Base<dim> >
          measurement_getter (getter_factory.create (quadrature, MeasurementGetter::MeasurementType::values));      

        const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
    
        FEFaceValues<dim>  fe_values (fe_global, quadrature,
                                      UpdateFlags(update_values      |
                                                  update_q_points    |
                                                  update_JxW_values));
    
        std::vector<Vector<double> >
          iterate_values (n_q_points,
                          Vector<double>(this->problem_description->n_variables));
        std::vector<Vector<double> >
          measurement_values (n_q_points,
                              Vector<double>(this->problem_description->n_primal_variables));
    
        std::vector<double> weight_values (n_q_points);

        typename DoFHandler<dim>::active_cell_iterator
          cell = state_discretization.dof_handlers->global.begin_active(),
          endc = state_discretization.dof_handlers->global.end();

        for (; cell!=endc; ++cell)
          for (unsigned int face_no=0;
               face_no<GeometryInfo<dim>::faces_per_cell;
               ++face_no)
            if (cell->face(face_no)->at_boundary() &&
                this->is_measurement_boundary (cell->face(face_no)->boundary_indicator()))
              {
                fe_values.reinit (cell, face_no);

                                                 
                                                 
                fe_values.get_function_values  (present_iterate, iterate_values);

                this->weight_function->value_list (fe_values.get_quadrature_points(),
						   weight_values);
	    
                measurement_getter->get_values (cell, face_no, measurement_values);
      
                for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
                  {
                    const std::complex<double>
                      u (iterate_values[q_point](2),
                         iterate_values[q_point](3)),
                      z (measurement_values[q_point](2),
                         measurement_values[q_point](3));

                    enumerator += complex_scalar_product (u, z) *
                                  weight_values[q_point] *
                                  fe_values.JxW(q_point);

                    denominator += complex_scalar_product (z, z) *
                                   weight_values[q_point] *
                                   fe_values.JxW(q_point);
                  }
              }
        
                                         
                                         
                                         
                                         
                                         
                                         
        if (enumerator == 0)
          return 1;
        
        return enumerator/denominator;
      }
      


      template <int dim, typename number>
      L2_Complex<dim,number>::
      L2_Complex (const libparest::Slave::Stationary::ProblemDescription &problem_description,
                  const Function<dim>           &weight_function,
                  const std::set<unsigned char> &boundary_indicators)
                      :
                      Base<dim,number> (problem_description,
                                        weight_function,
                                        boundary_indicators)
      {}



      template <int dim, typename number>
      std::complex<double>
      L2_Complex<dim,number>::
      scaling_factor (const StateDiscretization      &state_discretization,
                      const BlockVector<double>      &present_iterate,
                      const MeasurementGetterFactory &getter_factory) const
      {
        std::complex<double> enumerator (0.);
        double denominator=0;

        const Quadrature<dim-1> &quadrature
          = state_discretization.finite_elements->face_quadrature;

        const unsigned int n_q_points = quadrature.n_quadrature_points;

        std::auto_ptr<MeasurementGetter::FaceGetter::Base<dim> >
          measurement_getter (getter_factory.create (quadrature, MeasurementGetter::MeasurementType::values));      

        const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
    
        FEFaceValues<dim>  fe_values (fe_global, quadrature,
                                      UpdateFlags(update_values      |
                                                  update_q_points    |
                                                  update_JxW_values));
    
        std::vector<Vector<double> >
          iterate_values (n_q_points,
                          Vector<double>(this->problem_description->n_variables));
        std::vector<Vector<double> >
          measurement_values (n_q_points,
                              Vector<double>(this->problem_description->n_primal_variables));
    
        std::vector<double> weight_values (n_q_points);

        typename DoFHandler<dim>::active_cell_iterator
          cell = state_discretization.dof_handlers->global.begin_active(),
          endc = state_discretization.dof_handlers->global.end();

        for (; cell!=endc; ++cell)
          for (unsigned int face_no=0;
               face_no<GeometryInfo<dim>::faces_per_cell;
               ++face_no)
            if (cell->face(face_no)->at_boundary() &&
                this->is_measurement_boundary (cell->face(face_no)->boundary_indicator()))
              {
                fe_values.reinit (cell, face_no);

                                                 
                                                 
                fe_values.get_function_values  (present_iterate, iterate_values);

                this->weight_function->value_list (fe_values.get_quadrature_points(),
						   weight_values);
	    
                measurement_getter->get_values (cell, face_no, measurement_values);
      
                for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
                  {
                    const std::complex<double>
                      u (iterate_values[q_point](2),
                         iterate_values[q_point](3)),
                      z (measurement_values[q_point](2),
                         measurement_values[q_point](3));

                    enumerator += u * std::conj(z) *
                                  weight_values[q_point] *
                                  fe_values.JxW(q_point);

                    denominator += complex_scalar_product (z, z) *
                                   weight_values[q_point] *
                                   fe_values.JxW(q_point);
                  }
              }

                                         
                                         
                                         
                                         
                                         
                                         
        if (enumerator == std::complex<double>(0,0))
          return 1;
        
        return enumerator/denominator;
      }
      
    }
    

    namespace ReferencedMeasurements
    {
/*
  RatioOverRatioMinusOne uses the following maple scripts to generate the various functionals:

  interface(showassumed=0);
  phix := ux + I*vx: assume(ux::real): assume(vx::real):
  phim := um + I*vm: assume(um::real): assume(vm::real):
  zx := zux + I*zvx: assume(zux::real): assume(zvx::real):
  zm := zum + I*zvm: assume(zum::real): assume(zvm::real):
  arg := (phim/phix)/(zm/zx)-1:
  m_of_u := simplify(abs(arg)**2/2):

  with(CodeGeneration):
  C(m_of_u, resultname="m_of_u");

  Unfortunately, maple chooses to replace certain variable names, so
  some replacements have to be made, and instead of simply x*x it
  prints pow(x,0.2e1) which is really dumb. Oh well.


  Alternatively, here's something in Mathematica:

  phix = ux + I*vx
  phim = um + I*vm
  zx = zux + I*zvx
  zm = zum + I*zvm

  misfit = (phim/phix)/(zm/zx) - 1
  mofu = FullSimplify[(Re[misfit]^2 + Im[misfit]^2)/2,
  {um \[Element] Reals, vm \[Element] Reals,
  ux \[Element] Reals, vx \[Element] Reals,
  zum \[Element] Reals, zvm \[Element] Reals,
  zux \[Element] Reals, zvx \[Element] Reals}]
  cmofu = CForm[mofu]

  mprime1 = Simplify[D[mofu, ux]]
  mprime2 = Simplify[D[mofu, vx]]
  mprime3 = Simplify[D[mofu, um]]
  mprime4 = Simplify[D[mofu, vm]]

  mprime = Simplify[{D[mofu, ux],D[mofu, vx],D[mofu, um],D[mofu, vm]}]
  CForm[mprime]

  mdoubleprime = Simplify[{{D[mofu, ux,ux],D[mofu, vx,ux],D[mofu, um,ux],D[mofu, vm,ux]},
  {D[mofu, ux,vx],D[mofu, vx,vx],D[mofu, um,vx],D[mofu, vm,vx]},
  {D[mofu, ux,um],D[mofu, vx,um],D[mofu, um,um],D[mofu, vm,um]},
  {D[mofu, ux,vm],D[mofu, vx,vm],D[mofu, um,vm],D[mofu, vm,vm]}}]
  CForm[mdoubleprime]
  
  Then use this perl script for post-massaging:
  perl -pi -e 's/Power.(z?..),2./\1*\1/g; s/(z?[uv])([mx])/\1_\2/g;'
*/
      template <int dim, typename number>
      RatioOverRatioMinusOne<dim,number>::
      RatioOverRatioMinusOne (const libparest::Slave::Stationary::ProblemDescription &problem_description,
			      const Function<dim>           &weight_function,
			      const std::set<unsigned char> &boundary_indicators)
		      :
		      libparest::Slave::Stationary::Measurements::Base<dim,number> (problem_description),
                      libparest::Slave::Stationary::Measurements::BoundaryMeasurementBase (boundary_indicators),
		      weight_function (&weight_function)
      {}

    
    
      template <int dim, typename number>
      void
      RatioOverRatioMinusOne<dim,number>::
      compute_data_misfit_1 (const StateDiscretization        &state_discretization,
			     const BlockVector<double>        &present_iterate,
			     const MeasurementGetterFactory &getter_factory,
			     const unsigned int                begin,
			     const unsigned int                end,
			     double                           &data_misfit) const
      {
        const Quadrature<dim-1> &quadrature
          = state_discretization.finite_elements->face_quadrature;
        
	const unsigned int n_q_points = quadrature.n_quadrature_points;

	std::auto_ptr<MeasurementGetter::FaceGetter::Base<dim> >
	  measurement_getter (getter_factory.create (quadrature, MeasurementGetter::MeasurementType::values));      

	const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
    
	FEFaceValues<dim>  fe_values (fe_global, quadrature,
				      UpdateFlags(update_values      |
						  update_q_points    |
						  update_JxW_values));
    
	std::vector<Vector<double> >
	  iterate_values (n_q_points,
			  Vector<double>(this->problem_description->n_variables));
	std::vector<Vector<double> >
	  measurement_values (n_q_points,
			      Vector<double>(this->problem_description->n_primal_variables));
    
	std::vector<double> weight_values (n_q_points);
    
	typename DoFHandler<dim>::active_cell_iterator
	  cell = state_discretization.dof_handlers->global.begin_active(),
	  endc = state_discretization.dof_handlers->global.begin_active();
	std::advance (cell, static_cast<signed int>(begin));
	std::advance (endc, static_cast<signed int>(end));  

	for (; cell!=endc; ++cell)
	  for (unsigned int face_no=0;
	       face_no<GeometryInfo<dim>::faces_per_cell;
	       ++face_no)
	    if (cell->face(face_no)->at_boundary() &&
		this->is_measurement_boundary (cell->face(face_no)->boundary_indicator()))
	      {
		fe_values.reinit (cell, face_no);

						 
						 
		fe_values.get_function_values  (present_iterate, iterate_values);

		weight_function->value_list (fe_values.get_quadrature_points(),
					     weight_values);
	    
		measurement_getter->get_values (cell, face_no, measurement_values);
      
		for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
		  {
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
		    double
		      u_x = iterate_values[q_point](0),
		      v_x = iterate_values[q_point](1),
		      u_m = iterate_values[q_point](2),
		      v_m = iterate_values[q_point](3);
		    if ((u_x==0) && (v_x==0))
		      {
			u_x = u_m = 1;
			v_x = v_m = 0;
		      }
		    
		    const double
		      zu_x = measurement_values[q_point](0),
		      zv_x = measurement_values[q_point](1),
		      zu_m = measurement_values[q_point](2),
		      zv_m = measurement_values[q_point](3);

						     
		    data_misfit += ((u_x*u_x*(zu_m*zu_m + zv_m*zv_m) + v_x*v_x*(zu_m*zu_m + zv_m*zv_m) -
				     2*u_x*(u_m*zu_m*zu_x + v_m*zu_x*zv_m - v_m*zu_m*zv_x + u_m*zv_m*zv_x) -
				     2*v_x*(v_m*zu_m*zu_x - u_m*zu_x*zv_m + u_m*zu_m*zv_x + v_m*zv_m*zv_x) +
				     (u_m*u_m + v_m*v_m)*(zu_x*zu_x + zv_x*zv_x))/
				    (2.*(u_x*u_x + v_x*v_x)*(zu_m*zu_m + zv_m*zv_m)))
				   *
				   weight_values[q_point] *
				   fe_values.JxW(q_point);
		    Assert (deal_II_numbers::is_finite(data_misfit),
			    ExcInternalError());
		  }
	      }
      }



      template <int dim, typename number>
      void
      RatioOverRatioMinusOne<dim,number>::
      build_rhs_contribution_1 (const StateDiscretization        &state_discretization,
				const BlockVector<double>        &linearization_point,
				const MeasurementGetterFactory &getter_factory,
				BlockVector<double>              &output_vector,
				const unsigned int                begin,
				const unsigned int                end,
				Threads::ThreadMutex             &mutex) const
      {
	const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
	const unsigned int dofs_per_cell    = fe_global.dofs_per_cell,
			   n_q_points       = state_discretization.finite_elements
					      ->face_quadrature.n_quadrature_points;
  
	std::auto_ptr<MeasurementGetter::FaceGetter::Base<dim> >
	  measurement_getter (getter_factory.create (state_discretization.finite_elements->face_quadrature,
						     MeasurementGetter::MeasurementType::values));
      
	FEFaceValues<dim>  fe_values (fe_global,
				      state_discretization.finite_elements->face_quadrature,
				      UpdateFlags(update_values      |
						  update_q_points    |
						  update_JxW_values));
  
					 
					 
	std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
  
					 
					 
					 
					 
	std::vector<Vector<double> >
	  linearization_point_values (n_q_points,
				      Vector<double>(this->problem_description->n_variables));
	std::vector<Vector<double> >
	  measurement_values (n_q_points,
			      Vector<double> (this->problem_description->n_primal_variables));
  
					 
	Vector<double> cell_vector (dofs_per_cell);

	std::vector<double> weight_values (n_q_points);

	typename DoFHandler<dim>::active_cell_iterator
	  cell = state_discretization.dof_handlers->global.begin_active(),
	  endc = state_discretization.dof_handlers->global.begin_active();
	std::advance (cell, static_cast<signed int>(begin));
	std::advance (endc, static_cast<signed int>(end));  

	for (; cell!=endc; ++cell)
	  for (unsigned int face_no=0;
	       face_no<GeometryInfo<dim>::faces_per_cell;
	       ++face_no)
	    if (cell->face(face_no)->at_boundary() &&
		this->is_measurement_boundary (cell->face(face_no)->boundary_indicator()))
	      {
		fe_values.reinit (cell, face_no);
		cell_vector = 0;
		cell->get_dof_indices (dof_indices_on_cell);

						 
						 
		fe_values.get_function_values  (linearization_point,
						linearization_point_values);

		weight_function->value_list (fe_values.get_quadrature_points(),
					     weight_values);

		measurement_getter->get_values (cell, face_no, measurement_values);
      
		for (unsigned int q_point=0;
		     q_point<fe_values.n_quadrature_points;
		     ++q_point)
		  {
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
		    double
		      u_x = linearization_point_values[q_point](0),
		      v_x = linearization_point_values[q_point](1),
		      u_m = linearization_point_values[q_point](2),
		      v_m = linearization_point_values[q_point](3);
		    if ((u_x==0) && (v_x==0))
		      {
			u_x = u_m = 1;
			v_x = v_m = 0;
		      }
		    
		    const double
		      zu_x = measurement_values[q_point](0),
		      zv_x = measurement_values[q_point](1),
		      zu_m = measurement_values[q_point](2),
		      zv_m = measurement_values[q_point](3);

		    const unsigned int n_primal_components = 4;
		    const double m_prime[n_primal_components]
		      = {(-(u_m*u_m*u_x*(zu_x*zu_x + zv_x*zv_x)) +
			  u_m*(u_x*v_x*(-2*zu_x*zv_m + 2*zu_m*zv_x) +
			       u_x*u_x*(zu_m*zu_x + zv_m*zv_x) -
			       v_x*v_x*(zu_m*zu_x + zv_m*zv_x)) -
			  v_m*(v_x*v_x*(zu_x*zv_m - zu_m*zv_x) +
			       u_x*u_x*(-(zu_x*zv_m) + zu_m*zv_x) +
			       u_x*(-2*v_x*(zu_m*zu_x + zv_m*zv_x) +
				    v_m*(zu_x*zu_x + zv_x*zv_x))))/
			 (std::pow(u_x*u_x + v_x*v_x,2)*
			  (zu_m*zu_m + zv_m*zv_m)),
			 
			 (2*u_x*v_x*(u_m*zu_m*zu_x + v_m*zu_x*zv_m - v_m*zu_m*zv_x +
				     u_m*zv_m*zv_x) - u_x*u_x*
			  (v_m*zu_m*zu_x - u_m*zu_x*zv_m + u_m*zu_m*zv_x + v_m*zv_m*zv_x) +
			  v_x*(v_m*v_x*(zu_m*zu_x + zv_m*zv_x) -
			       v_m*v_m*(zu_x*zu_x + zv_x*zv_x) -
			       u_m*(u_m*zu_x*zu_x + v_x*zu_x*zv_m - v_x*zu_m*zv_x +
				    u_m*zv_x*zv_x)))/
			 (std::pow(u_x*u_x + v_x*v_x,2)*
			  (zu_m*zu_m + zv_m*zv_m)),
			 
			 (v_x*(zu_x*zv_m - zu_m*zv_x) - u_x*(zu_m*zu_x + zv_m*zv_x) +
			  u_m*(zu_x*zu_x + zv_x*zv_x))/
			 ((u_x*u_x + v_x*v_x)*
			  (zu_m*zu_m + zv_m*zv_m)),
			 
			 (-(u_x*zu_x*zv_m) + u_x*zu_m*zv_x - v_x*(zu_m*zu_x + zv_m*zv_x) +
			  v_m*(zu_x*zu_x + zv_x*zv_x))/
			 ((u_x*u_x + v_x*v_x)*
			  (zu_m*zu_m + zv_m*zv_m))
		      };
		    
		    for (unsigned int i=0; i<dofs_per_cell; ++i)
		      {
			const unsigned int
			  component = fe_global.system_to_component_index(i).first;

                                                         
                                                         
                        if (this->problem_description->is_primal_variable(component))
                          {
                            Assert (component < n_primal_components,
                                    ExcInternalError());
			  
                                                             
                            cell_vector(i) -= (m_prime[component] *
                                               fe_values.shape_value(i,q_point) *
                                               weight_values[q_point] *
                                               fe_values.JxW(q_point));
                          }
		      }
		  }
		
	
						 
						 
						 
						 
						 
		mutex.acquire ();
		for (unsigned int i=0; i<dofs_per_cell; ++i)
		  output_vector(dof_indices_on_cell[i])
		    += static_cast<float>(cell_vector(i));
		mutex.release ();
	      }
      }
  


      template <int dim, typename number>
      void
      RatioOverRatioMinusOne<dim,number>::
      build_matrix_contribution_1 (const StateDiscretization        &state_discretization,
				   const BlockVector<double>        &linearization_point,
				   const MeasurementGetterFactory &getter_factory,
				   BlockSparseMatrix<number>        &global_matrix,
				   const unsigned int                begin,
				   const unsigned int                end,
				   Threads::ThreadMutex             &mutex) const
      {
	const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
	const unsigned int dofs_per_cell    = fe_global.dofs_per_cell,
			   n_q_points       = state_discretization.finite_elements
					      ->face_quadrature.n_quadrature_points;

  
	std::auto_ptr<MeasurementGetter::FaceGetter::Base<dim> >
	  measurement_getter (getter_factory.create (state_discretization.finite_elements->face_quadrature,
						     MeasurementGetter::MeasurementType::values));

	FEFaceValues<dim>  fe_values (fe_global, state_discretization.finite_elements->face_quadrature,
				      UpdateFlags(update_values      |
						  update_q_points    |
						  update_JxW_values));

					 
					 
	std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
  
	std::vector<Vector<double> >
	  linearization_point_values (n_q_points,
				      Vector<double>(this->problem_description->n_variables));
	std::vector<Vector<double> >
	  measurement_values (n_q_points,
			      Vector<double> (this->problem_description->n_primal_variables));

					 
	FullMatrix<double> cell_matrix (dofs_per_cell, dofs_per_cell);

	std::vector<double> weight_values (fe_values.n_quadrature_points);

	typename DoFHandler<dim>::active_cell_iterator
	  cell = state_discretization.dof_handlers->global.begin_active(),
	  endc = state_discretization.dof_handlers->global.begin_active();
	std::advance (cell, static_cast<signed int>(begin));
	std::advance (endc, static_cast<signed int>(end));  

	for (; cell!=endc; ++cell)
	  for (unsigned int face_no=0;
	       face_no<GeometryInfo<dim>::faces_per_cell;
	       ++face_no)
	    if (cell->face(face_no)->at_boundary() &&
		this->is_measurement_boundary (cell->face(face_no)->boundary_indicator()))
	      {
		fe_values.reinit (cell, face_no);

		weight_function->value_list (fe_values.get_quadrature_points(),
					     weight_values);
		cell_matrix = 0;
		cell->get_dof_indices (dof_indices_on_cell);

		weight_function->value_list (fe_values.get_quadrature_points(),
					     weight_values);

		fe_values.get_function_values  (linearization_point,
						linearization_point_values);

		measurement_getter->get_values (cell, face_no, measurement_values);

						 
						 
		for (unsigned int q_point=0;
		     q_point<fe_values.n_quadrature_points;
		     ++q_point)
		  {
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
		    double
		      u_x = linearization_point_values[q_point](0),
		      v_x = linearization_point_values[q_point](1),
		      u_m = linearization_point_values[q_point](2),
		      v_m = linearization_point_values[q_point](3);
		    if ((u_x==0) && (v_x==0))
		      {
			u_x = u_m = 1;
			v_x = v_m = 0;
		      }
		    
		    const double
		      zu_x = measurement_values[q_point](0),
		      zv_x = measurement_values[q_point](1),
		      zu_m = measurement_values[q_point](2),
		      zv_m = measurement_values[q_point](3);

		    const unsigned int n_primal_components = 4;
		    const double m_doubleprime[n_primal_components][n_primal_components]
		      = {{(u_m*u_m*(3*u_x*u_x - v_x*v_x)*
			   (zu_x*zu_x + zv_x*zv_x) - 
			   2*u_m*(std::pow(v_x,3)*(zu_x*zv_m - zu_m*zv_x) + 
				  u_x*u_x*v_x*(-3*zu_x*zv_m + 3*zu_m*zv_x) + 
				  std::pow(u_x,3)*(zu_m*zu_x + zv_m*zv_x) - 
				  3*u_x*v_x*v_x*(zu_m*zu_x + zv_m*zv_x)) + 
			   v_m*(6*u_x*v_x*v_x*(zu_x*zv_m - zu_m*zv_x) + 
				std::pow(u_x,3)*(-2*zu_x*zv_m + 2*zu_m*zv_x) + 
				v_x*v_x*(2*v_x*(zu_m*zu_x + zv_m*zv_x) - 
					 v_m*(zu_x*zu_x + zv_x*zv_x)) + 
				u_x*u_x*(-6*v_x*(zu_m*zu_x + zv_m*zv_x) + 
					 3*v_m*(zu_x*zu_x + zv_x*zv_x))))/
			  (std::pow(u_x*u_x + v_x*v_x,3)*
			   (zu_m*zu_m + zv_m*zv_m)),

			  (2*(-3*u_x*u_x*v_x*
			      (u_m*zu_m*zu_x + v_m*zu_x*zv_m - v_m*zu_m*zv_x + u_m*zv_m*zv_x)
			      + std::pow(v_x,3)*
			      (u_m*zu_m*zu_x + v_m*zu_x*zv_m - v_m*zu_m*zv_x + u_m*zv_m*zv_x)
 			      + std::pow(u_x,3)*
			      (v_m*zu_m*zu_x - u_m*zu_x*zv_m + u_m*zu_m*zv_x + v_m*zv_m*zv_x)
			      + u_x*v_x*(-3*v_m*v_x*(zu_m*zu_x + zv_m*zv_x) + 
					 2*v_m*v_m*(zu_x*zu_x + zv_x*zv_x) + 
					 u_m*(3*v_x*(zu_x*zv_m - zu_m*zv_x) + 
					      2*u_m*(zu_x*zu_x + zv_x*zv_x)))))/
			  (std::pow(u_x*u_x + v_x*v_x,3)*
			   (zu_m*zu_m + zv_m*zv_m)),

			  (u_x*u_x*(zu_m*zu_x + zv_m*zv_x) - 
			   v_x*v_x*(zu_m*zu_x + zv_m*zv_x) - 
			   2*u_x*(v_x*(zu_x*zv_m - zu_m*zv_x) + 
				  u_m*(zu_x*zu_x + zv_x*zv_x)))/
			  (std::pow(u_x*u_x + v_x*v_x,2)*
			   (zu_m*zu_m + zv_m*zv_m)),

			  (u_x*u_x*(zu_x*zv_m - zu_m*zv_x) + 
			   v_x*v_x*(-(zu_x*zv_m) + zu_m*zv_x) + 
			   2*u_x*(v_x*(zu_m*zu_x + zv_m*zv_x) - 
				  v_m*(zu_x*zu_x + zv_x*zv_x)))/
			  (std::pow(u_x*u_x + v_x*v_x,2)*
			   (zu_m*zu_m + zv_m*zv_m))},

			 {(2*(-3*u_x*u_x*v_x*
			      (u_m*zu_m*zu_x + v_m*zu_x*zv_m - v_m*zu_m*zv_x + u_m*zv_m*zv_x)
			      + std::pow(v_x,3)*
			      (u_m*zu_m*zu_x + v_m*zu_x*zv_m - v_m*zu_m*zv_x + u_m*zv_m*zv_x)
			      + std::pow(u_x,3)*
			      (v_m*zu_m*zu_x - u_m*zu_x*zv_m + u_m*zu_m*zv_x + v_m*zv_m*zv_x)
			      + u_x*v_x*(-3*v_m*v_x*(zu_m*zu_x + zv_m*zv_x) + 
					 2*v_m*v_m*(zu_x*zu_x + zv_x*zv_x) + 
					 u_m*(3*v_x*(zu_x*zv_m - zu_m*zv_x) + 
					      2*u_m*(zu_x*zu_x + zv_x*zv_x)))))/
			  (std::pow(u_x*u_x + v_x*v_x,3)*
			   (zu_m*zu_m + zv_m*zv_m)),

			  -((u_m*u_m*(u_x*u_x - 3*v_x*v_x)*
			     (zu_x*zu_x + zv_x*zv_x) - 
			     2*u_m*(std::pow(v_x,3)*(zu_x*zv_m - zu_m*zv_x) + 
				    u_x*u_x*v_x*(-3*zu_x*zv_m + 3*zu_m*zv_x) + 
				    std::pow(u_x,3)*(zu_m*zu_x + zv_m*zv_x) - 
				    3*u_x*v_x*v_x*(zu_m*zu_x + zv_m*zv_x)) + 
			     v_m*(6*u_x*v_x*v_x*(zu_x*zv_m - zu_m*zv_x) + 
				  std::pow(u_x,3)*(-2*zu_x*zv_m + 2*zu_m*zv_x) + 
				  v_x*v_x*(2*v_x*(zu_m*zu_x + zv_m*zv_x) - 
					   3*v_m*(zu_x*zu_x + zv_x*zv_x)) + 
				  u_x*u_x*(-6*v_x*(zu_m*zu_x + zv_m*zv_x) + 
					   v_m*(zu_x*zu_x + zv_x*zv_x))))/
			    (std::pow(u_x*u_x + v_x*v_x,3)*
			     (zu_m*zu_m + zv_m*zv_m))),

			  (u_x*u_x*(zu_x*zv_m - zu_m*zv_x) + 
			   2*u_x*v_x*(zu_m*zu_x + zv_m*zv_x) - 
			   v_x*(v_x*(zu_x*zv_m - zu_m*zv_x) + 
				2*u_m*(zu_x*zu_x + zv_x*zv_x)))/
			  (std::pow(u_x*u_x + v_x*v_x,2)*
			   (zu_m*zu_m + zv_m*zv_m)),

			  (2*u_x*v_x*(zu_x*zv_m - zu_m*zv_x) - 
			   u_x*u_x*(zu_m*zu_x + zv_m*zv_x) + 
			   v_x*(v_x*(zu_m*zu_x + zv_m*zv_x) - 
				2*v_m*(zu_x*zu_x + zv_x*zv_x)))/
			  (std::pow(u_x*u_x + v_x*v_x,2)*
			   (zu_m*zu_m + zv_m*zv_m))},

			 {(u_x*u_x*(zu_m*zu_x + zv_m*zv_x) - 
			   v_x*v_x*(zu_m*zu_x + zv_m*zv_x) - 
			   2*u_x*(v_x*(zu_x*zv_m - zu_m*zv_x) + 
				  u_m*(zu_x*zu_x + zv_x*zv_x)))/
			  (std::pow(u_x*u_x + v_x*v_x,2)*
			   (zu_m*zu_m + zv_m*zv_m)),

			  (u_x*u_x*(zu_x*zv_m - zu_m*zv_x) + 
			   2*u_x*v_x*(zu_m*zu_x + zv_m*zv_x) - 
			   v_x*(v_x*(zu_x*zv_m - zu_m*zv_x) + 
				2*u_m*(zu_x*zu_x + zv_x*zv_x)))/
			  (std::pow(u_x*u_x + v_x*v_x,2)*
			   (zu_m*zu_m + zv_m*zv_m)),

			  (zu_x*zu_x + zv_x*zv_x)/
			  ((u_x*u_x + v_x*v_x)*
			   (zu_m*zu_m + zv_m*zv_m)),

			  0},

			 {(u_x*u_x*(zu_x*zv_m - zu_m*zv_x) + 
			   v_x*v_x*(-(zu_x*zv_m) + zu_m*zv_x) + 
			   2*u_x*(v_x*(zu_m*zu_x + zv_m*zv_x) - 
				  v_m*(zu_x*zu_x + zv_x*zv_x)))/
			  (std::pow(u_x*u_x + v_x*v_x,2)*
			   (zu_m*zu_m + zv_m*zv_m)),

			  (2*u_x*v_x*(zu_x*zv_m - zu_m*zv_x) - 
			   u_x*u_x*(zu_m*zu_x + zv_m*zv_x) + 
			   v_x*(v_x*(zu_m*zu_x + zv_m*zv_x) - 
				2*v_m*(zu_x*zu_x + zv_x*zv_x)))/
			  (std::pow(u_x*u_x + v_x*v_x,2)*
			   (zu_m*zu_m + zv_m*zv_m)),

			  0,

			  (zu_x*zu_x + zv_x*zv_x)/
			  ((u_x*u_x + v_x*v_x)*
			   (zu_m*zu_m + zv_m*zv_m))}};

						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
		    for (unsigned int i=0; i<n_primal_components; ++i)
		      {
			for (unsigned int j=0; j<n_primal_components; ++j)
			  Assert (m_doubleprime[i][j] == m_doubleprime[j][i],
				  ExcInternalError());
			Assert (m_doubleprime[i][i] > 0,
				ExcDiagNotPositive(m_doubleprime[i][i]));
		      }
		    
		    for (unsigned int i=0; i<dofs_per_cell; ++i)
		      for (unsigned int j=0; j<dofs_per_cell; ++j)
			{
			  const unsigned int
			    component_i = fe_global.system_to_component_index(i).first,
			    component_j = fe_global.system_to_component_index(j).first;
		      
							   
							   
							   
							   
							   
							   
			  if (this->problem_description->is_primal_variable(component_i) &&
			      this->problem_description->is_primal_variable(component_j))
			    cell_matrix (i,j) += (fe_values.shape_value(i,q_point) *
						  fe_values.shape_value(j,q_point) *
						  m_doubleprime[component_i][component_j] *
						  weight_values[q_point] *
						  fe_values.JxW(q_point));
			  
							   
							   
							   
							   
			}
		  }
		



						 
						 
						 
						 
						 
						 
						 
						 
						 
		mutex.acquire ();
		for (unsigned int i=0; i<dofs_per_cell; ++i)
		  for (unsigned int j=0; j<dofs_per_cell; ++j)
		    global_matrix.add(dof_indices_on_cell[i],
				      dof_indices_on_cell[j],
				      static_cast<float>(cell_matrix(i,j)));
		mutex.release ();
	      }  
      }  



      template <int dim, typename number>
      void
      RatioOverRatioMinusOne<dim,number>::
      m_prime_1 (const StateDiscretization    &state_discretization,
                 const DoFHandler<dim>        &extended_dof_handler,
		 const Vector<double>         &present_iterate,
		 const Vector<double>         &weights,
		 const MeasurementGetterFactory &getter_factory,
		 Vector<float>                &output_vector,
		 const unsigned int            begin,
		 const unsigned int            end) const
      {
                                         
                                         
                                         
                                         
                                         
        const Quadrature<dim-1> &quadrature
          = state_discretization.finite_elements->face_quadrature;

        std::auto_ptr<MeasurementGetter::FaceGetter::Base<dim> >
	  measurement_getter (getter_factory.create (quadrature,
                                                     MeasurementGetter::MeasurementType::values));
      
	const FiniteElement<dim> &fe_global = extended_dof_handler.get_fe();
	const unsigned int n_q_points       = quadrature.n_quadrature_points;
  
	FEFaceValues<dim>  fe_values (fe_global, quadrature,
				      UpdateFlags(update_values      |
						  update_q_points    |
						  update_JxW_values));

					 
					 
					 
	std::vector<Vector<double> >
	  present_iterate_values (n_q_points,
				  Vector<double>(this->problem_description->n_variables));
	std::vector<Vector<double> >
	  weights_values (n_q_points,
			  Vector<double>(this->problem_description->n_variables));
	std::vector<Vector<double> >
	  measurement_values (n_q_points,
			      Vector<double>(this->problem_description->n_primal_variables));
  
	std::vector<double> weight_values (n_q_points);

	typename DoFHandler<dim>::active_cell_iterator
	  cell = extended_dof_handler.begin_active(),
	  endc = extended_dof_handler.begin_active();
	std::advance (cell, static_cast<signed int>(begin));
	std::advance (endc, static_cast<signed int>(end));  

	for (unsigned int cell_index=begin; cell!=endc; ++cell, ++cell_index)
	  for (unsigned int face_no=0; face_no<GeometryInfo<dim>::faces_per_cell; ++face_no)
	    if (cell->face(face_no)->at_boundary() &&
		this->is_measurement_boundary (cell->face(face_no)->boundary_indicator()))
	      {
		fe_values.reinit (cell, face_no);
						 
						 
						 
		fe_values.get_function_values (present_iterate,
					       present_iterate_values);
		fe_values.get_function_values (weights,
					       weights_values);

		measurement_getter->get_values (cell, face_no, measurement_values);
      
		double sum = 0;

		for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
		  {
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
						     
		    double
		      u_x = present_iterate_values[q_point](0),
		      v_x = present_iterate_values[q_point](1),
		      u_m = present_iterate_values[q_point](2),
		      v_m = present_iterate_values[q_point](3);
		    if ((u_x==0) && (v_x==0))
		      {
			u_x = u_m = 1;
			v_x = v_m = 0;
		      }
		    
		    const double
		      zu_x = measurement_values[q_point](0),
		      zv_x = measurement_values[q_point](1),
		      zu_m = measurement_values[q_point](2),
		      zv_m = measurement_values[q_point](3);

		    const unsigned int n_primal_components = 4;
		    const double m_prime[n_primal_components]
		      = {(-(u_m*u_m*u_x*(zu_x*zu_x + zv_x*zv_x)) +
			  u_m*(u_x*v_x*(-2*zu_x*zv_m + 2*zu_m*zv_x) +
			       u_x*u_x*(zu_m*zu_x + zv_m*zv_x) -
			       v_x*v_x*(zu_m*zu_x + zv_m*zv_x)) -
			  v_m*(v_x*v_x*(zu_x*zv_m - zu_m*zv_x) +
			       u_x*u_x*(-(zu_x*zv_m) + zu_m*zv_x) +
			       u_x*(-2*v_x*(zu_m*zu_x + zv_m*zv_x) +
				    v_m*(zu_x*zu_x + zv_x*zv_x))))/
			 (std::pow(u_x*u_x + v_x*v_x,2)*
			  (zu_m*zu_m + zv_m*zv_m)),
			 
			 (2*u_x*v_x*(u_m*zu_m*zu_x + v_m*zu_x*zv_m - v_m*zu_m*zv_x +
				     u_m*zv_m*zv_x) - u_x*u_x*
			  (v_m*zu_m*zu_x - u_m*zu_x*zv_m + u_m*zu_m*zv_x + v_m*zv_m*zv_x) +
			  v_x*(v_m*v_x*(zu_m*zu_x + zv_m*zv_x) -
			       v_m*v_m*(zu_x*zu_x + zv_x*zv_x) -
			       u_m*(u_m*zu_x*zu_x + v_x*zu_x*zv_m - v_x*zu_m*zv_x +
				    u_m*zv_x*zv_x)))/
			 (std::pow(u_x*u_x + v_x*v_x,2)*
			  (zu_m*zu_m + zv_m*zv_m)),
			 
			 (v_x*(zu_x*zv_m - zu_m*zv_x) - u_x*(zu_m*zu_x + zv_m*zv_x) +
			  u_m*(zu_x*zu_x + zv_x*zv_x))/
			 ((u_x*u_x + v_x*v_x)*
			  (zu_m*zu_m + zv_m*zv_m)),
			 
			 (-(u_x*zu_x*zv_m) + u_x*zu_m*zv_x - v_x*(zu_m*zu_x + zv_m*zv_x) +
			  v_m*(zu_x*zu_x + zv_x*zv_x))/
			 ((u_x*u_x + v_x*v_x)*
			  (zu_m*zu_m + zv_m*zv_m))
		      };
		    
		    for (unsigned int component=0;
			 component<this->problem_description->n_variables; ++component)
		      if (this->problem_description->is_primal_variable(component))
			{
			  Assert (component < n_primal_components,
				  ExcInternalError());
			  
			  sum += (m_prime[component]
				  *
				  weights_values[q_point](component)
				  *
				  weight_values[q_point]
				  *
				  fe_values.JxW(q_point));
			}
		  }
		output_vector(cell_index) += sum;
	      }
      }



#if deal_II_dimension == 1

      template <>
      void
      RatioOverRatioMinusOne<1,double>::
      build_rhs_contribution_1 (const StateDiscretization        &,
				const BlockVector<double>        &,
				const MeasurementGetter::Factories::Base<1> &,
				BlockVector<double>              &,
				const unsigned int                ,
				const unsigned int                ,
				Threads::ThreadMutex             &) const
      {
	Assert (false, ExcNotImplemented());
      }



      template <>
      void
      RatioOverRatioMinusOne<1,float>::
      build_rhs_contribution_1 (const StateDiscretization        &,
				const BlockVector<double>        &,
				const MeasurementGetter::Factories::Base<1> &,
				BlockVector<double>              &,
				const unsigned int                ,
				const unsigned int                ,
				Threads::ThreadMutex             &) const
      {
	Assert (false, ExcNotImplemented());
      }
    

    
      template <>
      void
      RatioOverRatioMinusOne<1,double>::
      build_matrix_contribution_1 (const StateDiscretization        &,
				   const BlockVector<double>        &,
				   const MeasurementGetter::Factories::Base<1> &,
				   BlockSparseMatrix<double>        &,
				   const unsigned int                ,
				   const unsigned int                ,
				   Threads::ThreadMutex             &) const
      {
	Assert (false, ExcNotImplemented());
      }



      template <>
      void
      RatioOverRatioMinusOne<1,float>::
      build_matrix_contribution_1 (const StateDiscretization        &,
				   const BlockVector<double>        &,
				   const MeasurementGetter::Factories::Base<1> &,
				   BlockSparseMatrix<double>        &,
				   const unsigned int                ,
				   const unsigned int                ,
				   Threads::ThreadMutex             &) const
      {
	Assert (false, ExcNotImplemented());
      }
    

    
      template <>
      void
      RatioOverRatioMinusOne<1,double>::
      m_prime_1 (const StateDiscretization       &,
                 const DoFHandler<1>            &,
		 const Vector<double>           &,
		 const Vector<double>           &,
		 const MeasurementGetter::Factories::Base<1> &,
		 Vector<float>                  &,
		 const unsigned int              ,
		 const unsigned int              ) const
      {
	Assert (false, ExcNotImplemented());
      }



      template <>
      void
      RatioOverRatioMinusOne<1,float>::
      m_prime_1 (const StateDiscretization       &,
                 const DoFHandler<1>            &,
		 const Vector<double>           &,
		 const Vector<double>           &,
		 const MeasurementGetter::Factories::Base<1> &,
		 Vector<float>                  &,
		 const unsigned int              ,
		 const unsigned int              ) const
      {
	Assert (false, ExcNotImplemented());
      }
    

    
      template <>
      void
      RatioOverRatioMinusOne<1,double>::
      compute_data_misfit_1 (const StateDiscretization        &,
			     const BlockVector<double>        &,
			     const MeasurementGetter::Factories::Base<1> &,
			     const unsigned int                ,
			     const unsigned int                ,
			     double                           &) const
      {
	Assert (false, ExcNotImplemented());
      }



      template <>
      void
      RatioOverRatioMinusOne<1,float>::
      compute_data_misfit_1 (const StateDiscretization        &,
			     const BlockVector<double>        &,
			     const MeasurementGetter::Factories::Base<1> &,
			     const unsigned int                ,
			     const unsigned int                ,
			     double                           &) const
      {
	Assert (false, ExcNotImplemented());
      }
    
#endif


      template <int dim, typename number>
      RatioMinusRatio<dim,number>::
      RatioMinusRatio (const libparest::Slave::Stationary::ProblemDescription &problem_description,
		       const Function<dim>           &weight_function,
		       const std::set<unsigned char> &boundary_indicators)
		      :
		      libparest::Slave::Stationary::Measurements::Base<dim,number> (problem_description),
		      libparest::Slave::Stationary::Measurements::BoundaryMeasurementBase (boundary_indicators),
                      z_ref (std::complex<double>() /
                             std::complex<double>()),
                      complete_z_ref (std::complex<double>() /
                                      std::complex<double>()),
		      weight_function (&weight_function)
      {}


    
      template <int dim, typename number>
      void
      RatioMinusRatio<dim,number>::
      compute_data_misfit_1 (const StateDiscretization        &state_discretization,
			     const BlockVector<double>        &present_iterate,
			     const MeasurementGetterFactory &getter_factory,
			     const unsigned int                begin,
			     const unsigned int                end,
			     double                           &data_misfit) const
      {
        const Quadrature<dim-1> &quadrature
          = state_discretization.finite_elements->face_quadrature;        
	const unsigned int n_q_points = quadrature.n_quadrature_points;

	std::auto_ptr<MeasurementGetter::FaceGetter::Base<dim> >
	  measurement_getter (getter_factory.create (quadrature, MeasurementGetter::MeasurementType::values));      

	const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
    
	FEFaceValues<dim>  fe_values (fe_global,
                                      quadrature,
				      UpdateFlags(update_values      |
						  update_q_points    |
						  update_JxW_values));
    
	std::vector<Vector<double> >
	  iterate_values (n_q_points,
			  Vector<double>(this->problem_description->n_variables));
	std::vector<Vector<double> >
	  measurement_values (n_q_points,
			      Vector<double>(this->problem_description->n_primal_variables));
    
	std::vector<double> weight_values (n_q_points);

                                         
                                         
                                         
        std::complex<double> u_ref = std::complex<double>(1,0)/
                                     std::complex<double>(0,0);
        {
          bool reference_point_found = false;
          
          typename DoFHandler<dim>::active_cell_iterator
            cell = state_discretization.dof_handlers->global.begin_active(),
            endc = state_discretization.dof_handlers->global.end();
          for (; cell!=endc && !reference_point_found; ++cell)
            for (unsigned int face_no=0;
                 face_no<GeometryInfo<dim>::faces_per_cell && !reference_point_found;
                 ++face_no)
              if (cell->face(face_no)->at_boundary() &&
                  this->is_measurement_boundary (cell->face(face_no)->boundary_indicator()))
                for (unsigned int v=0; v<GeometryInfo<dim>::vertices_per_face; ++v)
                  if (cell->face(face_no)->vertex_index(v) ==
                      reference_vertex)
                    {
                      reference_point_found = true;
                      u_ref
                        = std::complex<double>(present_iterate(cell->face(face_no)->vertex_dof_index(v,2)),
                                               present_iterate(cell->face(face_no)->vertex_dof_index(v,3)));

                      Assert (norm(u_ref) > 0, ExcInternalError());
                      
                      u_ref /= abs(complete_z_ref);
                      
                      break;
                    }
	  Assert (reference_point_found,
		  ExcMessage ("Could not determine the reference point"));
        }
        

                                         
	typename DoFHandler<dim>::active_cell_iterator
	  cell = state_discretization.dof_handlers->global.begin_active(),
	  endc = state_discretization.dof_handlers->global.begin_active();
	std::advance (cell, static_cast<signed int>(begin));
	std::advance (endc, static_cast<signed int>(end));  

        for (; cell!=endc; ++cell)
	  for (unsigned int face_no=0;
	       face_no<GeometryInfo<dim>::faces_per_cell;
	       ++face_no)
	    if (cell->face(face_no)->at_boundary() &&
		this->is_measurement_boundary (cell->face(face_no)->boundary_indicator()))
	      {                
		fe_values.reinit (cell, face_no);

						 
						 
		fe_values.get_function_values  (present_iterate, iterate_values);

		weight_function->value_list (fe_values.get_quadrature_points(),
					     weight_values);
	    
		measurement_getter->get_values (cell, face_no, measurement_values);
      
		for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
		  {
		    const std::complex<double>
		      u (iterate_values[q_point](2),
			 iterate_values[q_point](3)),
		      z (measurement_values[q_point](2),
			 measurement_values[q_point](3));
		    
		    data_misfit += 0.5 * norm(u/u_ref-z/z_ref) *
				   weight_values[q_point] *
				   fe_values.JxW(q_point);
		    Assert (deal_II_numbers::is_finite(data_misfit),
			    ExcInternalError());
		  }
	      }
      }
      



      template <int dim, typename number>
      void
      RatioMinusRatio<dim,number>::
      build_rhs_contribution_1 (const StateDiscretization        &state_discretization,
				const BlockVector<double>        &linearization_point,
				const MeasurementGetterFactory &getter_factory,
				BlockVector<double>              &output_vector,
				const unsigned int                begin,
				const unsigned int                end,
				Threads::ThreadMutex             &mutex) const
      {
        const Quadrature<dim-1> &quadrature
          = state_discretization.finite_elements->face_quadrature;        
	const unsigned int n_q_points = quadrature.n_quadrature_points;

        const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
	const unsigned int dofs_per_cell    = fe_global.dofs_per_cell;
  
	std::auto_ptr<MeasurementGetter::FaceGetter::Base<dim> >
	  measurement_getter (getter_factory.create (quadrature,
						     MeasurementGetter::MeasurementType::values));
      
	FEFaceValues<dim>  fe_values (fe_global, quadrature,
				      UpdateFlags(update_values      |
						  update_q_points    |
						  update_JxW_values));
  
					 
					 
	std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
  
					 
					 
					 
					 
	std::vector<Vector<double> >
	  linearization_point_values (n_q_points,
				      Vector<double>(this->problem_description->n_variables));
	std::vector<Vector<double> >
	  measurement_values (n_q_points,
			      Vector<double> (this->problem_description->n_primal_variables));
  
					 
	Vector<double> cell_vector (dofs_per_cell);

	std::vector<double> weight_values (n_q_points);
        
                                         
                                         
                                         
                                         
                                         
                                         
        std::complex<double> u_ref = std::complex<double>(1,0)/
                                     std::complex<double>(0,0);
        unsigned int
          real_shape_function_at_ref_point = deal_II_numbers::invalid_unsigned_int,
          imag_shape_function_at_ref_point = deal_II_numbers::invalid_unsigned_int;
        {
          bool reference_point_found = false;
          
          typename DoFHandler<dim>::active_cell_iterator
            cell = state_discretization.dof_handlers->global.begin_active(),
            endc = state_discretization.dof_handlers->global.end();
          for (; cell!=endc && !reference_point_found; ++cell)
            for (unsigned int face_no=0;
                 face_no<GeometryInfo<dim>::faces_per_cell && !reference_point_found;
                 ++face_no)
              if (cell->face(face_no)->at_boundary() &&
                  this->is_measurement_boundary (cell->face(face_no)->boundary_indicator()))
                for (unsigned int v=0; v<GeometryInfo<dim>::vertices_per_face; ++v)
                  if (cell->face(face_no)->vertex_index(v) ==
                      reference_vertex)
                    {
                      reference_point_found = true;

                      Assert ((real_shape_function_at_ref_point ==
                               deal_II_numbers::invalid_unsigned_int)
                              ||
                              (real_shape_function_at_ref_point
                               == cell->face(face_no)->vertex_dof_index(v,2)),
                              ExcInternalError());
                      Assert ((imag_shape_function_at_ref_point ==
                               deal_II_numbers::invalid_unsigned_int)
                              ||
                              (imag_shape_function_at_ref_point
                               == cell->face(face_no)->vertex_dof_index(v,3)),
                              ExcInternalError());
                      
		      real_shape_function_at_ref_point
                        = cell->face(face_no)->vertex_dof_index(v,2);
		      imag_shape_function_at_ref_point
                        = cell->face(face_no)->vertex_dof_index(v,3);

                      u_ref
                        = std::complex<double>(linearization_point(real_shape_function_at_ref_point),
                                               linearization_point(imag_shape_function_at_ref_point));
                      Assert (norm(u_ref) > 0, ExcInternalError());
                      
                      u_ref /= abs(complete_z_ref);
                      
                      break;
                    }
        }
        
                                         
	typename DoFHandler<dim>::active_cell_iterator
	  cell = state_discretization.dof_handlers->global.begin_active(),
	  endc = state_discretization.dof_handlers->global.begin_active();
	std::advance (cell, static_cast<signed int>(begin));
	std::advance (endc, static_cast<signed int>(end));  

	for (; cell!=endc; ++cell)
	  for (unsigned int face_no=0;
	       face_no<GeometryInfo<dim>::faces_per_cell;
	       ++face_no)
	    if (cell->face(face_no)->at_boundary() &&
		this->is_measurement_boundary (cell->face(face_no)->boundary_indicator()))
	      {
		fe_values.reinit (cell, face_no);
		cell_vector = 0;
		cell->get_dof_indices (dof_indices_on_cell);

						 
						 
		fe_values.get_function_values  (linearization_point,
						linearization_point_values);

		weight_function->value_list (fe_values.get_quadrature_points(),
					     weight_values);

		measurement_getter->get_values (cell, face_no, measurement_values);
      
		for (unsigned int q_point=0;
		     q_point<fe_values.n_quadrature_points;
		     ++q_point)
		  {
		    const std::complex<double>
		      u (linearization_point_values[q_point](2),
			 linearization_point_values[q_point](3)),
		      z (measurement_values[q_point](2),
			 measurement_values[q_point](3));
		    
		    for (unsigned int i=0; i<dofs_per_cell; ++i)
		      {
			const unsigned int
			  component = fe_global.system_to_component_index(i).first;

							 
							 
							 
							 
							 
							 
							 
							 
							 
			if ((component < 2) || (component >= 4))
			  continue;
			
			const std::complex<double>
			  phi_i (fe_values.shape_value_component(i,q_point,2),
                                 fe_values.shape_value_component(i,q_point,3));

                                                         
                                                         
                                                         
			std::complex<double> phi_i_ref(0,0);
                        if (dof_indices_on_cell[i] == real_shape_function_at_ref_point)
                          phi_i_ref = std::complex<double>(1,0) / abs(complete_z_ref);
                        else if (dof_indices_on_cell[i] == imag_shape_function_at_ref_point)
                          phi_i_ref = std::complex<double>(0,1) / abs(complete_z_ref);

                        cell_vector(i)
                          -= (complex_scalar_product(u/u_ref-z/z_ref, 
                                                     phi_i/u_ref
						     - u/u_ref/u_ref*phi_i_ref) *
                              weight_values[q_point] *
                              fe_values.JxW(q_point));
		      }
		  }
	
						 
						 
						 
						 
						 
		mutex.acquire ();
		for (unsigned int i=0; i<dofs_per_cell; ++i)
		  output_vector(dof_indices_on_cell[i])
		    += static_cast<float>(cell_vector(i));
		mutex.release ();
	      }
      }
  


      template <int dim, typename number>
      void
      RatioMinusRatio<dim,number>::
      build_matrix_contribution_1 (const StateDiscretization        &state_discretization,
				   const BlockVector<double>        &linearization_point,
				   const MeasurementGetterFactory &/*getter_factory*/,
				   BlockSparseMatrix<number>        &global_matrix,
				   const unsigned int                begin,
				   const unsigned int                end,
				   Threads::ThreadMutex             &mutex) const
      {
        const Quadrature<dim-1> &quadrature
          = state_discretization.finite_elements->face_quadrature;        
	const unsigned int n_q_points = quadrature.n_quadrature_points;

        const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
	const unsigned int dofs_per_cell    = fe_global.dofs_per_cell;
  
	FEFaceValues<dim>  fe_values (fe_global, quadrature,
				      UpdateFlags(update_values      |
						  update_q_points    |
						  update_JxW_values));

					 
					 
	std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
  
					 
	FullMatrix<double> cell_matrix (dofs_per_cell, dofs_per_cell);

	std::vector<double> weight_values (n_q_points);

	std::vector<Vector<double> >
	  linearization_point_values (n_q_points,
				      Vector<double>(this->problem_description->n_variables));

        std::complex<double> u_ref = std::complex<double>(1,0)/
                                     std::complex<double>(0,0);
        unsigned int
          real_shape_function_at_ref_point = deal_II_numbers::invalid_unsigned_int,
          imag_shape_function_at_ref_point = deal_II_numbers::invalid_unsigned_int;
        {
          bool reference_point_found = false;
          
          typename DoFHandler<dim>::active_cell_iterator
            cell = state_discretization.dof_handlers->global.begin_active(),
            endc = state_discretization.dof_handlers->global.end();
          for (; cell!=endc && !reference_point_found; ++cell)
            for (unsigned int face_no=0;
                 face_no<GeometryInfo<dim>::faces_per_cell && !reference_point_found;
                 ++face_no)
              if (cell->face(face_no)->at_boundary() &&
                  this->is_measurement_boundary (cell->face(face_no)->boundary_indicator()))
                for (unsigned int v=0; v<GeometryInfo<dim>::vertices_per_face; ++v)
                  if (cell->face(face_no)->vertex_index(v) ==
                      reference_vertex)
                    {
                      reference_point_found = true;

                      Assert ((real_shape_function_at_ref_point ==
                               deal_II_numbers::invalid_unsigned_int)
                              ||
                              (real_shape_function_at_ref_point
                               == cell->face(face_no)->vertex_dof_index(v,2)),
                              ExcInternalError());
                      Assert ((imag_shape_function_at_ref_point ==
                               deal_II_numbers::invalid_unsigned_int)
                              ||
                              (imag_shape_function_at_ref_point
                               == cell->face(face_no)->vertex_dof_index(v,3)),
                              ExcInternalError());
                      
		      real_shape_function_at_ref_point
                        = cell->face(face_no)->vertex_dof_index(v,2);
		      imag_shape_function_at_ref_point
                        = cell->face(face_no)->vertex_dof_index(v,3);

                      u_ref
                        = std::complex<double>(linearization_point(real_shape_function_at_ref_point),
                                               linearization_point(imag_shape_function_at_ref_point));
                      Assert (norm(u_ref) > 0, ExcInternalError());
                        
                      u_ref /= abs(complete_z_ref);
                      
                      break;
                    }                      
        }

					 
	typename DoFHandler<dim>::active_cell_iterator
	  cell = state_discretization.dof_handlers->global.begin_active(),
	  endc = state_discretization.dof_handlers->global.begin_active();
	std::advance (cell, static_cast<signed int>(begin));
	std::advance (endc, static_cast<signed int>(end));  

	for (; cell!=endc; ++cell)
	  for (unsigned int face_no=0;
	       face_no<GeometryInfo<dim>::faces_per_cell;
	       ++face_no)
	    if (cell->face(face_no)->at_boundary() &&
		this->is_measurement_boundary (cell->face(face_no)->boundary_indicator()))
	      {
		fe_values.reinit (cell, face_no);

		weight_function->value_list (fe_values.get_quadrature_points(),
					     weight_values);
		cell_matrix = 0;
		cell->get_dof_indices (dof_indices_on_cell);

                                                 
						 
		fe_values.get_function_values  (linearization_point,
						linearization_point_values);

						 
						 
		for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
                  {
		    const std::complex<double>
		      u (linearization_point_values[q_point](2),
			 linearization_point_values[q_point](3));
                    
                    for (unsigned int i=0; i<dofs_per_cell; ++i)
                      for (unsigned int j=0; j<dofs_per_cell; ++j)
                        {
                          const unsigned int
                            component_i = fe_global.system_to_component_index(i).first,
                            component_j = fe_global.system_to_component_index(j).first;
                        
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                          if ((component_i != component_j)
                              ||
                              (component_i < 2) || (component_i >= 4)
                              ||
                              (component_j < 2) || (component_j >= 4))
                            continue;

                                                           
                                                           
                                                           
                                                           
                          const std::complex<double>
                            phi_i (fe_values.shape_value_component(i,q_point,2),
                                   fe_values.shape_value_component(i,q_point,3)),
                            phi_j (fe_values.shape_value_component(j,q_point,2),
                                   fe_values.shape_value_component(j,q_point,3));

                                                           
                                                           
                                                           
                                                           
                          std::complex<double> phi_i_ref(0,0);
                          if (dof_indices_on_cell[i] == real_shape_function_at_ref_point)
                            phi_i_ref = std::complex<double>(1,0) / abs(complete_z_ref);
                          else if (dof_indices_on_cell[i] == imag_shape_function_at_ref_point)
                            phi_i_ref = std::complex<double>(0,1) / abs(complete_z_ref);

                          std::complex<double> phi_j_ref(0,0);
                          if (dof_indices_on_cell[j] == real_shape_function_at_ref_point)
                            phi_j_ref = std::complex<double>(1,0) / abs(complete_z_ref);
                          else if (dof_indices_on_cell[j] == imag_shape_function_at_ref_point)
                            phi_j_ref = std::complex<double>(0,1) / abs(complete_z_ref);
                          
                          cell_matrix (i,j)
                            += (complex_scalar_product(phi_i/u_ref-u/u_ref/u_ref*phi_i_ref,
                                                       phi_j/u_ref-u/u_ref/u_ref*phi_j_ref) *
                                weight_values[q_point] *
                                fe_values.JxW(q_point));
                        }
                  }
                
						 
						 
						 
						 
						 
						 
						 
						 
						 
		mutex.acquire ();
		for (unsigned int i=0; i<dofs_per_cell; ++i)
		  for (unsigned int j=0; j<dofs_per_cell; ++j)
		    {
						       
						       
						       
						       
						       
		      Assert ((cell_matrix(i,j) == 0)
			      ||
			      (global_matrix.get_sparsity_pattern().get_row_indices()
			       .global_to_local(dof_indices_on_cell[i]).first == 0),
			      ExcInternalError());
		      Assert ((cell_matrix(i,j) == 0)
			      ||
			      (global_matrix.get_sparsity_pattern().get_column_indices().
			       global_to_local(dof_indices_on_cell[j]).first == 0),
			      ExcInternalError());
		      
		      global_matrix.add(dof_indices_on_cell[i],
					dof_indices_on_cell[j],
					static_cast<float>(cell_matrix(i,j)));
		    }
		mutex.release ();
	      }
      }  



      template <int dim, typename number>
      void
      RatioMinusRatio<dim,number>::
      m_prime_1 (const StateDiscretization    &/*state_discretization*/,
                 const DoFHandler<dim>        &/*extended_dof_handler*/,
		 const Vector<double>         &/*present_iterate*/,
		 const Vector<double>         &/*weights*/,
		 const MeasurementGetterFactory &/*getter_factory*/,
		 Vector<float>                &/*output_vector*/,
		 const unsigned int            /*begin*/,
		 const unsigned int            /*end*/) const
      {
	AssertThrow (false, ExcNotImplemented());
      }



#if deal_II_dimension == 1

      template <>
      void
      RatioMinusRatio<1,double>::
      build_rhs_contribution_1 (const StateDiscretization        &,
				const BlockVector<double>        &,
				const MeasurementGetter::Factories::Base<1> &,
				BlockVector<double>              &,
				const unsigned int                ,
				const unsigned int                ,
				Threads::ThreadMutex             &) const
      {
	Assert (false, ExcNotImplemented());
      }



      template <>
      void
      RatioMinusRatio<1,float>::
      build_rhs_contribution_1 (const StateDiscretization        &,
				const BlockVector<double>        &,
				const MeasurementGetter::Factories::Base<1> &,
				BlockVector<double>              &,
				const unsigned int                ,
				const unsigned int                ,
				Threads::ThreadMutex             &) const
      {
	Assert (false, ExcNotImplemented());
      }
    

    
      template <>
      void
      RatioMinusRatio<1,double>::
      build_matrix_contribution_1 (const StateDiscretization        &,
				   const BlockVector<double>        &,
				   const MeasurementGetter::Factories::Base<1> &,
				   BlockSparseMatrix<double>        &,
				   const unsigned int                ,
				   const unsigned int                ,
				   Threads::ThreadMutex             &) const
      {
	Assert (false, ExcNotImplemented());
      }



      template <>
      void
      RatioMinusRatio<1,float>::
      build_matrix_contribution_1 (const StateDiscretization        &,
				   const BlockVector<double>        &,
				   const MeasurementGetter::Factories::Base<1> &,
				   BlockSparseMatrix<double>        &,
				   const unsigned int                ,
				   const unsigned int                ,
				   Threads::ThreadMutex             &) const
      {
	Assert (false, ExcNotImplemented());
      }
    

    
      template <>
      void
      RatioMinusRatio<1,double>::
      m_prime_1 (const StateDiscretization       &,
                 const DoFHandler<1>            &,
		 const Vector<double>           &,
		 const Vector<double>           &,
		 const MeasurementGetter::Factories::Base<1> &,
		 Vector<float>                  &,
		 const unsigned int              ,
		 const unsigned int              ) const
      {
	Assert (false, ExcNotImplemented());
      }



      template <>
      void
      RatioMinusRatio<1,float>::
      m_prime_1 (const StateDiscretization       &,
                 const DoFHandler<1>            &,
		 const Vector<double>           &,
		 const Vector<double>           &,
		 const MeasurementGetter::Factories::Base<1> &,
		 Vector<float>                  &,
		 const unsigned int              ,
		 const unsigned int              ) const
      {
	Assert (false, ExcNotImplemented());
      }
    

    
      template <>
      void
      RatioMinusRatio<1,double>::
      compute_data_misfit_1 (const StateDiscretization        &,
			     const BlockVector<double>        &,
			     const MeasurementGetter::Factories::Base<1> &,
			     const unsigned int                ,
			     const unsigned int                ,
			     double                           &) const
      {
	Assert (false, ExcNotImplemented());
      }



      template <>
      void
      RatioMinusRatio<1,float>::
      compute_data_misfit_1 (const StateDiscretization        &,
			     const BlockVector<double>        &,
			     const MeasurementGetter::Factories::Base<1> &,
			     const unsigned int                ,
			     const unsigned int                ,
			     double                           &) const
      {
	Assert (false, ExcNotImplemented());
      }
    
#endif


      template <int dim, typename number>
      void
      RatioMinusRatio<dim,number>::
      initialize_gauss_newton_step (const StateDiscretization        &state_discretization,
                                    const BlockVector<double>        &present_iterate,
                                    const MeasurementGetter::Factories::Base<dim> &getter_factory)
      {
                                         
                                         
                                         
                                         
                                         
	const QTrapez<dim-1> quadrature;
	const unsigned int n_q_points = quadrature.n_quadrature_points;
	Assert (n_q_points == GeometryInfo<dim>::vertices_per_face, ExcInternalError());

	std::auto_ptr<MeasurementGetter::FaceGetter::Base<dim> >
	  measurement_getter (getter_factory.create (quadrature,
                                                     MeasurementGetter::MeasurementType::values));      

	const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
    
	FEFaceValues<dim>  fe_values (fe_global, quadrature,
				      UpdateFlags(update_values      |
						  update_q_points    |
						  update_JxW_values));
    
	std::vector<Vector<double> >
	  iterate_values (n_q_points,
			  Vector<double>(this->problem_description->n_variables));
	std::vector<Vector<double> >
	  measurement_values (n_q_points,
			      Vector<double>(this->problem_description->n_primal_variables));
    
	std::vector<double> weight_values (n_q_points);

                                         
                                         
                                         
                                         
	typename DoFHandler<dim>::active_cell_iterator
	  cell = state_discretization.dof_handlers->global.begin_active(),
	  endc = state_discretization.dof_handlers->global.end();

        double greatest_magnitude = 0;

	reference_vertex = deal_II_numbers::invalid_unsigned_int;
	
	for (; cell!=endc; ++cell)
	  for (unsigned int face_no=0;
	       face_no<GeometryInfo<dim>::faces_per_cell;
	       ++face_no)
	    if (cell->face(face_no)->at_boundary() &&
		this->is_measurement_boundary (cell->face(face_no)->boundary_indicator()))
	      {
		fe_values.reinit (cell, face_no);

						 
						 
		fe_values.get_function_values  (present_iterate, iterate_values);

		weight_function->value_list (fe_values.get_quadrature_points(),
					     weight_values);
	    
		measurement_getter->get_values (cell, face_no, measurement_values);
      
		bool reference_point_updated = false;
		for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
		  {
		    const std::complex<double>
		      z (measurement_values[q_point](2),
			 measurement_values[q_point](3));

                                                     
                                                     
                                                     
                                                     
                                                     
                                                     
                    if (norm(z) * weight_values[q_point] > greatest_magnitude)
                      {
                        greatest_magnitude = norm(z) * weight_values[q_point];
                        
                        reference_point = fe_values.quadrature_point(q_point);
                        complete_z_ref = z;

			reference_point_updated = true;
                        break;
                      }
		  }

                                                 
                                                 
		if (reference_point_updated == true)
		  {
		    unsigned int v=0;
		    for (; v<GeometryInfo<dim>::vertices_per_cell; ++v)
		      if (reference_point == cell->vertex(v))
			{
			  reference_vertex = cell->vertex_index(v);
			  break;
			}
		    Assert (v<GeometryInfo<dim>::vertices_per_cell,
                            ExcInternalError());
		  }
	      }

	Assert (reference_vertex != deal_II_numbers::invalid_unsigned_int,
		ExcMessage("Can't determine a reference point. This may be because "
			   "all fluorescent fluences are zero, for example because "
			   "the value of the parameter is zero everywhere. Or the weight "
			   "function may not be correct for this geometry?"));
	
                                         
                                         
        const double normalization = abs(complete_z_ref);
        z_ref = complete_z_ref/normalization;
      }
      
    }
      
  }



  namespace Measurements
  {
    namespace ScaledWeightedDirichletMeasurements
    {
      template class Base<deal_II_dimension,double>;
      template class Base<deal_II_dimension,float>;

      template class Pure_L2<deal_II_dimension,double>;
      template class Pure_L2<deal_II_dimension,float>;

      template class L2_Real<deal_II_dimension,double>;
      template class L2_Real<deal_II_dimension,float>;

      template class L2_Complex<deal_II_dimension,double>;
      template class L2_Complex<deal_II_dimension,float>;
    }
    
    namespace ReferencedMeasurements
    {
      template class RatioOverRatioMinusOne<deal_II_dimension,double>;
      template class RatioOverRatioMinusOne<deal_II_dimension,float>;

      template class RatioMinusRatio<deal_II_dimension,double>;
      template class RatioMinusRatio<deal_II_dimension,float>;
    }
  }
}
