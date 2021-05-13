#include <libparest/parameter/base.h>
#include <base/thread_management.h>


namespace libparest
{
 
  namespace Parameter
  {

    Base::MatrixRepresentation::~MatrixRepresentation ()
    {}
    
    
    Base::
    Base ()
		    :
		    iteration_number (static_cast<unsigned int>(-1))
    {}

    Base::
    ~Base ()
    {}



    void
    Base::
    initialize_gauss_newton_step (const unsigned int   step_no,
				  const Vector<float> &information)
    {
      Assert (information.size() == n_dofs(),
	      ExcInternalError());
      
      iteration_number = step_no;
      information_per_dof = information;
    }




    void
    Base::
    end_gauss_newton_step ()
    {}



    void
    Base::
    at_bounds (const Vector<double> &parameters,
               std::vector<bool>    &lower_flags,
               std::vector<bool>    &upper_flags) const
    {
      Threads::ThreadGroup<> threads;
      threads += Threads::spawn (*this, &Base::at_lower_bounds)
                 (parameters, lower_flags);
      threads += Threads::spawn (*this, &Base::at_upper_bounds)
                 (parameters, upper_flags);
      threads.join_all ();
    }



    void
    Base::consider_misfits (const double,
			    const double)
    {}
    


    unsigned int
    Base::get_iteration_number () const 
    {
      return iteration_number;
    }

  }

}
