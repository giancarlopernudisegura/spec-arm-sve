#if defined(SPEC)

#include "GL/glcorearb.h"
#include <stdio.h>
#include <stdlib.h>

#if defined(SPEC_GLMULDEFS)
GLAPI void APIENTRY glBindTexture (GLenum target, GLuint texture)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glBlendFunc (GLenum sfactor, GLenum dfactor)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glClear (GLbitfield mask)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glClearColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glClearDepth (GLdouble depth)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glCullFace (GLenum mode)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glDeleteTextures (GLsizei n, const GLuint *textures)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glDepthFunc (GLenum func)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glDepthMask (GLboolean flag)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glDepthRange (GLdouble near, GLdouble far)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glDisable (GLenum cap)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glDrawArrays (GLenum mode, GLint first, GLsizei count)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glDrawBuffer (GLenum buf)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glDrawElements (GLenum mode, GLsizei count, GLenum type, const void *indices)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glEnable (GLenum cap)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glFinish (void)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glFlush (void)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glFrontFace (GLenum mode)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glGenTextures (GLsizei n, GLuint *textures)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glGetBooleanv (GLenum pname, GLboolean *data)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glGetDoublev (GLenum pname, GLdouble *data)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI GLenum APIENTRY glGetError (void)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glGetFloatv (GLenum pname, GLfloat *data)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glGetIntegerv (GLenum pname, GLint *data)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI const GLubyte *APIENTRY glGetString (GLenum name)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glGetTexImage (GLenum target, GLint level, GLenum format, GLenum type, void *pixels)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint *params)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI GLboolean APIENTRY glIsEnabled (GLenum cap)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI GLboolean APIENTRY glIsTexture (GLuint texture)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glLineWidth (GLfloat width)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glLogicOp (GLenum opcode)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glPixelStorei (GLenum pname, GLint param)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glPointSize (GLfloat size)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glPolygonMode (GLenum face, GLenum mode)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glPolygonOffset (GLfloat factor, GLfloat units)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glReadBuffer (GLenum src)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glScissor (GLint x, GLint y, GLsizei width, GLsizei height)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glTexImage1D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glTexParameterf (GLenum target, GLenum pname, GLfloat param)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

#endif /* SPEC_GLMULDEFS */

GLAPI void APIENTRY glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

#if defined(SPEC_GLMULDEFS)


GLAPI void APIENTRY glTexParameteri (GLenum target, GLenum pname, GLint param)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void APIENTRY glViewport (GLint x, GLint y, GLsizei width, GLsizei height)
{ 
    fprintf(stderr, "[SPEC ERROR]: glcorearb calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

#endif /*  SPEC_GLMULDEFS */
#endif /* SPEC */
