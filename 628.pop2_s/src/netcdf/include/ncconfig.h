#ifndef _NCCONFIG_H_
#define _NCCONFIG_H_

/* These symbols are obsolete; all roads (except Windows) should lead to ncconfig_generic now 
   SPEC_AIX
   SPEC_CATAMOUNT
   SPEC_CRAY
   SPEC_FLUSH_IER
   SPEC_HPUX_IA64
   SPEC_IBMXL
   SPEC_IRIX
   SPEC_IRIX64
   SPEC_LINUX
   SPEC_LINUX_PPC
   SPEC_LINUX_SPARC
   SPEC_MACOSX
   SPEC_MACOSX_BE
   SPEC_NEC_SX
   SPEC_NO_MALLOC_H
   SPEC_NO_NCCONFIG_AIX
   SPEC_NO_NCCONFIG_IRIX
   SPEC_NO_NCCONFIG_LINUX
   SPEC_NO_NCCONFIG_MACOSX
   SPEC_NO_NCCONFIG_SOLARIS
   SPEC_OSF1
   SPEC_SOLARIS
   SPEC_SOLARIS_X86
   SPEC_UNICOS
   SPEC_WORDS_LITTLEENDIAN
*/


#if defined(SPEC_WINDOWS) && !defined(SPEC_NO_NCCONFIG_WINDOWS)
# include "ncconfig_windows.h"

#elif !defined(SPEC_NO_NCCONFIG_GENERIC)
# include "ncconfig_generic.h"

#endif
#endif /* !_NCCONFIG_H_ */
