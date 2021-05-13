//----------------------------   synthetic_data.h     ---------------------------
//    $Id: synthetic_data.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 1999, 2000, 2001, 2002, 2003, 2004, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   synthetic_data.h     ---------------------------
#ifndef __parameter_estimation__synthetic_data_h
#define __parameter_estimation__synthetic_data_h
//----------------------------   synthetic_data.h     ---------------------------


#include <base/thread_management.h>
#include <libparest/slave/stationary/synthetic_data.h>

#include "config.h"
#include "problem_description.h"
#include "experiment_description.h"

namespace dealii
{
  template <int dim> class Function;
  template <int dim> class ExperimentDescription;
  template <typename> class BlockSparseMatrix;
  template <typename> class BlockVector;
}


namespace METomography
{
  template <int dim> class StateDiscretization;
  template <int dim> class TomographyParameters;
}


namespace METomography
{
  using namespace libparest::Slave::Stationary;


  template <int dim>
  class SyntheticData : public SyntheticDataBase<dim>
  {
    public:
      class Parameters : public SyntheticDataBase<dim>::Parameters
      {
        public:
          Parameters ();

          double unknown_source_amplitude;
          double unknown_source_phase;
          
          static void declare_parameters (ParameterHandler &prm);
	  
          void parse_parameters (ParameterHandler &prm);
	  
          void delete_parameters ();          
      };
      
	
      SyntheticData (const Parameters              &parameters,
		     const TomographyParameters<dim> &global_parameters,
		     const ExperimentDescription<dim> &experiment_description,
		     const std::string             &fe_state,
		     const unsigned int             experiment_no);

      static const ProblemDescription problem_description;

    private:
      const SmartPointer<const Parameters> parameters;
      
      const SmartPointer<const ExperimentDescription<dim> > experiment_description;
      
      const SmartPointer<const Function<dim> > coefficient;

      virtual void setup_and_solve_system (const ConstraintMatrix &constraints);

      virtual void renumber_dofs ();
  };


}


//----------------------------   synthetic_data.h     ---------------------------
// end of #ifndef __parameter_estimation__synthetic_data_h
#endif
//----------------------------   synthetic_data.h     ---------------------------


