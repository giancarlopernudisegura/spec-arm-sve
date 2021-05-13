/* $Id: grid_transfer.cc 1673 2003-09-03 16:37:50Z wolf $ */


#include <libparest/grid_transfer.h>
#include <grid/tria.h>

namespace libparest
{
  namespace GridTransfer
  {

/* -------------------- Base ----------------------- */

    template <int dim>
    Base<dim>::~Base () 
    {}
    


/* -------------------- GridTransfer::Global ----------------------- */

    template <int dim>
    Global<dim>::Global (const unsigned int n_refinements)
		    :
		    n_refinements (n_refinements)
    {}



    template <int dim>
    void
    Global<dim>::refine_grid (Triangulation<dim> &parameter_grid) const
    {
      parameter_grid.refine_global (n_refinements);
    }




    template class Base<deal_II_dimension>;

    template class Global<deal_II_dimension>;
  }
}
