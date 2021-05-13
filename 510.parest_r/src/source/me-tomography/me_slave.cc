#include <me-tomography/me_slave.h>
#include <me-tomography/me_parameters.h>
#include <me-tomography/state_discretization.h>
#include <me-tomography/material_properties.h>
#include <me-tomography/geometry.h>
#include <me-tomography/measurements.h>
#include <me-tomography/solver.h>
#include <me-tomography/evaluations.h>
#include <me-tomography/forward.h>
#include <me-tomography/measurement_weights.h>
#include <libparest/utilities.h>
#include <libparest/work_stream.h>
#include <libparest/global_parameters.h>
#include <libparest/slave/stationary/grid_refinement.h>
#include <libparest/parameter/bounds.h>

#include <base/timer.h>
#include <base/function.h>
#include <base/utilities.h>
#include <base/quadrature_lib.h>
#include <base/parameter_handler.h>
#include <lac/precondition.h>
#include <lac/solver_cg.h>
#include <lac/solver_gmres.h>
#include <lac/vector_memory.h>
#include <grid/grid_out.h>
#include <dofs/dof_tools.h>
#include <dofs/dof_renumbering.h>
#include <fe/fe_values.h>
#include <numerics/vectors.h>
#include <numerics/matrices.h>
#include <numerics/data_out.h>
#include <numerics/data_postprocessor.h>

#include <fstream>
#include <numeric>
#include <algorithm>


namespace METomography
{
  namespace Slave
  {
    namespace internal
    {
      void
      SparseDirectSPEC::initialize (const SparsityPattern &sparsity_pattern)
      {


      }


      template <typename number>
      void
      SparseDirectSPEC::factorize (const SparseMatrix<number> &matrix)
      {
	SparseILU<double>::AdditionalData parameters (0, 2, false);

	preconditioner.initialize (matrix, parameters);

	this->matrix = &matrix;
      }


      template <typename number>
      void
      SparseDirectSPEC::solve (Vector<number> &rhs_and_solution) const
      {
        // For the SPEC benchmark version 510.parest, cap number of iterations, for more
        // comparable work, despite minor FP differences.  The small criterion is an 
        // additional cap: in cases where the solver would normally exit after 0 or 1 
        // iterations, but does not due to minor FP diffs, then it will soon exit 
        // when it hits the criterion.
	SolverControl control (std::min(50U,
					rhs_and_solution.size()),
			       1e-100);
	SolverGMRES<> solver (control);
	Vector<double> solution (rhs_and_solution.size());

	try
	  {
	    solver.solve (*matrix, solution, rhs_and_solution,
			  preconditioner);
	  }
	catch (SolverControl::NoConvergence &)
	  {
	    // ignore the fact that we can't converge to a zero tolerance
	  }
	
	rhs_and_solution = solution;
      }


      Threads::ThreadMutex &
      SparseDirectSPEC::get_synchronisation_lock () const
      {
	return synchronisation_lock;
      }



      template <int dim>
      struct AssemblerData
      {
	  AssemblerData (const BlockVector<double> &linearization_point,
			 const FiniteElement<dim>  &fe,
			 const Quadrature<dim>     &quadrature,
			 const Quadrature<dim-1>   &face_quadrature,
			 const unsigned int         n_variables)
			  :
			  linearization_point (linearization_point),
			  output_vector (*static_cast<BlockVector<double>*>(0)),
			  cell_matrix (fe.dofs_per_cell, fe.dofs_per_cell),
			  cell_rhs (fe.dofs_per_cell),
			  dof_indices_on_cell (fe.dofs_per_cell,
					       deal_II_numbers::invalid_unsigned_int),
			  fe_values (fe, quadrature,
				     update_values | update_gradients  | update_JxW_values),
			  fe_face_values (fe, face_quadrature,
					  update_values | update_JxW_values),
			  linearization_point_values (quadrature.n_quadrature_points,
						      Vector<double>(n_variables)),
			  linearization_point_gradients (quadrature.n_quadrature_points,
							 std::vector<Tensor<1,dim> >(n_variables)),
			  face_linearization_point_values (face_quadrature.n_quadrature_points,
							   Vector<double>(n_variables))
	    {}

	  AssemblerData (const BlockVector<double> &linearization_point,
			 BlockVector<double>       &output_vector,
			 const FiniteElement<dim>  &fe,
			 const Quadrature<dim>     &quadrature,
			 const Quadrature<dim-1>   &face_quadrature,
			 const unsigned int         n_variables)
			  :
			  linearization_point (linearization_point),
			  output_vector (output_vector),
			  cell_matrix (fe.dofs_per_cell, fe.dofs_per_cell),
			  cell_rhs (fe.dofs_per_cell),
			  dof_indices_on_cell (fe.dofs_per_cell,
					       deal_II_numbers::invalid_unsigned_int),
			  fe_values (fe, quadrature,
				     update_values | update_gradients  | update_JxW_values),
			  fe_face_values (fe, face_quadrature,
					  update_values | update_JxW_values),
			  linearization_point_values (quadrature.n_quadrature_points,
						      Vector<double>(n_variables)),
			  linearization_point_gradients (quadrature.n_quadrature_points,
							 std::vector<Tensor<1,dim> >(n_variables)),
			  face_linearization_point_values (face_quadrature.n_quadrature_points,
							   Vector<double>(n_variables))
	    {}

	  AssemblerData (const AssemblerData &data)
			  :
			  linearization_point (data.linearization_point),
			  output_vector (data.output_vector),
			  cell_matrix (data.cell_matrix),
			  cell_rhs (data.cell_rhs.size()),
			  dof_indices_on_cell (data.dof_indices_on_cell),
			  fe_values (data.fe_values.get_fe(),
				     data.fe_values.get_quadrature(),
				     update_values | update_gradients  | update_JxW_values),
			  fe_face_values (data.fe_face_values.get_fe(),
					  data.fe_face_values.get_quadrature(),
					  update_values | update_JxW_values),
			  linearization_point_values (data.linearization_point_values),
			  linearization_point_gradients (data.linearization_point_gradients),
			  face_linearization_point_values (data.face_linearization_point_values)
	    {}

	  const BlockVector<double>                &linearization_point;
	  BlockVector<double>                      &output_vector;

	  FullMatrix<double>                        cell_matrix;
	  Vector<double>                            cell_rhs;

	  std::vector<unsigned int>                 dof_indices_on_cell;

	  FEValues<dim>                             fe_values;
	  FEFaceValues<dim>                         fe_face_values;

	  std::vector<Vector<double> >              linearization_point_values;
	  std::vector<std::vector<Tensor<1,dim> > > linearization_point_gradients;
	  std::vector<Vector<double> >              face_linearization_point_values;
      };
    }
  }
}


namespace METomography
{
  namespace Slave
  {

    using namespace libparest::Slave::Stationary;


    template <int dim>
    const char * Slave<dim>::graphical_output_labels[]
    = { "init GN", "rhs", "forward-back", "comp. update",
	"perf. update", "residual", "comp. misfit", "write output",
	"error est."    };

    template <int dim>
    const unsigned int Slave<dim>::n_graphical_output_labels
    = 9;

    template <int dim>
    const ProblemDescription Slave<dim>::problem_description;



    namespace
    {
				       /**
					* A class that generates graphical
					* output for magnitude and phase of a
					* complex-valued quantity.
					*/
      template <int dim>
      class PostProcessMagnitudeAndPhase :  public DataPostprocessor<dim>
      {
	public:
	  PostProcessMagnitudeAndPhase (const unsigned int  first_component,
					const std::string  &name);

	  virtual
	  void
	  compute_derived_quantities_vector (const std::vector<Vector<double> >              &uh,
					     const std::vector<std::vector<Tensor<1,dim> > > &duh,
					     const std::vector<std::vector<Tensor<2,dim> > > &dduh,
					     const std::vector<Point<dim> >                  &normals,
					     std::vector<Vector<double> >                    &computed_quantities) const;

	  virtual std::vector<std::string> get_names () const;
	  virtual UpdateFlags get_needed_update_flags () const;
	  virtual unsigned int n_output_variables() const;

	private:
	  const unsigned int first_component;
	  const std::string  name;
      };


      template <int dim>
      PostProcessMagnitudeAndPhase<dim>::
      PostProcessMagnitudeAndPhase (const unsigned int  first_component,
				    const std::string  &name)
		      :
		      first_component (first_component),
		      name (name)
      {}



      template <int dim>
      void
      PostProcessMagnitudeAndPhase<dim>::
      compute_derived_quantities_vector (const std::vector<Vector<double> >              &uh,
					 const std::vector<std::vector<Tensor<1,dim> > > &,
					 const std::vector<std::vector<Tensor<2,dim> > > &,
					 const std::vector<Point<dim> >                  &,
					 std::vector<Vector<double> >                    &computed_quantities) const
      {
	Assert (uh.size() == computed_quantities.size(),
		ExcInternalError());

	for (unsigned int i=0; i<uh.size(); ++i)
	  {
	    Assert (uh[i].size() == 9, ExcInternalError());
	    Assert (computed_quantities[i].size() == 2, ExcInternalError());

	    computed_quantities[i](0) = std::sqrt (uh[i](first_component) *
						   uh[i](first_component) +
						   uh[i](first_component+1) *
						   uh[i](first_component+1));
	    computed_quantities[i](1) = std::atan2 (uh[i](first_component+1),
						   uh[i](first_component));
	  }
      }


      template <int dim>
      std::vector<std::string>
      PostProcessMagnitudeAndPhase<dim>::get_names () const
      {
	std::vector<std::string> names;
	names.push_back (name + "_abs");
	names.push_back (name + "_phase");
	return names;
      }



      template <int dim>
      UpdateFlags
      PostProcessMagnitudeAndPhase<dim>::get_needed_update_flags () const
      {
	return update_values;
      }



      template <int dim>
      unsigned int
      PostProcessMagnitudeAndPhase<dim>::n_output_variables () const
      {
	return 2;
      }


    }




/* ----------------------- Slave::Parameters --------------------- */

    template <int dim>
    Slave<dim>::Parameters::
    Parameters ()
                    :
                    fe_state           (""),
                    initial_refinement (0),
		    measurement_refinements (""),
                    refinement_fraction (0,0),
		    max_n_cells (1000000000),
                    renumber_dofs_CMK  (false),
                    output_grids       (false),
                    inhibit_output     (false),
		    output_magnitude_and_phase (false),
                    misfit_functional  (L2_norm),
                    parameter_refinement (ScalarField<dim>::none)
    {}



    template <int dim>
    void
    Slave<dim>::Parameters::
    declare_parameters (ParameterHandler &prm)
    {
      prm.enter_subsection ("Tomography slave");
      if (true)
        {
          prm.declare_entry ("Finite element", "linear",
                             Patterns::Selection ("linear|quadratic|cubic|quartic"),
			     "The kind of elements to be used for the state equation and "
			     "adjoint variable.");
          prm.declare_entry ("Refinement criterion", "grad grad u",
                             Patterns::Selection ("lambda|u|"
                                                  "grad lambda|grad u|"
                                                  "grad grad lambda|grad grad u|"
                                                  "global|weighted grad grad"),
			     "Name of the refinement criterion used for the mesh on which "
			     "the state and adjoint variables are discretized.");
          prm.declare_entry ("Initial refinement", "0", Patterns::Integer(),
			     "Number of initial, global refinement steps of the state mesh.");
	  prm.declare_entry ("Refinements on measurement boundary", "",
			     Patterns::Anything (),
			     "A sequence of characters 'g' and 'm', which are interpreted "
			     "from left to right. A 'g' indicates global refinement, an 'm' "
			     "indicates refinement towards the measurement part of the boundary.");
          prm.declare_entry ("Refinement fraction", "0.30",
                             Patterns::Double(),
			     "Fraction of cells to be refined in each mesh refinement step.");
          prm.declare_entry ("Coarsening fraction", "0.05",
                             Patterns::Double(),
			     "Fraction of cells to be coarsened in each mesh refinement step.");
	  prm.declare_entry ("Maximal number of cells", "1000000000",
			     Patterns::Integer(1,Patterns::Integer::max_int_value),
			     "A limit on the number of cells we want to have in each "
			     "experiment. If we approach or exceed this number of cells, "
			     "the algorithm tries to refine so that we reach this "
			     "number, but it is clear that this is only going to be an "
			     "approximation. In particular, since the state discretization "
			     "always need to be finer than the parameter mesh, the limit "
			     "can't be hard unless the parameter mesh also has an upper bound.");
          prm.declare_entry ("Renumber dofs by Cuthill-McKee", "false",
			     Patterns::Bool(),
			     "Whether the degrees of freedom shall be re-sorted using the CMK "
			     "algorithm. This affects some preconditioners, but should not "
			     "make much of a difference since we use a sparse direct solver "
			     "anyway.");
          prm.declare_entry ("Output grids", "false", Patterns::Bool(),
			     "Whether grids should be output to a file separately of the "
			     "solutions.");
          prm.declare_entry ("Inhibit output", "false", Patterns::Bool(),
			     "Whether graphical output should be completely inhibted.");
	  prm.declare_entry ("Output magnitude and phase", "false", Patterns::Bool(),
			     "Whether we shall output only real and imaginary part, "
			     "or also magnitude/phase of the solution variables");
          prm.declare_entry ("Misfit functional", "L2 norm",
                             Patterns::Selection ("L2 norm"
						  "|L2 boundary norm"
						  "|L2 weighted boundary norm"
                                                  "|L2 weighted boundary norm (real scaling)"
                                                  "|L2 weighted boundary norm (complex scaling)"
						  "|ratio over ratio minus one"
						  "|ratio minus ratio"),
			     "Name of the misfit functional to be used in the minimization.");
	  prm.declare_entry ("Measurement weights",
			     METomography::Measurements::WeightFunctions::
			     default_weight_function<dim>(),
			     Patterns::Anything(),
			     "Name of a weight function to be used in the misfit functional. "
			     "This may include simple masks such as a circular mask, or "
			     "more complex criteria such as modulation depth measurements "
			     "obtained during experiments.");
          prm.declare_entry ("Pass parameter indicators", "none",
                             Patterns::Selection ("none|gamma"),
			     "Whether the slave object should pass down mesh refinement "
			     "criteria for refinement of the parameter mesh.");

          prm.declare_entry ("Evaluations", "",
                             Patterns::List (Patterns::Selection ("128x128"
								  "|write matrix A"
								  "|write matrix M"
								  "|write matrix CX")),
			     "A comma-separated list listing evaluation operations to be "
			     "done at the end of each iteration.");
        }
      prm.leave_subsection ();

      MeasurementRepresentation<dim>::Parameters::declare_parameters (prm);
    }




    template <int dim>
    void
    Slave<dim>::Parameters::
    parse_parameters (ParameterHandler &prm)
    {



      std::map<std::string,MisfitFunctional> functional_list;
      functional_list["L2 norm"]          = L2_norm;
      functional_list["L2 boundary norm"] = L2_boundary_norm;
      functional_list["L2 weighted boundary norm"] = L2_weighted_boundary_norm;
      functional_list["L2 weighted boundary norm (real scaling)"] = L2_weighted_boundary_norm_real_scaling;
      functional_list["L2 weighted boundary norm (complex scaling)"] = L2_weighted_boundary_norm_complex_scaling;
      functional_list["ratio over ratio minus one"] = ratio_over_ratio_minus_one;
      functional_list["ratio minus ratio"] = ratio_minus_ratio;

      prm.enter_subsection ("Tomography slave");
      if (true)
        {
          fe_state           = prm.get("Finite element");
          initial_refinement = prm.get_integer ("Initial refinement");
	  measurement_refinements = prm.get ("Refinements on measurement boundary");

          if (prm.get ("Refinement criterion") == "lambda")
            refinement_criterion = lambda;
          else
            if (prm.get ("Refinement criterion") == "grad u")
              refinement_criterion = grad_u;
            else
              if (prm.get ("Refinement criterion") == "grad lambda")
                refinement_criterion = grad_lambda;
              else
                if (prm.get ("Refinement criterion") == "grad grad u")
                  refinement_criterion = grad_grad_u;
                else
                  if (prm.get ("Refinement criterion") == "grad grad lambda")
                    refinement_criterion = grad_grad_lambda;
		  else
		    if (prm.get ("Refinement criterion") == "weighted grad grad")
		      refinement_criterion = weighted_grad_grad;
		    else
		      if (prm.get ("Refinement criterion") == "global")
			refinement_criterion = global;
		      else
			AssertThrow (false, ExcInternalError());

          refinement_fraction.first   = prm.get_double ("Refinement fraction");
          refinement_fraction.second  = prm.get_double ("Coarsening fraction");

	  max_n_cells                 = prm.get_integer ("Maximal number of cells");

          renumber_dofs_CMK  = prm.get_bool ("Renumber dofs by Cuthill-McKee");
          output_grids       = prm.get_bool ("Output grids");
          inhibit_output     = prm.get_bool ("Inhibit output");
	  output_magnitude_and_phase = prm.get_bool ("Output magnitude and phase");

          Assert (functional_list.find(prm.get("Misfit functional")) !=
                  functional_list.end(),
                  ExcInternalError());
          misfit_functional  = functional_list[prm.get("Misfit functional")];

	  measurement_weights = prm.get ("Measurement weights");

          if (prm.get ("Pass parameter indicators") == "none")
            parameter_refinement = ScalarField<dim>::none;
          else if (prm.get ("Pass parameter indicators") == "gamma")
            parameter_refinement = ScalarField<dim>::gamma;
          else
            AssertThrow (false, ExcInternalError());


          const libparest::GlobalParameters<dim> &
            global_parameters
            = dynamic_cast<const libparest::GlobalParameters<dim> &> (*this);

          if (prm.get ("Evaluations") != "")
	    {
	      const std::vector<std::string>
		evaluators = Utilities::split_string_list (prm.get ("Evaluations"));

	      for (unsigned int i=0; i<evaluators.size(); ++i)
		if (evaluators[i] == "128x128")
		  {
		    typename EvaluationsList::value_type
		      new_element (new Evaluations::Grid128x128<dim>
				   (global_parameters));
		    evaluations.push_back (new_element);
		  }
		else if (evaluators[i] == "write matrix A")
		  {
		    typename EvaluationsList::value_type
		      new_element (new Evaluations::WriteMatrixA<dim>
				   (global_parameters));
		    evaluations.push_back (new_element);
		  }
		else if (evaluators[i] == "write matrix M")
		  {
		    typename EvaluationsList::value_type
		      new_element (new Evaluations::WriteMatrixM<dim>
				   (global_parameters));
		    evaluations.push_back (new_element);
		  }
		else if (evaluators[i] == "write matrix CX")
		  {
		    typename EvaluationsList::value_type
		      new_element (new Evaluations::WriteMatrixCX<dim>
				   (global_parameters));
		    evaluations.push_back (new_element);
		  }
		else
		  AssertThrow (false, ExcNotImplemented());
	    }
	}
      prm.leave_subsection ();
    }



    template <int dim>
    void
    Slave<dim>::Parameters::delete_parameters ()
    {
      fe_state             = "";
      initial_refinement   = 0;
      measurement_refinements = "";
      refinement_fraction  = std::make_pair (0., 0.);
      max_n_cells          = 1000000000;
      renumber_dofs_CMK    = false;
      output_grids         = false;
      inhibit_output       = false;
      output_magnitude_and_phase = false;
      misfit_functional    = L2_norm;
      measurement_weights  = METomography::Measurements::WeightFunctions::
			     default_weight_function<dim>();
      parameter_refinement = ScalarField<dim>::none;
      evaluations = std::list<boost::shared_ptr<const libparest::Slave::Stationary::Evaluations::Base<dim> > > ();
    }




/* ------------------- Slave::PerStepStatistics ----------------- */


    template <int dim>
    Slave<dim>::PerStepStatistics::PerStepStatistics ()
                    :
                    data_misfit (0)
    {}



    template <int dim>
    std::list<std::string>
    Slave<dim>::PerStepStatistics::declare_entries () const
    {

      typedef
        typename Slave<dim>::StateDiscretization::PerStepStatistics
        BaseClass;

      std::list<std::string> entries = BaseClass::declare_entries ();
      entries.push_back ("Data misfit");
      return entries;
    }




    template <int dim>
    std::list<double>
    Slave<dim>::PerStepStatistics::get_values () const
    {
      typedef
        typename Slave<dim>::StateDiscretization::PerStepStatistics
        BaseClass;

      std::list<double> values = BaseClass::get_values ();
      values.push_back (data_misfit);
      return values;
    }




/* ---------------------------- Slave -------------------------- */


    template <int dim>
    Slave<dim>::
    Slave (const Parameters         &parameters,
           const ME_Parameters<dim> &global_parameters,
           libparest::MessageLog::ServerBase   &message_log_server,
           const unsigned int        experiment_number)
                    :
                    libparest::Slave::Stationary::Slave<dim,float_type> ("Tomography",
                                                                         experiment_number,
                                                                         message_log_server),
                    parameters (&parameters),
                    global_parameters (&global_parameters),
		    experiment_description (new ExperimentDescription<dim> (global_parameters,
									    experiment_number,
									    global_parameters.n_experiments)),
                    measurement_representation (global_parameters,
						*experiment_description,
                                                parameters.fe_state,
                                                experiment_number),
		    measurement_weights (0),
                    measurement_functional (0)
    {




      Assert (this->global_matrix == 0, ExcInternalError());
    }



    template <int dim>
    Slave<dim>::~Slave ()
    {


      finalize();
    }



    template <int dim>
    void
    Slave<dim>::initialize (const Vector<double> &initial_a)
    {




      Assert (this->global_matrix == 0, ExcInternalError());













































      if (this->get_experiment_number() == 0)
        this->parameter_discretization  =
          new ScalarField<dim> (*global_parameters,
				*global_parameters,
				ScalarField<dim>::slave,
				*global_parameters->coarse_grid,
				*global_parameters->coefficient);
      else
        {
          typedef
            typename libparest::Parameter::Field::Base<dim>::Triangulations
            Triangulations;
          typedef
            typename libparest::Parameter::Field::Base<dim>::FiniteElements
            FiniteElements;





          this->parameter_discretization  =
            new ParameterDiscretization (new Triangulations
                                         (*global_parameters->coarse_grid,
					  GridTransfer::InitialMeshRefinement<dim>
					  (static_cast<const typename ScalarField<dim>::Parameters*>(global_parameters)->initial_refinement,
					   static_cast<const typename ScalarField<dim>::Parameters*>(global_parameters)->measurement_refinements)),
                                         new FiniteElements (global_parameters->finite_element),
                                         *global_parameters->parameter_bounds);
        }

      this->message_log << libparest::set_priority(3)
                        << "New parameter discretization: "
                        << this->parameter_discretization->triangulations->parameter.n_active_cells()
                        << " cells, "
                        << this->parameter_discretization->dof_handlers->parameter.n_dofs()
                        << " parameter dofs."
                        << std::endl << std::flush;


      GridTransfer::InitialMeshRefinement<dim>
	initial_refinement (parameters->initial_refinement,
			    parameters->measurement_refinements);
      this->state_discretization
        = new METomography::StateDiscretization<dim>(*global_parameters->coarse_grid,
                                                     initial_refinement,
                                                     *global_parameters,
                                                     *this->parameter_discretization);

      initialize_with_discretization ();



      this->present_iterate.reinit (this->state_discretization
                                    ->dof_handlers->block_sizes);

      this->state_discretization
        ->dof_handlers->expand_parameter (initial_a,
                                          this->present_iterate.block(2));


      measurement_weights
	= METomography::Measurements::WeightFunctions::
	parse_weight_function<dim> (parameters->measurement_weights,
				    this->experiment_number,
				    global_parameters->n_experiments);

      switch (parameters->misfit_functional)
        {
          case Parameters::L2_norm:
	  {
	    measurement_functional
	      = new libparest::Slave::Stationary::Measurements::L2_norm<dim,float_type>(problem_description);
	    break;
	  }

	  case Parameters::L2_boundary_norm:
	  case Parameters::L2_weighted_boundary_norm:
          case Parameters::L2_weighted_boundary_norm_real_scaling:
          case Parameters::L2_weighted_boundary_norm_complex_scaling:
	  case Parameters::ratio_over_ratio_minus_one:
	  case Parameters::ratio_minus_ratio:
	  {



	    bool boundary_found = false;

            typename Triangulation<dim>::cell_iterator
              cell = this->state_discretization->triangulations->global.begin(0),
              endc = this->state_discretization->triangulations->global.end(0);
            for (; cell!=endc; ++cell)
              for (unsigned int f=0; f<GeometryInfo<dim>::faces_per_cell; ++f)
		if (cell->at_boundary(f)
                    &&
                    BoundaryDescription::is_robin_boundary_with_measurement
		    (cell->face(f)->boundary_indicator()))
		  {
		    boundary_found = true;
		    break;
		  }
	    Assert (boundary_found == true, ExcInternalError());






	    std::vector<bool> component_mask (4, false);
	    component_mask[2] = component_mask[3] = true;

            const std::set<unsigned char>
              measurement_boundary_indicators
              = BoundaryDescription::get_boundary_with_measurement_indicators();

	    switch (parameters->misfit_functional)
	      {
		case Parameters::L2_boundary_norm:
		{
		  measurement_functional
		    = new libparest::Slave::Stationary::Measurements::
		    Dirichlet_boundary<dim,float_type>(problem_description,
                                                       measurement_boundary_indicators,
                                                       component_mask);
		  break;
		}

		case Parameters::L2_weighted_boundary_norm:
		{
		  measurement_functional
		    = new METomography::Measurements::ScaledWeightedDirichletMeasurements::
		    Pure_L2<dim,float_type>(problem_description,
                                            *measurement_weights,
                                            measurement_boundary_indicators);
		  break;
		}

		case Parameters::L2_weighted_boundary_norm_real_scaling:
		{
		  measurement_functional
		    = new METomography::Measurements::ScaledWeightedDirichletMeasurements::
		    L2_Real<dim,float_type>(problem_description,
                                            *measurement_weights,
                                            measurement_boundary_indicators);
		  break;
		}

		case Parameters::L2_weighted_boundary_norm_complex_scaling:
		{
		  measurement_functional
		    = new METomography::Measurements::ScaledWeightedDirichletMeasurements::
		    L2_Complex<dim,float_type>(problem_description,
                                               *measurement_weights,
                                               measurement_boundary_indicators);
		  break;
		}

		case Parameters::Parameters::ratio_over_ratio_minus_one:
		{
		  measurement_functional
		    = new METomography::Measurements::ReferencedMeasurements::
		    RatioOverRatioMinusOne<dim,float_type>(problem_description,
							   *measurement_weights,
							   measurement_boundary_indicators);
		  break;
		}

		case Parameters::Parameters::ratio_minus_ratio:
		{
		  measurement_functional
		    = new METomography::Measurements::ReferencedMeasurements::
		    RatioMinusRatio<dim,float_type>(problem_description,
						    *measurement_weights,
						    measurement_boundary_indicators);
		  break;
		}

		default:
		      Assert (false, ExcInternalError());
	      }

	    break;
	  }

          default:
                Assert (false, ExcInternalError());
        };




      preset_initial_values ();








      {
        const std::auto_ptr<const libparest::Slave::Stationary::
          MeasurementGetter::Factories::Base<dim> >
          getter_factory (measurement_representation.get_measurement_getter_factory());

        measurement_functional->initialize_gauss_newton_step (*this->state_discretization,
                                                              this->present_iterate,
                                                              *getter_factory);
      }
    }



    template <int dim>
    void
    Slave<dim>::finalize ()
    {
      inverse_norm_matrix.clear ();





      Assert (this->global_matrix == 0, ExcInternalError());

      measurement_representation.finalize ();
      libparest::delete_ptr (this->state_discretization);
      libparest::delete_ptr (this->parameter_discretization);
      libparest::delete_ptr (measurement_functional);
      libparest::delete_ptr (measurement_weights);
    }


    template <int dim>
    void
    Slave<dim>::initialize_gauss_newton_step (const unsigned int step_no)
    {



      {
        const std::auto_ptr<const libparest::Slave::Stationary::
          MeasurementGetter::Factories::Base<dim> >
          getter_factory (measurement_representation.get_measurement_getter_factory());

        measurement_functional->initialize_gauss_newton_step (*this->state_discretization,
                                                              this->present_iterate,
                                                              *getter_factory);
      }








      Assert (this->global_matrix == 0, ExcInternalError());
      this->global_matrix = new GlobalMatrix(*this);

      libparest::Slave::Stationary::Slave<dim,float_type>::
        initialize_gauss_newton_step (step_no);

      measurement_representation.initialize_gauss_newton_step (step_no);
    }



    template <int dim>
    void
    Slave<dim>::end_gauss_newton_step ()
    {




      measurement_representation.end_gauss_newton_step ();


      for (typename Parameters::EvaluationsList::const_iterator
             i = parameters->evaluations.begin();
           i != parameters->evaluations.end(); ++i)
        (*i)->evaluate (this->state_discretization->dof_handlers->global,
                        this->present_iterate,
                        this->get_experiment_number(),
                        this->get_iteration_number(),
			*this);



      libparest::Slave::Stationary::Slave<dim,float_type>::
        end_gauss_newton_step ();




      libparest::delete_ptr (this->global_matrix);
    }



    template <int dim>
    void
    Slave<dim>::compute_information (Vector<float> &contribution) const
    {
      Assert (contribution.size() ==
	      this->parameter_discretization->dof_handlers->parameter.n_dofs(),
	      ExcInternalError());


      contribution = 0;
    }



    template <int dim>
    libparest::PerStepStatistics *
    Slave<dim>::create_and_set_statistics_object ()
    {
      this->present_statistics = new PerStepStatistics();
      return this->present_statistics;
    }



    template <int dim>
    std::pair<double,double>
    Slave<dim>::compute_misfits () const
    {
      this->write_program_status ("comp. misfit", true);



      const std::auto_ptr<const libparest::Slave::Stationary::
	MeasurementGetter::Factories::Base<dim> >
        getter_factory (measurement_representation.get_measurement_getter_factory());
      const double misfit
        = measurement_functional->compute_data_misfit (*this->state_discretization,
                                                       this->present_iterate,
                                                       *getter_factory);

      dynamic_cast<PerStepStatistics*>(&*this->present_statistics)
        ->data_misfit = misfit;

      this->write_program_status ("comp. misfit", false);





      return std::make_pair(0., misfit);
    }



    template <int dim>
    void
    Slave<dim>::write_solution () const
    {
      if (parameters->inhibit_output == true)
        return;

      this->write_program_status ("write output", true);




      Threads::Thread<> synth_output
        = Threads::spawn (measurement_representation,
                          &MeasurementRepresentation<dim>::write_solution)();





      PostProcessMagnitudeAndPhase<dim>
	post_u(0, "u"), post_v(2, "v"), post_lambda(4, "lambda"), post_eta(6, "eta");

      DataOut<dim> data_out;
      data_out.attach_dof_handler (this->state_discretization->dof_handlers->global);
      const Vector<double> present_iterate_1 (this->present_iterate.begin(),
                                              this->present_iterate.end());
      std::vector<std::string> names;
      names.push_back ("Re_u");
      names.push_back ("Im_u");
      names.push_back ("Re_v");
      names.push_back ("Im_v");
      names.push_back ("Re_lambda");
      names.push_back ("Im_lambda");
      names.push_back ("Re_eta");
      names.push_back ("Im_eta");
      names.push_back ("a");
      data_out.add_data_vector(present_iterate_1, names);

      if (parameters->output_magnitude_and_phase == true)
	{
	  data_out.add_data_vector (present_iterate_1, post_u);
	  data_out.add_data_vector (present_iterate_1, post_v);
	  data_out.add_data_vector (present_iterate_1, post_lambda);
	  data_out.add_data_vector (present_iterate_1, post_eta);
	}

      data_out.build_patches ();

      typename DataOut<dim>::OutputFormat output_format
        = DataOut<dim>::parse_output_format (global_parameters->output_format);

      const std::string filename
        = global_parameters->output_directory
        + Utilities::int_to_string(this->get_iteration_number(),3)
        + "-s"
        + Utilities::int_to_string(this->get_experiment_number(),
                                   Utilities::needed_digits(global_parameters->n_experiments))
        + data_out.default_suffix(output_format);





      synth_output.join ();

      this->write_program_status ("write output", false);
    }



    template <int dim>
    void
    Slave<dim>::
    compute_parameter_discretization_multipliers (Vector<float> &v) const
    {


      Assert (this->parameter_discretization
              ->dof_handlers->parameter.get_fe().dofs_per_cell
              == 1,
              ExcNotImplemented());



      Vector<float> cellwise_values (this->state_discretization->triangulations
                                     ->global.n_active_cells());



      const unsigned int n_threads = multithread_info.n_default_threads;
      std::vector<std::pair<unsigned int, unsigned int> >
        thread_ranges = (Threads::split_interval
                         (0, this->state_discretization->triangulations->global.n_active_cells (),
                          n_threads));
      Threads::ThreadGroup<> threads;
      for (unsigned int thread=0; thread<n_threads; ++thread)
        threads += Threads::spawn (*this,
                                   &Slave<dim>::
                                   compute_parameter_discretization_multipliers_1)
                   (thread_ranges[thread].first, thread_ranges[thread].second,
                    cellwise_values);
      threads.join_all ();



      if (true)
        {
          active_cell_iterator cell, endc;
          for (cell=this->state_discretization->dof_handlers->global.begin_active(),
               endc=this->state_discretization->dof_handlers->global.end();
               cell!=endc; ++cell)
            Assert (cell->user_pointer() != 0, ExcInternalError());
        }




      v.reinit (this->parameter_discretization
                ->triangulations->parameter.n_active_cells() *
                GeometryInfo<dim>::max_children_per_cell);




      active_cell_iterator
        cell = this->parameter_discretization->dof_handlers->parameter.begin_active(),
        endc = this->parameter_discretization->dof_handlers->parameter.end();
      unsigned int cell_index=0;
      for (; cell!=endc; ++cell, ++cell_index)
        {
          const cell_iterator
            state_cell = this->state_discretization->dof_handlers->parameter_to_global_map[cell];
          Assert (!state_cell->active(), ExcInternalError());

          for (unsigned int child=0; child<state_cell->n_children(); ++child)
            v(cell_index*GeometryInfo<dim>::max_children_per_cell + child)
              = collect_values_from_children (state_cell->child(child));
        };
      Assert (cell_index * GeometryInfo<dim>::max_children_per_cell == v.size(),
              ExcInternalError());



      for (cell=this->state_discretization->dof_handlers->global.begin_active(),
           endc=this->state_discretization->dof_handlers->global.end();
           cell!=endc; ++cell)
        Assert (cell->user_pointer() == 0, ExcInternalError());
    }



    template <int dim>
    void
    Slave<dim>::
    compute_parameter_discretization_multipliers_1 (const unsigned int  begin,
                                                    const unsigned int  end,
                                                    Vector<float>      &v) const
    {
      QTrapez<1> q_trapez;
      QIterated<dim> quadrature (q_trapez, 4);
      const unsigned int n_q_points = quadrature.n_quadrature_points;

      const FiniteElement<dim> &fe_global
        = this->state_discretization->finite_elements->global;

      FEValues<dim>  fe_values (fe_global, quadrature,
                                UpdateFlags(update_gradients  |
                                            update_JxW_values));





      std::vector<std::vector<Tensor<1,dim> > >
        gradients (n_q_points,
                   std::vector<Tensor<1,dim> >(problem_description.n_variables));


      active_cell_iterator
        cell = this->state_discretization->dof_handlers->global.begin_active(),
        endc = this->state_discretization->dof_handlers->global.begin_active();
      std::advance (cell, static_cast<signed int>(begin));
      std::advance (endc, static_cast<signed int>(end));

      for (unsigned int cell_index=begin; cell!=endc; ++cell, ++cell_index)
        {



          cell->set_user_pointer (&(v(cell_index)));

          fe_values.reinit (cell);
          fe_values.get_function_grads (this->present_iterate, gradients);

          const std::vector<double> &JxW_values = fe_values.get_JxW_values ();



          double sum = 0;
          for (unsigned int q=0; q<n_q_points; ++q)
            sum += (gradients[q][0] * gradients[q][1]) *
                   JxW_values[q];

          v(cell_index) = sum;
        };
    }



    template <int dim>
    double
    Slave<dim>::
    collect_values_from_children (const cell_iterator &cell)
    {


      if (cell->active())
        {
          const void *user_pointer = cell->user_pointer();
          const double v = *reinterpret_cast<const float*>(user_pointer);
          cell->clear_user_pointer ();
          return v;
        };



      double sum = 0;
      for (unsigned int c=0; c<cell->n_children(); ++c)
        sum += collect_values_from_children (cell->child(c));
      return sum;
    }



    template <int dim>
    double
    Slave<dim>::
    estimate_error (Vector<float> &parameter_error,
                    unsigned int  &pe_type)
    {
      this->write_program_status ("error est.", true);
      Assert (this->cellwise_errors.size() == 0, ExcInternalError());
      Assert (parameter_error.size() == 0, ExcInternalError());

      this->cellwise_errors.reinit (this->state_discretization->triangulations
                                    ->global.n_active_cells());









      namespace GridRefinement = libparest::Slave::Stationary::GridRefinement;
      GridRefinement::Base<dim> *grid_refinement = 0;
      switch (parameters->refinement_criterion)
        {
          case Parameters::lambda:
                grid_refinement
                  = new GridRefinement::Lambda<dim>(problem_description);
                break;
          case Parameters::u:
                grid_refinement
                  = new GridRefinement::U<dim>(problem_description);
                break;
          case Parameters::grad_lambda:
                grid_refinement
                  = new GridRefinement::GradLambda<dim>(problem_description);
                break;
          case Parameters::grad_u:
                grid_refinement
                  = new GridRefinement::GradU<dim>(problem_description);
                break;
          case Parameters::grad_grad_lambda:
                grid_refinement
                  = new GridRefinement::GradGradLambda<dim>(problem_description);
                break;
          case Parameters::grad_grad_u:
                grid_refinement
                  = new GridRefinement::GradGradU<dim>(problem_description);
                break;
          case Parameters::weighted_grad_grad:
                grid_refinement
                  = new GridRefinement::WeightedGradGrad<dim>(problem_description);
                break;
          case Parameters::global:
                break;

          default:
                Assert (false, ExcInternalError());
        };







      Threads::ThreadGroup<> threads;




      Vector<float> pe_gamma_values;
      if (parameters->parameter_refinement == ScalarField<dim>::gamma)
        threads += Threads::spawn (*this,
                                   &Slave<dim>::
                                   compute_parameter_discretization_multipliers)
                   (pe_gamma_values);

      Vector<float> pe_state_values;

      double error_sum = 0;
      if (parameters->refinement_criterion != Parameters::global)
        error_sum = grid_refinement->compute_indicators (this->state_discretization->dof_handlers->global,
                                                         this->present_iterate,
                                                         this->cellwise_errors,
                                                         pe_state_values);
      else


        this->cellwise_errors = 1;
      threads.join_all ();



      pe_type = static_cast<unsigned int>(parameters->parameter_refinement);
      switch (parameters->parameter_refinement)
        {
          case ScalarField<dim>::none:
                break;

          case ScalarField<dim>::gamma:
                parameter_error.swap (pe_gamma_values);
                break;

          default:
                Assert (false, ExcNotImplemented());
        };



      libparest::delete_ptr (grid_refinement);

      this->write_program_status ("error est.", false);

      return error_sum;
    }



    template <int dim>
    void
    Slave<dim>::
    refine_slave (const Vector<double> &new_parameters)
    {
      if (parameters->output_grids == true)
        {
          const std::string
            filename = (global_parameters->output_directory
                        + Utilities::int_to_string(this->get_iteration_number(),3)
                        + "-s"
                        + Utilities::int_to_string(this->get_experiment_number(),
                                                   Utilities::needed_digits(global_parameters->n_experiments))
                        + ".grid.eps");
          std::ofstream out (filename.c_str());
          AssertThrow (out, ExcIO());
          GridOut().write_eps (this->state_discretization->triangulations->global,
                               out);
        };






      inverse_norm_matrix.clear();

      this->state_discretization->refine_discretization (this->cellwise_errors,
                                                         this->present_iterate);


      this->cellwise_errors.reinit (0);



      initialize_with_discretization ();


      set_correct_boundary_values ();




      this->state_discretization->dof_handlers->expand_parameter (new_parameters,
                                                                  this->present_iterate.block(2));
    }



    template <int dim>
    void
    Slave<dim>::initialize_with_discretization ()
    {
      this->message_log << libparest::set_priority(3)
                        << "Initializing state discretization: "
                        << (this->state_discretization
                            ->triangulations->global.n_active_cells())
                        << " cells, "
                        << this->state_discretization->dof_handlers->global.n_dofs()
                        << " global dofs"
                        << std::endl << std::flush;


      Threads::ThreadGroup<> threads;




      threads += Threads::spawn (measurement_representation,
                                 &MeasurementRepresentation<dim>::reinitialize)
                 (this->state_discretization->triangulations->global);



      threads += Threads::spawn (*this,
                                 &Slave<dim>::compute_inverse_norm_matrix)();









      std::vector<bool> component_select_boundary
        = problem_description.get_parameter_variables ();
      std::transform (component_select_boundary.begin(),
                      component_select_boundary.end(),
                      component_select_boundary.begin(),
                      std::logical_not<bool>());

      typedef void (*ebd_t) (const DoFHandler<dim>   &,
                             const std::vector<bool> &,
                             std::vector<bool> &,
                             const std::set<unsigned char> &);
      const ebd_t p1 = &DoFTools::template extract_boundary_dofs<DoFHandler<dim> >;
      threads += Threads::spawn (p1)(this->state_discretization->dof_handlers->global,
                                     component_select_boundary,
                                     is_dirichlet_boundary_dof,
                                     BoundaryDescription::get_dirichlet_boundary_indicators());

      threads.join_all ();
    }



    template <int dim>
    void
    Slave<dim>::preset_initial_values ()
    {








      {



        DoFHandler<dim> state_dof_handler (this->state_discretization
                                           ->dof_handlers->global.get_tria());
        state_dof_handler.distribute_dofs (this->state_discretization->finite_elements->state);







	DoFRenumbering::component_wise (state_dof_handler);

        ConstraintMatrix constraints;
        DoFTools::make_hanging_node_constraints (state_dof_handler,
                                                 constraints);
        constraints.close();








        const double constant_coefficient
          = (global_parameters->parameter_bounds
             ->minimal_value(this->parameter_discretization
                             ->dof_handlers->parameter)
             == 0
             ?
             global_parameters->parameter_bounds
             ->maximal_value(this->parameter_discretization
                             ->dof_handlers->parameter)
             * 0.05
             :
             global_parameters->parameter_bounds
             ->minimal_value(this->parameter_discretization
                             ->dof_handlers->parameter));

        Vector<double> state_solution (state_dof_handler.n_dofs());
        ForwardSolver::solve_forward_problem (state_dof_handler,
                                              constraints,
                                              this->state_discretization->finite_elements
                                              ->quadrature,
                                              this->state_discretization->finite_elements
                                              ->face_quadrature,
                                              std::complex<double> (1,0),
                                              ZeroFunction<dim>(4),
                                              experiment_description->get_state_boundary_values(),
                                              ConstantFunction<dim> (constant_coefficient),
                                              state_solution);




        typename DoFHandler<dim>::active_cell_iterator
          state_cell = state_dof_handler.begin_active(),
          state_endc = state_dof_handler.end(),
          global_cell = this->state_discretization->dof_handlers->global.begin_active();
        Vector<double> local_state_values (state_dof_handler.get_fe().dofs_per_cell);
        Vector<double> global_state_values (this->state_discretization
                                            ->dof_handlers->global.get_fe().dofs_per_cell);




        Assert (state_dof_handler.get_fe().dofs_per_cell ==
                4 * GeometryInfo<dim>::vertices_per_cell,
                ExcInternalError());
        for (; state_cell!=state_endc; ++state_cell, ++global_cell)
          for (unsigned int v=0; v<GeometryInfo<dim>::vertices_per_cell; ++v)
            for (unsigned int i=0; i<4; ++i)
              {


                Assert (global_cell->vertex_dof_index(v,i) <
                        this->present_iterate.block(0).size(),
                        ExcInternalError());

                this->present_iterate(global_cell->vertex_dof_index(v,i))
                  = state_solution (state_cell->vertex_dof_index(v,i));
              }
      }


      this->present_iterate.block(1) = 0;
















      set_correct_boundary_values ();
    }


    template <int dim>
    void
    Slave<dim>::set_correct_boundary_values ()
    {








      std::map<unsigned int,double> boundary_values;
      for (std::set<unsigned char>::const_iterator
             i = BoundaryDescription::get_dirichlet_boundary_indicators().begin();
           i != BoundaryDescription::get_dirichlet_boundary_indicators().end();
           ++i)
        VectorTools::
          interpolate_boundary_values (this->state_discretization->dof_handlers->global,
                                       *i,
                                       experiment_description->get_global_boundary_values(),
                                       boundary_values,
                                       problem_description
                                       .get_primal_variables());




      for (std::map<unsigned int,double>::const_iterator i=boundary_values.begin();
           i!=boundary_values.end(); ++i)
        {
          Assert (! this->state_discretization->dof_handlers->is_parameter_dof[i->first],
                  ExcInternalError());

          this->present_iterate(i->first) = i->second;
        };
    }



    template <int dim>
    void
    Slave<dim>::build_matrix_and_rhs ()
    {


      Threads::ThreadGroup<> threads;
      threads += Threads::spawn (*this->global_matrix,
                                 &libparest::Slave::Stationary::
                                 GlobalMatrix::Matrix<float_type>::build_matrix)
                 (this->present_iterate);
      threads += Threads::spawn (*this, &Slave<dim>::build_rhs)
                 (this->present_iterate, this->right_hand_side);





      std::map<unsigned int,double> boundary_values;
      for (unsigned int i=0;
           i<this->state_discretization->dof_handlers->global.n_dofs(); ++i)
        if (is_dirichlet_boundary_dof[i] == true)
          boundary_values[i] = 0.;


      threads.join_all ();






      BlockVector<float_type> tmp(this->state_discretization
                                  ->dof_handlers->block_sizes);
      MatrixTools::apply_boundary_values (boundary_values,
                                          this->global_matrix->global_matrix,
                                          tmp, tmp);

      this->global_matrix
        ->restore_symmetry_of_A (is_dirichlet_boundary_dof,
                                 this->state_discretization
                                 ->dof_handlers->constraints,
                                 this->right_hand_side);






      this->global_matrix->invert_state_matrix ();
    }



    template <int dim>
    void
    Slave<dim>::build_rhs (const BlockVector<double> &linearization_point,
                           BlockVector<double>       &output_vector) const
    {









      BlockVector<double> tmp (this->state_discretization->dof_handlers->block_sizes);

      const unsigned int n_threads = multithread_info.n_default_threads;
      Threads::ThreadMutex   mutex;
      Threads::ThreadGroup<> threads;



      std::vector<std::pair<active_cell_iterator,active_cell_iterator> >
        thread_ranges = (Threads::split_range<active_cell_iterator>
                         (this->state_discretization->dof_handlers->global.begin_active (),
                          this->state_discretization->dof_handlers->global.end (),
                          n_threads));



      for (unsigned int thread=0; thread<n_threads; ++thread)
        threads += Threads::spawn (*this, &Slave<dim>::build_rhs_1)
                   (linearization_point, tmp,
                    thread_ranges[thread].first, thread_ranges[thread].second,
                    mutex);
      threads.join_all ();




      const std::auto_ptr<const libparest::Slave::Stationary::
	MeasurementGetter::Factories::Base<dim> >
        getter_factory (measurement_representation.get_measurement_getter_factory());
      measurement_functional->build_rhs_contribution (*this->state_discretization,
                                                      linearization_point,
                                                      *getter_factory,
                                                      tmp);





      this->state_discretization->dof_handlers->constraints.condense (tmp);
      for (unsigned int i=0;
           i < this->state_discretization->dof_handlers->global.n_dofs();
           ++i)
        if (is_dirichlet_boundary_dof[i] == true)
          tmp(i) = 0.;







      output_vector.reinit (this->state_discretization
                            ->dof_handlers->true_block_sizes);
      output_vector.block(0) = tmp.block(0);
      output_vector.block(1) = tmp.block(1);
      this->state_discretization->dof_handlers
        ->condense_parameter (tmp.block(2),
                              output_vector.block(2));
    }




    template <int dim>
    void
    Slave<dim>::build_rhs_1 (const BlockVector<double>  &linearization_point,
                             BlockVector<double>        &output_vector,
                             const active_cell_iterator &begin,
                             const active_cell_iterator &end,
                             Threads::ThreadMutex       &mutex) const
    {
      using namespace MaterialProperties;
      const FiniteElement<dim> &fe_global
        = this->state_discretization->finite_elements->global;
      const unsigned int dofs_per_cell    = fe_global.dofs_per_cell,
                         n_q_points       = this->state_discretization->finite_elements
                                            ->quadrature.n_quadrature_points,
                         n_q_points_face  = this->state_discretization->finite_elements
                                            ->face_quadrature.n_quadrature_points;

      FEValues<dim>  fe_values (fe_global,
                                this->state_discretization->finite_elements->quadrature,
                                UpdateFlags(update_values     |
                                            update_gradients  |
                                            update_JxW_values |
                                            update_q_points));
      FEFaceValues<dim> fe_face_values (fe_global,
                                        this->state_discretization->finite_elements->face_quadrature,
                                        UpdateFlags(update_values     |
                                                    update_q_points   |
                                                    update_JxW_values));



      std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);





      std::vector<Vector<double> >
        linearization_point_values (n_q_points,
                                    Vector<double>(problem_description.n_variables));
      std::vector<std::vector<Tensor<1,dim> > >
        linearization_point_gradients (n_q_points,
                                       std::vector<Tensor<1,dim> >(problem_description.n_variables));

      std::vector<Vector<double> >
        face_linearization_point_values (n_q_points_face,
                                         Vector<double>(problem_description.n_variables));


      Vector<double> cell_vector (dofs_per_cell);
      std::vector<Vector<double> > boundary_values(this->state_discretization
                                                   ->finite_elements->face_quadrature
                                                   .n_quadrature_points,
                                                   Vector<double> (4));

      for (active_cell_iterator cell=begin; cell!=end; ++cell)
        {
          fe_values.reinit (cell);
          cell_vector = 0;
          cell->get_dof_indices (dof_indices_on_cell);



          fe_values.get_function_values (linearization_point,
                                         linearization_point_values);
          fe_values.get_function_grads  (linearization_point,
                                         linearization_point_gradients);

          for (unsigned int q_point=0; q_point<fe_values.n_quadrature_points; ++q_point)
	    {




	      const double




		Re_u = linearization_point_values[q_point](0),
		Im_u = linearization_point_values[q_point](1),



		Re_v = linearization_point_values[q_point](2),
		Im_v = linearization_point_values[q_point](3),


		Re_lambda = linearization_point_values[q_point](4),
		Im_lambda = linearization_point_values[q_point](5),


		Re_zeta   = linearization_point_values[q_point](6),
		Im_zeta   = linearization_point_values[q_point](7),


		q    = linearization_point_values[q_point](8);





	      const Tensor<1,dim>
		grad_Re_u = linearization_point_gradients[q_point][0],
		grad_Im_u = linearization_point_gradients[q_point][1],
		grad_Re_v = linearization_point_gradients[q_point][2],
		grad_Im_v = linearization_point_gradients[q_point][3],
		grad_Re_lambda = linearization_point_gradients[q_point][4],
		grad_Im_lambda = linearization_point_gradients[q_point][5],
		grad_Re_zeta   = linearization_point_gradients[q_point][6],
		grad_Im_zeta   = linearization_point_gradients[q_point][7];
/* presently unused (and should be unused, since we never have derivatives
   on the coefficient:
   grad_q    = linearization_point_gradients[q_point][8];
*/



	      Assert (linearization_point_values[q_point].size() == 9,
		      ExcInternalError());




	      const double
		D_x = MaterialProperties::compute_D_x(q),
		D_m = MaterialProperties::compute_D_m(q);

              const double
                D_prime_x = MaterialProperties::compute_D_prime_x(q),
                D_prime_m = MaterialProperties::compute_D_prime_m(q);




	      Assert (D_x <= 1./3/(mu_s+mu_a_xi), ExcInvalidValue(D_x));
	      Assert (D_m <= 1./3/(mu_s+mu_a_m), ExcInvalidValue(D_m));
	      Assert (D_prime_x < 0, ExcInvalidValue(D_prime_x));
	      Assert (D_prime_m < 0, ExcInvalidValue(D_prime_m));

	      for (unsigned int i=0; i<dofs_per_cell; ++i)
		{
		  const unsigned int
		    component = fe_global.system_to_component_index(i).first;





		  const double        phi_i      = fe_values.shape_value(i,q_point);
		  const Tensor<1,dim> grad_phi_i = fe_values.shape_grad(i,q_point);








		  if (problem_description.is_primal_variable(component))
		    {













		      double contribution = 0;

		      switch (problem_description.get_primal_variable_index(component))
			{
			  case 0:
			  {

			    contribution =
			      (- D_x * (grad_Re_lambda * grad_phi_i)
			       - (mu_a_xi+q) * Re_lambda * phi_i
			       + omega/c * Im_lambda * phi_i
			       + phi*q / (1.+omega*omega*tau*tau) * Re_zeta * phi_i
			       - phi*q * omega * tau / (1.+omega*omega*tau*tau) * Im_zeta * phi_i
			      );
			    break;
			  }

			  case 1:
			  {

			    contribution =
			      (+ D_x * (grad_Im_lambda * grad_phi_i)
			       + (mu_a_xi+q) * Im_lambda * phi_i
			       + omega/c * Re_lambda * phi_i
			       - phi*q * omega * tau / (1.+omega*omega*tau*tau) * Re_zeta * phi_i
			       - phi*q / (1.+omega*omega*tau*tau) * Im_zeta * phi_i
			      );
			    break;
			  }

			  case 2:
			  {

			    contribution =
			      (- D_m * (grad_Re_zeta * grad_phi_i)
			       - (mu_a_m+muf_ratio*q) * Re_zeta * phi_i
			       + omega/c * Im_zeta * phi_i
			      );
			    break;
			  }

			  case 3:
			  {

			    contribution =
			      (+ D_m * (grad_Im_zeta * grad_phi_i)
			       + (mu_a_m+muf_ratio*q) * Im_zeta * phi_i
			       + omega/c * Re_zeta * phi_i
			      );
			    break;
			  }

			  default:
				Assert (false, ExcInternalError());
			}








		      cell_vector(i) += contribution *
					fe_values.JxW(q_point);
		      continue;
		    }












		  if (problem_description.is_dual_variable(component))
		    {













		      double contribution = 0;

		      switch (problem_description.get_dual_variable_index(component))
			{
			  case 0:
			  {

			    contribution =
			      (- D_x * (grad_Re_u * grad_phi_i)
			       - (mu_a_xi+q) * Re_u * phi_i
			       + omega/c * Im_u * phi_i
			      );
			    break;
			  }

			  case 1:
			  {

			    contribution =
			      (+ D_x *(grad_Im_u * grad_phi_i)
			       + (mu_a_xi+q) * Im_u * phi_i
			       + omega/c * Re_u * phi_i
			      );
			    break;
			  }

			  case 2:
			  {

			    contribution =
			      (- D_m * (grad_Re_v * grad_phi_i)
			       - (mu_a_m+muf_ratio*q) * Re_v * phi_i
			       + omega/c * Im_v * phi_i
			       + phi*q / (1.+omega*omega*tau*tau) * Re_u * phi_i
			       - phi*q / (1.+omega*omega*tau*tau)*omega*tau * Im_u * phi_i
			      );
			    break;
			  }

			  case 3:
			  {
			    contribution =
			      (
				+ D_m * (grad_Im_v * grad_phi_i)
				+ (mu_a_m+muf_ratio*q) * Im_v * phi_i
				+ omega/c * Re_v * phi_i
				- phi*q / (1.+omega*omega*tau*tau) * Im_u * phi_i
				- phi*q / (1.+omega*omega*tau*tau)*omega*tau * Re_u * phi_i
			      );
			    break;
			  }

			  default:
				Assert (false, ExcInternalError());
			}








		      cell_vector(i) += contribution *
					fe_values.JxW(q_point);
		      continue;
		    }







		  if (problem_description.is_parameter_variable(component))
		    {





		      Assert (problem_description.get_parameter_variable_index(component)
			      == 0,
			      ExcInternalError());







		      const double
			contribution =
			(

			  - D_prime_x * (grad_Re_u * grad_Re_lambda) * phi_i
			  - Re_u * Re_lambda * phi_i

			  + D_prime_x * (grad_Im_u * grad_Im_lambda) * phi_i
			  + Im_u * Im_lambda * phi_i

			  - D_prime_m * (grad_Re_v * grad_Re_zeta) * phi_i
			  - muf_ratio * Re_v * Re_zeta * phi_i

			  + phi / (1.+omega*omega*tau*tau) * Re_u * Re_zeta * phi_i
			  - phi / (1.+omega*omega*tau*tau)*omega*tau * Im_u * Re_zeta * phi_i

			  + D_prime_m * (grad_Im_v * grad_Im_zeta) * phi_i
			  + muf_ratio * Im_v * Im_zeta * phi_i

			  - phi / (1.+omega*omega*tau*tau) * Im_u * Im_zeta * phi_i
			  - phi / (1.+omega*omega*tau*tau)*omega*tau * Re_u * Im_zeta * phi_i
			);

		      cell_vector(i) += contribution *
					fe_values.JxW(q_point);

		      continue;
		    };


		  Assert (false, ExcInternalError ());
		}
	    }




          for (unsigned int face_no=0;
               face_no<GeometryInfo<dim>::faces_per_cell;
               ++face_no)
            if (cell->at_boundary(face_no))
              {


                Assert (BoundaryDescription::
                        is_robin_boundary(cell->face(face_no)->boundary_indicator()),
                        ExcInternalError());

                fe_face_values.reinit (cell, face_no);

                fe_face_values.get_function_values (linearization_point,
                                                    face_linearization_point_values);

                experiment_description->get_state_boundary_values()
                  .vector_value_list (fe_face_values.get_quadrature_points(),
                                      boundary_values);

                for (unsigned int i=0; i<dofs_per_cell; ++i)
                  {
                    const unsigned int
                      component = fe_global.system_to_component_index(i).first;
























                    if (problem_description.is_primal_variable(component) ||
                        problem_description.is_dual_variable(component))
                      {
                        static const unsigned int variable_mapping[8] = { 4,5,6,7,0,1,2,3 };
                        Assert (component < sizeof(variable_mapping)/sizeof(variable_mapping[0]),
                                ExcInternalError());
                        const unsigned int var1 = variable_mapping[component];

			if (var1==1 || var1==3 || var1==5 || var1==7)
			  {
			    for (unsigned int q_point=0;
				 q_point<fe_face_values.n_quadrature_points; ++q_point)
			      {
				const double phi_i = fe_face_values.shape_value(i,q_point);


				const double contribution
				  = (1./(2. * gamma) *
				     face_linearization_point_values[q_point](var1) *
				     phi_i *
				     fe_face_values.JxW(q_point));


				cell_vector(i) += contribution;
			      }
			  }
                        else if (var1==0 || var1==2 || var1==4 || var1==6)
			  {
			    for (unsigned int q_point=0;
				 q_point<fe_face_values.n_quadrature_points; ++q_point)
			      {
				const double phi_i = fe_face_values.shape_value(i,q_point);


				const double contribution
				  = (-1./(2. * gamma) *
				     face_linearization_point_values[q_point](var1) *
				     phi_i *
				     fe_face_values.JxW(q_point));


				cell_vector(i) += contribution;
			      }
			  }
                        else

			  Assert (false, ExcInternalError ());

                      }





                    if (problem_description.is_dual_variable(component))
                      {
                        const unsigned int dual_variable
                          = this->problem_description.get_dual_variable_index(component);

                        for (unsigned int q_point=0;
                             q_point<fe_face_values.n_quadrature_points; ++q_point)
                          {
                            const double phi_i = fe_face_values.shape_value(i,q_point);
                            if (dual_variable==0 || dual_variable==2)
			      cell_vector(i) += (1./(2.* gamma) *
						 boundary_values[q_point](dual_variable) *
						 phi_i *
						 fe_face_values.JxW(q_point));
			    else if (dual_variable==1 || dual_variable==3)
			      cell_vector(i) += (-1./(2.* gamma) *
						 boundary_values[q_point](dual_variable) *
						 phi_i *
						 fe_face_values.JxW(q_point));
			    else
			      Assert (false, ExcInternalError ());
                          }
                      }
                  }
              }






          mutex.acquire ();
          for (unsigned int i=0; i<dofs_per_cell; ++i)
            output_vector(dof_indices_on_cell[i])
              += static_cast<float>(cell_vector(i));
          mutex.release ();
        };
    }




    template <int dim>
    Slave<dim>::GlobalMatrix::GlobalMatrix (const Slave<dim> &slave_object)
                    :
                    slave_object (&slave_object)
    {}



    template <int dim>
    void
    Slave<dim>::GlobalMatrix::
    build_matrix (const BlockVector<double> &linearization_point)
    {

      this->global_matrix.reinit (slave_object->state_discretization->dof_handlers->sparsity);

      internal::AssemblerData<dim>
	data (linearization_point,
	      slave_object->state_discretization->finite_elements->global,
	      slave_object->state_discretization->finite_elements->quadrature,
	      slave_object->state_discretization->finite_elements->face_quadrature,
	      problem_description.n_variables);

      libparest::WorkStream work_stream;
      work_stream
	.run (slave_object->state_discretization->dof_handlers->global.begin_active (),
	      static_cast<typename DoFHandler<dim>::active_cell_iterator>
	      (slave_object->state_discretization->dof_handlers->global.end ()),
	      *this,
	      &Slave<dim>::GlobalMatrix::assemble_matrix,
	      &Slave<dim>::GlobalMatrix::copy_local_to_global_matrix,
	      data);



      const std::auto_ptr<const libparest::Slave::Stationary::
	MeasurementGetter::Factories::Base<dim> >
        getter_factory (slave_object->measurement_representation.get_measurement_getter_factory());
      slave_object->measurement_functional
        ->build_matrix_contribution (*slave_object->state_discretization,
                                     linearization_point,
                                     *getter_factory,
                                     this->global_matrix);



      slave_object->state_discretization->dof_handlers
        ->constraints.condense (this->global_matrix);


      this->sibling_tmp_vector.reinit (this->global_matrix.block(1,2).n());



      this->set_submatrices (slave_object->state_discretization
                             ->dof_handlers->transfer_matrix);
    }


    template <int dim>
    void
    Slave<dim>::GlobalMatrix::
    copy_local_to_global_matrix (const internal::AssemblerData<dim> &data)
    {
      static Threads::Mutex m;
      Threads::Mutex::ScopedLock l(m);

      const unsigned int dofs_per_cell
	= slave_object->state_discretization->finite_elements->global.dofs_per_cell;

      for (unsigned int i=0; i<dofs_per_cell; ++i)
	for (unsigned int j=0; j<dofs_per_cell; ++j)
	  this->global_matrix.add(data.dof_indices_on_cell[i],
				  data.dof_indices_on_cell[j],
				  static_cast<float>(data.cell_matrix(i,j)));
    }



    template <int dim>
    void
    Slave<dim>::GlobalMatrix::
    assemble_matrix (const typename DoFHandler<dim>::active_cell_iterator &cell,
		     internal::AssemblerData<dim>                         &data)
    {
      using namespace MaterialProperties;

      const FiniteElement<dim> &fe_global = slave_object->state_discretization->finite_elements->global;
      const unsigned int
        dofs_per_cell    = fe_global.dofs_per_cell,
        n_q_points       = (slave_object->state_discretization->finite_elements
                            ->quadrature.n_quadrature_points),
        n_q_points_face  = (slave_object->state_discretization->finite_elements
                            ->face_quadrature.n_quadrature_points);
      const ProblemDescription
        &problem_description = slave_object->problem_description;


      data.fe_values.reinit (cell);
      data.cell_matrix = 0;
      cell->get_dof_indices (data.dof_indices_on_cell);


      data.fe_values.get_function_values (data.linearization_point,
					  data.linearization_point_values);
      data.fe_values.get_function_grads  (data.linearization_point,
					  data.linearization_point_gradients);

















      for (unsigned int q_point=0; q_point < n_q_points; ++q_point)






















	{
	  const double

	    Re_u = data.linearization_point_values[q_point](0),
	    Im_u = data.linearization_point_values[q_point](1),



	    Re_v = data.linearization_point_values[q_point](2),
	    Im_v = data.linearization_point_values[q_point](3),


	    q    = data.linearization_point_values[q_point](8);





	  const Tensor<1,dim>
	    grad_Re_u = data.linearization_point_gradients[q_point][0],
	    grad_Im_u = data.linearization_point_gradients[q_point][1],
	    grad_Re_v = data.linearization_point_gradients[q_point][2],
	    grad_Im_v = data.linearization_point_gradients[q_point][3];
















	  Assert (data.linearization_point_values[q_point].size() == 9,
		  ExcInternalError());




	  const double
	    D_x = MaterialProperties::compute_D_x(q),
	    D_m = MaterialProperties::compute_D_m(q);
	  const double
	    D_prime_x = MaterialProperties::compute_D_prime_x(q),
	    D_prime_m = MaterialProperties::compute_D_prime_m(q);

	  for (unsigned int i=0; i<dofs_per_cell; ++i)
	    for (unsigned int j=0; j<dofs_per_cell; ++j)
	      {

















#ifndef DEBUG
		if (i>j)
		  continue;
#endif





















		const unsigned int
		  component_i = fe_global.system_to_component_index(i).first,
		  component_j = fe_global.system_to_component_index(j).first;





		const double        phi_i      = data.fe_values.shape_value(i,q_point);
		const double        phi_j      = data.fe_values.shape_value(j,q_point);
		const Tensor<1,dim> grad_phi_i = data.fe_values.shape_grad(i,q_point);
		const Tensor<1,dim> grad_phi_j = data.fe_values.shape_grad(j,q_point);













		if (problem_description.is_primal_variable(component_i) &&
		    problem_description.is_primal_variable(component_j))
		  {
		    continue;
		  }






















		if (problem_description.is_primal_variable(component_i) &&
		    problem_description.is_dual_variable(component_j))
		  {
		    double contribution = 0;
		    switch (component_i)
		      {
			case 0:
			{
			  switch (component_j)
			    {
			      case 4:
			      {
				contribution
				  = (D_x * grad_phi_i * grad_phi_j
				     + (mu_a_xi + q) * phi_i * phi_j);

				break;
			      }

			      case 5:
			      {
				contribution
				  = -omega / c * phi_i * phi_j;

				break;
			      }

			      case 6:
			      {
				contribution
				  = -phi/(1+omega*omega*tau*tau) * q * phi_i * phi_j;

				break;
			      }

			      case 7:
			      {
				contribution
				  = phi*omega*tau/(1+omega*omega*tau*tau) * q * phi_i * phi_j;

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
			      case 4:
			      {
				contribution
				  = -omega/c * phi_i*phi_j;

				break;
			      }

			      case 5:
			      {
				contribution
				  = -(D_x * grad_phi_i * grad_phi_j +
				      (mu_a_xi + q) * phi_i * phi_j);

				break;
			      }

			      case 6:
			      {
				contribution
				  = +phi*omega*tau/(1+omega*omega*tau*tau) * q * phi_i * phi_j;

				break;
			      }

			      case 7:
			      {
				contribution
				  = +phi/(1+omega*omega*tau*tau) * q * phi_i * phi_j;

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
			      case 4:
			      {
				contribution
				  = 0;

				break;
			      }

			      case 5:
			      {
				contribution
				  = 0;

				break;
			      }

			      case 6:
			      {
				contribution
				  = (D_m * grad_phi_i * grad_phi_j
				     + (mu_a_m + muf_ratio * q) * phi_i * phi_j);

				break;
			      }

			      case 7:
			      {
				contribution
				  = -omega/c * phi_i * phi_j;

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
			      case 4:
			      {
				contribution
				  = 0;

				break;
			      }

			      case 5:
			      {
				contribution
				  = 0;

				break;
			      }

			      case 6:
			      {
				contribution
				  = -omega / c * phi_i * phi_j;

				break;
			      }

			      case 7:
			      {
				contribution
				  = -(D_m * grad_phi_i * grad_phi_j +
				      (mu_a_m + muf_ratio * q) * phi_i * phi_j);

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


		    data.cell_matrix(i,j) += contribution * data.fe_values.JxW(q_point);

		    continue;
		  }







		if (problem_description.is_primal_variable(component_i) &&
		    problem_description.is_parameter_variable(component_j))
		  continue;




		if (problem_description.is_dual_variable(component_i) &&
		    problem_description.is_primal_variable(component_j))
		  {
		    double contribution = 0;
		    switch (component_i)
		      {
			case 4:
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

			case 5:
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
				  = -(D_x * grad_phi_i * grad_phi_j +
				      (mu_a_xi + q) * phi_i * phi_j);

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

			case 6:
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

			case 7:
			{
			  switch (component_j)
			    {
			      case 0:
			      {
				contribution
				  = +phi*omega*tau / (1+omega*omega*tau*tau) * q * phi_i * phi_j;

				break;
			      }

			      case 1:
			      {
				contribution
				  = +phi / (1+omega*omega*tau*tau) * q * phi_i * phi_j;

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
				  = -(D_m * grad_phi_i * grad_phi_j +
				      (mu_a_m + muf_ratio*q) * phi_i * phi_j);

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


		    data.cell_matrix(i,j) += contribution * data.fe_values.JxW(q_point);

		    continue;
		  }





		if (problem_description.is_dual_variable(component_i) &&
		    problem_description.is_dual_variable(component_j))
		  continue;





		if (problem_description.is_dual_variable(component_i) &&
		    problem_description.is_parameter_variable(component_j))
		  {
		    double contribution = 0;
		    switch (component_i)
		      {
			case 4:
			{
			  contribution
			    = (D_prime_x * grad_Re_u * grad_phi_i * phi_j
			       + Re_u * phi_i * phi_j);
			  break;
			}

			case 5:
			{
			  contribution
			    = -(D_prime_x * grad_Im_u * grad_phi_i * phi_j
				+ Im_u * phi_i * phi_j);
			  break;
			}

			case 6:
			{
			  contribution
			    = (D_prime_m * grad_Re_v * grad_phi_i * phi_j
			       + muf_ratio * Re_v * phi_i * phi_j
			       - phi/(1+omega*omega*tau*tau) * Re_u * phi_i * phi_j
			       + phi*omega*tau/(1+omega*omega*tau*tau) * Im_u * phi_i * phi_j);
			  break;
			}

			case 7:
			{
			  contribution
			    = (-D_prime_m * grad_Im_v * grad_phi_i * phi_j
			       - muf_ratio * Im_v * phi_i * phi_j
			       + phi/(1+omega*omega*tau*tau) * Im_u * phi_i * phi_j
			       + phi*omega*tau/(1+omega*omega*tau*tau) * Re_u * phi_i * phi_j);
			  break;
			}

			default:
			      Assert (false, ExcInternalError());
		      }

		    data.cell_matrix(i,j) += contribution * data.fe_values.JxW(q_point);

		    continue;
		  }



		if (problem_description.is_parameter_variable(component_i) &&
		    problem_description.is_primal_variable(component_j))
		  continue;




		if (problem_description.is_parameter_variable(component_i) &&
		    problem_description.is_dual_variable(component_j))
		  {
		    double contribution = 0;
		    switch (component_j)
		      {
			case 4:
			{
			  contribution
			    = (D_prime_x * grad_Re_u * grad_phi_j * phi_i
			       + Re_u * phi_i * phi_j);
			  break;
			}

			case 5:
			{
			  contribution
			    = -(D_prime_x * grad_Im_u * grad_phi_j * phi_i
				+ Im_u * phi_i * phi_j);
			  break;
			}

			case 6:
			{
			  contribution
			    = (D_prime_m * grad_Re_v * grad_phi_j * phi_i
			       + muf_ratio * Re_v * phi_i * phi_j
			       - phi/(1+omega*omega*tau*tau)*Re_u * phi_i * phi_j
			       + phi*omega*tau/(1+omega*omega*tau*tau)*Im_u * phi_i * phi_j);
			  break;
			}

			case 7:
			{
			  contribution
			    = (-D_prime_m * grad_Im_v * grad_phi_j * phi_i
			       - muf_ratio * Im_v * phi_i * phi_j
			       + phi/(1+omega*omega*tau*tau)*Im_u * phi_i * phi_j
			       + phi*omega*tau/(1+omega*omega*tau*tau)*Re_u * phi_i * phi_j);
			  break;
			}

			default:
			      Assert (false, ExcInternalError());
		      }

		    data.cell_matrix(i,j) += contribution * data.fe_values.JxW(q_point);

		    continue;
		  }





		if (problem_description.is_parameter_variable(component_i) &&
		    problem_description.is_parameter_variable(component_j))
		  continue;






		Assert (false, ExcInternalError());
	      }
	}
















      for (unsigned int face_no=0; face_no<GeometryInfo<dim>::faces_per_cell;
	   ++face_no)
	if (cell->at_boundary(face_no))
	  {
	    data.fe_face_values.reinit (cell, face_no);

	    data.fe_face_values.get_function_values (data.linearization_point,
						     data.face_linearization_point_values);

	    for (unsigned int i=0; i<dofs_per_cell; ++i)
	      {
		const unsigned int
		  component_i = fe_global.system_to_component_index(i).first;

		for (unsigned int j=0; j<dofs_per_cell; ++j)
		  {





















#ifndef DEBUG
		    if (i>j)
		      continue;
#endif

		    const unsigned int
		      component_j = fe_global.system_to_component_index(j).first;

		    if ((problem_description.is_primal_variable(component_i) &&
			 problem_description.is_dual_variable(component_j) &&
			 (component_j == component_i+4))
			||
			(problem_description.is_dual_variable(component_i) &&
			 problem_description.is_primal_variable(component_j) &&
			 (component_i == component_j+4)))
		      for (unsigned int q_point=0; q_point<n_q_points_face; ++q_point)
			{
			  if(component_i==1 || component_i==3  || component_i==5 || component_i==7)
			    data.cell_matrix(i,j)
			      += (-1./(2.*gamma) *
				  data.fe_face_values.shape_value(i,q_point) *
				  data.fe_face_values.shape_value(j,q_point) *
				  data.fe_face_values.JxW(q_point));
			  else if (component_i==0 || component_i==2  || component_i==4 || component_i==6)
			    data.cell_matrix(i,j)
			      += (1./(2.*gamma) *
				  data.fe_face_values.shape_value(i,q_point) *
				  data.fe_face_values.shape_value(j,q_point) *
				  data.fe_face_values.JxW(q_point));
			  else
			    Assert (false, ExcInternalError());

			}

		  }
	      }
	  }
















      for (unsigned int i=0; i<dofs_per_cell; ++i)
	for (unsigned int j=0; j<dofs_per_cell; ++j)
	  {
	    Assert (std::fabs(data.cell_matrix(i,j) - data.cell_matrix(j,i))
		    <= 1e-6 * std::fabs(data.cell_matrix(j,i)),
		    ExcInternalError());
	    if (i>j)
	      data.cell_matrix(i,j) = data.cell_matrix(j,i);
	  }
    }



    template <int dim>
    void
    Slave<dim>::GlobalMatrix::invert_state_matrix ()
    {




      global_matrix.block(0,1).clear ();


      libparest::delete_ptr (A_inverse);
      A_inverse = new Sparse_A_BlockInverse<float_type> (global_matrix.block(1,0));





      bool matrix_A_needed = false;
      for (typename Slave<dim>::Parameters::EvaluationsList::const_iterator
             i = slave_object->parameters->evaluations.begin();
           i != slave_object->parameters->evaluations.end(); ++i)
	if (dynamic_cast<const Evaluations::WriteMatrixA<dim>*> (&**i) != 0)
	  matrix_A_needed = true;

      if (matrix_A_needed != true)
	global_matrix.block(1,0).clear ();
    }



    template <typename number>
    Sparse_A_BlockInverse<number>::
    Sparse_A_BlockInverse (const SparseMatrix<number> &all_of_A)
    {








      const unsigned int N = all_of_A.m()/2;
      sparsity_pattern.reinit  (N,N, all_of_A.get_sparsity_pattern().max_entries_per_row ());


      for (unsigned int i=0; i<all_of_A.get_sparsity_pattern().n_nonzero_elements(); ++i)
	{
	  const std::pair<unsigned int, unsigned int>
	    p = all_of_A.get_sparsity_pattern().matrix_position(i);
	  if ((p.first < N) && (p.second < N))
            sparsity_pattern.add (p.first, p.second);
	}
      sparsity_pattern.compress ();




















      A_m.reinit (sparsity_pattern);
      A_x.reinit (sparsity_pattern);
      B.reinit (sparsity_pattern);
      for (unsigned int i=0; i<all_of_A.get_sparsity_pattern().n_nonzero_elements(); ++i)
	{
	  const std::pair<unsigned int, unsigned int>
	    p = all_of_A.get_sparsity_pattern().matrix_position(i);
	  if ((p.first < N) && (p.second < N))
            A_x.set (p.first, p.second, all_of_A(p.first, p.second));
          else if ((p.first >= N) && (p.second >= N))
            A_m.set (p.first-N, p.second-N, all_of_A(p.first, p.second));
          else if ((p.first >= N) && (p.second < N))
            B.set (p.first-N, p.second, -all_of_A(p.first, p.second));
          else
            Assert (all_of_A(p.first, p.second) == 0.,
                    ExcInvalidMatrixEntry(p.first, p.second,
                                          all_of_A(p.first,p.second)));
	}





      const std::vector<unsigned int> block_sizes (2, N);
      tmp.reinit (block_sizes);




      try
        {
          inverse_matrix_1.get_synchronisation_lock().acquire ();
          inverse_matrix_1.initialize (A_x.get_sparsity_pattern());
          inverse_matrix_1.factorize (A_x);
          inverse_matrix_1.get_synchronisation_lock().release ();

          inverse_matrix_2.get_synchronisation_lock().acquire ();
          inverse_matrix_2.initialize (A_m.get_sparsity_pattern());
          inverse_matrix_2.factorize (A_m);
          inverse_matrix_2.get_synchronisation_lock().release ();
        }
      catch (...)
        {















          std::cerr << "**** Sparse direct solver failed! ****"
                    << std::endl;
          throw;
        }
    }



    template <typename number>
    void
    Sparse_A_BlockInverse<number>::
    vmult (Vector<double> &v) const
    {
      do_vmult (v);
    }



    template <typename number>
    void
    Sparse_A_BlockInverse<number>::
    vmult (Vector<float> &v) const
    {
      do_vmult (v);
    }



    template <typename number>
    void
    Sparse_A_BlockInverse<number>::
    Tvmult (Vector<double> &v) const
    {
      do_Tvmult (v);
    }



    template <typename number>
    void
    Sparse_A_BlockInverse<number>::
    Tvmult (Vector<float> &v) const
    {
      do_Tvmult (v);
    }



    template <typename number>
    template <typename T>
    void
    Sparse_A_BlockInverse<number>::
    do_vmult (Vector<T> &v) const
    {




      mutex.acquire ();
      Assert (tmp.size() == v.size(), ExcInternalError());
      Assert (tmp.block(0).size() == v.size()/2, ExcInternalError());

      std::copy (v.begin(), v.begin()+v.size()/2, tmp.block(0).begin ());
      std::copy (v.begin()+v.size()/2, v.end(), tmp.block(1).begin ());



      inverse_matrix_1.get_synchronisation_lock().acquire ();
      inverse_matrix_1.solve (tmp.block(0));
      inverse_matrix_1.get_synchronisation_lock().release ();












      B.vmult_add (tmp.block(1), tmp.block(0));



      inverse_matrix_2.get_synchronisation_lock().acquire ();
      inverse_matrix_2.solve (tmp.block(1));
      inverse_matrix_2.get_synchronisation_lock().release ();



      std::copy (tmp.block(0).begin(), tmp.block(0).end(), v.begin());
      std::copy (tmp.block(1).begin(), tmp.block(1).end(), v.begin()+v.size()/2);

      mutex.release ();
    }



    template <typename number>
    template <typename T>
    void
    Sparse_A_BlockInverse<number>::
    do_Tvmult (Vector<T> &v) const
    {



      mutex.acquire ();
      Assert (tmp.size() == v.size(), ExcInternalError());
      Assert (tmp.block(0).size() == v.size()/2, ExcInternalError());

      std::copy (v.begin(), v.begin()+v.size()/2, tmp.block(0).begin ());
      std::copy (v.begin()+v.size()/2, v.end(), tmp.block(1).begin ());



      inverse_matrix_1.get_synchronisation_lock().acquire ();
      inverse_matrix_1.solve (tmp.block(1));
      inverse_matrix_1.get_synchronisation_lock().release ();












      B.Tvmult_add (tmp.block(0), tmp.block(1));



      inverse_matrix_2.get_synchronisation_lock().acquire ();
      inverse_matrix_2.solve (tmp.block(0));
      inverse_matrix_2.get_synchronisation_lock().release ();



      std::copy (tmp.block(0).begin(), tmp.block(0).end(), v.begin());
      std::copy (tmp.block(1).begin(), tmp.block(1).end(), v.begin()+v.size()/2);

      mutex.release ();
    }


    template <int dim>
    void
    Slave<dim>::
    declare_graphical_output_labels (libparest::MessageLog::Client &message_log,
                                     const unsigned int  experiment_no)
    {
      for (unsigned int i=0; i<n_graphical_output_labels; ++i)
        message_log << libparest::set_priority(3)
                    << "program status: declare slave: " << experiment_no
                    << " line: "
                    << graphical_output_labels[i]
                    << std::endl << std::flush;
      message_log << libparest::set_priority(3)
                  << "program status: declare slave: " << experiment_no
                  << " end"
                  << std::endl << std::flush;
    }



    template <int dim>
    double
    Slave<dim>::
    compute_trial_residual_1 (const double    trial_alpha,
                              Vector<double> &slave_contribution) const
    {

      const std::vector<unsigned int> &block_sizes
        = this->state_discretization->dof_handlers->block_sizes;

      BlockVector<double> trial_residual;
      BlockVector<double> trial_iterate (block_sizes);
      trial_iterate = this->present_iterate;
      if (trial_alpha != 0)
        trial_iterate.add (trial_alpha, this->update);



      if (true)
        {
          Vector<double> tmp(this->parameter_discretization->dof_handlers->parameter.n_dofs());
          this->state_discretization
            ->dof_handlers->interpolate_parameter (trial_iterate, tmp);
          this->parameter_discretization->set_back_to_bounds (tmp);
          this->state_discretization
            ->dof_handlers->expand_parameter (tmp,
                                              trial_iterate.block(2));
        };

      build_rhs (trial_iterate, trial_residual);







      {
	PrimitiveVectorMemory<> vector_memory;

	for (unsigned int block=0; block<2; ++block)
	  {
	    trial_iterate.block(block) = 0;

            // For the SPEC benchmark version 510.parest, cap number of iterations, for more
            // comparable work, despite minor FP differences.  The small criterion is an 
            // additional cap: in cases where the solver would normally exit after 0 or 1 
            // iterations, but does not due to minor FP diffs, then it will soon exit 
            // when it hits the criterion.
	    SolverControl solver_control (std::min (50U, trial_iterate.block(block).size()),
					  1e-100);
	    SolverCG<> solver (solver_control, vector_memory);

	    PreconditionSSOR<SparseMatrix<double> > preconditioner;
	    preconditioner.initialize (inverse_norm_matrix, 1.);

	    try
	      {
		solver.solve (inverse_norm_matrix, trial_iterate.block(block),
			      trial_residual.block(block),
			      preconditioner);
	      }
	    catch (SolverControl::NoConvergence &)
	      {
		// ignore the fact that we didn't reach the tolerance
	      }
	  }
      }

      this->state_discretization->dof_handlers->constraints.
        distribute (trial_iterate);


      const double
        residual1 = trial_iterate.block(0) * trial_residual.block(0),
        residual2 = trial_iterate.block(1) * trial_residual.block(1);

      const double residual = (residual1 + residual2);

      Assert (residual >= 0, ExcInvalidResidual(residual));

      slave_contribution = trial_residual.block(2);

      return residual;
    }



    template <int dim>
    void
    Slave<dim>::compute_inverse_norm_matrix ()
    {

























      inverse_norm_matrix.reinit (this->state_discretization->
				  dof_handlers->sparsity.block(0,0));


      if (true)
        {
          const FiniteElement<dim> &fe
            = this->state_discretization->finite_elements->global;
          const unsigned int dofs_per_cell = fe.dofs_per_cell;

          FEValues<dim>  fe_values (fe,
                                    this->state_discretization->
                                    finite_elements->quadrature,
                                    UpdateFlags(update_gradients  |
						update_values     |
                                                update_JxW_values));
          FullMatrix<double> cell_matrix (dofs_per_cell, dofs_per_cell);
          std::vector<unsigned int> dof_indices_on_cell (dofs_per_cell);

          typename DoFHandler<dim>::active_cell_iterator
            cell = this->state_discretization->dof_handlers->global.begin_active(),
            endc = this->state_discretization->dof_handlers->global.end();
          for (; cell!=endc; ++cell)
            {
              fe_values.reinit (cell);
              cell_matrix = 0;

              for (unsigned int q_point=0; q_point<fe_values.n_quadrature_points;
		   ++q_point)
                for (unsigned int i=0; i<dofs_per_cell; ++i)
                  for (unsigned int j=0; j<dofs_per_cell; ++j)
                    {
                      const unsigned int
                        component_i = fe.system_to_component_index(i).first,
                        component_j = fe.system_to_component_index(j).first;

                      if (problem_description.is_primal_variable(component_i)
                          &&
                          problem_description.is_primal_variable(component_j)
                          &&
                          (component_i == component_j))
                        cell_matrix(i,j)
			  += (fe_values.shape_value(i,q_point) *
                              fe_values.shape_value(j,q_point) *
                              fe_values.JxW(q_point));
                    };

              cell->get_dof_indices (dof_indices_on_cell);
              for (unsigned int i=0; i<dofs_per_cell; ++i)
                for (unsigned int j=0; j<dofs_per_cell; ++j)
                  if (cell_matrix(i,j) != 0)
                    inverse_norm_matrix.add (dof_indices_on_cell[i],
					     dof_indices_on_cell[j],
					     cell_matrix(i,j));
            }
        }

    }



    template class Slave<deal_II_dimension>;
  }
}
