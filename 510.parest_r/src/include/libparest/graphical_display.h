//----------------------------   graphical_display.h     ---------------------------
//    $Id: graphical_display.h 1673 2003-09-03 16:37:50Z wolf $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2003, 2009 by Wolfgang Bangerth
//
//----------------------------   graphical_display.h     ---------------------------
#ifndef __parameter_estimation__graphical_display_h
#define __parameter_estimation__graphical_display_h
//----------------------------   graphical_display.h     ---------------------------


#include <sys/types.h>
#include <string>


namespace libparest
{

  class GraphicalDisplay 
  {
    public:
      GraphicalDisplay ();

      ~GraphicalDisplay ();
    
      void put_status_string (const std::string &status) const;

    private:

      int server_client_pipe[2];

#if defined(SPEC_WINDOWS)
      typedef int pid_t;
#endif
      pid_t child_pid;
    
      void run_display () const;
  };
 
}


//----------------------------   graphical_display.h     ---------------------------
// end of #ifndef __parameter_estimation__graphical_display_h
#endif
//----------------------------   graphical_display.h     ---------------------------
