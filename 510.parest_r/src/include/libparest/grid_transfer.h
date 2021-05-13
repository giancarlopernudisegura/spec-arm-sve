//----------------------------   grid_transfer.h     ---------------------------
//    $Id: grid_transfer.h 3734 2008-12-14 20:05:24Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 1999, 2000, 2001, 2002, 2006, 2008, 2009 by Wolfgang Bangerth
//
//----------------------------   grid_transfer.h     ---------------------------
#ifndef __libparest__grid_transfer_h
#define __libparest__grid_transfer_h
//----------------------------   grid_transfer.h     ---------------------------


#include <grid/tria.h>


namespace libparest
{
  using namespace dealii;

  namespace GridTransfer
  {

    template <int dim>
    class Base
    {
      public:
	virtual ~Base ();

	virtual void
	refine_grid (Triangulation<dim> &grid) const = 0;
    };



  
    template <int dim>
    class Global : public Base<dim>
    {
      public:
	Global (const unsigned int n_refinements);
      
	virtual void
	refine_grid (Triangulation<dim> &grid) const;
      
      private:
	const unsigned int n_refinements;
    };
  }
 
}


//----------------------------   grid_transfer.h     ---------------------------
// end of #ifndef __libparest__grid_transfer_h
#endif
//----------------------------   grid_transfer.h     ---------------------------
