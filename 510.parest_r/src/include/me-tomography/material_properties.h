//----------------------------   material_properties.h     ---------------------------
//    $Id: material_properties.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2004, 2005, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   material_properties.h     ---------------------------
#ifndef __parameter_estimation__material_properties_h
#define __parameter_estimation__material_properties_h
//----------------------------   material_properties.h     ---------------------------


#include <base/exceptions.h>
#include <set>

#include "config.h"


namespace METomography
{
  namespace MaterialProperties
  {
    const double gamma = 0.431;
    
    const double mu_a_xi = .023;
    const double mu_a_m  = .0289;

    const double mu_s = 10.74;
    

    const double muf_ratio = 0.1;
    const double omega = 2*deal_II_numbers::PI * 1.e8;
    
    const double c = 3.e10/1.33;

    const double phi = 0.016;
    const double tau = 0.56e-9;

    inline
    double compute_D_x (const double q) 
    {
      return 1./3./(mu_s+mu_a_xi+q);
    }
    
    inline
    double compute_D_m (const double q) 
    {
      return 1./3./(mu_s+mu_a_m+q*muf_ratio);
    }



    inline
    double compute_D_prime_x (const double q) 
    {
      return -3.*compute_D_x(q) * compute_D_x(q);
    }
    
    inline
    double compute_D_prime_m (const double q) 
    {
      return -3.*compute_D_m(q) * compute_D_m(q) * muf_ratio;
    }
    
  }
}


//----------------------------   material_properties.h     ---------------------------
// end of #ifndef __parameter_estimation__material_properties_h
#endif
//----------------------------   material_properties.h     ---------------------------
