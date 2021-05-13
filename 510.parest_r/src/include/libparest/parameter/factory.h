//----------------------------   parameter_factory.h     ---------------------------
//    $Id: factory.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2003, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   parameter_factory.h     ---------------------------
#ifndef __libparest__parameter_factory_h
#define __libparest__parameter_factory_h
//----------------------------   parameter_factory.h     ---------------------------

#include <libparest/parameter/base.h>

namespace libparest
{
  using namespace dealii;



  namespace Parameter
  {
    
    class Factory 
    {
      public:
	virtual ~Factory ();
    
	virtual 
	Parameter::
	Base * create () const = 0;
    };
  }
}


#endif // __libparest__parameter_factory_h
