/* $Id: regularization.cc 3639 2008-07-10 18:43:30Z bangerth $ */






#include <libparest/parameter/field.h>
#include <libparest/parameter/regularization.h>
#include <libparest/utilities.h>

#include <base/thread_management.h>
#include <base/multithread_info.h>
#include <base/quadrature_lib.h>
#include <base/qprojector.h>
#include <base/parameter_handler.h>
#include <lac/compressed_set_sparsity_pattern.h>
#include <lac/sparse_matrix.h>
#include <grid/tria_iterator.h>
#include <grid/tria_iterator.h>
#include <grid/grid_refinement.h>
#include <grid/grid_tools.h>
#include <dofs/dof_accessor.h>
#include <dofs/dof_handler.h>
#include <dofs/dof_accessor.h>
#include <dofs/dof_handler.h>
#include <dofs/dof_constraints.h>
#include <dofs/dof_tools.h>
#include <fe/fe.h>
#include <fe/fe_values.h>

#include <cmath>
#include <numeric>
#include <algorithm>
#include <fstream>


namespace libparest
{
namespace Parameter
{
  namespace Field
  {
    namespace Regularization
    {
      
      std::string
      get_regularization_functional_names ()
      {
	return "L2 norm|H1 seminorm|BV seminorm";
      }
      
      
      
      RegularizationFunctional
      parse_regularization_functional_name (const std::string &name)
      {
	if (name == "L2 norm")
	  return L2_norm;
	else if (name == "H1 seminorm")
	  return H1_seminorm;
	else if (name == "BV seminorm")
	  return BV_seminorm;
	else
	  Assert (false, ExcInternalError());
	return static_cast<RegularizationFunctional>(-1);
      }



      template <int dim>
      Base<dim> *
      create_regularization_functional (const RegularizationFunctional name,
					const bool use_information_for_regularization)
      {
	switch (name)
	  {
	    case Regularization::L2_norm:
		  return new Regularization::L2<dim>(use_information_for_regularization);

	    case Regularization::H1_seminorm:
		  return new Regularization::H1<dim>(use_information_for_regularization);

	    case Regularization::BV_seminorm:


		  Assert (false, ExcNotImplemented());

	    default:
		  Assert (false, ExcNotImplemented());
		  return 0;
	  };
      }
      

/* ----------- Field::Regularization::Base ------ */


      template <int dim>
      Base<dim>::Base (const bool use_information_for_regularization)
		      :
		      use_information_for_regularization (use_information_for_regularization)
      {
	Assert (use_information_for_regularization == false,
		ExcNotImplemented());
      }



      template <int dim>
      Base<dim>::~Base ()
      {}
      
      
      
/* ----------- Field::Regularization::L2 ------ */


      template <int dim>
      L2<dim>::L2 (const bool use_information_for_regularization)
		      :
		      libparest::Parameter::Field::Regularization::Base<dim> (use_information_for_regularization)
      {}
      
		      
      
      template <int dim>
      void L2<dim>::build_R (const DoFHandlers<dim> &dof_handlers,
			     const Vector<double>   &linearization_point,
			     const double            beta,
			     const Vector<float>    &information_content,
			     SparseMatrix<double>   &R) const
      {
        if (beta == 0.)
          return;
        
					 
	const unsigned int n_threads = multithread_info.n_default_threads;
	Threads::ThreadMutex   mutex;
	Threads::ThreadGroup<> threads;

				     
				     
	std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	  = Threads::split_interval (0, dof_handlers.parameter.get_tria().n_active_cells(),
				     n_threads);


					 
	for (unsigned int thread=0; thread<n_threads; ++thread)
	  threads += Threads::spawn (*this, &L2<dim>::build_R_1)
                     (dof_handlers, linearization_point, beta,
		      information_content,
                      R, thread_ranges[thread], mutex);
	threads.join_all ();

					 
					 
					 
      }



      template <int dim>
      void L2<dim>::build_rhs (const DoFHandlers<dim> &dof_handlers,
			       const Vector<double>   &linearization_point,
			       const double            beta,
			       const Vector<float>    &information_content,
			       Vector<double>         &rhs) const
      {
        if (beta == 0.)
          return;
        
					 
	const unsigned int n_threads = multithread_info.n_default_threads;
	Threads::ThreadMutex   mutex;
	Threads::ThreadGroup<> threads;

				     
				     
	std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	  = Threads::split_interval (0, dof_handlers.parameter.get_tria().n_active_cells(),
				     n_threads);


					 
	for (unsigned int thread=0; thread<n_threads; ++thread)
	  threads += Threads::spawn (*this, &L2<dim>::build_rhs_1)
                     (dof_handlers, linearization_point, beta,
		      information_content,
                      rhs, thread_ranges[thread], mutex);
	threads.join_all ();

					 
					 
					 
      }



      template <int dim>
      double
      L2<dim>::model_misfit (const DoFHandlers<dim> &dof_handlers,
			     const Vector<double>   &present_iterate,
			     const double            beta,
			     const Vector<float>    &information_content) const
      {
        if (beta == 0.)
          return 0.;
        
					 
	const unsigned int n_threads = multithread_info.n_default_threads;
	std::vector<double> misfit_part (n_threads);

	Threads::ThreadGroup<> threads;

				   
				   
	std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	  = Threads::split_interval (0, dof_handlers.parameter.get_tria().n_active_cells(),
				     n_threads);


					 
	for (unsigned int thread=0; thread<n_threads; ++thread)
	  threads += Threads::spawn (*this, &L2<dim>::model_misfit_1)
                     (dof_handlers, present_iterate, beta,
		      information_content,
                      thread_ranges[thread], misfit_part[thread]);
	threads.join_all ();

	return std::accumulate (misfit_part.begin(), misfit_part.end(), 0.);
      }



      template <int dim>
      void
      L2<dim>::beta_r_prime (const DoFHandler<dim>        &dof_handler,
			     const unsigned int            component,
			     const Vector<double>         &present_iterate,
			     const Vector<double>         &weights,
			     const double                 &beta,
			     const Vector<float>    &information_content,
			     Vector<float>                &output_vector) const
      {
        if (beta == 0.)
          return;
        
					 
	const unsigned int n_threads = multithread_info.n_default_threads;
	std::vector<double> misfit_part (n_threads);

					 
					 
	std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	  = Threads::split_interval (0, dof_handler.get_tria().n_active_cells(),
				     n_threads);

	Threads::ThreadGroup<> threads;
	for (unsigned int thread=0; thread<n_threads; ++thread)
	  threads += Threads::spawn (*this, &L2<dim>::beta_r_prime_1)
                     (dof_handler, component, present_iterate,
                      weights, output_vector, beta,
		      information_content,
		      thread_ranges[thread]);
	threads.join_all ();
      }



      template <int dim>
      void
      L2<dim>::beta_r_prime_on_subcells (const DoFHandlers<dim> &dof_handlers,
					 const Vector<double>   &present_iterate,
					 const double           &beta,
					 const Vector<float>    &information_content,
					 Vector<double>         &output_vector) const
      {
        if (beta == 0.)
          return;
        
					 
	const unsigned int n_threads = multithread_info.n_default_threads;
	std::vector<double> misfit_part (n_threads);

					 
					 
	std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	  = Threads::split_interval (0, dof_handlers.parameter.get_tria().n_active_cells(),
				     n_threads);

	Threads::ThreadGroup<> threads;
	for (unsigned int thread=0; thread<n_threads; ++thread)
	  threads += Threads::spawn (*this, &L2<dim>::beta_r_prime_on_subcells_1)
                     (dof_handlers, present_iterate, beta,
		      information_content, output_vector,
                      thread_ranges[thread]);
	threads.join_all ();
      }



      template <int dim>
      void
      L2<dim>::make_sparsity_pattern (const DoFHandlers<dim> &dof_handlers,
				      SparsityPattern        &sparsity_pattern) const
      {
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
	const unsigned int n_components = dof_handlers.fe->fe.n_components();
	std::vector<std::vector<bool> > mask (n_components,
					      std::vector<bool>(n_components, false));
	for (unsigned int i=0; i<n_components; ++i)
	  mask[i][i] = true;

	if (dim <= 2)
	  {
	    sparsity_pattern.reinit (dof_handlers.parameter.n_dofs(),
				     dof_handlers.parameter.n_dofs(),
				     dof_handlers.parameter.max_couplings_between_dofs());

	    DoFTools::make_sparsity_pattern (dof_handlers.parameter, mask, sparsity_pattern);

	    dof_handlers.parameter_constraints.condense (sparsity_pattern);
	    sparsity_pattern.compress ();
	  }
	else
	  {
	    CompressedSetSparsityPattern csp (dof_handlers.parameter.n_dofs(),
					      dof_handlers.parameter.n_dofs());
	    DoFTools::make_sparsity_pattern (dof_handlers.parameter, mask, csp);
	    dof_handlers.parameter_constraints.condense (csp);

	    sparsity_pattern.copy_from (csp);
	  } 
      }
      
      
      

      template <int dim>
      void
      L2<dim>::build_R_1 (const DoFHandlers<dim> &dof_handlers,
			  const Vector<double>   &/*linearization_point*/,
			  const double            beta,
			  const Vector<float>    &information_content,
			  SparseMatrix<double>   &R,
			  const std::pair<unsigned int,unsigned int> &cell_range,
			  Threads::ThreadMutex   &mutex) const
      {
	Assert (information_content.size() ==
		dof_handlers.parameter.n_dofs(),
		ExcInternalError());
	
	const FiniteElement<dim> &fe = dof_handlers.parameter.get_fe();
	const unsigned int dofs_per_cell    = fe.dofs_per_cell,
			   n_q_points       = dof_handlers.fe
					      ->quadrature.n_quadrature_points;

					 
					 
					 
					 
	Assert (fe.n_components() == 1, ExcNotImplemented());
	
	
	FEValues<dim>  fe_values (fe, dof_handlers.fe->quadrature,
				  UpdateFlags(update_values     |
					      update_JxW_values));

					 
					 
	std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
  
					 
	FullMatrix<double> cell_matrix (dofs_per_cell, dofs_per_cell);

	typename DoFHandler<dim>::active_cell_iterator
	  cell = dof_handlers.parameter.begin_active(),
	  endc = cell;
	std::advance (cell, static_cast<signed int>(cell_range.first));
	std::advance (endc, static_cast<signed int>(cell_range.second));
  
	for (; cell!=endc; ++cell)
	  {
	    fe_values.reinit (cell);
	    cell_matrix = 0;
	    cell->get_dof_indices (dof_indices_on_cell);

					     
					     
	    for (unsigned int i=0; i<dofs_per_cell; ++i)
	      for (unsigned int j=i; j<dofs_per_cell; ++j)
		for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
		  cell_matrix (i,j) += (fe_values.shape_value(i,q_point) *
					fe_values.shape_value(j,q_point) *
					fe_values.JxW(q_point));

					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
	    cell_matrix *= beta;
	    mutex.acquire ();
	    for (unsigned int i=0; i<dofs_per_cell; ++i)
	      for (unsigned int j=0; j<dofs_per_cell; ++j)
		R.add (dof_indices_on_cell[i], dof_indices_on_cell[j],
		       static_cast<float>(cell_matrix(i,j) != 0 ?
					  cell_matrix(i,j) :
					  cell_matrix(j,i)));
	    mutex.release ();
	  }
      }




      

      template <int dim>
      void
      L2<dim>::build_rhs_1 (const DoFHandlers<dim> &dof_handlers,
			    const Vector<double>   &linearization_point,
			    const double            beta,
			    const Vector<float>    &information_content,
			    Vector<double>         &rhs,
			    const std::pair<unsigned int,unsigned int> &cell_range,
			    Threads::ThreadMutex   &mutex) const
      {
	Assert (information_content.size() ==
		dof_handlers.parameter.n_dofs(),
		ExcInternalError());
	
	const FiniteElement<dim> &fe = dof_handlers.parameter.get_fe();
	const unsigned int dofs_per_cell    = fe.dofs_per_cell,
			   n_q_points       = dof_handlers.fe
					      ->quadrature.n_quadrature_points;
					 
					 
					 
					 
	Assert (fe.n_components() == 1, ExcNotImplemented());
  
	FEValues<dim>  fe_values (fe, dof_handlers.fe->quadrature,
				  UpdateFlags(update_values     |
					      update_JxW_values));

					 
					 
	std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
  
				     
	Vector<double> cell_vector (dofs_per_cell);
					 
	std::vector<double> local_a (n_q_points);
  
	typename DoFHandler<dim>::active_cell_iterator
	  cell = dof_handlers.parameter.begin_active(),
	  endc = cell;
	std::advance (cell, static_cast<signed int>(cell_range.first));
	std::advance (endc, static_cast<signed int>(cell_range.second));
  
	for (; cell!=endc; ++cell)
	  {
	    fe_values.reinit (cell);
	    cell_vector = 0;
	    cell->get_dof_indices (dof_indices_on_cell);

	    fe_values.get_function_values (linearization_point, local_a);

					     
	    for (unsigned int i=0; i<dofs_per_cell; ++i)
	      for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
		cell_vector(i) -= (fe_values.shape_value(i,q_point) *
				   local_a[q_point] *
				   fe_values.JxW(q_point));

					     
					     
					     
					     
					     
					     
					     
					     
					     
	    cell_vector *= beta;
	    mutex.acquire ();
	    for (unsigned int i=0; i<dofs_per_cell; ++i)
	      rhs(dof_indices_on_cell[i])
		+= static_cast<float>(cell_vector(i));
	    mutex.release ();      
	  };
      }
      

      
      template <int dim>
      void
      L2<dim>::model_misfit_1 (const DoFHandlers<dim> &dof_handlers,
			       const Vector<double>   &present_iterate,
			       const double            beta,
			       const Vector<float>    &information_content,
			       const std::pair<unsigned int, unsigned int> &cell_range,
			       double                 &contribution) const
      {
	Assert (information_content.size() ==
		dof_handlers.parameter.n_dofs(),
		ExcInternalError());
	
	QTrapez<1> q_trapez;
	QIterated<dim> quadrature (q_trapez, 4);
	const unsigned int n_q_points = quadrature.n_quadrature_points;
  
	const FiniteElement<dim> &fe = dof_handlers.parameter.get_fe();

					 
					 
					 
					 
	Assert (fe.n_components() == 1, ExcNotImplemented());
    
	FEValues<dim>  fe_values (fe, quadrature,
				  UpdateFlags(update_values     |
					      update_JxW_values));
    
	std::vector<double> iterate_values (n_q_points);
    
	typename DoFHandler<dim>::active_cell_iterator
	  cell = dof_handlers.parameter.begin_active(),
	  endc = dof_handlers.parameter.begin_active();
	std::advance (cell, static_cast<signed int>(cell_range.first));
	std::advance (endc, static_cast<signed int>(cell_range.second));

	double error = 0;
  
	for (; cell!=endc; ++cell)
	  {
	    fe_values.reinit (cell);

					     
					     
	    fe_values.get_function_values (present_iterate, iterate_values);

					     
	    for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
		error += iterate_values[q_point] *
			 iterate_values[q_point] *
			 fe_values.JxW(q_point);
	  };

	contribution = beta*error;
      }
      


      template <int dim>
      void
      L2<dim>::beta_r_prime_1 (const DoFHandler<dim>        &dof_handler,
			       const unsigned int            component,
			       const Vector<double>         &present_iterate,
			       const Vector<double>         &weights,
			       Vector<float>                &output_vector,
			       const double                 &beta,
			       const Vector<float>    &information_content,
			       const std::pair<unsigned int, unsigned int> range) const
      {
	Assert (information_content.size() ==
		dof_handler.n_dofs(),
		ExcInternalError());
	
	QGauss2<1> q_base;
	QIterated<dim> quadrature (q_base, 4);
    
	const FiniteElement<dim> &fe_global = dof_handler.get_fe();
	const unsigned int n_q_points       = quadrature.n_quadrature_points;
  
	FEValues<dim>  fe_values (fe_global, quadrature,
				  UpdateFlags(update_values     |
					      update_JxW_values));

					 
					 
					 
					 
	const unsigned int n_components = fe_global.n_components();
	Assert (component < n_components, ExcInternalError());
	std::vector<Vector<double> > present_iterate_values (n_q_points,
							     Vector<double>(n_components));
	std::vector<Vector<double> > weights_values (n_q_points,
						     Vector<double>(n_components));

	typename DoFHandler<dim>::active_cell_iterator
	  cell = dof_handler.begin_active(),
	  endc = dof_handler.begin_active();
	std::advance (cell, static_cast<signed int>(range.first));
	std::advance (endc, static_cast<signed int>(range.second));

	for (unsigned int cell_index=range.first; cell!=endc; ++cell, ++cell_index)
	  {
	    fe_values.reinit (cell);
					     
					     
					     
	    fe_values.get_function_values (present_iterate,
					   present_iterate_values);
	    fe_values.get_function_values (weights,
					   weights_values);

	    double sum = 0;
	    for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
	      sum += present_iterate_values[q_point](component)
		     *
		     weights_values[q_point](component)
		     *
		     fe_values.JxW(q_point);

	    output_vector(cell_index) += beta*sum;
	  };
      }



      template <int dim>
      void
      L2<dim>::beta_r_prime_on_subcells_1 (const DoFHandlers<dim> &dof_handlers,
					   const Vector<double>   &present_iterate,
					   const double           &beta,
					   const Vector<float>    &information_content,
					   Vector<double>         &output_vector,
					   const std::pair<unsigned int, unsigned int> range) const
      {
	Assert (information_content.size() ==
		dof_handlers.parameter.n_dofs(),
		ExcInternalError());
	
	Assert (output_vector.size() ==
		dof_handlers.parameter.get_tria().n_active_cells() *
		GeometryInfo<dim>::max_children_per_cell,
		ExcInternalError());

					 
	QTrapez<1> q_trapez;
	QIterated<dim> base_quadrature (q_trapez, 3);
	const unsigned int n_q_points = base_quadrature.n_quadrature_points;
	
	const FiniteElement<dim> &fe = dof_handlers.parameter.get_fe();
	Assert (fe.dofs_per_cell == 1, ExcNotImplemented());

					 
					 
					 
					 
					 
	std::vector<const Quadrature<dim> *>
	  child_quadratures (GeometryInfo<dim>::max_children_per_cell);
	std::vector<FEValues<dim> *>
	  child_fe_values (GeometryInfo<dim>::max_children_per_cell);
	for (unsigned int c=0; c<GeometryInfo<dim>::max_children_per_cell; ++c)
	  {
	    child_quadratures[c] =
	      new Quadrature<dim> (QProjector<dim>::project_to_child (base_quadrature, c));
	    child_fe_values[c] = new FEValues<dim> (fe, *child_quadratures[c],
						    UpdateFlags(update_values     |
								update_JxW_values));
	  };
	
	
					 
					 
					 
					 
	Assert (fe.n_components() == 1, ExcNotImplemented());
    
	std::vector<double> iterate_values (n_q_points);
    
	typename DoFHandler<dim>::active_cell_iterator
	  cell = dof_handlers.parameter.begin_active(),
	  endc = dof_handlers.parameter.begin_active();
	std::advance (cell, static_cast<signed int>(range.first));
	std::advance (endc, static_cast<signed int>(range.second));

	unsigned int subcell_index=range.first*GeometryInfo<dim>::max_children_per_cell;
	for (; cell!=endc; ++cell)
	  for (unsigned int c=0; c<GeometryInfo<dim>::max_children_per_cell; ++c)
	    {
	      child_fe_values[c]->reinit (cell);
	      
					       
					       
	      child_fe_values[c]->get_function_values (present_iterate, iterate_values);
					       
	      for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
		output_vector(subcell_index) += iterate_values[q_point] * beta *
						child_fe_values[c]->JxW(q_point);
	      ++subcell_index;
	    };
	Assert (subcell_index==range.second*GeometryInfo<dim>::max_children_per_cell,
		ExcInternalError());
	
					 
	for (unsigned int c=0; c<GeometryInfo<dim>::max_children_per_cell; ++c)
	  {
	    delete_ptr (child_quadratures[c]);
	    delete_ptr (child_fe_values[c]);
	  };
      }



/* ----------- Field::Regularization::H1 ------ */
      
      template <int dim>
      H1<dim>::H1 (const bool use_information_for_regularization)
		      :
		      libparest::Parameter::Field::Regularization::Base<dim> (use_information_for_regularization)
      {}



      template <int dim>
      void H1<dim>::build_R (const DoFHandlers<dim> &dof_handlers,
			     const Vector<double>   &linearization_point,
			     const double            beta,
			     const Vector<float>    &information_content,
			     SparseMatrix<double>   &R) const
      {
        if (beta == 0.)
          return;
        
					 
	const unsigned int n_threads = multithread_info.n_default_threads;
	Threads::ThreadMutex   mutex;
	Threads::ThreadGroup<> threads;

				     
				     
	std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	  = Threads::split_interval (0, dof_handlers.parameter.get_tria().n_active_cells(),
				     n_threads);


					 
	for (unsigned int thread=0; thread<n_threads; ++thread)
	  threads += Threads::spawn (*this, &H1<dim>::build_R_1)
                     (dof_handlers, linearization_point, beta,
		      information_content,
                      R, thread_ranges[thread], mutex);
	threads.join_all ();

					 
					 
					 
      }



      template <int dim>
      void H1<dim>::build_rhs (const DoFHandlers<dim> &dof_handlers,
			       const Vector<double>   &linearization_point,
			       const double            beta,
			       const Vector<float>    &information_content,
			       Vector<double>         &rhs) const
      {
        if (beta == 0.)
          return;
        
					 
	const unsigned int n_threads = multithread_info.n_default_threads;
	Threads::ThreadMutex   mutex;
	Threads::ThreadGroup<> threads;

				     
				     
	std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	  = Threads::split_interval (0, dof_handlers.parameter.get_tria().n_active_cells(),
				     n_threads);


					 
	for (unsigned int thread=0; thread<n_threads; ++thread)
	  threads += Threads::spawn (*this, &H1<dim>::build_rhs_1)
                     (dof_handlers, linearization_point, beta,
		      information_content,
                      rhs, thread_ranges[thread], mutex);
	threads.join_all ();

					 
					 
					 
      }



      template <int dim>
      double
      H1<dim>::model_misfit (const DoFHandlers<dim> &dof_handlers,
			     const Vector<double>   &present_iterate,
			     const double            beta,
			     const Vector<float>    &/*information_content*/) const
      {
        if (beta == 0.)
          return 0.;

					 
					 
					 
					 
	Assert (beta == 0, ExcNotImplemented());
        
					 
	const unsigned int n_threads = multithread_info.n_default_threads;
	std::vector<double> misfit_part (n_threads);

	Threads::ThreadGroup<> threads;

				   
				   
	std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	  = Threads::split_interval (0, dof_handlers.parameter.get_tria().n_active_cells(),
				     n_threads);


					 
	for (unsigned int thread=0; thread<n_threads; ++thread)
	  threads += Threads::spawn (*this, &H1<dim>::model_misfit_1)
                     (dof_handlers, present_iterate, thread_ranges[thread],
                      misfit_part[thread]);
	threads.join_all ();

	return 0.5*beta*std::accumulate (misfit_part.begin(),
					 misfit_part.end(),
					 0.);
      }



      template <int dim>
      void
      H1<dim>::beta_r_prime (const DoFHandler<dim>        &dof_handler,
			     const unsigned int            component,
			     const Vector<double>         &present_iterate,
			     const Vector<double>         &weights,
			     const double                 &beta,
			     const Vector<float>    &information_content,
			     Vector<float>                &output_vector) const
      {
        if (beta == 0.)
          return;
        
					 
	const unsigned int n_threads = multithread_info.n_default_threads;
	std::vector<double> misfit_part (n_threads);

					 
					 
	std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	  = Threads::split_interval (0, dof_handler.get_tria().n_active_cells(),
				     n_threads);

	Threads::ThreadGroup<> threads;
	for (unsigned int thread=0; thread<n_threads; ++thread)
	  threads += Threads::spawn (*this, &H1<dim>::beta_r_prime_1)
                     (dof_handler, component, present_iterate, weights,
                      output_vector, beta,
		      information_content,
		      thread_ranges[thread]);
	threads.join_all ();
      }



      template <int dim>
      void
      H1<dim>::beta_r_prime_on_subcells (const DoFHandlers<dim> &dof_handlers,
					 const Vector<double>   &present_iterate,
					 const double           &beta,
					 const Vector<float>    &information_content,
					 Vector<double>         &output_vector) const
      {
        if (beta == 0.)
          return;
        
					 
	const unsigned int n_threads = multithread_info.n_default_threads;
	std::vector<double> misfit_part (n_threads);

					 
					 
	std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	  = Threads::split_interval (0, dof_handlers.parameter.get_tria().n_active_cells(),
				     n_threads);

	Threads::ThreadGroup<> threads;
	for (unsigned int thread=0; thread<n_threads; ++thread)
	  threads += Threads::spawn (*this, &H1<dim>::beta_r_prime_on_subcells_1)
                     (dof_handlers, present_iterate, beta,
		      information_content, output_vector,
                      thread_ranges[thread]);
	threads.join_all ();
      }



      template <int dim>
      void
      H1<dim>::make_sparsity_pattern (const DoFHandlers<dim> &dof_handlers,
				      SparsityPattern        &sparsity_pattern) const
      {
	Assert (dof_handlers.fe->fe.dofs_per_cell == 1, ExcNotImplemented());
	
	sparsity_pattern.reinit (dof_handlers.parameter.n_dofs(),
				 dof_handlers.parameter.n_dofs(),
				 (dim != 1 ?
				  (GeometryInfo<dim>::faces_per_cell *
				   GeometryInfo<dim-1>::max_children_per_cell + 1)
				 :
				 3));

	DoFTools::make_flux_sparsity_pattern (dof_handlers.parameter,
					      sparsity_pattern);
	
	dof_handlers.parameter_constraints.condense (sparsity_pattern);
	sparsity_pattern.compress ();
      }
      
      
      

      template <int dim>
      void
      H1<dim>::build_R_1 (const DoFHandlers<dim> &dof_handlers,
			  const Vector<double>   &/*linearization_point*/,
			  const double            beta,
			  const Vector<float>    &information_content,
			  SparseMatrix<double>   &R,
			  const std::pair<unsigned int,unsigned int> &cell_range,
			  Threads::ThreadMutex   &mutex) const
      {
	Assert (information_content.size() ==
		dof_handlers.parameter.n_dofs(),
		ExcInternalError());
	
	const FiniteElement<dim> &fe = dof_handlers.parameter.get_fe();

					 
					 
					 
					 
	Assert (fe.n_components() == 1, ExcNotImplemented());
					 
					 
					 
					 
					 
	Assert (fe.dofs_per_cell == 1, ExcNotImplemented());	

					 
					 
					 
					 
	std::vector<typename DoFHandler<dim>::active_cell_iterator> active_neighbors;
	active_neighbors.reserve (GeometryInfo<dim>::faces_per_cell *
				  GeometryInfo<dim-1>::max_children_per_cell);

	std::vector<unsigned int> local_dof_indices(1);

	typename DoFHandler<dim>::active_cell_iterator
	  cell = dof_handlers.parameter.begin_active(),
	  endc = cell;
	std::advance (cell, static_cast<signed int>(cell_range.first));
	std::advance (endc, static_cast<signed int>(cell_range.second));
  
	for (; cell!=endc; ++cell)
	  {
	    const Point<dim> this_center = cell->barycenter();
	    
	    cell->get_dof_indices (local_dof_indices);
	    const unsigned int this_dof_index = local_dof_indices[0];
	    
					     
					     
					     
					     
					     
					     
					     
					     
	    unsigned int n_at_boundary = 0;
	    for (unsigned int i=0; i<GeometryInfo<dim>::faces_per_cell; ++i)
	      if (cell->at_boundary(i))
		++n_at_boundary;
	    const double boundary_correction = (GeometryInfo<dim>::faces_per_cell /
						(GeometryInfo<dim>::faces_per_cell -
						 n_at_boundary));
	    
					     
					     
					     
	    get_active_neighbors (cell, active_neighbors);
	    const unsigned int n_active_neighbors = active_neighbors.size();
	    for (unsigned int i=0; i<n_active_neighbors; ++i)
	      {
		const Point<dim> neighbor_center = active_neighbors[i]->barycenter();
		
		active_neighbors[i]->get_dof_indices (local_dof_indices);
		const unsigned int that_dof_index = local_dof_indices[0];

						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
		const double weight = (dim==1 ?
				       cell->measure()/2 :
				       (cell->measure() /
					2 /
					(active_neighbors[i]->level() > cell->level() ?
					 GeometryInfo<dim-1>::max_children_per_cell :
					 1)) *
				       boundary_correction);

						 
						 
						 
						 
		const double distance = std::sqrt((neighbor_center -
						   this_center).square());

						 
						 
						 
						 
						 
						 
						 
		const double scaling_factor = weight / (distance * distance) * beta;

		mutex.acquire ();
		R.add (this_dof_index, this_dof_index,
		       static_cast<float> (scaling_factor));
		R.add (this_dof_index, that_dof_index,
		       static_cast<float> (-scaling_factor));
		R.add (that_dof_index, this_dof_index,
		       static_cast<float> (-scaling_factor));
		R.add (that_dof_index, that_dof_index,
		       static_cast<float> (scaling_factor));
		mutex.release ();
	      }
	  }
      }




      

      template <int dim>
      void
      H1<dim>::build_rhs_1 (const DoFHandlers<dim> &dof_handlers,
			    const Vector<double>   &linearization_point,
			    const double            beta,
			    const Vector<float>    &information_content,
			    Vector<double>         &rhs,
			    const std::pair<unsigned int,unsigned int> &cell_range,
			    Threads::ThreadMutex   &mutex) const
      {
	Assert (information_content.size() ==
		dof_handlers.parameter.n_dofs(),
		ExcInternalError());
	
	const FiniteElement<dim> &fe = dof_handlers.parameter.get_fe();

					 
					 
					 
					 
	Assert (fe.n_components() == 1, ExcNotImplemented());
					 
					 
					 
					 
					 
	Assert (fe.dofs_per_cell == 1, ExcNotImplemented());
	
	QMidpoint<dim> midpoint_rule;
	FEValues<dim>  fe_midpoint_value (fe, midpoint_rule,
					  UpdateFlags(update_values |
						      update_q_points));
  
	std::vector<unsigned int> local_dof_indices(1);	
	std::vector<double> iterate_values (1);
	
	active_cell_iterator cell, endc;
	cell = endc = dof_handlers.parameter.begin_active();
					 
					 
	std::advance (cell, static_cast<int>(cell_range.first));
	std::advance (endc, static_cast<int>(cell_range.second));

				   
				   
				   
				   
	std::vector<typename DoFHandler<dim>::active_cell_iterator> active_neighbors;
	active_neighbors.reserve (GeometryInfo<dim>::faces_per_cell *
				  GeometryInfo<dim-1>::max_children_per_cell);

	for (; cell!=endc; ++cell)
	  {
	    double     this_midpoint_value;
	    Point<dim> this_center;
	    
	    get_cell_data (cell, fe_midpoint_value,
			   linearization_point, iterate_values,
			   this_midpoint_value,
			   this_center);
	    
	    cell->get_dof_indices (local_dof_indices);
	    const unsigned int this_dof_index = local_dof_indices[0];

	    get_active_neighbors (cell, active_neighbors);

					     
					     
					     
					     
					     
					     
					     
					     
	    unsigned int n_at_boundary = 0;
	    for (unsigned int i=0; i<GeometryInfo<dim>::faces_per_cell; ++i)
	      if (cell->at_boundary(i))
		++n_at_boundary;
	    const double boundary_correction = (GeometryInfo<dim>::faces_per_cell /
						(GeometryInfo<dim>::faces_per_cell -
						 n_at_boundary));
	    
					     
					     
					     
	    const unsigned int n_active_neighbors = active_neighbors.size();
	    for (unsigned int i=0; i<n_active_neighbors; ++i)
	      {
		double     neighbor_midpoint_value;
		Point<dim> neighbor_center;
		
		get_cell_data (active_neighbors[i], fe_midpoint_value,
			       linearization_point, iterate_values,
			       neighbor_midpoint_value,
			       neighbor_center);	  

		active_neighbors[i]->get_dof_indices (local_dof_indices);
		const unsigned int that_dof_index = local_dof_indices[0];

						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
		const double weight = (dim==1 ?
				       cell->measure()/2 :
				       (cell->measure() /
					2 /
					(active_neighbors[i]->level() > cell->level() ?
					 GeometryInfo<dim-1>::max_children_per_cell :
					 1)) *
				       boundary_correction);

						 
						 
						 
						 
		const double distance = std::sqrt((neighbor_center -
						   this_center).square());

						 
						 
						 
		const double gradient = (neighbor_midpoint_value -
					 this_midpoint_value) / distance;

						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
		const double scaling_factor = weight * gradient * (-1./distance) * beta;
		mutex.acquire ();
		rhs(this_dof_index) += static_cast<float>(scaling_factor);
		rhs(that_dof_index) += static_cast<float>(scaling_factor);
		mutex.release ();		
	      }
	  }
      }
      

      
      template <int dim>
      void
      H1<dim>::model_misfit_1 (const DoFHandlers<dim> &dof_handlers,
			       const Vector<double>   &present_iterate,
			       const std::pair<unsigned int, unsigned int> &cell_range,
			       double                 &contribution) const
      {
	const FiniteElement<dim> &fe = dof_handlers.parameter.get_fe();

					 
					 
					 
					 
	Assert (fe.n_components() == 1, ExcNotImplemented());
					 
					 
					 
					 
					 
	Assert (fe.dofs_per_cell == 1, ExcNotImplemented());
	
	QMidpoint<dim> midpoint_rule;
	FEValues<dim>  fe_midpoint_value (fe, midpoint_rule,
					  UpdateFlags(update_values |
						      update_q_points));
  
	std::vector<double> iterate_values (1);
	
	active_cell_iterator cell, endc;
	cell = endc = dof_handlers.parameter.begin_active();
					 
					 
	std::advance (cell, static_cast<int>(cell_range.first));
	std::advance (endc, static_cast<int>(cell_range.second));

				   
				   
				   
				   
	std::vector<typename DoFHandler<dim>::active_cell_iterator> active_neighbors;
	active_neighbors.reserve (GeometryInfo<dim>::faces_per_cell *
				  GeometryInfo<dim-1>::max_children_per_cell);

	double error = 0;
	
	for (; cell!=endc; ++cell)
	  {
	    double     this_midpoint_value;
	    Point<dim> this_center;
	    
	    get_cell_data (cell, fe_midpoint_value,
			   present_iterate, iterate_values,
			   this_midpoint_value,
			   this_center);
	    
	    get_active_neighbors (cell, active_neighbors);

					     
					     
					     
					     
					     
					     
					     
					     
	    unsigned int n_at_boundary = 0;
	    for (unsigned int i=0; i<GeometryInfo<dim>::faces_per_cell; ++i)
	      if (cell->at_boundary(i))
		++n_at_boundary;
	    const double boundary_correction = (GeometryInfo<dim>::faces_per_cell /
						(GeometryInfo<dim>::faces_per_cell -
						 n_at_boundary));
	    
					     
					     
					     
	    const unsigned int n_active_neighbors = active_neighbors.size();
	    for (unsigned int i=0; i<n_active_neighbors; ++i)
	      {
		double     neighbor_midpoint_value;
		Point<dim> neighbor_center;
		
		get_cell_data (active_neighbors[i], fe_midpoint_value,
			       present_iterate, iterate_values,
			       neighbor_midpoint_value,
			       neighbor_center);	  

						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
		const double weight = (dim==1 ?
				       cell->measure()/2 :
				       (cell->measure() /
					2 /
					(active_neighbors[i]->level() > cell->level() ?
					 GeometryInfo<dim-1>::max_children_per_cell :
					 1)) *
				       boundary_correction);

						 
						 
						 
						 
		const double distance = std::sqrt((neighbor_center -
						   this_center).square());

						 
						 
						 
		const double gradient = (neighbor_midpoint_value -
					 this_midpoint_value) / distance;
		
		error += (gradient * gradient) * weight;
	      };
	  };

	contribution = error;
      }
      


      template <int dim>
      void
      H1<dim>::beta_r_prime_1 (const DoFHandler<dim>        &dof_handler,
			       const unsigned int            component,
			       const Vector<double>         &present_iterate,
			       const Vector<double>         &weights,
			       Vector<float>                &output_vector,
			       const double                 &beta,
			       const Vector<float>    &information_content,
			       const std::pair<unsigned int, unsigned int> range) const
      {
	Assert (information_content.size() ==
		dof_handler.n_dofs(),
		ExcInternalError());
	
					 
					 
					 
					 
					 
					 
	QMidpoint<dim> quadrature;
    
	const FiniteElement<dim> &fe_global = dof_handler.get_fe();
  
	FEValues<dim>  fe_values (fe_global, quadrature, update_values);

					 
					 
					 
					 
	const unsigned int n_components = fe_global.n_components();
	Assert (component < n_components, ExcInternalError());

                                         
                                         
                                         
                                         
                                         
        const bool treat_cell_interior
          = (fe_global.base_element(fe_global.component_to_base_index(component).first)
             .dofs_per_cell != 1);
        Assert (treat_cell_interior == false, ExcNotImplemented());

	std::vector<Vector<double> >
	  present_iterate_values (1, Vector<double>(n_components));
	std::vector<Vector<double> >
	  weights_values (1, Vector<double>(n_components));

				   
				   
				   
				   
	std::vector<typename DoFHandler<dim>::active_cell_iterator> active_neighbors;
	active_neighbors.reserve (GeometryInfo<dim>::faces_per_cell *
				  GeometryInfo<dim-1>::max_children_per_cell);
	
	typename DoFHandler<dim>::active_cell_iterator
	  cell = dof_handler.begin_active(),
	  endc = dof_handler.begin_active();
	std::advance (cell, static_cast<signed int>(range.first));
	std::advance (endc, static_cast<signed int>(range.second));

	for (unsigned int cell_index=range.first; cell!=endc; ++cell, ++cell_index)
	  {
	    fe_values.reinit (cell);
					     
					     
					     
	    fe_values.get_function_values (present_iterate,
					   present_iterate_values);
	    fe_values.get_function_values (weights,
					   weights_values);

	    const double iterate_midpoint_value = present_iterate_values[0](component);
	    const double weight_midpoint_value  = weights_values[0](component);
      
	    const Point<dim> this_center = cell->barycenter();

	    unsigned int n_at_boundary = 0;
	    for (unsigned int i=0; i<GeometryInfo<dim>::faces_per_cell; ++i)
	      if (cell->at_boundary(i))
		++n_at_boundary;
            Assert (n_at_boundary != GeometryInfo<dim>::faces_per_cell,
                    ExcInternalError());
	    const double boundary_correction = (GeometryInfo<dim>::faces_per_cell /
						(GeometryInfo<dim>::faces_per_cell -
						 n_at_boundary));
	    double sum = 0;
	    
	    const unsigned int n_active_neighbors = active_neighbors.size();
	    for (unsigned int i=0; i<n_active_neighbors; ++i)
	      {
		fe_values.reinit (active_neighbors[i]);
		fe_values.get_function_values (present_iterate,
					       present_iterate_values);
		fe_values.get_function_values (weights,
					       weights_values);
		
		const double iterate_midpoint_value_nb = present_iterate_values[0](component);
		const double weight_midpoint_value_nb  = weights_values[0](component);

		const Point<dim> that_center = active_neighbors[i]->barycenter();

		const double weight = (dim==1 ?
				       cell->measure()/2 :
				       (cell->measure() /
					2 /
					(active_neighbors[i]->level() > cell->level() ?
					 GeometryInfo<dim-1>::max_children_per_cell :
					 1)) *
				       boundary_correction);

		const double distance = std::sqrt((that_center -
						   this_center).square());

		sum += (iterate_midpoint_value_nb - iterate_midpoint_value) *
		       (weight_midpoint_value_nb  - weight_midpoint_value) *
		       weight / distance / distance;
	      };
	    
	    output_vector(cell_index) += beta*sum;
	  };
      }



      template <int dim>
      void
      H1<dim>::beta_r_prime_on_subcells_1 (const DoFHandlers<dim> &dof_handlers,
					   const Vector<double>   &present_iterate,
					   const double           &beta,
					   const Vector<float>    &information_content,
					   Vector<double>         &output_vector,
					   const std::pair<unsigned int, unsigned int> range) const
      {
	Assert (information_content.size() ==
		dof_handlers.parameter.n_dofs(),
		ExcInternalError());
	
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
	Assert (output_vector.size() ==
		dof_handlers.parameter.get_tria().n_active_cells() *
		GeometryInfo<dim>::max_children_per_cell,
		ExcInternalError());

	const FiniteElement<dim> &fe = dof_handlers.parameter.get_fe();
	Assert (fe.dofs_per_cell == 1, ExcNotImplemented());
	
	QMidpoint<dim> midpoint_rule;
	FEValues<dim>  fe_midpoint_value (fe, midpoint_rule,
					  UpdateFlags(update_values |
						      update_q_points));
  
	std::vector<double> iterate_values (1);
	
					 
					 
					 
					 
	Assert (fe.n_components() == 1, ExcNotImplemented());
    
	typename DoFHandler<dim>::active_cell_iterator
	  cell = dof_handlers.parameter.begin_active(),
	  endc = dof_handlers.parameter.begin_active();
	std::advance (cell, static_cast<signed int>(range.first));
	std::advance (endc, static_cast<signed int>(range.second));

				   
				   
				   
				   
	std::vector<typename DoFHandler<dim>::active_cell_iterator> active_neighbors;
	active_neighbors.reserve (GeometryInfo<dim>::faces_per_cell *
				  GeometryInfo<dim-1>::max_children_per_cell);
	
	unsigned int subcell_index=range.first*GeometryInfo<dim>::max_children_per_cell;
	for (; cell!=endc; ++cell)
	  {
	    double     this_midpoint_value;
	    Point<dim> this_center;
	    
	    get_cell_data (cell, fe_midpoint_value,
			   present_iterate, iterate_values,
			   this_midpoint_value,
			   this_center);
	    
	    get_active_neighbors (cell, active_neighbors);

					     
					     
					     
					     
					     
					     
					     
					     
	    unsigned int n_at_boundary = 0;
	    for (unsigned int i=0; i<GeometryInfo<dim>::faces_per_cell; ++i)
	      if (cell->at_boundary(i))
		++n_at_boundary;
	    const double boundary_correction = (GeometryInfo<dim>::faces_per_cell /
						(GeometryInfo<dim>::faces_per_cell -
						 n_at_boundary));
	    
					     
					     
					     
	    const unsigned int n_active_neighbors = active_neighbors.size();
	    double sum = 0;
	    for (unsigned int i=0; i<n_active_neighbors; ++i)
	      {
		double     neighbor_midpoint_value;
		Point<dim> neighbor_center;
		
		get_cell_data (active_neighbors[i], fe_midpoint_value,
			       present_iterate, iterate_values,
			       neighbor_midpoint_value,
			       neighbor_center);	  

						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
		const double weight = (dim==1 ?
				       cell->measure()/2 :
				       (cell->measure() /
					2 /
					(active_neighbors[i]->level() > cell->level() ?
					 GeometryInfo<dim-1>::max_children_per_cell :
					 1)) *
				       boundary_correction);

						 
						 
						 
						 
		const double distance = std::sqrt((neighbor_center -
						   this_center).square());

						 
						 
						 
		const double gradient = (neighbor_midpoint_value -
					 this_midpoint_value) / distance;

		sum += gradient/distance*weight*beta;
	      }

	    for (unsigned int c=0; c<GeometryInfo<dim>::max_children_per_cell; ++c)
	      output_vector(subcell_index+c) += sum;
	  }
	Assert (subcell_index==range.second*GeometryInfo<dim>::max_children_per_cell,
		ExcInternalError());
      }



      template <int dim>
      void
      H1<dim>::get_active_neighbors (const active_cell_iterator        &cell,
				     std::vector<active_cell_iterator> &active_neighbors)
      {
	    
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
	active_neighbors.clear ();
	for (unsigned int n=0; n<GeometryInfo<dim>::faces_per_cell; ++n)
	  if (! cell->at_boundary(n))
	    {
	      typename DoFHandler<dim>::cell_iterator
		neighbor = cell->neighbor(n);
	      if (neighbor->active())
		active_neighbors.push_back (neighbor);
	      else
		{
						   
						   
						   
						   
						   
						   
						   
						   
						   
						   
						   
						   
						   
						   
						   
						   
						   
		  if (dim == 1)
		    {
		      typename DoFHandler<dim>::cell_iterator
			neighbor_child = neighbor;
		      while (neighbor_child->has_children())
			neighbor_child = neighbor_child->child (n==0 ? 1 : 0);
		    
		      Assert (neighbor_child->neighbor(n==0 ? 1 : 0)==cell,
			      ExcInternalError());
		    
		      active_neighbors.push_back (neighbor_child);
		    }
		  else
						     
						     
						     
						     
		    for (unsigned int c=0; c<GeometryInfo<dim>::max_children_per_cell; ++c)
		      for (unsigned int f=0; f<GeometryInfo<dim>::faces_per_cell; ++f)
			if (neighbor->child(c)->neighbor(f) == cell)
			  active_neighbors.push_back (neighbor->child(c));
		};
	    };
      }



      template <int dim>
      void
      H1<dim>::get_cell_data (const active_cell_iterator &cell,
			      FEValues<dim>              &fe_midpoint_value,
			      const Vector<double>       &present_iterate,
			      std::vector<double>        &iterate_values,
			      double                     &midpoint_value,
			      Point<dim>                 &center)
      {
		
					 
	fe_midpoint_value.reinit (cell);
	  
					 
					 
	fe_midpoint_value.get_function_values (present_iterate, iterate_values);
	midpoint_value = iterate_values[0];
	  
						 
	center = fe_midpoint_value.quadrature_point(0);
      }
      


/* ----------- Field::Regularization::BV ------ */


      template <int dim>
      BV<dim>::BV (const Triangulation<dim> &tria,
		   const bool use_information_for_regularization)
		      :
		      libparest::Parameter::Field::Regularization::Base<dim> (use_information_for_regularization),
		      diameter_of_domain (GridTools::diameter (tria))
      {}

      
      
      template <int dim>
      void BV<dim>::build_R (const DoFHandlers<dim> &dof_handlers,
			     const Vector<double>   &linearization_point,
			     const double            beta,
			     const Vector<float>    &information_content,
			     SparseMatrix<double>   &R) const
      {
        if (beta == 0.)
          return;
        
					 
	const unsigned int n_threads = multithread_info.n_default_threads;
	Threads::ThreadMutex   mutex;
	Threads::ThreadGroup<> threads;

				     
				     
	std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	  = Threads::split_interval (0, dof_handlers.parameter.get_tria().n_active_cells(),
				     n_threads);


					 
	for (unsigned int thread=0; thread<n_threads; ++thread)
	  threads += Threads::spawn (*this, &BV<dim>::build_R_1)
                     (dof_handlers, linearization_point, beta,
		      information_content,
                      R, thread_ranges[thread], mutex);
	threads.join_all ();

					 
					 
					 
      }



      template <int dim>
      void BV<dim>::build_rhs (const DoFHandlers<dim> &dof_handlers,
			       const Vector<double>   &linearization_point,
			       const double            beta,
			       const Vector<float>    &information_content,
			       Vector<double>         &rhs) const
      {
        if (beta == 0.)
          return;
        
					 
	const unsigned int n_threads = multithread_info.n_default_threads;
	Threads::ThreadMutex   mutex;
	Threads::ThreadGroup<> threads;

				     
				     
	std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	  = Threads::split_interval (0, dof_handlers.parameter.get_tria().n_active_cells(),
				     n_threads);


					 
	for (unsigned int thread=0; thread<n_threads; ++thread)
	  threads += Threads::spawn (*this, &BV<dim>::build_rhs_1)
                     (dof_handlers, linearization_point, beta,
		      information_content,
                      rhs, thread_ranges[thread], mutex);
	threads.join_all ();

					 
					 
					 
      }



      template <int dim>
      double
      BV<dim>::model_misfit (const DoFHandlers<dim> &dof_handlers,
			     const Vector<double>   &present_iterate,
			     const double            beta,
			     const Vector<float>    &information_content) const
      {
        if (beta == 0.)
          return 0.;
        
					 
	const unsigned int n_threads = multithread_info.n_default_threads;
	std::vector<double> misfit_part (n_threads);

	Threads::ThreadGroup<> threads;

				   
				   
	std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	  = Threads::split_interval (0, dof_handlers.parameter.get_tria().n_active_cells(),
				     n_threads);


					 
	for (unsigned int thread=0; thread<n_threads; ++thread)
	  threads += Threads::spawn (*this, &BV<dim>::model_misfit_1)
                     (dof_handlers, present_iterate, beta,
		      information_content,
                      thread_ranges[thread], misfit_part[thread]);
	threads.join_all ();

	return std::accumulate (misfit_part.begin(), misfit_part.end(), 0.);
      }



      template <int dim>
      void
      BV<dim>::beta_r_prime (const DoFHandler<dim>        &dof_handler,
			     const unsigned int            component,
			     const Vector<double>         &present_iterate,
			     const Vector<double>         &weights,
			     const double                 &beta,
			     const Vector<float>    &information_content,
			     Vector<float>                &output_vector) const
      {
        if (beta == 0.)
          return;
        
					 
	const unsigned int n_threads = multithread_info.n_default_threads;
	std::vector<double> misfit_part (n_threads);

					 
					 
	std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	  = Threads::split_interval (0, dof_handler.get_tria().n_active_cells(),
				     n_threads);

	Threads::ThreadGroup<> threads;
	for (unsigned int thread=0; thread<n_threads; ++thread)
	  threads += Threads::spawn (*this, &BV<dim>::beta_r_prime_1)
                     (dof_handler, component, present_iterate, weights,
                      output_vector, beta,
		      information_content,
		      thread_ranges[thread]);
	threads.join_all ();
      }



      template <int dim>
      void
      BV<dim>::beta_r_prime_on_subcells (const DoFHandlers<dim> &dof_handlers,
					 const Vector<double>   &present_iterate,
					 const double           &beta,
					 const Vector<float>    &information_content,
					 Vector<double>         &output_vector) const
      {
        if (beta == 0.)
          return;
        
					 
	const unsigned int n_threads = multithread_info.n_default_threads;
	std::vector<double> misfit_part (n_threads);

					 
					 
	std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	  = Threads::split_interval (0, dof_handlers.parameter.get_tria().n_active_cells(),
				     n_threads);

	Threads::ThreadGroup<> threads;
	for (unsigned int thread=0; thread<n_threads; ++thread)
	  threads += Threads::spawn (*this, &BV<dim>::beta_r_prime_on_subcells_1)
                     (dof_handlers, present_iterate, beta,
		      information_content, output_vector,
                      thread_ranges[thread]);
	threads.join_all ();
      }



      template <int dim>
      void
      BV<dim>::make_sparsity_pattern (const DoFHandlers<dim> &dof_handlers,
				      SparsityPattern        &sparsity_pattern) const
      {
	Assert (false, ExcNotImplemented());
      }
      
      
      

      template <int dim>
      void
      BV<dim>::build_R_1 (const DoFHandlers<dim> &dof_handlers,
			  const Vector<double>   &/*linearization_point*/,
			  const double            beta,
			  const Vector<float>    &information_content,
			  SparseMatrix<double>   &R,
			  const std::pair<unsigned int,unsigned int> &cell_range,
			  Threads::ThreadMutex   &mutex) const
      {
	Assert (information_content.size() ==
		dof_handlers.parameter.n_dofs(),
		ExcInternalError());
	
	const FiniteElement<dim> &fe = dof_handlers.parameter.get_fe();
	const unsigned int dofs_per_cell    = fe.dofs_per_cell,
			   n_q_points       = dof_handlers.fe
					      ->quadrature.n_quadrature_points;

					 
					 
					 
					 
	Assert (fe.n_components() == 1, ExcNotImplemented());


					 
					 
					 
					 
	const bool domain_terms_exist = (fe.dofs_per_cell != 1);

					 
					 
	if (domain_terms_exist == true)
	  {
	    FEValues<dim>  fe_values (fe, dof_handlers.fe->quadrature,
				      UpdateFlags(update_values     |
						  update_JxW_values));
	    
					     
					     
	    std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
	    
					     
	    FullMatrix<double> cell_matrix (dofs_per_cell, dofs_per_cell);
	    
	    typename DoFHandler<dim>::active_cell_iterator
	      cell = dof_handlers.parameter.begin_active(),
	      endc = cell;
	    std::advance (cell, static_cast<signed int>(cell_range.first));
	    std::advance (endc, static_cast<signed int>(cell_range.second));
	    
	    for (; cell!=endc; ++cell)
	      {
		fe_values.reinit (cell);
		cell_matrix = 0;
		cell->get_dof_indices (dof_indices_on_cell);
		
						 
						 
						 
		for (unsigned int i=0; i<dofs_per_cell; ++i)
		  for (unsigned int j=i; j<dofs_per_cell; ++j)
		    for (unsigned int q_point=0; q_point<n_q_points; ++q_point)



		      Assert (false, ExcNotImplemented());
		
		
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
		cell_matrix *= beta;
		mutex.acquire ();
		for (unsigned int i=0; i<dofs_per_cell; ++i)
		  for (unsigned int j=0; j<dofs_per_cell; ++j)
		    R.add (dof_indices_on_cell[i], dof_indices_on_cell[j],
			   static_cast<float>(cell_matrix(i,j) != 0 ?
					      cell_matrix(i,j) :
					      cell_matrix(j,i)));
		mutex.release ();      
	      }
	  }
      }




      

      template <int dim>
      void
      BV<dim>::build_rhs_1 (const DoFHandlers<dim> &dof_handlers,
			    const Vector<double>   &linearization_point,
			    const double            beta,
			    const Vector<float>    &information_content,
			    Vector<double>         &rhs,
			    const std::pair<unsigned int,unsigned int> &cell_range,
			    Threads::ThreadMutex   &mutex) const
      {
	Assert (information_content.size() ==
		dof_handlers.parameter.n_dofs(),
		ExcInternalError());
	
	const FiniteElement<dim> &fe = dof_handlers.parameter.get_fe();
	const unsigned int dofs_per_cell    = fe.dofs_per_cell,
			   n_q_points       = dof_handlers.fe
					      ->quadrature.n_quadrature_points;
					 
					 
					 
					 
	Assert (fe.n_components() == 1, ExcNotImplemented());
  
					 
					 
					 
					 
	const bool domain_terms_exist = (fe.dofs_per_cell != 1);

					 
					 
	if (domain_terms_exist == true)
	  {
	    FEValues<dim>  fe_values (fe, dof_handlers.fe->quadrature,
				      UpdateFlags(update_gradients |
						  update_JxW_values));
	    
					     
					     
	    std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
	    
					     
	    Vector<double> cell_vector (dofs_per_cell);
					     
					     
	    std::vector<Tensor<1,dim> > local_a_grad (n_q_points);
  
	    typename DoFHandler<dim>::active_cell_iterator
	      cell = dof_handlers.parameter.begin_active(),
	      endc = cell;
	    std::advance (cell, static_cast<signed int>(cell_range.first));
	    std::advance (endc, static_cast<signed int>(cell_range.second));
	    
	    for (; cell!=endc; ++cell)
	      {
		fe_values.reinit (cell);
		cell_vector = 0;
		cell->get_dof_indices (dof_indices_on_cell);
		
		fe_values.get_function_grads (linearization_point, local_a_grad);
		
		for (unsigned int i=0; i<dofs_per_cell; ++i)
		  for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
		    {
		      const double grad_norm = sqrt(local_a_grad[q_point] *
						    local_a_grad[q_point]);

						     
						     
						     
						     
						     
		      const double grad_almost_zero = 1e20;
		      if (grad_norm > grad_almost_zero)
                        Assert (false, ExcInternalError());




		    };
		
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
						 
		cell_vector *= beta;
		mutex.acquire ();
		for (unsigned int i=0; i<dofs_per_cell; ++i)
		  rhs(dof_indices_on_cell[i])
		    += static_cast<float>(cell_vector(i));
		mutex.release ();      
	      }
	  }
      }
      

      
      template <int dim>
      void
      BV<dim>::model_misfit_1 (const DoFHandlers<dim> &dof_handlers,
			       const Vector<double>   &present_iterate,
			       const double            beta,
			       const Vector<float>    &information_content,
			       const std::pair<unsigned int, unsigned int> &cell_range,
			       double                 &contribution) const
      {
	Assert (information_content.size() ==
		dof_handlers.parameter.n_dofs(),
		ExcInternalError());
	
					 
					 
					 
					 
					 
					 
					 
					 
	double misfit = 0;
	
	const FiniteElement<dim> &fe = dof_handlers.parameter.get_fe();

					 
					 
					 
					 
	Assert (fe.n_components() == 1, ExcNotImplemented());
    
					 
					 
					 
					 
	const bool domain_terms_exist = (fe.dofs_per_cell != 1);
	const bool face_terms_exist   = (fe.dofs_per_face != 0);

					 
					 
	if (domain_terms_exist == true)
	  {
	    QTrapez<1> q_trapez;
	    QIterated<dim> quadrature (q_trapez, 4);
	    const unsigned int n_q_points = quadrature.n_quadrature_points;
  
	    FEValues<dim>  fe_values (fe, quadrature,
				      UpdateFlags(update_gradients  |
						  update_JxW_values));
	    
	    std::vector<Tensor<1,dim> > iterate_grads (n_q_points);
	    
	    typename DoFHandler<dim>::active_cell_iterator
	      cell = dof_handlers.parameter.begin_active(),
	      endc = dof_handlers.parameter.begin_active();
	    std::advance (cell, static_cast<signed int>(cell_range.first));
	    std::advance (endc, static_cast<signed int>(cell_range.second));
	    
	    for (; cell!=endc; ++cell)
	      {
		fe_values.reinit (cell);

						 
						 
						 
		fe_values.get_function_grads (present_iterate, iterate_grads);

						 
						 
		for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
		  misfit += sqrt (iterate_grads[q_point] *
				  iterate_grads[q_point]) *
			    fe_values.JxW(q_point);
	      };
	  };

					 
					 
	if (face_terms_exist == true)
	  {
	    ;
	  };

					 
					 
	contribution = beta*misfit;
      }
      


      template <int dim>
      void
      BV<dim>::beta_r_prime_1 (const DoFHandler<dim>        &dof_handler,
			       const unsigned int            component,
			       const Vector<double>         &present_iterate,
			       const Vector<double>         &weights,
			       Vector<float>                &output_vector,
			       const double                 &beta,
			       const Vector<float>    &information_content,
			       const std::pair<unsigned int, unsigned int> range) const
      {
	Assert (information_content.size() ==
		dof_handler.n_dofs(),
		ExcInternalError());
	
	QGauss2<1> q_base;
	QIterated<dim> quadrature (q_base, 4);
    
	const FiniteElement<dim> &fe_global = dof_handler.get_fe();
	const unsigned int n_q_points       = quadrature.n_quadrature_points;
  
					 
					 
					 
					 
	Assert (fe_global.n_components() == 1, ExcNotImplemented());

					 
					 
					 
					 
	const bool domain_terms_exist = (fe_global.dofs_per_cell != 1);

					 
					 
	if (domain_terms_exist == true)
	  {
	    FEValues<dim>  fe_values (fe_global, quadrature,
				      UpdateFlags(update_gradients  |
						  update_JxW_values));
	    
					     
					     
					     
					     
					     
					     
	    const unsigned int n_components = fe_global.n_components();
	    Assert (component < n_components, ExcInternalError());
	    std::vector<std::vector<Tensor<1,dim> > >
	      present_iterate_grads (n_q_points,
				     std::vector<Tensor<1,dim> >(n_components));
	    std::vector<std::vector<Tensor<1,dim> > >
	      weights_grads (n_q_points,
			     std::vector<Tensor<1,dim> >(n_components));
	    
	    typename DoFHandler<dim>::active_cell_iterator
	      cell = dof_handler.begin_active(),
	      endc = dof_handler.begin_active();
	    std::advance (cell, static_cast<signed int>(range.first));
	    std::advance (endc, static_cast<signed int>(range.second));
	    
	    for (unsigned int cell_index=range.first; cell!=endc; ++cell, ++cell_index)
	      {
		fe_values.reinit (cell);
						 
						 
						 
						 
		fe_values.get_function_grads (present_iterate,
					      present_iterate_grads);
		fe_values.get_function_grads (weights,
					      weights_grads);
		
		double sum = 0;
		for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
		  {
		    const double grad_norm = sqrt(present_iterate_grads[q_point][component] *
						  present_iterate_grads[q_point][component]);

						     
						     
						     
						     
						     
		    const double grad_almost_zero = 1e20;
		    if (grad_norm > grad_almost_zero)
		      sum += (present_iterate_grads[q_point][component]
			      *
			      weights_grads[q_point][component]) /
			     grad_norm
			     *
			     fe_values.JxW(q_point);
		  };
		
		output_vector(cell_index) += beta*sum;
	      }
	  }
      }



      template <int dim>
      void
      BV<dim>::beta_r_prime_on_subcells_1 (const DoFHandlers<dim> &/*dof_handlers*/,
					   const Vector<double>   &/*present_iterate*/,
					   const double           &/*beta*/,
					   const Vector<float>    &/*information_content*/,
					   Vector<double>         &/*output_vector*/,
					   const std::pair<unsigned int, unsigned int> /*range*/) const
      {
	Assert (false, ExcNotImplemented());
      }
      


				       
      template 
      Base<deal_II_dimension> *
      create_regularization_functional<deal_II_dimension> (const RegularizationFunctional,
							   const bool);
      
    }  
  }  
}
}
