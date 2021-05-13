#include <me-tomography/forward.h>
#include <me-tomography/material_properties.h>
#include <me-tomography/problem_description.h>
#include <me-tomography/geometry.h>
#include <me-tomography/solver.h>
#include <base/function.h>
#include <base/multithread_info.h>
#include <lac/block_sparsity_pattern.h>
#include <lac/block_sparse_matrix.h>
#include <lac/block_vector.h>
#include <dofs/dof_constraints.h>
#include <dofs/dof_tools.h>
#include <fe/fe_values.h>

#include <complex>


namespace METomography
{
  namespace ForwardSolver
  {
    
    template <int dim>
    void
    block_build_matrix_and_rhs_threaded (const DoFHandler<dim>     &dof_handler,
                                         const std::pair<unsigned int,unsigned int> cell_range,
                                         const std::pair<const Quadrature<dim>*,const Quadrature<dim-1>*> quadratures,
                                         BlockSparseMatrix<double> &matrix,
                                         BlockVector<double>       &rhs_vector,
                                         Threads::ThreadMutex      &mutex,
                                         const std::complex<double>&unknown_source_factor,
                                         const std::pair<const Function<dim>*,
 					        const Function<dim>*>     &equation_data,
                                         const Function<dim>       &coefficient)
    {
                                       
                                       
                                       
      using namespace MaterialProperties;

      const Function<dim> &rhs_function = *equation_data.first;
      const Function<dim> &state_boundary_values = *equation_data.second;
      
      FEValues<dim> fe_values (dof_handler.get_fe(), *quadratures.first,
                               (update_values    |
                                update_gradients |
                                update_q_points  |
                                update_JxW_values));

      FEFaceValues<dim> fe_face_values (dof_handler.get_fe(), *quadratures.second,
                                        (update_values   |
                                         update_q_points |
                                         update_JxW_values));

      const unsigned int dofs_per_cell   = dof_handler.get_fe().dofs_per_cell;
      const unsigned int n_q_points      = quadratures.first->n_quadrature_points;
      const unsigned int n_q_points_face = quadratures.second->n_quadrature_points;
    
      FullMatrix<double>   cell_matrix (dofs_per_cell, dofs_per_cell);
      Vector<double>       cell_rhs (dofs_per_cell);

      std::vector<unsigned int> local_dof_indices (dofs_per_cell);

      std::vector<Vector<double> >     rhs_values (n_q_points,
                                                   Vector<double>(4));
      std::vector<Vector<double> >     boundary_values (n_q_points_face,
                                                        Vector<double>(4));
      std::vector<double>              coefficient_values (n_q_points);

      typename DoFHandler<dim>::active_cell_iterator
        cell = dof_handler.begin_active(),
        endc = dof_handler.begin_active();
      std::advance (cell, static_cast<signed int>(cell_range.first));
      std::advance (endc, static_cast<signed int>(cell_range.second));
    
      for (; cell!=endc; ++cell)
        {
          cell_matrix = 0;
          cell_rhs = 0;

          fe_values.reinit (cell);

                                           
                                           
                                           
          rhs_function.vector_value_list (fe_values.get_quadrature_points(),
                                          rhs_values);
          Assert (rhs_values == std::vector<Vector<double> > (n_q_points,
                                                              Vector<double>(4)),
                  ExcInternalError());
	
          coefficient.value_list (fe_values.get_quadrature_points(),
                                  coefficient_values);
	
          for (unsigned int q_point=0; q_point<n_q_points; ++q_point)
            for (unsigned int i=0; i<dofs_per_cell; ++i)
              {
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                const unsigned int
                  component_i = dof_handler.get_fe().system_to_component_index(i).first;
                Assert (component_i <
                        ProblemDescription().n_primal_variables,
                        ExcInternalError());
                                                 
                                                 
                                                 
                const double
                  D_x = MaterialProperties::compute_D_x(coefficient_values[q_point]),
                  D_m = MaterialProperties::compute_D_m(coefficient_values[q_point]);

                for (unsigned int j=0; j<dofs_per_cell; ++j)
                  {
                                                     
                                                     
                                                     
                                                     
                                                     
                                                     
                                                     
                    const unsigned int
                      component_j = dof_handler.get_fe().system_to_component_index(j).first;

                    Assert (component_j <
                            ProblemDescription().n_primal_variables,
                            ExcInternalError());

                                                     
                                                     
                    const double        phi_i      = fe_values.shape_value(i,q_point);
                    const double        phi_j      = fe_values.shape_value(j,q_point);
                    const Tensor<1,dim> grad_phi_i = fe_values.shape_grad(i,q_point);
                    const Tensor<1,dim> grad_phi_j = fe_values.shape_grad(j,q_point);

                    const double q = coefficient_values[q_point];
              
                    double contribution = 0;

                    switch (component_i)
                      {
                        case 0:
                        {
                          switch (component_j)
                            {
                              case 0:
                              {
                                contribution
                                  = (D_x * grad_phi_i * grad_phi_j
                                     + (mu_a_xi + q) * phi_i * phi_j);
                                    
                                break;
                              }
                            
                              case 1:
                              {
                                contribution
                                  = -omega/c * phi_i * phi_j;
                                    
                                break;
                              }
                                  
                              case 2:
                              {
                                contribution
                                  = 0;
                                    
                                break;
                              }
                                  
                              case 3:
                              {
                                contribution
                                  = 0;
                                    
                                break;
                              }
                                  
                              default:
                              {
                                Assert (false, ExcInternalError());
                              }
                            }
                              
                          break;
                        }

                        case 1:
                        {
                          switch (component_j)
                            {
                              case 0:
                              {
                                contribution
                                  = - omega/c * phi_i * phi_j;
                                    
                                break;
                              }
                            
                              case 1:
                              {
                                contribution
                                  = -(D_x * grad_phi_i * grad_phi_j 
                                      + (mu_a_xi + q) * phi_i * phi_j);
                                    
                                break;
                              }
                                  
                              case 2:
                              {
                                contribution
                                  = 0;
                                    
                                break;
                              }
                                  
                              case 3:
                              {
                                contribution
                                  = 0;
                                    
                                break;
                              }
                                  
                              default:
                              {
                                Assert (false, ExcInternalError());
                              }
                            }

                          break;
                        }
                            
                        case 2:
                        {
                          switch (component_j)
                            {
                              case 0:
                              {
                                contribution
                                  = - phi/(1+omega*omega*tau*tau) * q * phi_i * phi_j;
                                    
                                break;
                              }
                            
                              case 1:
                              {
                                contribution
                                  = + phi*omega*tau/(1+omega*omega*tau*tau) * q * phi_i * phi_j;
                                    
                                break;
                              }
                                  
                              case 2:
                              {
                                contribution
                                  = (D_m * grad_phi_i * grad_phi_j
                                     + (mu_a_m + muf_ratio * q) * phi_i * phi_j);
                                    
                                break;
                              }
                                  
                              case 3:
                              {
                                contribution
                                  = - omega / c * phi_i * phi_j;
                                    
                                break;
                              }
                                  
                              default:
                              {
                                Assert (false, ExcInternalError());
                              }
                            }
                          break;
                        }
                            
                        case 3:
                        {
                          switch (component_j)
                            {
                              case 0:
                              {
                                contribution
                                  = phi*omega*tau / (1+omega*omega*tau*tau) * q * phi_i * phi_j;
                                    
                                break;
                              }
                            
                              case 1:
                              {
                                contribution
                                  = phi / (1+omega*omega*tau*tau) * q * phi_i * phi_j;
                                    
                                break;
                              }
                                  
                              case 2:
                              {
                                contribution
                                  = -omega/c * phi_i * phi_j;
                                    
                                break;
                              }
                                  
                              case 3:
                              {
                                contribution
                                  = -(D_m * grad_phi_i * grad_phi_j
                                      + (mu_a_m + muf_ratio*q) * phi_i * phi_j);
                                    
                                break;
                              }
                                  
                              default:
                              {
                                Assert (false, ExcInternalError());
                              }
                            }
                          break;
                        }
                            
                        default:
                        {
                          Assert (false, ExcInternalError());
                        }
                      }

                  
                    cell_matrix(i,j) +=  contribution * fe_values.JxW(q_point);
                  }

                                                 
                                                 
                cell_rhs(i) += (fe_values.shape_value(i,q_point) *
                                rhs_values[q_point](component_i) *
                                fe_values.JxW (q_point));
              }

                                           
                                           
                                           
          for (unsigned int face_no=0; face_no<GeometryInfo<dim>::faces_per_cell;
               ++face_no)
            if (cell->at_boundary(face_no))
              {
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                Assert (BoundaryDescription::
                        is_robin_boundary(cell->face(face_no)->boundary_indicator()),
                        ExcInternalError());
	      
                fe_face_values.reinit (cell, face_no);

                                                 
                                                 
                                                 
                                                 
                                                 
                state_boundary_values.
                  vector_value_list (fe_face_values.get_quadrature_points(),
                                     boundary_values);
                for (unsigned int q_point=0; q_point<n_q_points_face; ++q_point)
                  {
                    Assert (boundary_values[q_point](2) == 0, ExcInternalError());
                    Assert (boundary_values[q_point](3) == 0, ExcInternalError());
                  }

                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                for (unsigned int q_point=0; q_point<n_q_points_face; ++q_point)
                  {
                    const std::complex<double>
                      original_rhs (boundary_values[q_point](0),
                                    boundary_values[q_point](1));

                    const std::complex<double>
                      rhs = original_rhs * unknown_source_factor;
		  
                    boundary_values[q_point](0) = rhs.real();
                    boundary_values[q_point](1) = rhs.imag();
                  }
	      

                                                 
                                                 
                                                 
                for (unsigned int q_point=0; q_point<n_q_points_face; ++q_point)
                  for (unsigned int i=0; i<dofs_per_cell; ++i)
                    {
                      const unsigned int
                        component_i = dof_handler.get_fe().system_to_component_index(i).first;
                      Assert (component_i <
                              ProblemDescription().n_primal_variables,
                              ExcInternalError());
		    
                      for (unsigned int j=0; j<dofs_per_cell; ++j)
                        {
                          const unsigned int
                            component_j = dof_handler.get_fe().system_to_component_index(j).first;
                          Assert (component_j <
                                  ProblemDescription().n_primal_variables,
                                  ExcInternalError());

                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                          if (component_i != component_j)
                            continue;

                          if(component_i==0 || component_i==2)
                            cell_matrix(i,j)
                              += (1./(2*gamma) *
                                  fe_face_values.shape_value(i,q_point) *
                                  fe_face_values.shape_value(j,q_point) *
                                  fe_face_values.JxW(q_point));
                            
                          else if (component_i==1 || component_i==3)
                            cell_matrix(i,j)
                              += (-1./(2*gamma) *
                                  fe_face_values.shape_value(i,q_point) *
                                  fe_face_values.shape_value(j,q_point) *
                                  fe_face_values.JxW(q_point));
                          else
                            Assert (false, ExcInternalError());
                            
                        };

                      if(component_i==0 || component_i==2)
                        cell_rhs(i)
                          += (1./(2*gamma) *
                              boundary_values[q_point](component_i) *
                              fe_face_values.shape_value(i,q_point) *
                              fe_face_values.JxW(q_point));
                      else if (component_i==1 || component_i==3)
                        cell_rhs(i)
                          += (-1./(2*gamma) *
                              boundary_values[q_point](component_i) *
                              fe_face_values.shape_value(i,q_point) *
                              fe_face_values.JxW(q_point));
                      else
                        Assert (false, ExcInternalError());  
                    }
              }
	
	
	
	
          cell->get_dof_indices (local_dof_indices);
	  for (unsigned int i=0; i<dofs_per_cell; ++i)
	    if (dof_handler.get_fe().system_to_component_index(i).first < 2)
	      Assert (local_dof_indices[i] < rhs_vector.block(0).size(),
		      ExcInternalError())
	    else
	      Assert (local_dof_indices[i] >= rhs_vector.block(0).size(),
		      ExcInternalError());

	  mutex.acquire ();
          for (unsigned int i=0; i<dofs_per_cell; ++i)
            {
              for (unsigned int j=0; j<dofs_per_cell; ++j)
                matrix.add (local_dof_indices[i],
                            local_dof_indices[j],
                            cell_matrix(i,j));
	  
              rhs_vector(local_dof_indices[i]) += cell_rhs(i);
            }
          mutex.release ();
        }
    }


    template <int dim>
    void
    block_build_matrix_and_rhs (const DoFHandler<dim>     &dof_handler,
                                const Quadrature<dim>     &quadrature,
                                const Quadrature<dim-1>   &face_quadrature,
                                BlockSparseMatrix<double> &matrix,
                                BlockVector<double>       &rhs_vector,
                                const std::complex<double>&unknown_source_factor,
                                const Function<dim>       &rhs_function,
                                const Function<dim>       &state_boundary_values,
                                const Function<dim>       &coefficient)
    {
      const std::vector<std::pair<unsigned int,unsigned int> > intervals
        = Threads::split_interval (0, dof_handler.get_tria().n_active_cells(),
                                   multithread_info.n_default_threads);
      Threads::ThreadGroup<> threads;
      Threads::ThreadMutex mutex;

      void (*fun_ptr) (const DoFHandler<dim>     &,
		       const std::pair<unsigned int,unsigned int>,
		       const std::pair<const Quadrature<dim>*,const Quadrature<dim-1>*>,
		       BlockSparseMatrix<double> &,
		       BlockVector<double>       &,
		       Threads::ThreadMutex      &,
		       const std::complex<double>&,
		       const std::pair<const Function<dim>*,
		       const Function<dim>*>     &equation_data,
		       const Function<dim>       &)
	= &block_build_matrix_and_rhs_threaded<dim>;
      
      for (unsigned int i=0; i<multithread_info.n_default_threads; ++i)
        threads += Threads::spawn (fun_ptr)
                   (dof_handler, intervals[i],
                    std::make_pair(&quadrature, &face_quadrature),
                    matrix, rhs_vector, mutex,
                    unknown_source_factor,
                    std::make_pair(&rhs_function, &state_boundary_values),
                    coefficient);

                                       
      threads.join_all ();

                                       
                                       
                                       
                                       
                                       
                                       
    }



    void
    block_solve (const BlockSparseMatrix<double> &matrix,
                 Vector<double>                  &solution,
                 const BlockVector<double>       &rhs_vector)
    {
      BlockVector<double> tmp;
      tmp.reinit (rhs_vector);

                                       
                                       
      BlockSolver::solve (matrix.block(0,0), tmp.block(0), rhs_vector.block(0));

                                       
                                       
      {
                                         
                                         
                                         
        Vector<double> t (rhs_vector.block(1).size());
        matrix.block(1,0).vmult (t, tmp.block(0));
        t *= -1;
        t += rhs_vector.block(1);

        BlockSolver::solve (matrix.block(1,1), tmp.block(1), t);
      }
    
                                       
                                       
      std::copy (tmp.begin(), tmp.end(), solution.begin());
    }



    template <int dim>
    void
    solve_forward_problem (const DoFHandler<dim>     &dof_handler,
                           const ConstraintMatrix    &constraints,
                           const Quadrature<dim>     &quadrature,
                           const Quadrature<dim-1>   &face_quadrature,
                           const std::complex<double>&unknown_source_factor,
                           const Function<dim>       &rhs_function,
                           const Function<dim>       &state_boundary_values,
                           const Function<dim>       &coefficient,
                           Vector<double>            &solution)
    {
    
                                       
                                       
                                       
                                       
      const unsigned int block_size = dof_handler.n_dofs() / 2;
    
                                       
                                       
      BlockCompressedSetSparsityPattern csp (2,2);
      for (unsigned int u=0; u<2; ++u)
        for (unsigned int v=0; v<2; ++v)
          csp.block(u,v).reinit (block_size, block_size);
      csp.collect_sizes();






      if (false)
        {
          std::vector<std::vector<bool> > mask (4, std::vector<bool>(4,true));
          mask[0][2] = mask[0][3] = mask[1][2] = mask[1][3] = false;
    
          DoFTools::make_sparsity_pattern (dof_handler, mask,
                                           csp);
        }
      else 
        {
          DoFTools::make_sparsity_pattern (dof_handler, csp);
        }
    
      constraints.condense (csp);

      BlockSparsityPattern sparsity_pattern (2,2);
      sparsity_pattern.copy_from (csp);
    
      BlockSparseMatrix<double> matrix (sparsity_pattern);
      BlockVector<double> rhs_vector;
      rhs_vector.reinit (2, block_size);
    
      ForwardSolver::
        block_build_matrix_and_rhs (dof_handler,
                                    quadrature,
                                    face_quadrature,
                                    matrix, rhs_vector,
                                    unknown_source_factor,
                                    rhs_function, state_boundary_values, coefficient);

      constraints.condense (matrix);
      constraints.condense (rhs_vector);

                                       
                                       
      block_solve (matrix, solution, rhs_vector);

				       
				       
      constraints.distribute (solution);
    }

  }
}


namespace METomography
{
  namespace ForwardSolver
  {
    template
    void
    solve_forward_problem (const DoFHandler<deal_II_dimension>     &dof_handler,
                           const ConstraintMatrix                  &constraints,
                           const Quadrature<deal_II_dimension>     &quadrature,
                           const Quadrature<deal_II_dimension-1>   &face_quadrature,
                           const std::complex<double>&unknown_source_factor,
                           const Function<deal_II_dimension>       &rhs_function,
                           const Function<deal_II_dimension>       &state_boundary_values,
                           const Function<deal_II_dimension>       &coefficient,
                           Vector<double>            &solution);
  }
}
