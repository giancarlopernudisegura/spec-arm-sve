/* $Id: measurements.cc 3039 2006-10-23 18:54:17Z bangerth $ */



#include <libparest/slave/stationary/measurements.h>
#include <libparest/slave/stationary/synthetic_data.h>
#include <libparest/slave/stationary/state_discretization.h>

#include <base/function.h>
#include <base/multithread_info.h>
#include <base/quadrature_lib.h>
#include <lac/block_vector.h>
#include <lac/block_sparse_matrix.h>
#include <fe/fe_values.h>
#include <fe/fe_q.h>

#include <numeric>





namespace
{
  using namespace dealii;


                                   
                                   
                                   
                                   
                                   
                                   
                                   
  template <int dim>
  struct FE_Dummy
  {
      static const FE_Q<dim> fe;
  };

  template <int dim>
  const FE_Q<dim> FE_Dummy<dim>::fe (1);
}



namespace libparest
{
  namespace Slave
  {

    namespace Stationary
    {

      namespace MeasurementGetter 
      {
	namespace CellGetter
	{
	  template <int dim>
	  Base<dim>::~Base () 
	  {}

    
    
	  template <int dim>
	  SyntheticData<dim>::
	  SyntheticData (const SyntheticDataBase<dim> &synthetic_data,
			 const Quadrature<dim> &quadrature,
			 const MeasurementType::Type measurement_type)
			  :
			  fe_values (synthetic_data.get_fe(),
				     quadrature,
				     measurement_type == MeasurementType::values ?
                                     update_values : update_gradients),
			  synthetic_data (&synthetic_data)
	  {}

  

	  template <int dim>
	  void
	  SyntheticData<dim>::
	  get_values (const typename Triangulation<dim>::active_cell_iterator &cell,
		      std::vector<Vector<double> >                            &values)
	  {
	    const typename DoFHandler<dim>::active_cell_iterator
	      measurement_cell (const_cast<Triangulation<dim>*>
				(&synthetic_data->get_dof_handler().get_tria()),
				cell->level(),
				cell->index(),
				&synthetic_data->get_dof_handler());
	    fe_values.reinit (measurement_cell);
	  
	    fe_values.get_function_values (synthetic_data->get_measurement(),
					   values);
	  }


    
	  template <int dim>
	  void
	  SyntheticData<dim>::
	  get_gradients (const typename Triangulation<dim>::active_cell_iterator &cell,
			 std::vector<std::vector<Tensor<1,dim> > >               &gradients)
	  {
	    const typename DoFHandler<dim>::active_cell_iterator
	      measurement_cell (const_cast<Triangulation<dim>*>
				(&synthetic_data->get_dof_handler().get_tria()),
				cell->level(),
				cell->index(),
				&synthetic_data->get_dof_handler());
	    fe_values.reinit (measurement_cell);
	  
	    fe_values.get_function_grads (synthetic_data->get_measurement(),
					  gradients);
	  }



	  template <int dim>
	  MeasurementFunction<dim>::
	  MeasurementFunction (const Function<dim>   &function,
                               const Quadrature<dim> &quadrature,
                               const MeasurementType::Type)
			  :
			  fe_values (FE_Dummy<dim>::fe,
				     quadrature,
				     update_q_points),
			  function (&function)
	  {}

  

	  template <int dim>
	  void
	  MeasurementFunction<dim>::
	  get_values (const typename Triangulation<dim>::active_cell_iterator &cell,
		      std::vector<Vector<double> >                            &values)
	  {
	    fe_values.reinit (cell);
            function->vector_value_list (fe_values.get_quadrature_points(), values);
	  }


    
	  template <int dim>
	  void
	  MeasurementFunction<dim>::
	  get_gradients (const typename Triangulation<dim>::active_cell_iterator &cell,
			 std::vector<std::vector<Tensor<1,dim> > >               &gradients)
	  {
	    fe_values.reinit (cell);
            function->vector_gradient_list (fe_values.get_quadrature_points(),
                                            gradients);
	  }
          


	  template <int dim>
	  ZeroFunction<dim>::ZeroFunction ()
	  {}

	  
      
	  template <int dim>
	  void
	  ZeroFunction<dim>::
	  get_values (const typename Triangulation<dim>::active_cell_iterator &,
		      std::vector<Vector<double> >                            &values)
	  {
	    for (unsigned int i=0; i<values.size(); ++i)
	      values[i] = 0;
	  }
      

      
	  template <int dim>
	  void
	  ZeroFunction<dim>::
	  get_gradients (const typename Triangulation<dim>::active_cell_iterator &,
			 std::vector<std::vector<Tensor<1,dim> > >               &gradients)      
	  {
	    for (unsigned int i=0; i<gradients.size(); ++i)
	      for (unsigned int j=0; j<gradients[i].size(); ++j)
		gradients[i][j] = Tensor<1,dim>();
	  }      
      
	}


	namespace FaceGetter
	{
	  template <int dim>
	  Base<dim>::~Base () 
	  {}

    
    
	  template <int dim>
	  SyntheticData<dim>::
	  SyntheticData (const SyntheticDataBase<dim> &synthetic_data,
			 const Quadrature<dim-1> &quadrature,
			 const MeasurementType::Type measurement_type)
			  :
			  fe_face_values (synthetic_data.get_fe(),
                                          quadrature,
                                          measurement_type == MeasurementType::values ?
                                          update_values : update_gradients),
			  synthetic_data (&synthetic_data)
	  {}

  

	  template <int dim>
	  void
	  SyntheticData<dim>::
	  get_values (const typename Triangulation<dim>::active_cell_iterator &cell,
		      const unsigned int                                       face_no,
		      std::vector<Vector<double> >                            &values)
	  {
	    const typename DoFHandler<dim>::active_cell_iterator
	      measurement_cell (const_cast<Triangulation<dim>*>
				(&synthetic_data->get_dof_handler().get_tria()),
				cell->level(),
				cell->index(),
				&synthetic_data->get_dof_handler());
	    fe_face_values.reinit (measurement_cell, face_no);
	  
	    fe_face_values.get_function_values (synthetic_data->get_measurement(),
                                                values);
	  }


    
	  template <int dim>
	  void
	  SyntheticData<dim>::
	  get_gradients (const typename Triangulation<dim>::active_cell_iterator &cell,
			 const unsigned int                                       face_no,
			 std::vector<std::vector<Tensor<1,dim> > >               &gradients)
	  {
	    const typename DoFHandler<dim>::active_cell_iterator
	      measurement_cell (const_cast<Triangulation<dim>*>
				(&synthetic_data->get_dof_handler().get_tria()),
				cell->level(),
				cell->index(),
				&synthetic_data->get_dof_handler());
	    fe_face_values.reinit (measurement_cell, face_no);
	  
	    fe_face_values.get_function_grads (synthetic_data->get_measurement(),
                                               gradients);
	  }

          

	  template <int dim>
	  MeasurementFunction<dim>::
	  MeasurementFunction (const Function<dim>   &function,
                               const Quadrature<dim-1> &quadrature,
                               const MeasurementType::Type)
			  :
			  fe_face_values (FE_Dummy<dim>::fe,
                                          quadrature,
                                          update_q_points),
			  function (&function)
	  {}

  

	  template <int dim>
	  void
	  MeasurementFunction<dim>::
	  get_values (const typename Triangulation<dim>::active_cell_iterator &cell,
                      const unsigned int                                       face_no,
		      std::vector<Vector<double> >                            &values)
	  {
	    fe_face_values.reinit (cell, face_no);
            function->vector_value_list (fe_face_values.get_quadrature_points(),
                                         values);
	  }


    
	  template <int dim>
	  void
	  MeasurementFunction<dim>::
	  get_gradients (const typename Triangulation<dim>::active_cell_iterator &cell,
			 const unsigned int                                       face_no,
			 std::vector<std::vector<Tensor<1,dim> > >               &gradients)
	  {
	    fe_face_values.reinit (cell, face_no);
            function->vector_gradient_list (fe_face_values.get_quadrature_points(),
                                            gradients);
	  }



	  template <int dim>
	  ZeroFunction<dim>::ZeroFunction ()
	  {}


	  
	  template <int dim>
	  void
	  ZeroFunction<dim>::
	  get_values (const typename Triangulation<dim>::active_cell_iterator &,
		      const unsigned int                                    ,
		      std::vector<Vector<double> >                            &values)
	  {
	    for (unsigned int i=0; i<values.size(); ++i)
	      values[i] = 0;
	  }
      

      
	  template <int dim>
	  void
	  ZeroFunction<dim>::
	  get_gradients (const typename Triangulation<dim>::active_cell_iterator &,
			 const unsigned int                                       ,
			 std::vector<std::vector<Tensor<1,dim> > >               &gradients)      
	  {
	    for (unsigned int i=0; i<gradients.size(); ++i)
	      for (unsigned int j=0; j<gradients[i].size(); ++j)
		gradients[i][j] = Tensor<1,dim>();
	  }
	}



	namespace Factories
	{
	  template <int dim>
	  Base<dim>::~Base ()
	  {}



	  template <int dim>
	  SyntheticData<dim>::
	  SyntheticData (const SyntheticDataBase<dim> &synthetic_data)
			  :
			  synthetic_data (&synthetic_data)
	  {}



	  template <int dim>
	  CellGetter::SyntheticData<dim>*
	  SyntheticData<dim>::create (const Quadrature<dim> &quadrature,
				      const MeasurementType::Type measurement_type) const
	  {
	    return new CellGetter::SyntheticData<dim> (*synthetic_data,
						       quadrature,
						       measurement_type);
	  }
      

	  template <int dim>
	  FaceGetter::SyntheticData<dim>*
	  SyntheticData<dim>::create (const Quadrature<dim-1> &quadrature,
				      const MeasurementType::Type measurement_type) const
	  {
	    return new FaceGetter::SyntheticData<dim> (*synthetic_data,
						       quadrature,
						       measurement_type);
	  }
      

      
	  template <int dim>
	  MeasurementFunction<dim>::
	  MeasurementFunction (const Function<dim> &function)
			  :
			  function (&function)
	  {}



	  template <int dim>
	  CellGetter::MeasurementFunction<dim>*
	  MeasurementFunction<dim>::
          create (const Quadrature<dim> &quadrature,
                  const MeasurementType::Type measurement_type) const
	  {
	    return new CellGetter::MeasurementFunction<dim> (*function,
                                                             quadrature,
                                                             measurement_type);
	  }
      

	  template <int dim>
	  FaceGetter::MeasurementFunction<dim>*
	  MeasurementFunction<dim>::
          create (const Quadrature<dim-1> &quadrature,
                  const MeasurementType::Type measurement_type) const
	  {
	    return new FaceGetter::MeasurementFunction<dim> (*function,
                                                             quadrature,
                                                             measurement_type);
	  }



	  template <int dim>
	  ZeroFunction<dim>::ZeroFunction ()
	  {}


	  
          template <int dim>
	  CellGetter::ZeroFunction<dim>*
	  ZeroFunction<dim>::create (const Quadrature<dim> &,
				     const MeasurementType::Type) const
	  {
	    return new CellGetter::ZeroFunction<dim> ();
	  }
      

	  template <int dim>
	  FaceGetter::ZeroFunction<dim>*
	  ZeroFunction<dim>::create (const Quadrature<dim-1> &,
				     const MeasurementType::Type) const
	  {
	    return new FaceGetter::ZeroFunction<dim> ();
	  }
	}
    
      }
  
  
      namespace Measurements
      {
    
/* -------------------- Base -------------- */  

	template <int dim, typename number>
	Base<dim,number>::
	Base (const libparest::Slave::Stationary::ProblemDescription &problem_description)
			:
			problem_description (&problem_description)
	{}



	template <int dim, typename number>
	double
	Base<dim,number>::
	compute_data_misfit (const StateDiscretization        &state_discretization,
			     const BlockVector<double>        &present_iterate,
			     const MeasurementGetter::Factories::Base<dim> &getter_factory) const
	{
					   
	  const unsigned int n_threads = multithread_info.n_default_threads;
	  std::vector<double> misfit_part (n_threads);

					   
					   
	  std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	    = Threads::split_interval (0, state_discretization.triangulations
				       ->global.n_active_cells(),
				       n_threads);
    
	  Threads::ThreadGroup<> threads;
	  for (unsigned int thread=0; thread<n_threads; ++thread)
	    threads += Threads::spawn (*this, &Base<dim,number>::compute_data_misfit_1)
		       (state_discretization, present_iterate,
			getter_factory,
			thread_ranges[thread].first,
			thread_ranges[thread].second,
			misfit_part[thread]);
	  threads.join_all ();

	  return std::accumulate (misfit_part.begin(), misfit_part.end(), 0.);
	}



	template <int dim, typename number>
	void
	Base<dim,number>::
	build_rhs_contribution (const StateDiscretization        &state_discretization,
				const BlockVector<double>        &linearization_point,
				const MeasurementGetter::Factories::Base<dim> &getter_factory,
				BlockVector<double>              &output_vector) const
	{
					   
	  const unsigned int n_threads = multithread_info.n_default_threads;
	  std::vector<double> misfit_part (n_threads);

					   
					   
	  std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	    = Threads::split_interval (0, state_discretization.triangulations
				       ->global.n_active_cells(),
				       n_threads);
    
	  Threads::ThreadGroup<> threads;
	  Threads::ThreadMutex   mutex;
	  for (unsigned int thread=0; thread<n_threads; ++thread)
	    threads += Threads::spawn (*this, &Base<dim,number>::build_rhs_contribution_1)
		       (state_discretization, linearization_point,
			getter_factory, output_vector,
			thread_ranges[thread].first,
			thread_ranges[thread].second,
			mutex);
	  threads.join_all ();
	}



	template <int dim, typename number>
	void
	Base<dim,number>::
	build_matrix_contribution (const StateDiscretization        &state_discretization,
				   const BlockVector<double>        &linearization_point,
				   const MeasurementGetter::Factories::Base<dim> &getter_factory,
				   BlockSparseMatrix<number>        &global_matrix) const
	{
					   
	  const unsigned int n_threads = multithread_info.n_default_threads;
	  std::vector<double> misfit_part (n_threads);

					   
					   
	  std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	    = Threads::split_interval (0, state_discretization.triangulations
				       ->global.n_active_cells(),
				       n_threads);
    
	  Threads::ThreadGroup<> threads;
	  Threads::ThreadMutex   mutex;
	  for (unsigned int thread=0; thread<n_threads; ++thread)
	    threads += Threads::spawn (*this, &Base<dim,number>::build_matrix_contribution_1)
		       (state_discretization, linearization_point,
			getter_factory, global_matrix,
			thread_ranges[thread].first,
			thread_ranges[thread].second,
			mutex);
	  threads.join_all ();
	}



	template <int dim, typename number>
	void
	Base<dim,number>::
	m_prime (const StateDiscretization    &state_discretization,
                 const DoFHandler<dim>        &extended_dof_handler,
		 const Vector<double>         &present_iterate,
		 const Vector<double>         &weights,
		 const MeasurementGetter::Factories::Base<dim> &getter_factory,
		 Vector<float>                &output_vector) const
	{
					   
	  const unsigned int n_threads = multithread_info.n_default_threads;
	  std::vector<double> misfit_part (n_threads);

					   
					   
	  std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	    = Threads::split_interval (0, extended_dof_handler.get_tria().n_active_cells(),
				       n_threads);
    
	  Threads::ThreadGroup<> threads;
	  for (unsigned int thread=0; thread<n_threads; ++thread)
	    threads += Threads::spawn (*this, &Base<dim,number>::m_prime_1)
		       (state_discretization, extended_dof_handler,
                        present_iterate,
			weights, getter_factory,
			output_vector,
			thread_ranges[thread].first,
			thread_ranges[thread].second);
	  threads.join_all ();
	}



	template <int dim, typename number>
	void
	Base<dim,number>::
        initialize_gauss_newton_step (const StateDiscretization        &,
                                      const BlockVector<double>        &,
                                      const MeasurementGetter::Factories::Base<dim> &)
        {}
    
    
	

/* -------------------- Base -------------- */  

	BoundaryMeasurementBase::
	BoundaryMeasurementBase (const std::set<unsigned char> &boundary_indicators)
			:
			boundary_indicators (boundary_indicators)
	{}



	BoundaryMeasurementBase::
	BoundaryMeasurementBase (const unsigned char boundary_indicator)
			:
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
			boundary_indicators (&boundary_indicator,
                                             &boundary_indicator+1)
	{}
        

/* -------------------- Measurements::L2_norm -------------- */  

	template <int dim, typename number>
	L2_norm<dim,number>::L2_norm (const libparest::Slave::Stationary::ProblemDescription &problem_description)
			:
			Base<dim,number> (problem_description)
	{}    

	

	template <int dim, typename number>
	void
	L2_norm<dim,number>::
	compute_data_misfit_1 (const StateDiscretization        &state_discretization,
			       const BlockVector<double>        &present_iterate,
			       const MeasurementGetter::Factories::Base<dim> &getter_factory,
			       const unsigned int                begin,
			       const unsigned int                end,
			       double                           &data_misfit) const
	{
	  QTrapez<1> q_trapez;
	  QIterated<dim> quadrature (q_trapez, 4);
	  const unsigned int n_q_points = quadrature.n_quadrature_points;
      
	  std::auto_ptr<MeasurementGetter::CellGetter::Base<dim> >
	    measurement_getter (getter_factory.create (quadrature,
                                                       MeasurementGetter::MeasurementType::values));
      
	  const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
    
	  FEValues<dim>  fe_values (fe_global, quadrature,
				    UpdateFlags(update_values |
						update_JxW_values));
    
	  std::vector<Vector<double> > iterate_values (n_q_points,
						       Vector<double>(this->problem_description->n_variables));
	  std::vector<Vector<double> > measurements (n_q_points,
						     Vector<double>(this->problem_description->n_primal_variables));
    
	  typename DoFHandler<dim>::active_cell_iterator
	    cell = state_discretization.dof_handlers->global.begin_active(),
	    endc = state_discretization.dof_handlers->global.begin_active();
	  std::advance (cell, static_cast<signed int>(begin));
	  std::advance (endc, static_cast<signed int>(end));  

	  for (; cell!=endc; ++cell)
	    {
	      fe_values.reinit (cell);

					       
					       
	      fe_values.get_function_values (present_iterate, iterate_values);

					       
					       
	      measurement_getter->get_values (cell, measurements);
      
	      for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
		for (unsigned int component=0;
		     component<this->problem_description->n_variables;
		     ++component)
		  if (this->problem_description->is_primal_variable (component))
		    {
						       
		      const double u_minus_z
			= (iterate_values[q_point](component) -
			   measurements[q_point](component));
		  
		      data_misfit += 0.5 * u_minus_z * u_minus_z *
				     fe_values.JxW(q_point);
		    }
	    }
	}



	template <int dim, typename number>
	void
	L2_norm<dim,number>::
	build_rhs_contribution_1 (const StateDiscretization        &state_discretization,
				  const BlockVector<double>        &linearization_point,
				  const MeasurementGetter::Factories::Base<dim> &getter_factory,
				  BlockVector<double>              &output_vector,
				  const unsigned int                begin,
				  const unsigned int                end,
				  Threads::ThreadMutex             &mutex) const
	{
	  const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
	  const unsigned int dofs_per_cell    = fe_global.dofs_per_cell,
			     n_q_points       = state_discretization.finite_elements
						->quadrature.n_quadrature_points;
  
	  std::auto_ptr<MeasurementGetter::CellGetter::Base<dim> >
	    measurement_getter (getter_factory.create (state_discretization.finite_elements->quadrature,
						       MeasurementGetter::MeasurementType::values));
      
	  FEValues<dim>  fe_values (fe_global, state_discretization.finite_elements->quadrature,
				    UpdateFlags(update_values     |
						update_JxW_values));

					   
					   
	  std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
  
					   
					   
					   
					   
	  std::vector<Vector<double> > linearization_point_values (n_q_points,
								   Vector<double>(this->problem_description->n_variables));
	  std::vector<Vector<double> > measurements (n_q_points,
						     Vector<double>(this->problem_description->n_primal_variables));

  
					   
	  Vector<double> cell_vector (dofs_per_cell);

	  typename DoFHandler<dim>::active_cell_iterator
	    cell = state_discretization.dof_handlers->global.begin_active(),
	    endc = state_discretization.dof_handlers->global.begin_active();
	  std::advance (cell, static_cast<signed int>(begin));
	  std::advance (endc, static_cast<signed int>(end));  

	  for (; cell!=endc; ++cell)
	    {
	      fe_values.reinit (cell);
	      cell_vector = 0;
	      cell->get_dof_indices (dof_indices_on_cell);

					       
					       
	      fe_values.get_function_values (linearization_point,
					     linearization_point_values);

	      measurement_getter->get_values (cell, measurements);      

	      for (unsigned int q_point=0; q_point<fe_values.n_quadrature_points; ++q_point)
		for (unsigned int i=0; i<dofs_per_cell; ++i)
		  {
		    const unsigned int
		      component = fe_global.system_to_component_index(i).first;
		
						     
						     
		    if (this->problem_description->is_primal_variable(component))
		      {
							 
			const double u_minus_z
			  = (linearization_point_values[q_point](component)
			     - measurements[q_point](component));
		    
			cell_vector(i) -= (u_minus_z *
					   fe_values.shape_value(i,q_point) *
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
	L2_norm<dim,number>::
	build_matrix_contribution_1 (const StateDiscretization        &state_discretization,
				     const BlockVector<double>        &/*linearization_point*/,
				     const MeasurementGetter::Factories::Base<dim> &/*getter_factory*/,
				     BlockSparseMatrix<number>        &global_matrix,
				     const unsigned int                begin,
				     const unsigned int                end,
				     Threads::ThreadMutex             &mutex) const
	{
	  const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
	  const unsigned int dofs_per_cell    = fe_global.dofs_per_cell;
  
	  FEValues<dim>  fe_values (fe_global, state_discretization.finite_elements->quadrature,
				    UpdateFlags(update_values   |
						update_JxW_values));

					   
					   
	  std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
  
					   
	  FullMatrix<double> cell_matrix (dofs_per_cell, dofs_per_cell);

	  typename DoFHandler<dim>::active_cell_iterator
	    cell = state_discretization.dof_handlers->global.begin_active(),
	    endc = state_discretization.dof_handlers->global.begin_active();
	  std::advance (cell, static_cast<signed int>(begin));
	  std::advance (endc, static_cast<signed int>(end));  

	  for (; cell!=endc; ++cell)
	    {
	      fe_values.reinit (cell);
	      cell_matrix = 0;
	      cell->get_dof_indices (dof_indices_on_cell);

					       
					       
	      for (unsigned int q_point=0; q_point<fe_values.n_quadrature_points; ++q_point)
		for (unsigned int i=0; i<dofs_per_cell; ++i)
		  for (unsigned int j=0; j<dofs_per_cell; ++j)
		    {
		      const unsigned int
			component_i = fe_global.system_to_component_index(i).first,
			component_j = fe_global.system_to_component_index(j).first;
		  
						       
						       
						       
						       
						       
						       
		      if (this->problem_description->is_primal_variable(component_i) &&
			  this->problem_description->is_primal_variable(component_j) &&
			  (component_i == component_j))
			cell_matrix (i,j) += (fe_values.shape_value(i, q_point) *
					      fe_values.shape_value(j, q_point) *
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
	L2_norm<dim,number>::
	m_prime_1 (const StateDiscretization    &/*state_discretization*/,
                   const DoFHandler<dim>        &extended_dof_handler,
		   const Vector<double>         &present_iterate,
		   const Vector<double>         &weights,
		   const MeasurementGetter::Factories::Base<dim> &getter_factory,
		   Vector<float>                &output_vector,
		   const unsigned int            begin,
		   const unsigned int            end) const
	{
	  QGauss2<1> q_base;
	  QIterated<dim> quadrature (q_base, 4);
    
	  const FiniteElement<dim> &fe_global = extended_dof_handler.get_fe();
	  const unsigned int n_q_points       = quadrature.n_quadrature_points;
  
	  std::auto_ptr<MeasurementGetter::CellGetter::Base<dim> >
	    measurement_getter (getter_factory.create (quadrature,
                                                       MeasurementGetter::MeasurementType::values));
      
	  FEValues<dim>  fe_values (fe_global, quadrature,
				    UpdateFlags(update_values     |
						update_JxW_values));

					   
					   
					   
					   
	  std::vector<Vector<double> > present_iterate_values (n_q_points,
							       Vector<double>(this->problem_description->n_variables));
	  std::vector<Vector<double> > weights_values (n_q_points,
						       Vector<double>(this->problem_description->n_variables));
	  std::vector<Vector<double> > measurements (n_q_points,
						     Vector<double>(this->problem_description->n_primal_variables));

  
	  typename DoFHandler<dim>::active_cell_iterator
	    cell = extended_dof_handler.begin_active(),
	    endc = extended_dof_handler.begin_active();
	  std::advance (cell, static_cast<signed int>(begin));
	  std::advance (endc, static_cast<signed int>(end));  

	  for (unsigned int cell_index=begin; cell!=endc; ++cell, ++cell_index)
	    {
	      fe_values.reinit (cell);
					       
					       
					       
	      fe_values.get_function_values (present_iterate,
					     present_iterate_values);
	      fe_values.get_function_values (weights,
					     weights_values);

	      measurement_getter->get_values (cell, measurements);
      
	      double sum = 0;
	      for (unsigned int component=0;
		   component<this->problem_description->n_variables; ++component)
		if (this->problem_description->is_primal_variable(component))
		  for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
		    sum += (present_iterate_values[q_point](component) -
			    measurements[q_point](component))
			   *
			   weights_values[q_point](component)
			   *
			   fe_values.JxW(q_point);

	      output_vector(cell_index) += sum;
	    }
	}



  


/* -------------------- Measurements::H1_seminorm -------------- */  
  
	template <int dim, typename number>
	H1_seminorm<dim,number>::H1_seminorm (const libparest::Slave::Stationary::ProblemDescription &problem_description)
			:
			Base<dim,number> (problem_description)
	{}

    
    
	template <int dim, typename number>
	void
	H1_seminorm<dim,number>::
	compute_data_misfit_1 (const StateDiscretization        &state_discretization,
			       const BlockVector<double>        &present_iterate,
			       const MeasurementGetter::Factories::Base<dim> &getter_factory,
			       const unsigned int                begin,
			       const unsigned int                end,
			       double                           &data_misfit) const
	{
	  QTrapez<1> q_trapez;
	  QIterated<dim> quadrature (q_trapez, 4);
	  const unsigned int n_q_points = quadrature.n_quadrature_points;

	  std::auto_ptr<MeasurementGetter::CellGetter::Base<dim> >
	    measurement_getter (getter_factory.create (quadrature,
                                                       MeasurementGetter::MeasurementType::gradients));      

	  const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
    
	  FEValues<dim>  fe_values (fe_global, quadrature,
				    UpdateFlags(update_gradients |
						update_JxW_values));

	  std::vector<std::vector<Tensor<1,dim> > >
	    iterate_gradients (n_q_points, std::vector<Tensor<1,dim> >(this->problem_description->n_variables));
	  std::vector<std::vector<Tensor<1,dim> > >
	    measurement_gradients (n_q_points,
				   std::vector<Tensor<1,dim> >(this->problem_description->n_primal_variables));
    
    
	  typename DoFHandler<dim>::active_cell_iterator
	    cell = state_discretization.dof_handlers->global.begin_active(),
	    endc = state_discretization.dof_handlers->global.begin_active();
	  std::advance (cell, static_cast<signed int>(begin));
	  std::advance (endc, static_cast<signed int>(end));  

	  for (; cell!=endc; ++cell)
	    {
	      fe_values.reinit (cell);

					       
					       
	      fe_values.get_function_grads  (present_iterate, iterate_gradients);

	      measurement_getter->get_gradients (cell, measurement_gradients);	
      
	      for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
		for (unsigned int component=0;
		     component<this->problem_description->n_variables;
		     ++component)
		  if (this->problem_description->is_primal_variable (component))
		    {
						       
		      Assert (component<measurement_gradients[q_point].size(),
			      ExcInternalError());
		      const Tensor<1,dim> u_minus_z
			= (iterate_gradients[q_point][component] -
			   measurement_gradients[q_point][component]);
		  
		      data_misfit += 0.5 * (u_minus_z * u_minus_z) *
				     fe_values.JxW(q_point);
		    }
	    }
	}




	template <int dim, typename number>
	void
	H1_seminorm<dim,number>::
	build_rhs_contribution_1 (const StateDiscretization        &state_discretization,
				  const BlockVector<double>        &linearization_point,
				  const MeasurementGetter::Factories::Base<dim> &getter_factory,
				  BlockVector<double>              &output_vector,
				  const unsigned int                begin,
				  const unsigned int                end,
				  Threads::ThreadMutex             &mutex) const
	{
	  const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
	  const unsigned int dofs_per_cell    = fe_global.dofs_per_cell,
			     n_q_points       = state_discretization.finite_elements
						->quadrature.n_quadrature_points;
  
	  std::auto_ptr<MeasurementGetter::CellGetter::Base<dim> >
	    measurement_getter (getter_factory.create (state_discretization.finite_elements->quadrature,
						       MeasurementGetter::MeasurementType::gradients));
      
	  FEValues<dim>  fe_values (fe_global, state_discretization.finite_elements->quadrature,
				    UpdateFlags(update_gradients  |
						update_JxW_values));
					   
					   
	  std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
  
					   
					   
					   
					   
	  std::vector<std::vector<Tensor<1,dim> > >
	    linearization_point_gradients (n_q_points,
					   std::vector<Tensor<1,dim> >(this->problem_description->n_variables));
	  std::vector<std::vector<Tensor<1,dim> > >
	    measurement_gradients (n_q_points,
				   std::vector<Tensor<1,dim> > (this->problem_description->n_primal_variables));
  
					   
	  Vector<double> cell_vector (dofs_per_cell);

	  typename DoFHandler<dim>::active_cell_iterator
	    cell = state_discretization.dof_handlers->global.begin_active(),
	    endc = state_discretization.dof_handlers->global.begin_active();
	  std::advance (cell, static_cast<signed int>(begin));
	  std::advance (endc, static_cast<signed int>(end));  

	  for (; cell!=endc; ++cell)
	    {
	      fe_values.reinit (cell);
	      cell_vector = 0;
	      cell->get_dof_indices (dof_indices_on_cell);

					       
					       
	      fe_values.get_function_grads  (linearization_point,
					     linearization_point_gradients);

	      measurement_getter->get_gradients (cell, measurement_gradients);      

	      for (unsigned int q_point=0; q_point<fe_values.n_quadrature_points; ++q_point)
		for (unsigned int i=0; i<dofs_per_cell; ++i)
		  {
		    const unsigned int
		      component = fe_global.system_to_component_index(i).first;
		
						     
						     
		    if (this->problem_description->is_primal_variable(component))
		      {
							 
			Assert (component<measurement_gradients.size(),
				ExcInternalError());
			Assert (component<linearization_point_gradients.size(),
				ExcInternalError());
		    
			const Tensor<1,dim> u_minus_z
			  = (linearization_point_gradients[q_point][component]
			     - measurement_gradients[q_point][component]);
		    
			cell_vector(i) -= (u_minus_z *
					   fe_values.shape_grad(i,q_point)) *
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
	H1_seminorm<dim,number>::
	build_matrix_contribution_1 (const StateDiscretization        &state_discretization,
				     const BlockVector<double>        &/*linearization_point*/,
				     const MeasurementGetter::Factories::Base<dim> &/*getter_factory*/,
				     BlockSparseMatrix<number>        &global_matrix,
				     const unsigned int                begin,
				     const unsigned int                end,
				     Threads::ThreadMutex             &mutex) const
	{
	  const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
	  const unsigned int dofs_per_cell    = fe_global.dofs_per_cell;
  
	  FEValues<dim>  fe_values (fe_global, state_discretization.finite_elements->quadrature,
				    UpdateFlags(update_gradients   |
						update_JxW_values));

					   
					   
	  std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
  
					   
	  FullMatrix<double> cell_matrix (dofs_per_cell, dofs_per_cell);

	  typename DoFHandler<dim>::active_cell_iterator
	    cell = state_discretization.dof_handlers->global.begin_active(),
	    endc = state_discretization.dof_handlers->global.begin_active();
	  std::advance (cell, static_cast<signed int>(begin));
	  std::advance (endc, static_cast<signed int>(end));  

	  for (; cell!=endc; ++cell)
	    {
	      fe_values.reinit (cell);
	      cell_matrix = 0;
	      cell->get_dof_indices (dof_indices_on_cell);

					       
					       
	      for (unsigned int q_point=0; q_point<fe_values.n_quadrature_points; ++q_point)
		for (unsigned int i=0; i<dofs_per_cell; ++i)
		  for (unsigned int j=0; j<dofs_per_cell; ++j)
		    {
		      const unsigned int
			component_i = fe_global.system_to_component_index(i).first,
			component_j = fe_global.system_to_component_index(j).first;

						       
						       
						       
						       
						       
						       
		      if (this->problem_description->is_primal_variable(component_i) &&
			  this->problem_description->is_primal_variable(component_j) &&
			  (component_i == component_j))
			cell_matrix (i,j) += (fe_values.shape_grad(i,q_point) *
					      fe_values.shape_grad(j,q_point) *
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
	H1_seminorm<dim,number>::
	m_prime_1 (const StateDiscretization    &/*state_discretization*/,
                   const DoFHandler<dim>        &extended_dof_handler,
		   const Vector<double>         &present_iterate,
		   const Vector<double>         &weights,
		   const MeasurementGetter::Factories::Base<dim> &getter_factory,
		   Vector<float>                &output_vector,
		   const unsigned int            begin,
		   const unsigned int            end) const
	{
	  QGauss2<1> q_base;
	  QIterated<dim> quadrature (q_base, 4);
    
	  const FiniteElement<dim> &fe_global = extended_dof_handler.get_fe();
	  const unsigned int n_q_points       = quadrature.n_quadrature_points;
  
	  std::auto_ptr<MeasurementGetter::CellGetter::Base<dim> >
	    measurement_getter (getter_factory.create (quadrature,
                                                       MeasurementGetter::MeasurementType::gradients));
      
	  FEValues<dim>  fe_values (fe_global, quadrature,
				    UpdateFlags(update_gradients  |
						update_JxW_values));
  
					   
					   
					   
					   
	  std::vector<std::vector<Tensor<1,dim> > >
	    present_iterate_values (n_q_points,
				    std::vector<Tensor<1,dim> >(this->problem_description->n_variables));
	  std::vector<std::vector<Tensor<1,dim> > >
	    weights_values (n_q_points,
			    std::vector<Tensor<1,dim> >(this->problem_description->n_variables));
	  std::vector<std::vector<Tensor<1,dim> > >
	    measurements (n_q_points,
			  std::vector<Tensor<1,dim> >(this->problem_description->n_primal_variables));
  
	  typename DoFHandler<dim>::active_cell_iterator
	    cell = extended_dof_handler.begin_active(),
	    endc = extended_dof_handler.begin_active();
	  std::advance (cell, static_cast<signed int>(begin));
	  std::advance (endc, static_cast<signed int>(end));  

	  for (unsigned int cell_index=begin; cell!=endc; ++cell, ++cell_index)
	    {
	      fe_values.reinit (cell);
					       
					       
					       
	      fe_values.get_function_grads (present_iterate,
					    present_iterate_values);
	      fe_values.get_function_grads (weights,
					    weights_values);

	      measurement_getter->get_gradients (cell, measurements);
      
	      double sum = 0;
	      for (unsigned int component=0;
		   component<this->problem_description->n_variables; ++component)
		if (this->problem_description->is_primal_variable(component))
		  for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
		    sum += (present_iterate_values[q_point][component] -
			    measurements[q_point][component])
			   *
			   weights_values[q_point][component]
			   *
			   fe_values.JxW(q_point);

	      output_vector(cell_index) += sum;
	    }
	}

  
/* -------------------- Measurements::L2_4_stripes -------------- */  
  
	template <int dim, typename number>
	L2_4_stripes<dim,number>::L2_4_stripes (const libparest::Slave::Stationary::ProblemDescription &problem_description)
			:
			Base<dim,number> (problem_description)
	{}

    
    
	template <int dim, typename number>
	void
	L2_4_stripes<dim,number>::
	compute_data_misfit_1 (const StateDiscretization        &state_discretization,
			       const BlockVector<double>        &present_iterate,
			       const MeasurementGetter::Factories::Base<dim> &getter_factory,
			       const unsigned int                begin,
			       const unsigned int                end,
			       double                           &data_misfit) const
	{
	  QTrapez<1> q_trapez;
	  QIterated<dim> quadrature (q_trapez, 4);
	  const unsigned int n_q_points = quadrature.n_quadrature_points;

	  std::auto_ptr<MeasurementGetter::CellGetter::Base<dim> >
	    measurement_getter (getter_factory.create (quadrature,
                                                       MeasurementGetter::MeasurementType::values));      

	  const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
    
	  FEValues<dim>  fe_values (fe_global, quadrature,
				    UpdateFlags(update_values |
						update_JxW_values |
						update_q_points));

	  std::vector<Vector<double> > iterate_values (n_q_points,
						       Vector<double>(this->problem_description->n_variables));
	  std::vector<Vector<double> > measurements (n_q_points,
						     Vector<double>(this->problem_description->n_primal_variables));

    
	  typename DoFHandler<dim>::active_cell_iterator
	    cell = state_discretization.dof_handlers->global.begin_active(),
	    endc = state_discretization.dof_handlers->global.begin_active();
	  std::advance (cell, static_cast<signed int>(begin));
	  std::advance (endc, static_cast<signed int>(end));  

	  for (; cell!=endc; ++cell)
	    {
	      fe_values.reinit (cell);

					       
					       
	      fe_values.get_function_values (present_iterate, iterate_values);

	      measurement_getter->get_values (cell, measurements);	
      
	      for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
		for (unsigned int component=0;
		     component<this->problem_description->n_variables;
		     ++component)
		  if (this->problem_description->is_primal_variable (component))
		    if (inside_subdomain(fe_values.quadrature_point(q_point)))
		      {
							 
			const double u_minus_z
			  = (iterate_values[q_point](component) -
			     measurements[q_point](component));
		    
			data_misfit += 0.5 * u_minus_z * u_minus_z *
				       fe_values.JxW(q_point);
		      }
	    }
	}




	template <int dim, typename number>
	void
	L2_4_stripes<dim,number>::
	build_rhs_contribution_1 (const StateDiscretization        &state_discretization,
				  const BlockVector<double>        &linearization_point,
				  const MeasurementGetter::Factories::Base<dim> &getter_factory,
				  BlockVector<double>              &output_vector,
				  const unsigned int                begin,
				  const unsigned int                end,
				  Threads::ThreadMutex             &mutex) const
	{
	  const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
	  const unsigned int dofs_per_cell    = fe_global.dofs_per_cell,
			     n_q_points       = state_discretization.finite_elements
						->quadrature.n_quadrature_points;
  
	  std::auto_ptr<MeasurementGetter::CellGetter::Base<dim> >
	    measurement_getter (getter_factory.create (state_discretization.finite_elements->quadrature,
						       MeasurementGetter::MeasurementType::values));
      
	  FEValues<dim>  fe_values (fe_global, state_discretization.finite_elements->quadrature,
				    UpdateFlags(update_values     |
						update_q_points   |
						update_JxW_values));
  
					   
					   
	  std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
  
					   
					   
					   
					   
	  std::vector<Vector<double> > linearization_point_values (n_q_points,
								   Vector<double>(this->problem_description->n_variables));
	  std::vector<Vector<double> > measurements (n_q_points,
						     Vector<double>(this->problem_description->n_primal_variables));

  
					   
	  Vector<double> cell_vector (dofs_per_cell);

	  typename DoFHandler<dim>::active_cell_iterator
	    cell = state_discretization.dof_handlers->global.begin_active(),
	    endc = state_discretization.dof_handlers->global.begin_active();
	  std::advance (cell, static_cast<signed int>(begin));
	  std::advance (endc, static_cast<signed int>(end));  

	  for (; cell!=endc; ++cell)
	    {
	      fe_values.reinit (cell);
	      cell_vector = 0;
	      cell->get_dof_indices (dof_indices_on_cell);

					       
					       
	      fe_values.get_function_values (linearization_point,
					     linearization_point_values);
	      measurement_getter->get_values (cell, measurements);      

	      for (unsigned int q_point=0; q_point<fe_values.n_quadrature_points; ++q_point)
		if (inside_subdomain (fe_values.quadrature_point(q_point)))
		  for (unsigned int i=0; i<dofs_per_cell; ++i)
		    {
		      const unsigned int
			component = fe_global.system_to_component_index(i).first;
						       
						       
		      if (this->problem_description->is_primal_variable(component))
			{
							   
			  const double u_minus_z
			    = (linearization_point_values[q_point](component)
			       - measurements[q_point](component));
		  
			  cell_vector(i) -= (u_minus_z *
					     fe_values.shape_value(i,q_point) *
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
	L2_4_stripes<dim,number>::
	build_matrix_contribution_1 (const StateDiscretization        &state_discretization,
				     const BlockVector<double>        &/*linearization_point*/,
				     const MeasurementGetter::Factories::Base<dim> &/*getter_factory*/,
				     BlockSparseMatrix<number>        &global_matrix,
				     const unsigned int                begin,
				     const unsigned int                end,
				     Threads::ThreadMutex             &mutex) const
	{
	  const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
	  const unsigned int dofs_per_cell    = fe_global.dofs_per_cell;
  
	  FEValues<dim>  fe_values (fe_global, state_discretization.finite_elements->quadrature,
				    UpdateFlags(update_values   |
						update_q_points |
						update_JxW_values));

					   
					   
	  std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
  
					   
	  FullMatrix<double> cell_matrix (dofs_per_cell, dofs_per_cell);

	  typename DoFHandler<dim>::active_cell_iterator
	    cell = state_discretization.dof_handlers->global.begin_active(),
	    endc = state_discretization.dof_handlers->global.begin_active();
	  std::advance (cell, static_cast<signed int>(begin));
	  std::advance (endc, static_cast<signed int>(end));  

	  for (; cell!=endc; ++cell)
	    {
	      fe_values.reinit (cell);
	      cell_matrix = 0;
	      cell->get_dof_indices (dof_indices_on_cell);

					       
					       
	      for (unsigned int q_point=0; q_point<fe_values.n_quadrature_points; ++q_point)
		if (inside_subdomain (fe_values.quadrature_point(q_point)))
		  for (unsigned int i=0; i<dofs_per_cell; ++i)
		    for (unsigned int j=0; j<dofs_per_cell; ++j)
		      {
			const unsigned int
			  component_i = fe_global.system_to_component_index(i).first,
			  component_j = fe_global.system_to_component_index(j).first;

							 
							 
							 
							 
							 
							 
			if (this->problem_description->is_primal_variable(component_i) &&
			    this->problem_description->is_primal_variable(component_j) &&
			    (component_i == component_j))
			  cell_matrix (i,j) += (fe_values.shape_value(i, q_point) *
						fe_values.shape_value(j, q_point) *
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
	L2_4_stripes<dim,number>::
	m_prime_1 (const StateDiscretization    &/*state_discretization*/,
                   const DoFHandler<dim>        &extended_dof_handler,
		   const Vector<double>         &present_iterate,
		   const Vector<double>         &weights,
		   const MeasurementGetter::Factories::Base<dim> &getter_factory,
		   Vector<float>                &output_vector,
		   const unsigned int            begin,
		   const unsigned int            end) const
	{
	  QGauss2<1> q_base;
	  QIterated<dim> quadrature (q_base, 4);
    
	  const FiniteElement<dim> &fe_global = extended_dof_handler.get_fe();
	  const unsigned int n_q_points       = quadrature.n_quadrature_points;
  
	  std::auto_ptr<MeasurementGetter::CellGetter::Base<dim> >
	    measurement_getter (getter_factory.create (quadrature,
                                                       MeasurementGetter::MeasurementType::values));
      
	  FEValues<dim>  fe_values (fe_global, quadrature,
				    UpdateFlags(update_values     |
						update_q_points   |
						update_JxW_values));
  
					   
					   
					   
					   
	  std::vector<Vector<double> > present_iterate_values (n_q_points,
							       Vector<double>(this->problem_description->n_variables));
	  std::vector<Vector<double> > weights_values (n_q_points,
						       Vector<double>(this->problem_description->n_variables));
	  std::vector<Vector<double> > measurements (n_q_points,
						     Vector<double>(this->problem_description->n_primal_variables));
  
	  typename DoFHandler<dim>::active_cell_iterator
	    cell = extended_dof_handler.begin_active(),
	    endc = extended_dof_handler.begin_active();
	  std::advance (cell, static_cast<signed int>(begin));
	  std::advance (endc, static_cast<signed int>(end));  

	  for (unsigned int cell_index=begin; cell!=endc; ++cell, ++cell_index)
	    {
	      fe_values.reinit (cell);
					       
					       
					       
	      fe_values.get_function_values (present_iterate,
					     present_iterate_values);
	      fe_values.get_function_values (weights,
					     weights_values);

	      measurement_getter->get_values (cell, measurements);
      
	      double sum = 0;
	      for (unsigned int component=0;
		   component<this->problem_description->n_variables; ++component)
		if (this->problem_description->is_primal_variable(component))
		  for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
		    if (inside_subdomain(fe_values.quadrature_point(q_point)))
		      sum += (present_iterate_values[q_point](component) -
			      measurements[q_point](component))
			     *
			     weights_values[q_point](component)
			     *
			     fe_values.JxW(q_point);

	      output_vector(cell_index) += sum;
	    }
	}
  

  
	template <int dim, typename number>
	inline
	bool
	L2_4_stripes<dim,number>::inside_subdomain (const Point<dim> &p)
	{
	  const double x = p(0);
	  return (((-0.7<=x) && (x<=-0.6)) ||
		  ((-0.3<=x) && (x<=-0.2)) ||
		  ((+0.2<=x) && (x<=+0.3)) ||
		  ((+0.6<=x) && (x<=+0.7)));
	}



/* -------------------- Measurements::Neumann_boundary -------------- */  
  
  
	template <int dim, typename number>
	Neumann_boundary<dim,number>::
	Neumann_boundary (const libparest::Slave::Stationary::ProblemDescription &problem_description,
			  const unsigned char      boundary_indicator,
			  const std::vector<bool> &component_mask)
			:
			Base<dim,number> (problem_description),
                        BoundaryMeasurementBase (boundary_indicator),
			component_mask (component_mask.size() == 0 ?
					std::vector<bool> (problem_description.n_primal_variables,
							   true) :
					component_mask)
	{
	  Assert (this->component_mask.size() == problem_description.n_primal_variables,
		  ExcInternalError());
	  Assert (std::count (this->component_mask.begin(),
			      this->component_mask.end(),
			      true) != 0,
		  ExcInternalError());
	}



	template <int dim, typename number>
	Neumann_boundary<dim,number>::
	Neumann_boundary (const libparest::Slave::Stationary::ProblemDescription &problem_description,
			  const std::set<unsigned char> &boundary_indicators,
			  const std::vector<bool> &component_mask)
			:
			Base<dim,number> (problem_description),
                        BoundaryMeasurementBase (boundary_indicators),
			component_mask (component_mask.size() == 0 ?
					std::vector<bool> (problem_description.n_primal_variables,
							   true) :
					component_mask)
	{
	  Assert (this->component_mask.size() == problem_description.n_primal_variables,
		  ExcInternalError());
	  Assert (std::count (this->component_mask.begin(),
			      this->component_mask.end(),
			      true) != 0,
		  ExcInternalError());
	}
        
    
    
#if deal_II_dimension == 1

	template <>
	void
	Neumann_boundary<1,double>::
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
	Neumann_boundary<1,float>::
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
	Neumann_boundary<dim,number>::
	compute_data_misfit_1 (const StateDiscretization        &state_discretization,
			       const BlockVector<double>        &present_iterate,
			       const MeasurementGetter::Factories::Base<dim> &getter_factory,
			       const unsigned int                begin,
			       const unsigned int                end,
			       double                           &data_misfit) const
	{
	  QTrapez<1> q_trapez;
	  QIterated<dim-1> quadrature (q_trapez, 4);
	  const unsigned int n_q_points = quadrature.n_quadrature_points;

	  std::auto_ptr<MeasurementGetter::FaceGetter::Base<dim> >
	    measurement_getter (getter_factory.create (quadrature,
                                                       MeasurementGetter::MeasurementType::gradients));      

	  const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
    
	  FEFaceValues<dim>  fe_values (fe_global, quadrature,
					UpdateFlags(update_gradients      |
						    update_normal_vectors |
						    update_JxW_values));
    
	  std::vector<std::vector<Tensor<1,dim> > >
	    iterate_gradients (n_q_points, std::vector<Tensor<1,dim> >(this->problem_description->n_variables));
	  std::vector<std::vector<Tensor<1,dim> > >
	    measurement_gradients (n_q_points,
				   std::vector<Tensor<1,dim> >(this->problem_description->n_primal_variables));
    
    
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

						   
						   
		  fe_values.get_function_grads  (present_iterate, iterate_gradients);
	    
		  measurement_getter->get_gradients (cell, face_no, measurement_gradients);
      
		  for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
		    for (unsigned int component=0;
			 component<this->problem_description->n_variables;
			 ++component)
		      if (this->problem_description->is_primal_variable (component)
			  &&
			  (component_mask[component] == true))
			{
							   
			  Assert (component<measurement_gradients[q_point].size(),
				  ExcInternalError());
			  const double u_minus_z
			    = ((iterate_gradients[q_point][component] -
				measurement_gradients[q_point][component]) *
			       fe_values.normal_vector(q_point));
		      
			  data_misfit += 0.5 * u_minus_z * u_minus_z *
					 fe_values.JxW(q_point);
			}
		}
	}




#if deal_II_dimension == 1

	template <>
	void
	Neumann_boundary<1,double>::
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
	Neumann_boundary<1,float>::
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
        
#endif

    
	template <int dim, typename number>
	void
	Neumann_boundary<dim,number>::
	build_rhs_contribution_1 (const StateDiscretization        &state_discretization,
				  const BlockVector<double>        &linearization_point,
				  const MeasurementGetter::Factories::Base<dim> &getter_factory,
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
						       MeasurementGetter::MeasurementType::gradients));
      
	  FEFaceValues<dim>  fe_values (fe_global,
					state_discretization.finite_elements->face_quadrature,
					UpdateFlags(update_gradients      |
						    update_normal_vectors |
						    update_JxW_values));
  
					   
					   
	  std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
  
					   
					   
					   
					   
	  std::vector<std::vector<Tensor<1,dim> > >
	    linearization_point_gradients (n_q_points,
					   std::vector<Tensor<1,dim> >(this->problem_description->n_variables));
	  std::vector<std::vector<Tensor<1,dim> > >
	    measurement_gradients (n_q_points,
				   std::vector<Tensor<1,dim> > (this->problem_description->n_primal_variables));
  
					   
	  Vector<double> cell_vector (dofs_per_cell);

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

						   
						   
		  fe_values.get_function_grads  (linearization_point,
						 linearization_point_gradients);

		  measurement_getter->get_gradients (cell, face_no, measurement_gradients);
      
		  for (unsigned int q_point=0;
                       q_point<fe_values.n_quadrature_points;
                       ++q_point)
		    for (unsigned int i=0; i<dofs_per_cell; ++i)
		      {
			const unsigned int
			  component = fe_global.system_to_component_index(i).first;

							 
							 
			if (this->problem_description->is_primal_variable(component)
			    &&
			    (component_mask[component] == true))
			  {
							     
			    Assert (component<measurement_gradients[q_point].size(),
				    ExcInternalError());
			    Assert (component<linearization_point_gradients[q_point].size(),
				    ExcInternalError());

			    const double u_minus_z
			      = ((linearization_point_gradients[q_point][component]
				  - measurement_gradients[q_point][component]) *
				 fe_values.normal_vector(q_point));
			
			    cell_vector(i) -= (u_minus_z *
					       (fe_values.shape_grad(i,q_point) *
						fe_values.normal_vector(q_point))) *
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
	

#if deal_II_dimension == 1

	template <>
	void
	Neumann_boundary<1,double>::
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
	Neumann_boundary<1,float>::
	build_matrix_contribution_1 (const StateDiscretization        &,
				     const BlockVector<double>        &,
				     const MeasurementGetter::Factories::Base<1> &,
				     BlockSparseMatrix<float>        &,
				     const unsigned int                ,
				     const unsigned int                ,
				     Threads::ThreadMutex             &) const
	{
	  Assert (false, ExcNotImplemented());
	}
        
#endif


	template <int dim, typename number>
	void
	Neumann_boundary<dim,number>::
	build_matrix_contribution_1 (const StateDiscretization        &state_discretization,
				     const BlockVector<double>        &/*linearization_point*/,
				     const MeasurementGetter::Factories::Base<dim> &/*getter_factory*/,
				     BlockSparseMatrix<number>        &global_matrix,
				     const unsigned int                begin,
				     const unsigned int                end,
				     Threads::ThreadMutex             &mutex) const
	{
	  const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
	  const unsigned int dofs_per_cell    = fe_global.dofs_per_cell;
  
	  FEFaceValues<dim>  fe_values (fe_global, state_discretization.finite_elements->face_quadrature,
					UpdateFlags(update_gradients      |
						    update_normal_vectors |
						    update_JxW_values));

					   
					   
	  std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
  
					   
	  FullMatrix<double> cell_matrix (dofs_per_cell, dofs_per_cell);

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
		      
							   
							   
							   
							   
							   
							   
			  if ((component_i == component_j) &&
			      this->problem_description->is_primal_variable(component_i) &&
			      this->problem_description->is_primal_variable(component_j) &&
			      (component_mask[component_i] == true))
			    cell_matrix (i,j) += ((fe_values.shape_grad(i,q_point) *
						   fe_values.normal_vector(q_point)) *
						  (fe_values.shape_grad(j,q_point) *
						   fe_values.normal_vector(q_point)) *
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
  


#if deal_II_dimension == 1
        
	template <>
	void
	Neumann_boundary<1,double>::
	m_prime_1 (const StateDiscretization      &,
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
	Neumann_boundary<1,float>::
	m_prime_1 (const StateDiscretization      &,
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
        
#endif
    
	template <int dim, typename number>
	void
	Neumann_boundary<dim,number>::
	m_prime_1 (const StateDiscretization    &/*state_discretization*/,
                   const DoFHandler<dim>        &extended_dof_handler,
		   const Vector<double>         &present_iterate,
		   const Vector<double>         &weights,
		   const MeasurementGetter::Factories::Base<dim> &getter_factory,
		   Vector<float>                &output_vector,
		   const unsigned int            begin,
		   const unsigned int            end) const
	{
	  QGauss2<1> q_base;
	  QIterated<dim-1> quadrature (q_base, 4);
    
	  std::auto_ptr<MeasurementGetter::FaceGetter::Base<dim> >
	    measurement_getter (getter_factory.create (quadrature,
                                                       MeasurementGetter::MeasurementType::gradients));
      
	  const FiniteElement<dim> &fe_global = extended_dof_handler.get_fe();
	  const unsigned int n_q_points       = quadrature.n_quadrature_points;
  
	  FEFaceValues<dim>  fe_values (fe_global, quadrature,
					UpdateFlags(update_gradients      |
						    update_normal_vectors |
						    update_JxW_values));

					   
					   
					   
					   
	  std::vector<std::vector<Tensor<1,dim> > >
	    present_iterate_values (n_q_points,
				    std::vector<Tensor<1,dim> >(this->problem_description->n_variables));
	  std::vector<std::vector<Tensor<1,dim> > >
	    weights_values (n_q_points,
			    std::vector<Tensor<1,dim> >(this->problem_description->n_variables));
	  std::vector<std::vector<Tensor<1,dim> > >
	    measurements (n_q_points,
			  std::vector<Tensor<1,dim> >(this->problem_description->n_primal_variables));
  
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
						   
						   
						   
		  fe_values.get_function_grads (present_iterate,
						present_iterate_values);
		  fe_values.get_function_grads (weights,
						weights_values);

		  measurement_getter->get_gradients (cell, face_no, measurements);
      
		  double sum = 0;

		  for (unsigned int component=0;
		       component<this->problem_description->n_variables; ++component)
		    if (this->problem_description->is_primal_variable(component) &&
			(component_mask[component] == true))
		      for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
			sum += ((present_iterate_values[q_point][component] -
				 measurements[q_point][component])
				*
				fe_values.normal_vector(q_point))
			       *
			       (weights_values[q_point][component]
				*
				fe_values.normal_vector(q_point))
			       *
			       fe_values.JxW(q_point);

		  output_vector(cell_index) += sum;
		}
	}

  


/* -------------------- Measurements::Dirichlet_boundary -------------- */  
  
  
        template <int dim, typename number>
        Dirichlet_boundary<dim,number>::
        Dirichlet_boundary (const libparest::Slave::Stationary::ProblemDescription &problem_description,
                            const unsigned char      boundary_indicator,
                            const std::vector<bool> &component_mask)
                        :
                        Base<dim,number> (problem_description),
                        BoundaryMeasurementBase (boundary_indicator),
                        component_mask (component_mask.size() == 0 ?
                                        std::vector<bool> (problem_description.n_primal_variables,
                                                           true) :
                                        component_mask)
        {
          Assert (this->component_mask.size() == problem_description.n_primal_variables,
                  ExcInternalError());
          Assert (std::count (this->component_mask.begin(),
                              this->component_mask.end(),
                              true) != 0,
                  ExcInternalError());
        }



        template <int dim, typename number>
        Dirichlet_boundary<dim,number>::
        Dirichlet_boundary (const libparest::Slave::Stationary::ProblemDescription &problem_description,
                            const std::set<unsigned char> &boundary_indicators,
                            const std::vector<bool> &component_mask)
                        :
                        Base<dim,number> (problem_description),
                        BoundaryMeasurementBase (boundary_indicators),
                        component_mask (component_mask.size() == 0 ?
                                        std::vector<bool> (problem_description.n_primal_variables,
                                                           true) :
                                        component_mask)
        {
          Assert (this->component_mask.size() == problem_description.n_primal_variables,
                  ExcInternalError());
          Assert (std::count (this->component_mask.begin(),
                              this->component_mask.end(),
                              true) != 0,
                  ExcInternalError());
        }
        
    
    

#if deal_II_dimension == 1

        template <>
        void
        Dirichlet_boundary<1,double>::
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
        Dirichlet_boundary<1,float>::
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
        Dirichlet_boundary<dim,number>::
        compute_data_misfit_1 (const StateDiscretization        &state_discretization,
                               const BlockVector<double>        &present_iterate,
                               const MeasurementGetter::Factories::Base<dim> &getter_factory,
                               const unsigned int                begin,
                               const unsigned int                end,
                               double                           &data_misfit) const
        {
          QTrapez<1> q_trapez;
          QIterated<dim-1> quadrature (q_trapez, 4);
          const unsigned int n_q_points = quadrature.n_quadrature_points;

          std::auto_ptr<MeasurementGetter::FaceGetter::Base<dim> >
            measurement_getter (getter_factory.create (quadrature,
                                                       MeasurementGetter::MeasurementType::values));      

          const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
    
          FEFaceValues<dim>  fe_values (fe_global, quadrature,
                                        UpdateFlags(update_values      |
                                                    update_JxW_values));
    
          std::vector<Vector<double> >
            iterate_values (n_q_points,
                            Vector<double>(this->problem_description->n_variables));
          std::vector<Vector<double> >
            measurement_values (n_q_points,
                                Vector<double>(this->problem_description->n_primal_variables));
    
    
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
	    
                  measurement_getter->get_values (cell, face_no, measurement_values);
      
                  for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
                    for (unsigned int component=0;
                         component<this->problem_description->n_variables;
                         ++component)
                      if (this->problem_description->is_primal_variable (component)
                          &&
                          (component_mask[component] == true))
                        {
                                                           
                          Assert (component<measurement_values[q_point].size(),
                                  ExcInternalError());
                          const double u_minus_z
                            = (iterate_values[q_point](component) -
                               measurement_values[q_point](component));
		      
                          data_misfit += 0.5 * u_minus_z * u_minus_z *
                                         fe_values.JxW(q_point);
                        }
                }
        }




#if deal_II_dimension == 1

        template <>
        void
        Dirichlet_boundary<1,double>::
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
        Dirichlet_boundary<1,float>::
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
        
#endif

    
        template <int dim, typename number>
        void
        Dirichlet_boundary<dim,number>::
        build_rhs_contribution_1 (const StateDiscretization        &state_discretization,
                                  const BlockVector<double>        &linearization_point,
                                  const MeasurementGetter::Factories::Base<dim> &getter_factory,
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
                                                    update_JxW_values));
  
                                           
                                           
          std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
  
                                           
                                           
                                           
                                           
          std::vector<Vector<double> >
            linearization_point_values (n_q_points,
                                        Vector<double>(this->problem_description->n_variables));
          std::vector<Vector<double> >
            measurement_values (n_q_points,
                                Vector<double> (this->problem_description->n_primal_variables));
  
                                           
          Vector<double> cell_vector (dofs_per_cell);

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

                  measurement_getter->get_values (cell, face_no, measurement_values);
      
                  for (unsigned int q_point=0;
                       q_point<fe_values.n_quadrature_points;
                       ++q_point)
                    for (unsigned int i=0; i<dofs_per_cell; ++i)
                      {
                        const unsigned int
                          component = fe_global.system_to_component_index(i).first;

                                                         
                                                         
                        if (this->problem_description->is_primal_variable(component)
                            &&
                            (component_mask[component] == true))
                          {
                                                             
                            Assert (component<measurement_values[q_point].size(),
                                    ExcInternalError());
                            Assert (component<linearization_point_values[q_point].size(),
                                    ExcInternalError());

                            const double u_minus_z
                              = (linearization_point_values[q_point](component)
                                 - measurement_values[q_point](component));
			
                            cell_vector(i) -= (u_minus_z *
                                               fe_values.shape_value(i,q_point)) *
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
  


#if deal_II_dimension == 1

        template <>
        void
        Dirichlet_boundary<1,double>::
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
        Dirichlet_boundary<1,float>::
        build_matrix_contribution_1 (const StateDiscretization        &,
                                     const BlockVector<double>        &,
                                     const MeasurementGetter::Factories::Base<1> &,
                                     BlockSparseMatrix<float>        &,
                                     const unsigned int                ,
                                     const unsigned int                ,
                                     Threads::ThreadMutex             &) const
        {
          Assert (false, ExcNotImplemented());
        }
        
#endif


        template <int dim, typename number>
        void
        Dirichlet_boundary<dim,number>::
        build_matrix_contribution_1 (const StateDiscretization        &state_discretization,
                                     const BlockVector<double>        &/*linearization_point*/,
                                     const MeasurementGetter::Factories::Base<dim> &/*getter_factory*/,
                                     BlockSparseMatrix<number>        &global_matrix,
                                     const unsigned int                begin,
                                     const unsigned int                end,
                                     Threads::ThreadMutex             &mutex) const
        {
          const FiniteElement<dim> &fe_global = state_discretization.finite_elements->global;
          const unsigned int dofs_per_cell    = fe_global.dofs_per_cell;
  
          FEFaceValues<dim>  fe_values (fe_global, state_discretization.finite_elements->face_quadrature,
                                        UpdateFlags(update_values      |
                                                    update_JxW_values));

                                           
                                           
          std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
  
                                           
          FullMatrix<double> cell_matrix (dofs_per_cell, dofs_per_cell);

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
		      
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                          if ((component_i == component_j) &&
                              this->problem_description->is_primal_variable(component_i) &&
                              this->problem_description->is_primal_variable(component_j) &&
                              (component_mask[component_i] == true))
                            cell_matrix (i,j) += (fe_values.shape_value(i,q_point) *
                                                  fe_values.shape_value(j,q_point) *
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
  


#if deal_II_dimension == 1

        template <>
        void
        Dirichlet_boundary<1,double>::
        m_prime_1 (const StateDiscretization      &,
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
        Dirichlet_boundary<1,float>::
        m_prime_1 (const StateDiscretization      &,
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
        
#endif
    
        template <int dim, typename number>
        void
        Dirichlet_boundary<dim,number>::
        m_prime_1 (const StateDiscretization    &/*state_discretization*/,
                   const DoFHandler<dim>        &extended_dof_handler,
                   const Vector<double>         &present_iterate,
                   const Vector<double>         &weights,
                   const MeasurementGetter::Factories::Base<dim> &getter_factory,
                   Vector<float>                &output_vector,
                   const unsigned int            begin,
                   const unsigned int            end) const
        {
          QGauss2<1> q_base;
          QIterated<dim-1> quadrature (q_base, 4);
    
          std::auto_ptr<MeasurementGetter::FaceGetter::Base<dim> >
            measurement_getter (getter_factory.create (quadrature,
                                                       MeasurementGetter::MeasurementType::values));
      
          const FiniteElement<dim> &fe_global = extended_dof_handler.get_fe();
          const unsigned int n_q_points       = quadrature.n_quadrature_points;
  
          FEFaceValues<dim>  fe_values (fe_global, quadrature,
                                        UpdateFlags(update_values      |
                                                    update_JxW_values));

                                           
                                           
                                           
          std::vector<Vector<double> >
            present_iterate_values (n_q_points,
                                    Vector<double>(this->problem_description->n_variables));
          std::vector<Vector<double> >
            weights_values (n_q_points,
                            Vector<double>(this->problem_description->n_variables));
          std::vector<Vector<double> >
            measurements (n_q_points,
                          Vector<double>(this->problem_description->n_primal_variables));
  
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

                  measurement_getter->get_values (cell, face_no, measurements);
      
                  double sum = 0;

                  for (unsigned int component=0;
                       component<this->problem_description->n_variables; ++component)
                    if (this->problem_description->is_primal_variable(component) &&
                        (component_mask[component] == true))
                      for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
                        sum += (present_iterate_values[q_point](component) -
                                measurements[q_point](component))
                               *
                               weights_values[q_point](component)
                               *
                               fe_values.JxW(q_point);

                  output_vector(cell_index) += sum;
                }
        }

  

        template <int dim, typename number>
        WeightedDirichletBoundary<dim,number>::
        WeightedDirichletBoundary (const libparest::Slave::Stationary::ProblemDescription &problem_description,
                                   const Function<dim>           &weight_function,
                                   const std::set<unsigned char> &boundary_indicators,
                                   const std::vector<bool> &component_mask)
                        :
                        libparest::Slave::Stationary::Measurements::Base<dim,number> (problem_description),
                        libparest::Slave::Stationary::Measurements::BoundaryMeasurementBase (boundary_indicators),
                        weight_function (&weight_function),
                        component_mask (component_mask.size() == 0 ?
                                        std::vector<bool> (problem_description.n_primal_variables,
                                                           true) :
                                        component_mask)
        {
          Assert (this->component_mask.size() == problem_description.n_primal_variables,
                  ExcInternalError());
          Assert (std::count (this->component_mask.begin(),
                              this->component_mask.end(),
                              true) != 0,
                  ExcInternalError());
        }

    
    
        template <int dim, typename number>
        void
        WeightedDirichletBoundary<dim,number>::
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
                    for (unsigned int component=0;
                         component<this->problem_description->n_variables;
                         ++component)
                      if (this->problem_description->is_primal_variable (component)
                          &&
                          (component_mask[component] == true))
                        {
                                                           
                          Assert (component<measurement_values[q_point].size(),
                                  ExcInternalError());
                          const double u_minus_z
                            = (iterate_values[q_point](component) -
                               measurement_values[q_point](component));
		      
                          data_misfit += 0.5 * u_minus_z * u_minus_z *
                                         weight_values[q_point] *
                                         fe_values.JxW(q_point);
                        }
                }
        }



        template <int dim, typename number>
        void
        WeightedDirichletBoundary<dim,number>::
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
                    for (unsigned int i=0; i<dofs_per_cell; ++i)
                      {
                        const unsigned int
                          component = fe_global.system_to_component_index(i).first;

                                                         
                                                         
                        if (this->problem_description->is_primal_variable(component)
                            &&
                            (component_mask[component] == true))
                          {
                                                             
                            Assert (component<measurement_values[q_point].size(),
                                    ExcInternalError());
                            Assert (component<linearization_point_values[q_point].size(),
                                    ExcInternalError());

                            const double u_minus_z
                              = (linearization_point_values[q_point](component)
                                 - measurement_values[q_point](component));
			
                            cell_vector(i) -= (u_minus_z *
                                               fe_values.shape_value(i,q_point)) *
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
        WeightedDirichletBoundary<dim,number>::
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
		      
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                          if ((component_i == component_j) &&
                              this->problem_description->is_primal_variable(component_i) &&
                              this->problem_description->is_primal_variable(component_j) &&
                              (component_mask[component_i] == true))
                            cell_matrix (i,j) += (fe_values.shape_value(i,q_point) *
                                                  fe_values.shape_value(j,q_point) *
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
        WeightedDirichletBoundary<dim,number>::
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
            measurements (n_q_points,
                          Vector<double>(this->problem_description->n_primal_variables));
  
          std::vector<double> weight_values (n_q_points);
                                           
          Assert (false, ExcInternalError());
          
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

                  measurement_getter->get_values (cell, face_no, measurements);
      
                  double sum = 0;

                  for (unsigned int component=0;
                       component<this->problem_description->n_variables; ++component)
                    if (this->problem_description->is_primal_variable(component) &&
                        (component_mask[component] == true))
                      for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
                        sum += (present_iterate_values[q_point](component) -
                                measurements[q_point](component))
                               *
                               weights_values[q_point](component)
                               *
                               weight_values[q_point]
                               *
                               fe_values.JxW(q_point);

                  output_vector(cell_index) += sum;
                }
        }



#if deal_II_dimension == 1

        template <>
        void
        WeightedDirichletBoundary<1,double>::
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
        WeightedDirichletBoundary<1,float>::
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
        WeightedDirichletBoundary<1,double>::
        build_matrix_contribution_1 (const StateDiscretization        &,
                                     const BlockVector<double>        &,
                                     const MeasurementGetter::Factories::Base<1>   &,
                                     BlockSparseMatrix<double>        &,
                                     const unsigned int                ,
                                     const unsigned int                ,
                                     Threads::ThreadMutex             &) const
        {
          Assert (false, ExcNotImplemented());
        }



        template <>
        void
        WeightedDirichletBoundary<1,float>::
        build_matrix_contribution_1 (const StateDiscretization        &,
                                     const BlockVector<double>        &,
                                     const MeasurementGetter::Factories::Base<1>   &,
                                     BlockSparseMatrix<float>        &,
                                     const unsigned int                ,
                                     const unsigned int                ,
                                     Threads::ThreadMutex             &) const
        {
          Assert (false, ExcNotImplemented());
        }
    

    
        template <>
        void
        WeightedDirichletBoundary<1,double>::
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
        WeightedDirichletBoundary<1,float>::
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
        WeightedDirichletBoundary<1,double>::
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
        WeightedDirichletBoundary<1,float>::
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

      }





      namespace MeasurementGetter 
      {
	namespace CellGetter
	{
	  template class Base<deal_II_dimension>;
	  template class SyntheticData<deal_II_dimension>;
	  template class MeasurementFunction<deal_II_dimension>;
	  template class ZeroFunction<deal_II_dimension>;
	}
	namespace FaceGetter
	{
	  template class Base<deal_II_dimension>;
	  template class SyntheticData<deal_II_dimension>;
	  template class MeasurementFunction<deal_II_dimension>;
	  template class ZeroFunction<deal_II_dimension>;
	}
	namespace Factories
	{
	  template class Base<deal_II_dimension>;
	  template class SyntheticData<deal_II_dimension>;
	  template class MeasurementFunction<deal_II_dimension>;
	  template class ZeroFunction<deal_II_dimension>;
	}
      }
  
      namespace Measurements
      {
	template class Base<deal_II_dimension, double>;
        template class Base<deal_II_dimension, float>;
  
	template class L2_norm<deal_II_dimension, double>;
	template class H1_seminorm<deal_II_dimension, double>;
	template class L2_4_stripes<deal_II_dimension, double>;
	template class Neumann_boundary<deal_II_dimension, double>;
	template class Dirichlet_boundary<deal_II_dimension, double>;
	template class WeightedDirichletBoundary<deal_II_dimension, double>;

	template class L2_norm<deal_II_dimension, float>;
	template class H1_seminorm<deal_II_dimension, float>;
	template class L2_4_stripes<deal_II_dimension, float>;
	template class Neumann_boundary<deal_II_dimension, float>;
	template class Dirichlet_boundary<deal_II_dimension, float>;        
	template class WeightedDirichletBoundary<deal_II_dimension, float>;        
      }
  
    }
  }
}
