#if defined(SPEC)

#include "GL/glu.h"
#include <stdio.h>
#include <stdlib.h>

GLAPI GLint GLAPIENTRY gluBuild2DMipmaps (GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *data)
{ 
    fprintf(stderr, "[SPEC ERROR]: glu calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
    return -1;
}

GLAPI void GLAPIENTRY gluCylinder (GLUquadric* quad, GLdouble base, GLdouble top, GLdouble height, GLint slices, GLint stacks)
{ 
    fprintf(stderr, "[SPEC ERROR]: glu calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY gluDeleteQuadric (GLUquadric* quad)
{ 
    fprintf(stderr, "[SPEC ERROR]: glu calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY gluDisk (GLUquadric* quad, GLdouble inner, GLdouble outer, GLint slices, GLint loops)
{ 
    fprintf(stderr, "[SPEC ERROR]: glu calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI const GLubyte * GLAPIENTRY gluErrorString (GLenum error)
{ 
    fprintf(stderr, "[SPEC ERROR]: glu calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
    return 0;
}

GLAPI GLUquadric* GLAPIENTRY gluNewQuadric (void)
{ 
    fprintf(stderr, "[SPEC ERROR]: glu calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
    return 0;
}

GLAPI GLint GLAPIENTRY gluProject (GLdouble objX, GLdouble objY, GLdouble objZ, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble* winX, GLdouble* winY, GLdouble* winZ)
{ 
    fprintf(stderr, "[SPEC ERROR]: glu calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
    return -1;
}

GLAPI void GLAPIENTRY gluQuadricDrawStyle (GLUquadric* quad, GLenum draw)
{ 
    fprintf(stderr, "[SPEC ERROR]: glu calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY gluQuadricNormals (GLUquadric* quad, GLenum normal)
{ 
    fprintf(stderr, "[SPEC ERROR]: glu calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY gluQuadricOrientation (GLUquadric* quad, GLenum orientation)
{ 
    fprintf(stderr, "[SPEC ERROR]: glu calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI GLint GLAPIENTRY gluScaleImage (GLenum format, GLsizei wIn, GLsizei hIn, GLenum typeIn, const void *dataIn, GLsizei wOut, GLsizei hOut, GLenum typeOut, GLvoid* dataOut)
{ 
    fprintf(stderr, "[SPEC ERROR]: glu calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
    return -1;
}

GLAPI void GLAPIENTRY gluSphere (GLUquadric* quad, GLdouble radius, GLint slices, GLint stacks)
{ 
    fprintf(stderr, "[SPEC ERROR]: glu calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI GLint GLAPIENTRY gluUnProject (GLdouble winX, GLdouble winY, GLdouble winZ, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble* objX, GLdouble* objY, GLdouble* objZ)
{ 
    fprintf(stderr, "[SPEC ERROR]: glu calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
    return -1;
}
#endif /* SPEC && _WIN32 */
