/* $Id: synthetic_data.cc 3474 2007-09-05 20:28:33Z bangerth $ */

#include <libparest/slave/stationary/synthetic_data.h>
#include <libparest/global_parameters.h>
#include <libparest/utilities.h>

#include <base/utilities.h>
#include <base/parameter_handler.h>
#include <base/quadrature.h>
#include <lac/full_matrix.h>
#include <lac/sparsity_pattern.h>
#include <lac/compressed_set_sparsity_pattern.h>
#include <lac/sparse_matrix.h>
#include <dofs/dof_accessor.h>
#include <dofs/dof_constraints.h>
#include <dofs/dof_handler.h>
#include <dofs/dof_tools.h>
#include <fe/fe.h>
#include <fe/fe_tools.h>
#include <numerics/data_out.h>

#include <fstream>

namespace libparest
{
  namespace Slave
  {

    namespace Stationary
    {



      template <int dim>
      SyntheticDataBase<dim>::Parameters::
      Parameters ()
		      :
		      fe_name (""),
		      noise_level (1e10),
		      noise_type (additive),
		      output_projection (false)
      {}



      template <int dim>
      void
      SyntheticDataBase<dim>::Parameters::
      declare_parameters (ParameterHandler &prm)
      {
	prm.enter_subsection ("Synthetic data");
	{
	  prm.declare_entry ("Finite element", "linear",
			     Patterns::Selection ("linear|quadratic|cubic|quartic"));
	  prm.declare_entry ("Noise level", "1e10", Patterns::Double ());
	  prm.declare_entry ("Noise type", "additive",
			     Patterns::Selection ("additive|multiplicative"));
	  prm.declare_entry ("Output projected solution", "false", Patterns::Bool());
	};
	prm.leave_subsection ();
      }



      template <int dim>
      void
      SyntheticDataBase<dim>::Parameters::
      parse_parameters (ParameterHandler &prm)
      {
	prm.enter_subsection ("Synthetic data");
	{
	  fe_name           = prm.get("Finite element");
	  noise_level       = prm.get_double ("Noise level");
	  if (prm.get("Noise type") == "additive")
	    noise_type = additive;
	  else if (prm.get("Noise type") == "multiplicative")
	    noise_type = multiplicative;
	  else
	    AssertThrow (false, ExcInternalError());
	    
	  output_projection = prm.get_bool ("Output projected solution");
	}
	prm.leave_subsection ();
      }



      template <int dim>
      void
      SyntheticDataBase<dim>::Parameters::
      delete_parameters ()
      {
	fe_name           = "";
	noise_level       = 1e10;
	noise_type        = additive;
	output_projection = false;
      }





      template <int dim>
      SyntheticDataBase<dim>::
      SyntheticDataBase (const Parameters         &parameters,
			 const std::string        &fe_state,
			 const unsigned int        experiment_no,
			 const ProblemDescription &problem_description)
		      :
		      iteration_no (0),
		      parameters (&parameters),
		      fe (&FEHelper<dim>::get_fe (parameters.fe_name,
						  problem_description.n_primal_variables)),
		      quadrature (&FEHelper<dim>::get_quadrature (parameters.fe_name)),
		      face_quadrature (&FEHelper<dim>::get_quadrature_face (parameters.fe_name)),
		      experiment_no (experiment_no),
		      measurement_to_state(FEHelper<dim>::get_fe(fe_state,
								 problem_description
								 .n_primal_variables).dofs_per_cell,
					   fe->dofs_per_cell)
      {
	const unsigned int n_variables
	  = problem_description.n_primal_variables;
	FETools::get_interpolation_matrix (*fe,
					   FEHelper<dim>::get_fe(fe_state,
								 n_variables),
					   measurement_to_state);
      }



      template <int dim>
      SyntheticDataBase<dim>::~SyntheticDataBase ()
      {
	delete_ptr (dof_handler);
      }



      template <int dim>
      void
      SyntheticDataBase<dim>::
      initialize_gauss_newton_step (const unsigned int step_no)
      {
                                         
                                         
        iteration_no = step_no;
      }



      template <int dim>
      void
      SyntheticDataBase<dim>::
      end_gauss_newton_step ()
      {}
      


      template <int dim>
      void
      SyntheticDataBase<dim>::
      reinitialize (const Triangulation<dim> &new_triangulation)
      {
					 
					 
	delete_ptr (dof_handler);
	dof_handler = new DoFHandler<dim> (new_triangulation);
	dof_handler->distribute_dofs (*fe);

	renumber_dofs ();

	measurement.reinit (dof_handler->n_dofs());
	
	ConstraintMatrix constraints;
	DoFTools::make_hanging_node_constraints (*dof_handler,
						 constraints);
	constraints.close ();

	setup_and_solve_system (constraints);

	if (parameters->noise_level != 0)
	  switch (parameters->noise_type)
	    {
	      case Parameters::additive:
	      {
		for (unsigned int i=0; i<measurement.size(); ++i)
		  measurement(i)
		    += Utilities::generate_normal_random_number(0,parameters->noise_level);
		break;
	      }

	      case Parameters::multiplicative:
	      {
		for (unsigned int i=0; i<measurement.size(); ++i)
		  measurement(i)
		    *= 1.+Utilities::generate_normal_random_number(0,parameters->noise_level);
		break;
	      }

	      default:
		    Assert (false, ExcNotImplemented());
	    }    
  
	constraints.distribute (measurement);
      }



      template <int dim>
      void
      SyntheticDataBase<dim>::write_solution () const
      {
	if (parameters->output_projection == false)
          return;

	Assert (dynamic_cast<const libparest::GlobalParameters<dim>*>(&*parameters)
		!= 0,
		ExcInternalError());
	
        const libparest::GlobalParameters<dim> &global_parameters
          = dynamic_cast<const libparest::GlobalParameters<dim>&>(*parameters);
        DataOut<dim> data_out;

        typename DataOut<dim>::OutputFormat output_format
          = DataOut<dim>::parse_output_format (global_parameters.output_format);
        const std::string filename
          = (global_parameters.output_directory
             + Utilities::int_to_string(iteration_no, 3)
             + "-"
             + std::string("synth")
             + Utilities::int_to_string(experiment_no,
                                        Utilities::needed_digits(global_parameters
                                                                 .n_experiments))
             + data_out.default_suffix(output_format));



        data_out.attach_dof_handler (*dof_handler);
        data_out.add_data_vector (measurement, "synthetic_data");
        data_out.build_patches();

      }


      template <int dim>
      void
      SyntheticDataBase<dim>::
      setup_and_solve_system (const ConstraintMatrix &constraints)
      {
					 
					 
	SparsityPattern sparsity_pattern;
	if (dim < 3)
	  {
	    sparsity_pattern.reinit (dof_handler->n_dofs(),
				     dof_handler->n_dofs(),
				     dof_handler->max_couplings_between_dofs());
	    DoFTools::make_sparsity_pattern (*dof_handler, sparsity_pattern);
	    constraints.condense (sparsity_pattern);
	  }
	else
	  {
	    CompressedSetSparsityPattern csp (dof_handler->n_dofs(),
					      dof_handler->n_dofs());
	    DoFTools::make_sparsity_pattern (*dof_handler, csp);
	    constraints.condense (csp);
	    sparsity_pattern.copy_from (csp);
	  }

	SparseMatrix<double> matrix (sparsity_pattern);
	Vector<double> rhs_vector (dof_handler->n_dofs());
	build_matrix_and_rhs (matrix, rhs_vector);
	constraints.condense (matrix);
	constraints.condense (rhs_vector);

					 
					 
	solve (matrix, rhs_vector);
      }



      template <int dim>
      void
      SyntheticDataBase<dim>::
      build_matrix_and_rhs (SparseMatrix<double> &,
			    Vector<double>       &)
      {
	Assert (false, ExcNotImplemented());
      }
      


      template <int dim>
      void
      SyntheticDataBase<dim>::
      solve (const SparseMatrix<double> &,
	     const Vector<double>       &)
      {
	Assert (false, ExcNotImplemented());
      }
      


      template <int dim>
      void
      SyntheticDataBase<dim>::renumber_dofs () 
      {}
  



      template <int dim>
      const DoFHandler<dim> &
      SyntheticDataBase<dim>::get_dof_handler () const
      {
	return *dof_handler;
      }



      template <int dim>
      const FiniteElement<dim> &
      SyntheticDataBase<dim>::get_fe () const
      {
	return *fe;
      }



      template <int dim>
      const Vector<double> &
      SyntheticDataBase<dim>::get_measurement () const
      {
	return measurement;
      }



      template <int dim>
      const FullMatrix<double> &
      SyntheticDataBase<dim>::get_measurement_to_state_matrix () const
      {
	return measurement_to_state;
      }
    }





    template class Stationary::SyntheticDataBase<deal_II_dimension>;
  }
}
