#if defined(SPEC)

#include "GL/glext.h"
#include <stdio.h>
#include <stdlib.h>

__GLXextFuncPtr glXGetProcAddressARB (const GLubyte *procName)
{ 
    fprintf(stderr, "[SPEC ERROR]: glxext calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
    return 0;
}

#endif /* SPEC */
