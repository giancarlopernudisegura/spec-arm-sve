//----------------------------   base.h     ---------------------------
//    $Id: state_discretization.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2000, 2001, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   base.h     ---------------------------
#ifndef __parameter_estimation__grids_h
#define __parameter_estimation__grids_h
//----------------------------   base.h     ---------------------------


#include <base/subscriptor.h>
#include <libparest/parameter/field.h>
#include <libparest/slave/stationary/state_discretization.h>
#include <libparest/statistics.h>

#include "config.h"
#include "me_parameters.h"

namespace dealii
{
  template <typename number> class BlockVector;
}


namespace METomography
{
  using namespace libparest::Slave::Stationary;



  template <int dim>
  class StateDiscretization : public Discretization::Base<dim>
  {
    public:
      typedef
      libparest::Parameter::Field::DiscretizedField<dim>
      ParameterDiscretization;
      
      typedef Discretization::Triangulations<dim> Triangulations;
      typedef Discretization::FiniteElements<dim> FiniteElements;
      typedef Discretization::DoFHandlers<dim>    DoFHandlers;
      typedef typename Discretization::Base<dim>::PerStepStatistics PerStepStatistics;
    
    
      StateDiscretization (const Triangulation<dim>      &old_global,
			   const libparest::GridTransfer::Base<dim>   &mesh_refinement,
			   const ME_Parameters<dim>      &parameters,
			   const ParameterDiscretization &parameter_discretization);

      virtual
      void
      refine_discretization (const Vector<float> &error_indicators,
			     BlockVector<double> &vector_for_conversion);
    
      const SmartPointer<const ME_Parameters<dim> > parameters;
  };
 
}



#endif
