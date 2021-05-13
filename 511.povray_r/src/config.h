#if !defined(CONFIG_H)
#define CONFIG_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <setjmp.h>

#if defined(SPEC_WINDOWS)
#include <direct.h>
#define getcwd _getcwd
#define vsnprintf _vsnprintf
#endif /* SPEC_WINDOWS */

#if !defined(SPEC)
using namespace std;
#endif /* SPEC */

#define EPSILON								1.0e-7 // 1.0e-10

#define POV_CPP_MEM_HAS_NEW_INCLUDE			1
#define POV_CPP_MEM_HAS_PLACEMENT_FORMS		1
#define POV_CPP_MEM_HAS_NOTHROW_SUPPORT		1

#define POVRAY_PLATFORM_NAME				"SPEC CPU2017"
#define COMPILER_VER						"thorsten@povray.org"

#define MEM_RECLAIM							1
#if !defined(SPEC)
#define MEM_STATS							1
#endif

#define DONT_USE_POVMS						1
#define DONT_SHOW_IMAGE_LIB_VERSIONS		1
#define POVMS_NO_ORDERED_STREAM_DATA		1

#define READ_ENV_VAR
#define PROCESS_POVRAY_INI

#define POV_SPEC_NOT_SUPPORT				"This feature is not supported in the POV-Ray 3.6 SPEC version!"

#define POVRAY_BEGIN_COOPERATE
#define POVRAY_END_COOPERATE

#endif // CONFIG_H
