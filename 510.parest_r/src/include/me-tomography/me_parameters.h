//----------------------------   me_parameters.h     ---------------------------
//    $Id: me_parameters.h 3738 2008-12-14 22:49:40Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2008, 2009 by Wolfgang Bangerth
//
//----------------------------   me_parameters.h     ---------------------------
#ifndef __parameter_estimation__me_parameters_h
#define __parameter_estimation__me_parameters_h
//----------------------------   me_parameters.h     ---------------------------



#include <libparest/global_parameters.h>
#include <libparest/master/newton_method.h>

#include <grid/tria.h>

#include "config.h"
#include "coefficient.h"
#include "experiment_description.h"

namespace dealii
{
  template <int dim> class Function;
}

namespace libparest
{
  namespace Parameter
  {
    namespace Field
    {
      namespace Bounds
      {
        template <int dim> class Base;
      }
    }
  }
}
namespace METomography 
{
  namespace Slave
  {
    template <int dim> class Slave;
  }
  
  template <int dim> class SyntheticData;
  template <int dim> class ExperimentDescription;
  template <int dim> class MeasurementRepresentation;
}



namespace METomography
{

  template <int dim>
  class TomographyParameters : public libparest::GlobalParameters<dim>
  {
    public:
      typedef libparest::ParallelControl::Control Control;
      
      std::string initial_mesh;

      TomographyParameters (const Control &me_world_control);

      virtual ~TomographyParameters ();

      static void declare_parameters (ParameterHandler &prm);

      void parse_parameters (ParameterHandler &prm);

      void delete_parameters ();

      Triangulation<dim> *coarse_grid;

      SmartPointer<const Function<dim> > coefficient;

      DeclException0 (ExcParameterNotInList);
  };



  template <int dim>
  class ME_Parameters : public TomographyParameters<dim>,
			public Slave::Slave<dim>::Parameters,
			public MeasurementRepresentation<dim>::Parameters,
			public libparest::Master::NewtonMethod<dim>::Parameters,
			public ScalarField<dim>::Parameters,
			public ExperimentDescription<dim>::Parameters
  {
    public:
      typedef libparest::ParallelControl::Control Control;

      ME_Parameters (const Control &me_world_control);

      virtual ~ME_Parameters ();

      static void declare_parameters (ParameterHandler &prm);

      void parse_parameters (ParameterHandler &prm);    

      void delete_parameters ();
  };

}




//----------------------------   me_parameters.h     ---------------------------
// end of #ifndef __parameter_estimation__me_parameters_h
#endif
//----------------------------   me_parameters.h     ---------------------------
