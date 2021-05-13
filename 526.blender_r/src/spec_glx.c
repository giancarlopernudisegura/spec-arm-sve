#if defined(SPEC) && !defined(_WIN32)

#include "GL/glxew.h"
#include "GL/glxext.h"
#include <stdio.h>
#include <stdlib.h>

typedef void (*__GLXextFuncPtr)(void);
extern __GLXextFuncPtr glXGetProcAddressARB (const GLubyte *);

/* extern */
__GLXextFuncPtr glXGetProcAddressARB (const GLubyte * procName)
{ 
    fprintf(stderr, "[SPEC ERROR]: glx calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
    return 0;
}

/* extern */
Bool glXQueryVersion( Display *dpy, int *maj, int *min )
{ 
    fprintf(stderr, "[SPEC ERROR]: glx calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
    return 0;
}

const char *glXGetClientString( Display *dpy, int name )
{
    fprintf(stderr, "[SPEC ERROR]: glx calls should not be invoked for blender SPEC builds\n");
    exit(-1);
    return 0;
}

#endif /* SPEC */
