//----------------------------   coefficients.h     ---------------------------
//    $Id: coefficient.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2004, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   coefficients.h     ---------------------------
#ifndef __parameter_estimation__coefficients_h
#define __parameter_estimation__coefficients_h
//----------------------------   coefficients.h     ---------------------------


#include <libparest/parameter/field.h>
#include <libparest/parameter/bounds.h>

#include "config.h"


namespace METomography
{
  template <int dim>
  class ScalarField : public libparest::Parameter::Field::ScalarField<dim>
  {
    public:
      typedef libparest::Parameter::Field::ScalarField<dim> BaseClass;
      
      typedef typename BaseClass::ParameterAssociation ParameterAssociation;

      class Parameters : public BaseClass::Parameters
      {
	public:
	  Parameters ();
	  
	  std::string measurement_refinements;

	  SmartPointer<const libparest::Parameter::Field::Bounds::Base<dim> >
	  parameter_bounds;

	  static void declare_parameters (ParameterHandler &prm);
	  
	  void parse_parameters (ParameterHandler &prm);

	  void delete_parameters ();
      };
      

      ScalarField (const Parameters                       &parameters,
		   const libparest::GlobalParameters<dim> &global_parameters,
		   const ParameterAssociation              parameter_association,
		   const Triangulation<dim>               &coarse_grid,
		   const Function<dim>                    &exact_coefficient);

      virtual void preset_initial_values (Vector<double> &initial_iterate) const;
      
  };
}


//----------------------------   coefficients.h     ---------------------------
// end of #ifndef __parameter_estimation__coefficients_h
#endif
//----------------------------   coefficients.h     ---------------------------
