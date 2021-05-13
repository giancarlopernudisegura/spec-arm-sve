//----------------------------   global_parameters.h     ---------------------------
//    $Id: global_parameters.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   global_parameters.h     ---------------------------
#ifndef __libparest__global_parameters_h
#define __libparest__global_parameters_h
//----------------------------   global_parameters.h     ---------------------------

#include <base/subscriptor.h>
#include <libparest/parallel/control.h>

#include <string>

namespace dealii
{
  class ParameterHandler;
}

namespace libparest
{
  using namespace dealii;
  
  
  namespace MessageLog
  {
    class ServerBase;
  }
}


namespace libparest
{

  template <int dim>
  class GlobalParameters : public virtual Subscriptor
  {
    public:
      GlobalParameters (const ParallelControl::Control &me_world_control);    

      const ParallelControl::Control &me_world_control;


      std::string         output_directory;
    
      std::string         output_format;

      unsigned int        n_experiments;

      static void declare_parameters (ParameterHandler &prm);

      void parse_parameters (ParameterHandler &prm);

      void delete_parameters ();
  };
 
}



//----------------------------   global_parameters.h     ---------------------------
// end of #ifndef __libparest__global_parameters_h
#endif
//----------------------------   global_parameters.h     ---------------------------
