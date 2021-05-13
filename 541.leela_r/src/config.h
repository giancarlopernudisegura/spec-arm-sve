#ifndef CONFIG_INCLUDED
#define CONFIG_INCLUDED

/* Hard limits */

#define NAME            "Leela"
#define VERSION         "0.3.16"

/* Features */
//#define USE_PONDER
//#define USE_SMP

/* Integer types */

typedef int int32;
typedef short int16;
typedef signed char int8;
typedef unsigned int uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;

/* Data type definitions */

#ifdef _WIN32
typedef __int64 int64 ;
typedef unsigned __int64 uint64;
#else
#if !defined(SPEC)
   typedef long long int int64;
#else
   // On AIX, by default skip this.  To include, set SPEC_DEFINE_INT64
   // Everywhere else, by default, include it.  To exclude, set
   // SPEC_NODEFINE_INT64
#  if (defined(SPEC_AIX) && defined(SPEC_DEFINE_INT64)) \
   || (!defined(SPEC_AIX) && !defined(SPEC_NODEFINE_INT64))
   typedef long long int int64;
#   endif
#endif
typedef unsigned long long int uint64;
#endif

#if (_MSC_VER >= 1400) /* VC8+ Disable all deprecation warnings */
    #pragma warning(disable : 4996)     
#endif /* VC8+ */

typedef int rtime_t;

#endif
