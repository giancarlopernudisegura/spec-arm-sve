/* $Id: field.cc 3793 2009-05-07 20:02:51Z bangerth $ */

#include <libparest/parameter/field.h>
#include <libparest/utilities.h>
#include <libparest/parameter/bounds.h>
#include <libparest/utilities.h>

#include <base/utilities.h>
#include <base/quadrature_lib.h>
#include <base/thread_management.h>
#include <base/multithread_info.h>
#include <base/memory_consumption.h>
#include <base/function.h>
#include <base/parameter_handler.h>
#include <lac/sparse_matrix.h>
#include <lac/vector_memory.h>
#include <lac/solver_control.h>
#include <lac/solver_cg.h>
#include <lac/precondition.h>
#include <lac/filtered_matrix.h>
#include <grid/tria_iterator.h>
#include <grid/grid_refinement.h>
#include <grid/grid_out.h>
#include <dofs/dof_accessor.h>
#include <dofs/dof_handler.h>
#include <dofs/dof_constraints.h>
#include <dofs/dof_tools.h>
#include <dofs/dof_renumbering.h>
#include <fe/fe.h>
#include <fe/fe_dgq.h>
#include <fe/fe_values.h>
#include <numerics/data_out.h>
#include <numerics/derivative_approximation.h>
#include <numerics/solution_transfer.h>

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

/* ----------- Base::PerStepStatistics ------ */


      template <int dim>
      Base<dim>::PerStepStatistics::
      PerStepStatistics (const unsigned int n_regularization_parameters)
		      :
		      n_dofs (0),
		      regularization_parameters (n_regularization_parameters, 0.0)
      {}
  
  

      template <int dim>
      std::list<std::string>
      Base<dim>::PerStepStatistics::
      declare_entries () const
      {
	std::list<std::string> entries(1, "Number of parameter dofs");
	if (regularization_parameters.size() == 1)
	  entries.push_back ("Regularization parameter");
	else
	  for (unsigned int i=0; i<regularization_parameters.size(); ++i)
	    {
					       
	      Assert (false, ExcNotImplemented());
	    }
    
	return entries;
      }



      template <int dim>
      std::list<double>
      Base<dim>::PerStepStatistics::
      get_values () const
      {
	std::list<double> values(1, n_dofs);
	for (unsigned int i=0; i<regularization_parameters.size(); ++i)
	  values.push_back (regularization_parameters[i]);
	return values;
      }
  


/* -------------------- Base::Parameters ---------------- */  


      template <int dim>
      Base<dim>::Parameters::Parameters ()
		      :
		      initial_regularization_parameter (1e10),
		      regularization_functional (Regularization::L2_norm),
		      use_information_for_regularization (false),
		      initial_refinement (0),
		      refinement_fraction (0,0),
		      max_n_cells (1000000000),
		      write_refinement_indicators (false)
      {}
  


      template <int dim>
      void
      Base<dim>::Parameters::
      declare_parameters (ParameterHandler &prm)
      {
	prm.enter_subsection ("Distributed parameter field");
	{
	  prm.declare_entry ("Regularization functional", "L2 norm",
			     Patterns::Selection (Field::
						  Regularization::
						  get_regularization_functional_names()));
	  prm.declare_entry ("Regularization parameter", "1e10",
			     Patterns::Double(),
			     "The initial value of the regularization parameter");
	  prm.declare_entry ("Use information for regularization", "false",
			     Patterns::Bool(),
			     "Whether we shall use the information content associated "
			     "with each parameter degree of freedom to adjust regularization "
			     "of individual parameters");

	  prm.enter_subsection ("Regularization strategy");
	  {
	    prm.declare_entry ("Strategy", "fixed",
			       Patterns::Selection ("fixed|reduce with misfit"),
			       "Definition of the strategy by which the regularization "
			       "parameter shall be modified as iterations proceed");
	    prm.declare_entry ("Minimal misfit ratio", "3",
			       Patterns::Double (),
			       "The minimal ratio of data to model misfit "
			       "that we would like to keep, by reducing the "
			       "regularization parameter");
	  }
	  prm.leave_subsection();
	  
	  prm.declare_entry ("Initial refinement", "0",
			     Patterns::Integer());
	  prm.declare_entry ("Refinement fraction", "0.30",
			     Patterns::Double());
	  prm.declare_entry ("Coarsening fraction", "0.05",
			     Patterns::Double());
	  prm.declare_entry ("Maximal number of cells", "1000000000",
			     Patterns::Integer(1,Patterns::Integer::max_int_value),
			     "A limit on the number of cells we want to have in the "
			     "parameter discretization. If we approach or exceed this number of cells, "
			     "the algorithm tries to refine so that we reach this "
			     "number, but it is clear that this is only going to be an "
			     "approximation");
	  
	  prm.declare_entry ("Write refinement indicators", "false",
			     Patterns::Bool ());
	  prm.declare_entry ("Output grids", "false",
			     Patterns::Bool ());
	}
	prm.leave_subsection ();
	
	Field::FiniteElements<dim>::Parameters
	  ::declare_parameters (prm);
      }
  
  


      template <int dim>
      void
      Base<dim>::Parameters::
      parse_parameters (ParameterHandler &prm)
      {
	prm.enter_subsection ("Distributed parameter field");
	{
	  regularization_functional
	    =
	    Field::Regularization::
	    parse_regularization_functional_name(prm.get ("Regularization functional"));
    
	  initial_regularization_parameter
	    = prm.get_double ("Regularization parameter");

	  use_information_for_regularization
	    = prm.get_bool ("Use information for regularization");
	  
	  prm.enter_subsection ("Regularization strategy");
	  {
	    if (prm.get("Strategy") == "fixed")
	      regularization_parameter_strategy.strategy
		= RegularizationParameterStrategy::fixed;
	    else if (prm.get("Strategy") == "reduce with misfit")
	      regularization_parameter_strategy.strategy
		= RegularizationParameterStrategy::reduce_with_misfit;
	    else
	      AssertThrow (false, ExcNotImplemented());

	    regularization_parameter_strategy.minimal_misfit_ratio
	      = prm.get_double ("Minimal misfit ratio");
	  }
	  prm.leave_subsection ();
	  
	  initial_refinement = prm.get_integer ("Initial refinement");
	  refinement_fraction.first   = prm.get_double ("Refinement fraction");
	  refinement_fraction.second  = prm.get_double ("Coarsening fraction");
	  max_n_cells                 = prm.get_integer ("Maximal number of cells");
	  write_refinement_indicators = prm.get_bool ("Write refinement indicators");
	  output_grids                = prm.get_bool ("Output grids");
	}
	prm.leave_subsection ();
    
	finite_element.parse_parameters (prm);    
      }



      template <int dim>
      void
      Base<dim>::Parameters::delete_parameters ()
      {
	initial_regularization_parameter    = 1e10;
	regularization_functional   = Regularization::L2_norm;
	regularization_parameter_strategy
	  = RegularizationParameterStrategy();
	use_information_for_regularization = false;
	initial_refinement          = 0;
	refinement_fraction         = std::make_pair (0., 0.);
	max_n_cells          = 1000000000;
	write_refinement_indicators = false;
      }



      template <int dim>
      Base<dim>::Parameters::RegularizationParameterStrategy::
      RegularizationParameterStrategy ()
		      :
		      strategy (fixed),
		      minimal_misfit_ratio (3)
      {}
      

  
/* -------------------- Base ---------------- */
  

      template <int dim>
      Base<dim>::
      Base (const Parameters               &parameters,
	    const GlobalParameters<dim>    &global_parameters,
	    const ParameterAssociation      parameter_association,
	    Triangulations                 *triangulations,
	    FiniteElements                 *finite_elements,
	    const Bounds::Base<dim>        &parameter_bounds,
	    const Function<dim>            &exact_coefficient)
		      :
		      libparest::Parameter::Base (),
		      DiscretizedField<dim> (triangulations,
					     finite_elements,
					     parameter_bounds),
		      global_parameters (&global_parameters),
		      parameters (&parameters),
		      R_reference (R),
		      M_reference (M),
		      regularization_functional (Regularization::create_regularization_functional<dim>
						 (parameters.regularization_functional,
						  parameters.use_information_for_regularization)),
		      exact_coefficient (&exact_coefficient),
		      parameter_association (parameter_association),
		      present_regularization_parameter (parameter_association == master ?
							parameters.initial_regularization_parameter
							:
							-1e12)
      {
	regularization_functional->make_sparsity_pattern (*this->dof_handlers,
							  this->parameter_sparsity);
      }




      template <int dim>
      Base<dim>::~Base ()
      {
					 
					 
	finalize ();
      }



      template <int dim>
      void
      Base<dim>::
      end_gauss_newton_step ()
      {
	present_statistics->n_dofs = this->dof_handlers->parameter.n_dofs();
	libparest::Parameter::Base::end_gauss_newton_step ();

					 
					 
					 
	present_statistics = 0;
      }



      template <int dim>
      unsigned int
      Base<dim>::n_dofs () const 
      {
	return this->dof_handlers->parameter.n_dofs();
      }




      template <int dim>
      void
      Base<dim>::
      finalize ()
      {    
	M.clear ();
	R.clear ();

	delete_ptr (this->dof_handlers);
	delete_ptr (this->finite_elements);
	delete_ptr (this->triangulations);
	delete_ptr (regularization_functional);
      }



      template <int dim>
      void
      Base<dim>::
      preset_initial_values (Vector<double> &present_iterate) const
      {
	present_iterate.reinit (this->n_dofs());

					 
					 
					 
					 
	this->set_to_mean_of_bounds (present_iterate);

					 
					 
					 
					 
					 
					 
	this->dof_handlers->parameter_constraints.distribute (present_iterate);
      }


  
      template <int dim>
      double
      Base<dim>::
      compute_inverse_mass_norm_square (const Vector<double> &v) const
      {
					 
					 
					 
					 
					 
					 
	if (M.m() == 1)
	  return v(0) * v(0)/M(0,0);
	else
	  {
	    Vector<double> w(v.size());

            // For the SPEC benchmark 510.parest version, given the problem it works on, 
            // for this call to the Conjugate Gradient method, we would expect zero or one 
            // iterations if we could do exact arithmetic.  In fact, with low optimization, 
            // we actually do get either zero or one iterations; but at higher opt, minor 
            // FP differences can cause more iterations.  Therefore, we cap the iterations 
            // at 1 (and the small criterion below is therefore redundant)
	    SolverControl control(std::min (1U,
					    M.m()),
				  1e-100);
	    PrimitiveVectorMemory<Vector<double> > memory;
	    SolverCG<> cg (control, memory);
	    PreconditionSSOR<> preconditioner;
	    preconditioner.initialize (M, 1.0);
	    try
	      {
		cg.solve (M, w, v, preconditioner);
	      }
	    catch (SolverControl::NoConvergence &)
	      {
		// ignore that we can't reach the tolerance
	      }
	    
	    return w*v;
	  };
      }



  
      template <int dim>
      void
      Base<dim>::
      set_back_to_bounds (Vector<double> &v) const
      {
	DiscretizedField<dim>::set_back_to_bounds (v);
      }



      template <int dim>
      bool
      Base<dim>::
      satisfies_bounds (const Vector<double> &v) const
      {
	return DiscretizedField<dim>::satisfies_bounds (v);
      }



      template <int dim>
      void
      Base<dim>::
      at_lower_bounds (const Vector<double> &v,
		       std::vector<bool>    &flags) const
      {
	DiscretizedField<dim>::at_lower_bounds (v, flags);
      }



      template <int dim>
      void
      Base<dim>::
      at_upper_bounds (const Vector<double> &v,
		       std::vector<bool>    &flags) const
      {
	DiscretizedField<dim>::at_upper_bounds (v, flags);
      }



      template <int dim>
      void
      Base<dim>::
      satisfy_constraints (const Vector<double> &present_iterate,
			   Vector<double>       &update) const
      {
	Assert (present_iterate.size() == this->dof_handlers->parameter.n_dofs(),
		ExcInternalError());
	Assert (update.size() == present_iterate.size(), ExcInternalError());

	this->dof_handlers->parameter_constraints.distribute (update);
      }
    


      template <int dim>
      const typename Base<dim>::MatrixRepresentation &
      Base<dim>::get_regularization_matrix () const
      {
	return R_reference;
      }



      template <int dim>
      const typename Base<dim>::MatrixRepresentation &
      Base<dim>::get_mass_matrix () const
      {
	return M_reference;
      }



      template <int dim>
      void
      Base<dim>::
      scale_information_content_to_density (const Vector<float> &content,
					    Vector<float>       &density) const
      {
					 
					 
	Assert (this->dof_handlers->parameter.get_fe().dofs_per_cell == 1,
		ExcNotImplemented());
	Assert (this->dof_handlers->parameter.n_dofs() == content.size(),
		ExcInternalError());
	Assert (density.size() == content.size(), ExcInternalError());
	
	density = content;
	for (typename DoFHandler<dim>::active_cell_iterator
	       cell = this->dof_handlers->parameter.begin_active();
	     cell !=  this->dof_handlers->parameter.end(); ++cell)
	  density(cell->dof_index(0)) /= cell->measure();
      }
      


  
      template <int dim>
      void
      Base<dim>::
      write_solution (const Vector<double> &present_iterate) const 
      {
					 
	DataOut<dim> data_out;
	data_out.attach_dof_handler (this->dof_handlers->parameter);
	data_out.add_data_vector (present_iterate, "a",
				  DataOut<dim>::type_dof_data);

					 
					 
					 
					 
					 
	Vector<float> information_density (this->information_per_dof.size());
	this->scale_information_content_to_density (this->information_per_dof,
						    information_density);
	
	data_out.add_data_vector (information_density,
				  "information_density",
				  DataOut<dim>::type_dof_data);
				  
	data_out.build_patches ();

	DataOutBase::EpsFlags eps_flags;
	eps_flags.azimut_angle = 0;
	eps_flags.turn_angle = 0;
	eps_flags.draw_mesh = true;
	eps_flags.color_function = &DataOutBase::EpsFlags::reverse_grey_scale_color_function;

	data_out.set_flags (eps_flags);
    
					 
	typename DataOut<dim>::OutputFormat output_format
	  = DataOut<dim>::parse_output_format (global_parameters->output_format);    
	const std::string filename = 
	  global_parameters->output_directory
	  + Utilities::int_to_string(get_iteration_number(),3)
	  + "-m"
	  + Utilities::int_to_string(0, Utilities::needed_digits(global_parameters->n_experiments))
	  + data_out.default_suffix(output_format);
	std::ofstream out(filename.c_str());
	AssertThrow (out, ExcIO());
	data_out.write (out, output_format);
      }



      template <int dim>
      void
      Base<dim>::
      build_matrices (const Vector<double> &linearization_point)
      {
	Threads::ThreadGroup<> threads;
	threads += Threads::spawn (*this,
				   &Base<dim>::build_R)
		   (linearization_point);
	threads += Threads::spawn (*this,
				   &Base<dim>::build_M)();
	threads.join_all ();
      }

  

      template <int dim>
      void
      Base<dim>::build_M () 
      {
					 
	this->M.reinit (this->parameter_sparsity);

					 
	const unsigned int n_threads = multithread_info.n_default_threads;
	Threads::ThreadMutex   mutex;
	Threads::ThreadGroup<> threads;

					 
					 
	std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	  = Threads::split_interval (0, this->triangulations->parameter.n_active_cells(),
				     n_threads);


					 
	for (unsigned int thread=0; thread<n_threads; ++thread)
	  threads += Threads::spawn (*this, &Base<dim>::build_M_1)
		     (thread_ranges[thread].first, thread_ranges[thread].second,
		      mutex);
	threads.join_all ();

					 
					 
	this->dof_handlers->parameter_constraints.condense (this->M);
      }
  





      template <int dim>
      void
      Base<dim>::build_M_1 (const unsigned int    begin,
			    const unsigned int    end,
			    Threads::ThreadMutex &mutex)
      {
	const FiniteElement<dim> &fe = this->finite_elements->fe;
	const unsigned int dofs_per_cell    = fe.dofs_per_cell,
			   n_q_points       = this->finite_elements
					      ->quadrature.n_quadrature_points;
  
	FEValues<dim>  fe_values (fe, this->finite_elements->quadrature,
				  UpdateFlags(update_values     |
					      update_JxW_values));

					 
					 
	std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);
  
					 
	FullMatrix<double> cell_matrix (dofs_per_cell, dofs_per_cell);

	typename DoFHandler<dim>::active_cell_iterator
	  cell = this->dof_handlers->parameter.begin_active(),
	  endc = cell;
	std::advance (cell, static_cast<signed int>(begin));
	std::advance (endc, static_cast<signed int>(end));
  
	for (; cell!=endc; ++cell)
	  {
	    fe_values.reinit (cell);
	    cell_matrix = 0;
	    cell->get_dof_indices (dof_indices_on_cell);

					     
					     
					     
					     
	    for (unsigned int i=0; i<dofs_per_cell; ++i)
	      for (unsigned int j=i; j<dofs_per_cell; ++j)
		if (fe.system_to_component_index(i).first ==
		    fe.system_to_component_index(j).first)
		  for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
		    cell_matrix (i,j) += (fe_values.shape_value(i,q_point) *
					  fe_values.shape_value(j,q_point) *
					  fe_values.JxW(q_point));
	
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
					     
	    mutex.acquire ();
	    for (unsigned int i=0; i<dofs_per_cell; ++i)
	      for (unsigned int j=0; j<dofs_per_cell; ++j)
		this->M.add (dof_indices_on_cell[i], dof_indices_on_cell[j],
			     static_cast<float>(cell_matrix(i,j) != 0 ?
						cell_matrix(i,j) :
						cell_matrix(j,i)));
	    mutex.release ();      
	  };
      }



      template <int dim>
      void
      Base<dim>::
      refine_parameterization (const Vector<float>  &parameter_error,
			       const unsigned int    pe_type,
			       const Vector<double> &old_parameter_values,
			       Vector<double>       &new_parameter_values,
			       std::vector<bool>    &refinement_indicators,
			       std::vector<bool>    &coarsening_indicators)
      {
	Assert (old_parameter_values.size() == this->n_dofs(), ExcInternalError());

	refinement_indicators.resize (this->dof_handlers->triangulations
				      ->parameter.n_active_cells());
    
	if ((parameters->output_grids == true) &&
	    (parameter_association == master))
	  {
	    const std::string
	      filename = (this->global_parameters->output_directory
			  + Utilities::int_to_string(this->get_iteration_number(),3)
			  + "-m"
			  + Utilities::int_to_string(0, Utilities::needed_digits(this->global_parameters->n_experiments))
			  + ".grid.eps");
	    std::ofstream out (filename.c_str());
	    AssertThrow (out, ExcIO());
	    GridOut().write_eps (this->triangulations->parameter, out);
	  };

					 
					 
					 
					 
					 
					 
					 
	Vector<float> refinement_criteria (this->triangulations->parameter
					   .n_active_cells());
	get_refinement_criteria (parameter_error, pe_type,
				 old_parameter_values, refinement_criteria);

					 
					 
					 
					 
					 
					 
	if ((parameters->write_refinement_indicators == true) &&
	    (parameter_association == master))
	  {
	    DataOut<dim> data_out;
	    data_out.attach_dof_handler (this->dof_handlers->parameter);

					     
					     
	    Vector<double> rc(refinement_criteria.begin(), refinement_criteria.end());
	    data_out.add_data_vector(rc, "refinement_criteria");
	    data_out.build_patches ();

	    typename DataOut<dim>::OutputFormat output_format
	      = DataOut<dim>::parse_output_format (this->global_parameters->output_format);    
	    const std::string filename = 
	      this->global_parameters->output_directory
	      + Utilities::int_to_string(this->get_iteration_number(),3)
	      + "-m"
	      + Utilities::int_to_string(0, Utilities::needed_digits(this->global_parameters->n_experiments))
	      + ".refinement" 
	      + data_out.default_suffix (output_format);
	    std::ofstream out(filename.c_str());
	    AssertThrow (out, ExcIO());
	    data_out.write (out, output_format);  
	  };

					 
					 
	Assert (*std::min_element (refinement_criteria.begin(),
				   refinement_criteria.end()) >= 0,
		ExcInternalError());

					 
					 
					 
					 
	SolutionTransfer<dim> soltrans (this->dof_handlers->parameter);
	GridRefinement::
	  refine_and_coarsen_fixed_fraction (this->triangulations->parameter,
					     refinement_criteria,
					     this->parameters->refinement_fraction.first,
					     this->parameters->refinement_fraction.second,
					     this->parameters->max_n_cells);

                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
	this->triangulations->parameter.prepare_coarsening_and_refinement();
        for (typename Triangulation<dim>::cell_iterator
               cell=this->triangulations->parameter.begin();
             cell != this->triangulations->parameter.end(); ++cell)
          if (cell->has_children())
            {
              bool all_children_want_coarsening = true;
              for (unsigned int c=0;
                   c<cell->n_children(); ++c)
                if (cell->child(c)->has_children()
                    ||
                    !cell->child(c)->coarsen_flag_set ())
                  {
                    all_children_want_coarsening = false;
                    break;
                  }

                                               
                                               
                                               
              if (all_children_want_coarsening == false)
                continue;

                                               
                                               
                                               
                                               
                                               
                                               
              bool sufficient_neighbors = false;
              switch (dim)
                {
                  case 1:
                        sufficient_neighbors
                          = (!cell->at_boundary(0) ||
                             !cell->at_boundary(1));
                        break;
                        
                  case 2:
                        sufficient_neighbors
                          = ((!cell->at_boundary(0) ||
                              !cell->at_boundary(1))
                             &&
                             (!cell->at_boundary(2) ||
                              !cell->at_boundary(3)));
                        break;
                        
                  case 3:
                        sufficient_neighbors
                          = ((!cell->at_boundary(0) ||
                              !cell->at_boundary(1))
                             &&
                             (!cell->at_boundary(2) ||
                              !cell->at_boundary(3))
                             &&
                             (!cell->at_boundary(4) ||
                              !cell->at_boundary(5)));
                        break;

                  default:
                        Assert (false, ExcNotImplemented());
                }

              if (sufficient_neighbors == false)
                for (unsigned int c=0;
                     c<cell->n_children(); ++c)
                  cell->child(c)->clear_coarsen_flag ();
            } 

                                         
	this->triangulations->parameter.prepare_coarsening_and_refinement();
	soltrans.prepare_for_coarsening_and_refinement(old_parameter_values);
	this->triangulations->parameter.save_refine_flags (refinement_indicators);
	this->triangulations->parameter.save_coarsen_flags (coarsening_indicators);
	this->triangulations->parameter.execute_coarsening_and_refinement ();
  
					 
					 
					 
					 
	this->dof_handlers->reinitialize ();
        new_parameter_values.reinit (this->dof_handlers->parameter.n_dofs());
	regularization_functional->make_sparsity_pattern (*this->dof_handlers,
							  this->parameter_sparsity);

					 
	soltrans.interpolate (old_parameter_values,
			      new_parameter_values);

					 
					 
	this->dof_handlers->parameter_constraints.distribute (new_parameter_values);

					 
	this->recompute_bounds ();
					 
					 
					 
					 
					 
	this->set_back_to_bounds (new_parameter_values);
      }


  
      template <int dim>
      void
      Base<dim>::
      build_R (const Vector<double> &linearization_point) 
      {
					 
					 
	this->R.reinit (this->parameter_sparsity);
	this->regularization_functional->build_R (*this->dof_handlers,
						  linearization_point,
						  get_present_regularization_parameter(),
						  this->information_per_dof,
						  this->R);

					 
					 
	this->dof_handlers->parameter_constraints.condense (this->R);
      }




      template <int dim>
      void
      Base<dim>::
      build_rhs (const Vector<double> &linearization_point,
		 Vector<double>       &output_vector) const
      {
					 
	output_vector.reinit (linearization_point.size());

					 
	this->regularization_functional->build_rhs (*this->dof_handlers,
						    linearization_point,
						    get_present_regularization_parameter(),
						    this->information_per_dof,
						    output_vector);

					 
					 
	this->dof_handlers->parameter_constraints.condense (output_vector);

					 
					 
					 
      }



      template <int dim>
      void
      Base<dim>::
      beta_r_prime (const DoFHandler<dim>        &dof_handler,
		    const unsigned int            component,
		    const Vector<double>         &present_iterate,
		    const Vector<double>         &weights,
		    Vector<float>                &output_vector) const
      {
	this->regularization_functional->beta_r_prime (dof_handler, component,
						       present_iterate, weights,
						       get_present_regularization_parameter(),
						       this->information_per_dof,
						       output_vector);
      }  



      template <int dim>
      double
      Base<dim>::
      compute_model_misfit (const Vector<double> &present_iterate) const
      {
					 
					 
					 
					 
					 
					 
					 
	if (this->get_iteration_number() == static_cast<unsigned int>(-1))
	  return (this->regularization_functional
		  ->model_misfit (*this->dof_handlers, present_iterate,
				  get_present_regularization_parameter(),
				  Vector<float>(this->dof_handlers->parameter.n_dofs())));
	else
	  return (this->regularization_functional
		  ->model_misfit (*this->dof_handlers, present_iterate,
				  get_present_regularization_parameter(),
				  this->information_per_dof));
      }



      template <int dim>
      void
      Base<dim>::
      consider_misfits (const double data_misfit,
			const double model_misfit)
      {
	switch (parameters->regularization_parameter_strategy.strategy)
	  {
	    case Parameters::RegularizationParameterStrategy::fixed:
	    {
					       
					       
					       
	      break;
	    }

	    case Parameters::RegularizationParameterStrategy::reduce_with_misfit:
	    {
	      const double minimal_misfit_ratio
		= parameters->regularization_parameter_strategy.minimal_misfit_ratio;
	      
	      if (data_misfit < minimal_misfit_ratio*model_misfit)
		{
		  const double new_value
		    = std::max (get_present_regularization_parameter() *
				(data_misfit/(minimal_misfit_ratio*model_misfit)),
				get_present_regularization_parameter() / minimal_misfit_ratio);
		  
		  present_regularization_parameter = new_value;
		}

	      break;
	    }

	    default:
		  Assert (false, ExcNotImplemented());
	  }
      }
      



      template <int dim>
      double
      Base<dim>::
      compute_model_error (const Vector<double> &present_iterate) const
      {  
					 
	const unsigned int n_threads = multithread_info.n_default_threads;
	std::vector<double> misfit_part (n_threads);

					 
					 
	std::vector<std::pair<unsigned int, unsigned int> > thread_ranges
	  = Threads::split_interval (0, this->triangulations->parameter.n_active_cells(),
				     n_threads);


					 
	std::vector<Threads::Thread<double> > threads;
	for (unsigned int thread=0; thread<n_threads; ++thread)
	  threads.push_back (Threads::spawn (*this,
					     &Base<dim>::compute_model_error_1)
			     (present_iterate, thread_ranges[thread].first,
			      thread_ranges[thread].second));

	double model_error_sqr = 0;
	for (unsigned int thread=0; thread<n_threads; ++thread)
	  model_error_sqr += threads[thread].return_value ();

	return std::sqrt(model_error_sqr);
      }



      template <int dim>
      double
      Base<dim>::
      compute_model_error_1 (const Vector<double> &present_iterate,
			     const unsigned int    begin,
			     const unsigned int    end) const
      {
	QTrapez<1> q_trapez;
	QIterated<dim> quadrature (q_trapez, 4);
	const unsigned int n_q_points = quadrature.n_quadrature_points;
  

	const FiniteElement<dim> &fe_parameter = this->finite_elements->fe;
    
	FEValues<dim>  fe_values (fe_parameter, quadrature,
				  UpdateFlags(update_values     |
					      update_JxW_values |
					      update_q_points));
    
	std::vector<double> iterate_values (n_q_points);
	std::vector<double> exact_values (n_q_points);
  
	typename DoFHandler<dim>::active_cell_iterator
	  cell = this->dof_handlers->parameter.begin_active(),
	  endc = this->dof_handlers->parameter.begin_active();
	std::advance (cell, static_cast<signed int>(begin));
	std::advance (endc, static_cast<signed int>(end));

	double error = 0;
  
	for (; cell!=endc; ++cell)
	  {
	    fe_values.reinit (cell);

					     
					     
					     
	    fe_values.get_function_values (present_iterate, iterate_values);
	    exact_coefficient->value_list (fe_values.get_quadrature_points(),
					   exact_values);
      
	    const std::vector<double> &JxW_values = fe_values.get_JxW_values ();

	    for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
					       
	      error += ((iterate_values[q_point] - exact_values[q_point]) *
			(iterate_values[q_point] - exact_values[q_point]) *
			JxW_values[q_point]);
	  };

	return error;
      }



      template <int dim>
      double
      Base<dim>::get_present_regularization_parameter () const
      {
	Assert (parameter_association == master,
		ExcInternalError());

	return present_regularization_parameter;
      }
      
      
  

/* -------------------- Base::Matrix ---------------- */
  
  
      template <int dim>
      Base<dim>::
      MatrixRepresentation::MatrixRepresentation (const SparseMatrix<double> &M) :
		      M (&M)
      {}



      template <int dim>
      Base<dim>::
      MatrixRepresentation::~MatrixRepresentation ()
      {}



      template <int dim>
      void
      Base<dim>::
      MatrixRepresentation::vmult (Vector<double>       &out,
				   const Vector<double> &in) const
      {
	M->vmult (out, in);
      }



      template <int dim>
      void
      Base<dim>::
      MatrixRepresentation::
      multiple_vmult (std::vector<Vector<double> >       &out,
                      const std::vector<Vector<double> > &in) const
      {
        Assert (out.size() == in.size(), ExcInternalError());

        for (unsigned int i=0; i<in.size(); ++i)
          M->vmult (out[i], in[i]);
      }



      template <int dim>
      void
      Base<dim>::
      MatrixRepresentation::solve (Vector<double>          &x,
				   const Vector<double>    &b,
				   const std::vector<bool> &inactive_parameters) const
      {
					 
					 
	std::map<unsigned int,double> constraints;
	std::vector<bool>::const_iterator ci = inactive_parameters.begin();
	for (unsigned int i=0; ci!=inactive_parameters.end(); ++i, ++ci)
	  if (*ci == true)
	    constraints[i] = 0.0;
	FilteredMatrix<Vector<double> > filtered_matrix(*M);
	filtered_matrix.add_constraints (constraints);
  
	Vector<double> modified_rhs;
	modified_rhs = b;
	filtered_matrix.apply_constraints (modified_rhs, true);
  
					 
					 
        // For the SPEC benchmark version 510.parest, cap number of iterations, for more
        // comparable work, despite minor FP differences.  The small criterion is an 
        // additional cap: in cases where the solver would normally exit after 0 or 1 
        // iterations, but does not due to minor FP diffs, then it will soon exit 
        // when it hits the criterion.
	SolverControl           solver_control (std::min(50U,
							 modified_rhs.size()),
						1e-100);
	PrimitiveVectorMemory<> vector_memory;
	SolverCG<>              cg (solver_control, vector_memory);

	PreconditionJacobi<SparseMatrix<double> > preconditioner;
	preconditioner.initialize(*M, 1.0);

	try
	  {
	    cg.solve (filtered_matrix, x, modified_rhs, preconditioner);
	  }
	catch (SolverControl::NoConvergence &)
	  {
	    // ignore the fact that we can't reach a tolerance of zero
	  }
      }




/* -------------------- ScalarField ---------------- */  


      template <int dim>
      ScalarField<dim>::
      ScalarField (const Parameters                      &parameters,
		   const GlobalParameters<dim>           &global_parameters,
		   const ParameterAssociation             parameter_association,
		   const Triangulation<dim>              &coarse_grid,
		   const Bounds::Base<dim>               &parameter_bounds,
		   const Function<dim>                   &exact_coefficient)
		      :
		      libparest::Parameter::Field::Base<dim>
                      (parameters,
		       global_parameters,
		       parameter_association,
		       new typename libparest::Parameter::Field::Base<dim>::Triangulations
		       (coarse_grid,
			GridTransfer::Global<dim> (parameters.initial_refinement)),
		       new Parameter::Field::FiniteElements<dim> (parameters.finite_element),
		       parameter_bounds,
		       exact_coefficient)
      {
					 
					 
	Assert (this->finite_elements->fe.n_components() == 1, ExcInternalError());
	Assert (exact_coefficient.n_components == 1, ExcInternalError());
      }



      template <int dim>
      ScalarField<dim>::
      ScalarField (const Parameters               &parameters,
		   const GlobalParameters<dim>    &global_parameters,
		   const ParameterAssociation     parameter_association,
		   const Triangulation<dim>       &coarse_grid,
		   const GridTransfer::Base<dim>  &mesh_refinement,
		   const Bounds::Base<dim>        &parameter_bounds,
		   const Function<dim>            &exact_coefficient)
		      :
		      libparest::Parameter::Field::Base<dim>
                      (parameters,
		       global_parameters,
		       parameter_association,
		       new typename libparest::Parameter::Field::Base<dim>::Triangulations
		       (coarse_grid, mesh_refinement),
		       new Parameter::Field::FiniteElements<dim> (parameters.finite_element),
		       parameter_bounds,
		       exact_coefficient)
      {
					 
					 
	Assert (this->finite_elements->fe.n_components() == 1, ExcInternalError());
	Assert (exact_coefficient.n_components == 1, ExcInternalError());
      }



      template <int dim>
      void
      ScalarField<dim>::
      end_gauss_newton_step ()
      {
	typedef typename libparest::Parameter::Field::Base<dim>::PerStepStatistics
	  PerStepStatistics;
    
	Assert (dynamic_cast<PerStepStatistics&>(*this->present_statistics)
		.regularization_parameters.size() == 1,
		ExcInternalError());
    
	dynamic_cast<PerStepStatistics&>(*this->present_statistics)
	  .regularization_parameters[0]
	  = this->get_present_regularization_parameter();

	libparest::Parameter::Field::Base<dim>::end_gauss_newton_step ();
      }



      template <int dim>
      libparest::PerStepStatistics *
      ScalarField<dim>::
      create_and_set_statistics_object ()
      {
					 
					 
					 
	this->present_statistics
	  = new typename libparest::Parameter::Field::Base<dim>::PerStepStatistics(1);
	return this->present_statistics;
      }
  
  

      template <int dim>
      void
      ScalarField<dim>::
      compute_gamma_indicators (const Vector<double> &present_iterate,
				const Vector<float>  &gamma_in,
				Vector<float>        &indicators) const
      {
	const unsigned int n_active_cells
	  = this->triangulations->parameter.n_active_cells();
	Assert (gamma_in.size() == n_active_cells*GeometryInfo<dim>::max_children_per_cell,
		ExcInternalError());
	Assert (indicators.size() == n_active_cells, ExcInternalError());

	std::vector<bool> at_lower_bound (present_iterate.size());
	std::vector<bool> at_upper_bound (present_iterate.size());

	Vector<double> gamma;
	gamma = gamma_in;

	Threads::ThreadGroup<> threads;
    
					 
					 
					 
	threads += Threads::spawn (*this->regularization_functional,
				   &Regularization::Base<dim>::beta_r_prime_on_subcells)
		   (*this->dof_handlers, present_iterate,
		    this->get_present_regularization_parameter(),
		    this->information_per_dof,
		    gamma);

					 
					 
					 
	threads += Threads::spawn (*static_cast<const libparest::Parameter::Base*>(this),
				   &libparest::Parameter::Base::at_upper_bounds)
		   (present_iterate, at_upper_bound);
	threads += Threads::spawn (*static_cast<const libparest::Parameter::Base*>(this),
				   &libparest::Parameter::Base::at_lower_bounds)
		   (present_iterate, at_lower_bound);
	threads.join_all ();
  
					 
					 
					 
	unsigned subcell_index = 0;
	double gamma_l2_norm = 0;
	typename DoFHandler<dim>::active_cell_iterator
	  cell = this->dof_handlers->parameter.begin_active();
	const unsigned int
	  dofs_per_cell = this->dof_handlers->parameter.get_fe().dofs_per_cell;
	std::vector<unsigned int> local_dof_indices (dofs_per_cell);
	for (unsigned int cell_index=0; cell_index<n_active_cells; ++cell_index, ++cell)
	  {
	    const double subcell_size = cell->measure() /
					GeometryInfo<dim>::max_children_per_cell;
	
	    for (unsigned int c=0; c<GeometryInfo<dim>::max_children_per_cell; ++c)
	      {
		const double this_gamma = gamma(subcell_index);

						 
						 
						 
		indicators(cell_index) += std::fabs(this_gamma);

						 
						 
						 
						 
						 
						 
						 
						 
		cell->get_dof_indices (local_dof_indices);
		bool one_dof_at_bound = false;
		for (unsigned int i=0; i<dofs_per_cell; ++i)
		  if (at_lower_bound[local_dof_indices[i]] ||
		      at_upper_bound[local_dof_indices[i]])
		    {
		      one_dof_at_bound = true;
		      break;
		    };
		if (one_dof_at_bound == false)
		  gamma_l2_norm += this_gamma * this_gamma / subcell_size;

		++subcell_index;
	      };
	  };
	Assert (subcell_index == gamma.size(), ExcInternalError());

	gamma_l2_norm = std::sqrt(gamma_l2_norm);
      }



      template <int dim>
      void
      ScalarField<dim>::
      compute_derivative_indicators (const Vector<double> &present_iterate,
				     Vector<float>        &indicators) const
      {
					 
	const FiniteElement<dim> &fe = this->dof_handlers->parameter.get_fe();
    
	if ((dynamic_cast<const FE_DGQ<dim>*>(&fe) != 0)
	    &&
	    (dynamic_cast<const FE_DGQ<dim>*>(&fe)->get_degree() == 0))
	  {
	    DerivativeApproximation
	      ::approximate_gradient (this->dof_handlers->parameter,
				      present_iterate, indicators, 0);
 
	    Vector<float>::iterator cell_gradient = indicators.begin();
	    for (typename DoFHandler<dim>::active_cell_iterator
		   cell=this->dof_handlers->parameter.begin_active();
		 cell!=this->dof_handlers->parameter.end();
		 ++cell, ++cell_gradient)
          *cell_gradient *= cell->diameter() * std::sqrt(cell->measure());
	  }
					 
	else if ((dynamic_cast<const FE_DGQ<dim>*>(&fe) != 0)
		 &&
		 (dynamic_cast<const FE_DGQ<dim>*>(&fe)->get_degree() == 1))
	  {
	    DerivativeApproximation
	      ::approximate_second_derivative (this->dof_handlers->parameter,
					       present_iterate, indicators, 0);
	    Vector<float>::iterator cell_gradient = indicators.begin();
	    for (typename DoFHandler<dim>::active_cell_iterator
		   cell=this->dof_handlers->parameter.begin_active();
		 cell!=this->dof_handlers->parameter.end();
		 ++cell, ++cell_gradient)
	      *cell_gradient *= cell->diameter() *
				cell->diameter() *
                std::sqrt(cell->measure());
	  }
	else
	  AssertThrow (false, ExcNotImplemented());
      }
  

  


      template <int dim>
      void
      ScalarField<dim>::
      get_refinement_criteria (const Vector<float>  &parameter_error,
			       const unsigned int    pe_type,
			       const Vector<double> &old_parameter_values,
			       Vector<float>        &refinement_criteria)
      {
	Assert (refinement_criteria.size() ==
		this->triangulations->parameter.n_active_cells(),
		ExcInternalError());
    
	switch (pe_type)
	  {
	    case none:
		  Assert (parameter_error.size() == 0, ExcInternalError());
		  compute_derivative_indicators (old_parameter_values,
						 refinement_criteria);
		  break;

	    case dwr:
		  Assert (parameter_error.size() == refinement_criteria.size(),
			  ExcInternalError());
		  refinement_criteria = parameter_error;
		  break;
	      
	    case gamma:
		  compute_gamma_indicators (old_parameter_values,
					    parameter_error,
					    refinement_criteria);
		  break;

	    default:
		  Assert (false, ExcNotImplemented());
	  };
      }



/* -------------------- VectorField ---------------- */  


      template <int dim>
      VectorField<dim>::
      VectorField (const Parameters                      &parameters,
		   const GlobalParameters<dim>           &global_parameters,
		   const ParameterAssociation             parameter_association,
		   const Triangulation<dim>              &coarse_grid,
		   const Bounds::Base<dim>               &parameter_bounds,
		   const Function<dim>                   &exact_coefficient)
		      :
		      libparest::Parameter::Field::Base<dim> (parameters,
							      global_parameters,
							      parameter_association,
							      new typename libparest::Parameter::Field::Base<dim>::Triangulations
							      (coarse_grid,
							       GridTransfer::Global<dim> (parameters.initial_refinement)),
							      new Parameter::Field::FiniteElements<dim> (parameters.finite_element),
							      parameter_bounds,
							      exact_coefficient)
      {  }



      template <int dim>
      VectorField<dim>::
      VectorField (const Parameters               &parameters,
		   const GlobalParameters<dim>    &global_parameters,
		   const ParameterAssociation      parameter_association,
		   const Triangulation<dim>       &coarse_grid,
		   const GridTransfer::Base<dim>  &mesh_refinement,
		   const Bounds::Base<dim>        &parameter_bounds,
		   const Function<dim>            &exact_coefficient)
		      :
		      libparest::Parameter::Field::Base<dim> (parameters,
							      global_parameters,
							      parameter_association,
							      new typename libparest::Parameter::Field::Base<dim>::Triangulations
							      (coarse_grid,
							       mesh_refinement),
							      new Parameter::Field::FiniteElements<dim> (parameters.finite_element),
							      parameter_bounds,
							      exact_coefficient)
      {  }
      


      template <int dim>
      void
      VectorField<dim>::
      end_gauss_newton_step ()
      {
	typedef typename libparest::Parameter::Field::Base<dim>::PerStepStatistics
	  PerStepStatistics;
    
	Assert (dynamic_cast<PerStepStatistics&>(*this->present_statistics)
		.regularization_parameters.size() == 1,
		ExcInternalError());
    
	dynamic_cast<PerStepStatistics&>(*this->present_statistics)
	  .regularization_parameters[0]
	  = this->get_present_regularization_parameter();

	libparest::Parameter::Field::Base<dim>::end_gauss_newton_step ();
      }



      template <int dim>
      libparest::PerStepStatistics *
      VectorField<dim>::
      create_and_set_statistics_object ()
      {
					 
					 
					 
	this->present_statistics
	  = new typename libparest::Parameter::Field::Base<dim>::PerStepStatistics(1);
	return this->present_statistics;
      }
  
  

      template <int dim>
      void
      VectorField<dim>::
      compute_derivative_indicators (const Vector<double> &present_iterate,
				     Vector<float>        &indicators) const
      {
					 
	const FiniteElement<dim> &fe = this->dof_handlers->parameter.get_fe();
    
	if ((dynamic_cast<const FE_DGQ<dim>*>(&fe) != 0)
	    &&
	    (dynamic_cast<const FE_DGQ<dim>*>(&fe)->get_degree() == 0))
	  {
	    DerivativeApproximation
	      ::approximate_gradient (this->dof_handlers->parameter,
				      present_iterate, indicators, 0);
 
	    Vector<float>::iterator cell_gradient = indicators.begin();
	    for (typename DoFHandler<dim>::active_cell_iterator
		   cell=this->dof_handlers->parameter.begin_active();
		 cell!=this->dof_handlers->parameter.end();
		 ++cell, ++cell_gradient)
          *cell_gradient *= cell->diameter() * std::sqrt(cell->measure());
	  }
					 
	else if ((dynamic_cast<const FE_DGQ<dim>*>(&fe) != 0)
		 &&
		 (dynamic_cast<const FE_DGQ<dim>*>(&fe)->get_degree() == 1))
	  {
	    DerivativeApproximation
	      ::approximate_second_derivative (this->dof_handlers->parameter,
					       present_iterate, indicators, 0);
	    Vector<float>::iterator cell_gradient = indicators.begin();
	    for (typename DoFHandler<dim>::active_cell_iterator
		   cell=this->dof_handlers->parameter.begin_active();
		 cell!=this->dof_handlers->parameter.end();
		 ++cell, ++cell_gradient)
	      *cell_gradient *= cell->diameter() *
				cell->diameter() *
                std::sqrt(cell->measure());
	  }
	else
	  AssertThrow (false, ExcNotImplemented());
      }
  

  


      template <int dim>
      void
      VectorField<dim>::
      get_refinement_criteria (const Vector<float>  &parameter_error,
			       const unsigned int    pe_type,
			       const Vector<double> &old_parameter_values,
			       Vector<float>        &refinement_criteria)
      {
	Assert (refinement_criteria.size() ==
		this->triangulations->parameter.n_active_cells(),
		ExcInternalError());
    
	switch (pe_type)
	  {
	    case none:
		  Assert (parameter_error.size() == 0, ExcInternalError());
		  compute_derivative_indicators (old_parameter_values,
						 refinement_criteria);
		  break;

	    case dwr:
		  Assert (parameter_error.size() == refinement_criteria.size(),
			  ExcInternalError());
		  refinement_criteria = parameter_error;
		  break;
	      
	    default:
		  Assert (false, ExcNotImplemented());
	  };
      }
  
  


      template class Base<deal_II_dimension>;
      template class ScalarField<deal_II_dimension>;
      template class VectorField<deal_II_dimension>;
    }
  }
}
