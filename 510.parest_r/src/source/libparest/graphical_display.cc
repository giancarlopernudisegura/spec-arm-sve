#include <base/thread_management.h>

#include <libparest/graphical_display.h>

#include <cstdio>
#if !defined(SPEC)
#include <sys/wait.h>
#include <unistd.h>
#endif /* !SPEC */
#include <iostream>

namespace libparest
{
  using namespace dealii;



  GraphicalDisplay::GraphicalDisplay () 
  {
  }



  GraphicalDisplay::~GraphicalDisplay () 
  {
  }



  void
  GraphicalDisplay::run_display () const
  {
  }



  void
  GraphicalDisplay::put_status_string (const std::string &status) const
  {
  }
 
}
