//----------------------------   stationary_state_discretization.h     ---------------------------
//    $Id: state_discretization.h 3734 2008-12-14 20:05:24Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2003, 2004, 2006, 2007, 2008, 2009 by Wolfgang Bangerth
//
//----------------------------   stationary_state_discretization.h     ---------------------------
#ifndef __parameter_estimation__stationary_state_discretization_h
#define __parameter_estimation__stationary_state_discretization_h
//----------------------------   stationary_state_discretization.h     ---------------------------


#include <base/subscriptor.h>
#include <base/smartpointer.h>
#include <base/table.h>
#include <lac/block_sparsity_pattern.h>
#include <grid/tria.h>
#include <grid/intergrid_map.h>
#include <dofs/dof_handler.h>
#include <dofs/dof_constraints.h>
#include <fe/fe.h>
#include <libparest/parameter/field.h>
#include <libparest/slave/stationary/problem_description.h>
#include <libparest/statistics.h>

#include <string>

namespace dealii
{
  template <int dim>  class Quadrature;
  template <typename> class Vector;
  template <typename> class BlockVector;
}

namespace libparest
{
  using namespace dealii;


  namespace GridTransfer
  {
    template <int dim>  class Base;
  }
}

namespace libparest
{
  namespace Slave
  {
    namespace Stationary
    {
      namespace Discretization
      {

	template <int dim>
	class Triangulations : public Subscriptor
	{
	  public:
	    Triangulations (const Triangulation<dim>      &old_global,
			    const GridTransfer::Base<dim> &mesh_refinement);
	
	    ~Triangulations ();
    
	    Triangulation<dim> global;
	};



	template <int dim>
	class FiniteElements : public Subscriptor
	{
	  public:
	    FiniteElements (const ProblemDescription &problem_description,
			    const std::string        &fe_state,
			    const std::string        &fe_parameter);

	    const FiniteElement<dim> &global;

	    const FiniteElement<dim> &state;

	    const FiniteElement<dim> &parameter;
    
	    const Quadrature<dim>    &quadrature;

	    const Quadrature<dim-1>  &face_quadrature;
	};
    


	template <int dim>
	class DoFHandlers : public Subscriptor 
	{
	  public:
	    typedef Parameter::Field::DoFHandlers<dim>
	    ParameterDiscretization;

            typedef Table<2,bool> CouplingMask;
            
	    DoFHandlers (const ProblemDescription      &problem_description,
			 Triangulations<dim>           &triangulations,
			 const FiniteElements<dim>     &fe,
			 const ParameterDiscretization &parameter_discretization,
			 const bool                     renumber_dofs_CMK,
			 const CouplingMask            &coupling_mask = CouplingMask());

	    ~DoFHandlers ();

	    void reinitialize ();
	
	    unsigned int max_intergrid_level_difference() const;

	    void expand_parameter (const Vector<double> &coarse_parameter,
				   Vector<double>       &fine_solution) const;
	
	    void interpolate_parameter (const BlockVector<double> &fine_solution,
					Vector<double>            &coarse_parameter) const;

	    void condense_parameter (const Vector<double> &fine_rhs,
				     Vector<double>       &coarse_rhs) const;
	
	    DoFHandler<dim> global;

	    InterGridMap<DoFHandler<dim> > global_to_parameter_map;
	    InterGridMap<DoFHandler<dim> > parameter_to_global_map;

	    std::vector<bool>   is_parameter_dof;

	    ConstraintMatrix     constraints;
	
	    BlockSparsityPattern sparsity;

	    std::vector<unsigned int> block_sizes;

	    std::vector<unsigned int> true_block_sizes;

	    SparsityPattern transfer_sparsity;
	    SparseMatrix<double> transfer_matrix;
	
	    SmartPointer<const ParameterDiscretization > parameter_discretization;

	    const ProblemDescription problem_description;
	
	  private:
	    double collect_parameter (const BlockVector<double> &fine_solution,
				      const typename DoFHandler<dim>::cell_iterator &cell,
				      std::vector<unsigned int> &tmp) const;

	    const SmartPointer<const FiniteElements<dim> > fe;

	    const bool renumber_dofs_CMK;

	    Table<2,bool> coupling_mask;
	};



	template <int dim>
	class Base : public Subscriptor
	{
	  public:
	    typedef
	    Parameter::Field::ScalarField<dim>
	    ParameterDiscretization;

	    typedef
	    Stationary::Discretization::Triangulations<dim>
	    Triangulations;

	    typedef
	    Stationary::Discretization::FiniteElements<dim>
	    FiniteElements;

	    typedef
	    Stationary::Discretization::DoFHandlers<dim>
	    DoFHandlers;
    


	    class PerStepStatistics : public libparest::PerStepStatistics
	    {
	      public:
		PerStepStatistics ();
	  
		virtual
		std::list<std::string>
		declare_entries () const;

		virtual
		std::list<double>
		get_values () const;

	      private:
		unsigned int n_cells;
					    
		unsigned int primal_dofs, global_dofs;

		friend class Base<dim>;
	    };


	  public:

	    Base ();

	    virtual ~Base ();
	
	    virtual void
	    refine_discretization (const Vector<float> &error_indicators,
				   BlockVector<double> &vector_for_conversion) = 0;

	    void fill_statistics (PerStepStatistics &statistics) const;    

	    Triangulations   *triangulations;

	    FiniteElements   *finite_elements;
    
	    DoFHandlers      *dof_handlers;

	  protected:

	    void
	    do_refine_discretization (const Vector<float>            &error_indicators,
				      const std::pair<double,double> &refinement_fraction,
				      BlockVector<double>            &vector_for_conversion,
				      const unsigned int              max_n_cells = 1000000000);
	};
    
      }
    }  
  }
}


//----------------------------   stationary_state_discretization.h     ---------------------------
// end of #ifndef __parameter_estimation__stationary_state_discretization_h
#endif
//----------------------------   stationary_state_discretization.h     ---------------------------
