
#include <me-tomography/state_discretization.h>
#include <me-tomography/me_slave.h>
#include <me-tomography/problem_description.h>


namespace METomography
{
  

  template <int dim>
  StateDiscretization<dim>::
  StateDiscretization (const Triangulation<dim>      &old_global_grid,
		       const libparest::GridTransfer::Base<dim> &mesh_refinement,
		       const ME_Parameters<dim>      &parameters,
		       const ParameterDiscretization &parameter_discretization)
		  :
		  parameters (&parameters)
  {
				     
    this->triangulations = new Triangulations (old_global_grid, mesh_refinement);

				     
    this->finite_elements = new FiniteElements (ProblemDescription(),
                                                parameters.fe_state,
                                                parameters.finite_element.name);

				     
				     
				     
				     
				     
				     
				     
				     
				     
				     
				     
    const unsigned int n_variables = 9;
    Assert (n_variables == ProblemDescription().n_variables,
	    ExcInternalError());


    static const bool coupling_table[n_variables][n_variables] =
      {
	    { 1, 1, 1, 1,   1, 1, 1, 1,  1 },
	    { 1, 1, 1, 1,   1, 1, 1, 1,  1 },
	    { 1, 1, 1, 1,   0, 0, 1, 1,  1 },
	    { 1, 1, 1, 1,   0, 0, 1, 1,  1 },
	    
	    { 1, 1, 0, 0,   0, 0, 0, 0,  1 },
	    { 1, 1, 0, 0,   0, 0, 0, 0,  1 },
	    { 1, 1, 1, 1,   0, 0, 0, 0,  1 },
	    { 1, 1, 1, 1,   0, 0, 0, 0,  1 },
	    
	    { 1, 1, 1, 1,   1, 1, 1, 1,  1 }
      };
    Table<2,bool> coupling_mask (n_variables, n_variables);
    for (unsigned int i=0; i<n_variables; ++i)
      for (unsigned int j=0; j<n_variables; ++j)
	coupling_mask[i][j] = coupling_table[i][j];
	    
    this->dof_handlers = new DoFHandlers (ProblemDescription(),
                                          *this->triangulations,
                                          *this->finite_elements,
                                          *parameter_discretization.dof_handlers,
                                          parameters.renumber_dofs_CMK,
					  coupling_mask);
  }



  template <int dim>
  void
  StateDiscretization<dim>::
  refine_discretization (const Vector<float> &error_indicators,
			 BlockVector<double> &vector_for_conversion)
  {
    this->do_refine_discretization (error_indicators,
				    static_cast<const typename Slave::Slave<dim>::Parameters*>(parameters)->
				    refinement_fraction,
				    vector_for_conversion,
				    static_cast<const typename Slave::Slave<dim>::Parameters*>(parameters)->
				    max_n_cells);
  }




  template class StateDiscretization<deal_II_dimension>;
}

