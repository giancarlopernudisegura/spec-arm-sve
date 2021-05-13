/*
** $Id: f_wrappers.c,v 1.45 2009/04/02 20:21:52 rosinski Exp $
**
** Author: Jim Rosinski
** 
** Fortran wrappers for timing library routines
*/

#include <string.h>
#include <stdlib.h>
#include "private.h" /* MAX_CHARS, bool, gptl (function prototypes and HAVE_MPI logic) */

#if ( defined(SPEC_UPPER_CASE) )

#define gptlinitialize GPTLINITIALIZE
#define gptlfinalize GPTLFINALIZE
#define gptlpr GPTLPR
#define gptlpr_file GPTLPR_FILE
#define gptlpr_summary GPTLPR_SUMMARY
#define gptlpr_summary_file GPTLPR_SUMMARY_FILE
#define gptlbarrier GPTLBARRIER
#define gptlreset GPTLRESET
#define gptlstamp GPTLSTAMP
#define gptlstart GPTLSTART
#define gptlstop GPTLSTOP
#define gptlsetoption GPTLSETOPTION
#define gptlenable GPTLENABLE
#define gptldisable GPTLDISABLE
#define gptlsetutr GPTLSETUTR
#define gptlquery GPTLQUERY
#define gptlquerycounters GPTLQUERYCOUNTERS
#define gptlget_wallclock GPTLGET_WALLCLOCK
#define gptlget_eventvalue GPTLGET_EVENTVALUE
#define gptlget_nregions GPTLGET_NREGIONS
#define gptlget_regionname GPTLGET_REGIONNAME
#define gptlget_memusage GPTLGET_MEMUSAGE
#define gptlprint_memusage GPTLPRINT_MEMUSAGE
#define gptl_papilibraryinit GPTL_PAPILIBRARYINIT
#define gptlevent_name_to_code GPTLEVENT_NAME_TO_CODE
#define gptlevent_code_to_name GPTLEVENT_CODE_TO_NAME

#elif ( defined(SPEC_NO_UNDERSCORE) )

#define gptlinitialize gptlinitialize
#define gptlfinalize gptlfinalize
#define gptlpr gptlpr
#define gptlpr_file gptlpr_file
#define gptlpr_summary gptlpr_summary
#define gptlpr_summary_file gptlpr_summary_file
#define gptlbarrier gptlbarrier
#define gptlreset gptlreset
#define gptlstamp gptlstamp
#define gptlstart gptlstart
#define gptlstop gptlstop
#define gptlsetoption gptlsetoption
#define gptlenable gptlenable
#define gptldisable gptldisable
#define gptlsetutr gptlsetutr
#define gptlquery gptlquery
#define gptlquerycounters gptlquerycounters
#define gptlget_wallclock gptlget_wallclock
#define gptlget_eventvalue gptlget_eventvalue
#define gptlget_nregions gptlget_nregions
#define gptlget_regionname gptlget_regionname
#define gptlget_memusage gptlget_memusage
#define gptlprint_memusage gptlprint_memusage
#define gptl_papilibraryinit gptl_papilibraryinit
#define gptlevent_name_to_code gptlevent_name_to_code
#define gptlevent_code_to_name gptlevent_code_to_name

#elif ( defined SPEC_DOUBLE_UNDERSCORE )

#define gptlinitialize gptlinitialize__
#define gptlfinalize gptlfinalize__
#define gptlpr gptlpr__
#define gptlpr_file gptlpr_file__
#define gptlpr_summary gptlpr_summary__
#define gptlpr_summary_file gptlpr_summary_file__
#define gptlbarrier gptlbarrier__
#define gptlreset gptlreset__
#define gptlstamp gptlstamp__
#define gptlstart gptlstart__
#define gptlstop gptlstop__
#define gptlsetoption gptlsetoption__
#define gptlenable gptlenable__
#define gptldisable gptldisable__
#define gptlsetutr gptlsetutr__
#define gptlquery gptlquery__
#define gptlquerycounters gptlquerycounters__
#define gptlget_wallclock gptlget_wallclock__
#define gptlget_eventvalue gptlget_eventvalue__
#define gptlget_nregions gptlget_nregions__
#define gptlget_regionname gptlget_regionname__
#define gptlget_memusage gptlget_memusage__
#define gptlprint_memusage gptlprint_memusage__
#define gptl_papilibraryinit gptl_papilibraryinit__
#define gptlevent_name_to_code gptlevent_name_to_code__
#define gptlevent_code_to_name gptlevent_code_to_name__

#else

#define gptlinitialize gptlinitialize_
#define gptlfinalize gptlfinalize_
#define gptlpr gptlpr_
#define gptlpr_file gptlpr_file_
#define gptlpr_summary gptlpr_summary_
#define gptlpr_summary_file gptlpr_summary_file_
#define gptlbarrier gptlbarrier_
#define gptlreset gptlreset_
#define gptlstamp gptlstamp_
#define gptlstart gptlstart_
#define gptlstop gptlstop_
#define gptlsetoption gptlsetoption_
#define gptlenable gptlenable_
#define gptldisable gptldisable_
#define gptlsetutr gptlsetutr_
#define gptlquery gptlquery_
#define gptlquerycounters gptlquerycounters_
#define gptlget_wallclock gptlget_wallclock_
#define gptlget_eventvalue gptlget_eventvalue_
#define gptlget_nregions gptlget_nregions_
#define gptlget_regionname gptlget_regionname_
#define gptlget_memusage gptlget_memusage_
#define gptlprint_memusage gptlprint_memusage_
#define gptl_papilibraryinit gptl_papilibraryinit_
#define gptlevent_name_to_code gptlevent_name_to_code_
#define gptlevent_code_to_name gptlevent_code_to_name_

#endif

int gptlinitialize ()
{
#ifndef SPEC
  return GPTLinitialize ();
#else
  return 0;
#endif
}

int gptlfinalize ()
{
#ifndef SPEC
  return GPTLfinalize ();
#else
  return 0;
#endif
}

int gptlpr (int *procid)
{
#ifndef SPEC
  return GPTLpr (*procid);
#else
  return 0;
#endif
}

int gptlpr_file (int *mode, char *file, int nc1)
{
#ifndef SPEC
  char *locfile;
  int ret;

  if ( ! (locfile = (char *) malloc (nc1+1)))
    return GPTLerror ("gptlpr_file: malloc error\n");

  snprintf (locfile, nc1+1, "%s", file);

  ret = GPTLpr_file (*mode, locfile);
  free (locfile);
  return ret;
#else
   return 0;
#endif
}

int gptlpr_summary (int *fcomm)
{
#ifndef SPEC
#ifdef HAVE_MPI
  MPI_Comm ccomm;
#ifdef HAVE_COMM_F2C
  ccomm = MPI_Comm_f2c (*fcomm);
#else
  /* Punt and try just casting the Fortran communicator */
  ccomm = (MPI_Comm) *fcomm;
#endif
#else
  int ccomm = 0;
#endif 

  return GPTLpr_summary (ccomm);
#else
  return 0;
#endif
}

int gptlpr_summary_file (int *fcomm, int *mode, char *file, int nc1)
{
#ifndef SPEC
  char *locfile;
  int ret;

#ifdef HAVE_MPI
  MPI_Comm ccomm;
#ifdef HAVE_COMM_F2C
  ccomm = MPI_Comm_f2c (*fcomm);
#else
  /* Punt and try just casting the Fortran communicator */
  ccomm = (MPI_Comm) *fcomm;
#endif
#else
  int ccomm = 0;
#endif 

  if ( ! (locfile = (char *) malloc (nc1+1)))
    return GPTLerror ("gptlpr_summary: malloc error\n");

  snprintf (locfile, nc1+1, "%s", file);

  ret = GPTLpr_summary_file (ccomm, *mode, locfile);
  free (locfile);
  return ret;
#else
  return 0;
#endif
}

int gptlbarrier (int *fcomm, char *name, int nc1)
{
#ifndef SPEC
  char cname[MAX_CHARS+1];
  int numchars;
#ifdef HAVE_MPI
  MPI_Comm ccomm;
#ifdef HAVE_COMM_F2C
  ccomm = MPI_Comm_f2c (*fcomm);
#else
  /* Punt and try just casting the Fortran communicator */
  ccomm = (MPI_Comm) *fcomm;
#endif
#else
  int ccomm = 0;
#endif 

  numchars = MIN (nc1, MAX_CHARS);
  strncpy (cname, name, numchars);
  cname[numchars] = '\0';
  return GPTLbarrier (ccomm, cname);
#else
  return 0;
#endif
}

int gptlreset ()
{
#ifndef SPEC
  return GPTLreset();
#else
  return 0;
#endif
}

int gptlstamp (double *wall, double *usr, double *sys)
{
#ifndef SPEC
  return GPTLstamp (wall, usr, sys);
#else
  return 0;
#endif
}

int gptlstart (char *name, int nc1)
{
#ifndef SPEC
  char cname[MAX_CHARS+1];
  int numchars;

  numchars = MIN (nc1, MAX_CHARS);
  strncpy (cname, name, numchars);
  cname[numchars] = '\0';
  return GPTLstart (cname);
#else
  return 0;
#endif
}

int gptlstop (char *name, int nc1)
{
#ifndef SPEC
  char cname[MAX_CHARS+1];
  int numchars;

  numchars = MIN (nc1, MAX_CHARS);
  strncpy (cname, name, numchars);
  cname[numchars] = '\0';
  return GPTLstop (cname);
#else
  return 0;
#endif
}

int gptlsetoption (int *option, int *val)
{
#ifndef SPEC
  return GPTLsetoption (*option, *val);
#else
  return 0;
#endif
}

int gptlenable ()
{
#ifndef SPEC
  return GPTLenable ();
#else
  return 0;
#endif
}

int gptldisable ()
{
#ifndef SPEC
  return GPTLdisable ();
#else
  return 0;
#endif
}

int gptlsetutr (int *option)
{
#ifndef SPEC
  return GPTLsetutr (*option);
#else
  return 0;
#endif
}

int gptlquery (const char *name, int *t, int *count, int *onflg, double *wallclock, 
            double *usr, double *sys, long long *papicounters_out, int *maxcounters, 
            int nc)
{
#ifndef SPEC
  char cname[MAX_CHARS+1];
  int numchars;

  numchars = MIN (nc, MAX_CHARS);
  strncpy (cname, name, numchars);
  cname[numchars] = '\0';
  return GPTLquery (cname, *t, count, onflg, wallclock, usr, sys, papicounters_out, *maxcounters);
#else
  return 0;
#endif
}

int gptlquerycounters (const char *name, int *t, long long *papicounters_out, int nc)
{
#ifndef SPEC
  char cname[MAX_CHARS+1];
  int numchars;

  numchars = MIN (nc, MAX_CHARS);
  strncpy (cname, name, numchars);
  cname[numchars] = '\0';
  return GPTLquerycounters (cname, *t, papicounters_out);
#else
  return 0;
#endif
}

int gptlget_wallclock (const char *name, int *t, double *value, int nc)
{
#ifndef SPEC
  char cname[MAX_CHARS+1];
  int numchars;

  numchars = MIN (nc, MAX_CHARS);
  strncpy (cname, name, numchars);
  cname[numchars] = '\0';

  return GPTLget_wallclock (cname, *t, value);
#else
  return 0;
#endif
}

int gptlget_eventvalue (const char *timername, const char *eventname, int *t, double *value, 
               int nc1, int nc2)
{
#ifndef SPEC
  char ctimername[MAX_CHARS+1];
  char ceventname[MAX_CHARS+1];
  int numchars;

  numchars = MIN (nc1, MAX_CHARS);
  strncpy (ctimername, timername, numchars);
  ctimername[numchars] = '\0';

  numchars = MIN (nc2, MAX_CHARS);
  strncpy (ceventname, eventname, numchars);
  ceventname[numchars] = '\0';

  return GPTLget_eventvalue (ctimername, ceventname, *t, value);
#else
  return 0;
#endif
}

int gptlget_nregions (int *t, int *nregions)
{
#ifndef SPEC
  return GPTLget_nregions (*t, nregions);
#else
  return 0;
#endif
}

int gptlget_regionname (int *t, int *region, char *name, int nc)
{
#ifndef SPEC
  return GPTLget_regionname (*t, *region, name, nc);
#else
  return 0;
#endif
}

int gptlget_memusage (int *size, int *rss, int *share, int *text, int *datastack)
{
#ifndef SPEC
  return GPTLget_memusage (size, rss, share, text, datastack);
#else
  return 0;
#endif
}

int gptlprint_memusage (const char *str, int nc)
{
#ifndef SPEC
  char cname[128+1];
  int numchars = MIN (nc, 128);

  strncpy (cname, str, numchars);
  cname[numchars] = '\0';
  return GPTLprint_memusage (cname);
#else
  return 0;
#endif
}

void gptl_papilibraryinit ()
{
#ifndef SPEC
  (void) GPTL_PAPIlibraryinit ();
#endif
  return;
}

#ifdef HAVE_PAPI
#include <papi.h>

int gptlevent_name_to_code (const char *str, int *code, int nc)
{
  char cname[PAPI_MAX_STR_LEN+1];
  int numchars = MIN (nc, PAPI_MAX_STR_LEN);

  strncpy (cname, str, numchars);
  cname[numchars] = '\0';

  /* "code" is an int* and is an output variable */

  return GPTLevent_name_to_code (cname, code);
}

int gptlevent_code_to_name (int *code, char *str, int nc)
{
  int i;

  if (nc < PAPI_MAX_STR_LEN)
    return GPTLerror ("gptl_event_code_to_name: output name must hold at least %d characters\n",
                PAPI_MAX_STR_LEN);

  if (GPTLevent_code_to_name (*code, str) == 0) {
    for (i = strlen(str); i < nc; ++i)
      str[i] = ' ';
  } else {
    return GPTLerror ("");
  }
  return 0;
}
#else
int gptlevent_name_to_code (const char *str, int *code, int nc)
{
#ifndef SPEC 
  return GPTLevent_name_to_code (str, code);
#else
  return 0;
#endif
}

int gptlevent_code_to_name (const int *code, char *str, int nc)
{
#ifndef SPEC 
  return GPTLevent_code_to_name (*code, str);
#else
  return 0;
#endif
}
#endif
