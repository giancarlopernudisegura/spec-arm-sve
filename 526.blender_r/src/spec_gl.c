#if defined(SPEC)

#include "GL/gl.h"
#include <stdio.h>
#include <stdlib.h>


GLAPI void GLAPIENTRY glAlphaFunc( GLenum func, GLclampf ref )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glBegin( GLenum mode )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glBindTexture( GLenum target, GLuint texture )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glBitmap( GLsizei width, GLsizei height,
                                GLfloat xorig, GLfloat yorig,
                                GLfloat xmove, GLfloat ymove,
                                const GLubyte *bitmap )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}
GLAPI void GLAPIENTRY glBlendFunc( GLenum sfactor, GLenum dfactor )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glCallList( GLuint list )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glClear( GLbitfield mask )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glClearColor( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glClearDepth( GLclampd depth )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glClipPlane( GLenum plane, const GLdouble *equation )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glColor3f( GLfloat red, GLfloat green, GLfloat blue )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glColor3fv( const GLfloat *v )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glColor3ub( GLubyte red, GLubyte green, GLubyte blue )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glColor3ubv( const GLubyte *v )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glColor4f( GLfloat red, GLfloat green,
                                   GLfloat blue, GLfloat alpha )
{    
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

GLAPI void GLAPIENTRY glColor4fv( const GLfloat *v )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glColor4ub( GLubyte red, GLubyte green,
                                    GLubyte blue, GLubyte alpha )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

GLAPI void GLAPIENTRY glColor4ubv( const GLubyte *v )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glColorMask( GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glColorMaterial( GLenum face, GLenum mode )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glColorPointer( GLint size, GLenum type,
                                      GLsizei stride, const GLvoid *ptr )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

GLAPI void GLAPIENTRY glCopyTexSubImage2D( GLenum target, GLint level,
                                           GLint xoffset, GLint yoffset,
                                           GLint x, GLint y,
                                           GLsizei width, GLsizei height )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}
GLAPI void GLAPIENTRY glCullFace( GLenum mode )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glDeleteLists( GLuint list, GLsizei range )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glDeleteTextures( GLsizei n, const GLuint *textures)
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glDepthFunc( GLenum func )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glDepthMask( GLboolean flag )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glDepthRange( GLclampd near_val, GLclampd far_val )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glDisable( GLenum cap )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glDisableClientState( GLenum cap )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}
  /* 1.1 */
GLAPI void GLAPIENTRY glDrawArrays( GLenum mode, GLint first, GLsizei count )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glDrawBuffer( GLenum mode )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glDrawElements( GLenum mode, GLsizei count,
                                      GLenum type, const GLvoid *indices )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

GLAPI void GLAPIENTRY glDrawPixels( GLsizei width, GLsizei height,
                                    GLenum format, GLenum type,
                                    const GLvoid *pixels )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

GLAPI void GLAPIENTRY glEnable( GLenum cap )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glEnableClientState( GLenum cap )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glEnd( void )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glEndList( void )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glFinish( void )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glFlush( void )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glFrontFace( GLenum mode )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glFrustum( GLdouble left, GLdouble right,
                                   GLdouble bottom, GLdouble top,
                                   GLdouble near_val, GLdouble far_val )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

GLAPI GLuint GLAPIENTRY glGenLists( GLsizei range )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glGenTextures( GLsizei n, GLuint *textures )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glGetBooleanv( GLenum pname, GLboolean *params )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glGetDoublev( GLenum pname, GLdouble *params )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI GLenum GLAPIENTRY glGetError( void )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glGetFloatv( GLenum pname, GLfloat *params )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glGetIntegerv( GLenum pname, GLint *params )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glGetMaterialfv( GLenum face, GLenum pname, GLfloat *params )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI const GLubyte * GLAPIENTRY glGetString( GLenum name )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glGetTexEnviv( GLenum target, GLenum pname, GLint *params )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glGetTexImage( GLenum target, GLint level,
                                     GLenum format, GLenum type,
                                     GLvoid *pixels )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

GLAPI void GLAPIENTRY glGetTexLevelParameteriv( GLenum target, GLint level,
                                                GLenum pname, GLint *params )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

GLAPI void GLAPIENTRY glInitNames( void )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI GLboolean GLAPIENTRY glIsEnabled( GLenum cap )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI GLboolean GLAPIENTRY glIsTexture( GLuint texture )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glLightModeli( GLenum pname, GLint param )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glLightf( GLenum light, GLenum pname, GLfloat param )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glLightfv( GLenum light, GLenum pname,
                                 const GLfloat *params )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

GLAPI void GLAPIENTRY glLineStipple( GLint factor, GLushort pattern )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glLineWidth( GLfloat width )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glLoadIdentity( void )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glLoadMatrixf( const GLfloat *m )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glLoadName( GLuint name )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glLogicOp( GLenum opcode )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glMaterialfv( GLenum face, GLenum pname, const GLfloat *params )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glMateriali( GLenum face, GLenum pname, GLint param )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glMatrixMode( GLenum mode )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glMultMatrixd( const GLdouble *m )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glMultMatrixf( const GLfloat *m )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glNewList( GLuint list, GLenum mode )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glNormal3fv( const GLfloat *v )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glNormal3sv( const GLshort *v )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glNormalPointer( GLenum type, GLsizei stride,
                                       const GLvoid *ptr )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

GLAPI void GLAPIENTRY glOrtho( GLdouble left, GLdouble right,
                                 GLdouble bottom, GLdouble top,
                                 GLdouble near_val, GLdouble far_val )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

GLAPI void GLAPIENTRY glPixelStorei( GLenum pname, GLint param )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glPixelTransferf( GLenum pname, GLfloat param )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glPixelTransferi( GLenum pname, GLint param )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glPixelZoom( GLfloat xfactor, GLfloat yfactor )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glPointSize( GLfloat size )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glPolygonMode( GLenum face, GLenum mode )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glPolygonOffset( GLfloat factor, GLfloat units )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glPolygonStipple( const GLubyte *mask )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glPopAttrib( void )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glPopClientAttrib( void )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glPopMatrix( void )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glPopName( void )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glPushAttrib( GLbitfield mask )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glPushClientAttrib( GLbitfield mask )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glPushMatrix( void )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glPushName( GLuint name )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glRasterPos2f( GLfloat x, GLfloat y )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glRasterPos2fv( const GLfloat *v )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glRasterPos3f( GLfloat x, GLfloat y, GLfloat z )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glRasterPos3fv( const GLfloat *v )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glReadBuffer( GLenum mode )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glReadPixels( GLint x, GLint y,
                                    GLsizei width, GLsizei height,
                                    GLenum format, GLenum type,
                                    GLvoid *pixels )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

GLAPI void GLAPIENTRY glRectf( GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2 )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glRecti( GLint x1, GLint y1, GLint x2, GLint y2 )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI GLint GLAPIENTRY glRenderMode( GLenum mode )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glRotatef( GLfloat angle,
                                   GLfloat x, GLfloat y, GLfloat z )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

GLAPI void GLAPIENTRY glScalef( GLfloat x, GLfloat y, GLfloat z )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glScissor( GLint x, GLint y, GLsizei width, GLsizei height)
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glSelectBuffer( GLsizei size, GLuint *buffer )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glShadeModel( GLenum mode )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glTexCoord2d( GLdouble s, GLdouble t )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glTexCoord2f( GLfloat s, GLfloat t )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glTexCoord2fv( const GLfloat *v )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glTexCoord3d( GLdouble s, GLdouble t, GLdouble r )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glTexCoord3fv( const GLfloat *v )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glTexCoordPointer( GLint size, GLenum type,
                                         GLsizei stride, const GLvoid *ptr )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

GLAPI void GLAPIENTRY glTexEnvf( GLenum target, GLenum pname, GLfloat param )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glTexEnvfv( GLenum target, GLenum pname, const GLfloat *params )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glTexEnvi( GLenum target, GLenum pname, GLint param )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glTexGeni( GLenum coord, GLenum pname, GLint param )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glTexImage1D( GLenum target, GLint level,
                                    GLint internalFormat,
                                    GLsizei width, GLint border,
                                    GLenum format, GLenum type,
                                    const GLvoid *pixels )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

GLAPI void GLAPIENTRY glTexImage2D( GLenum target, GLint level,
                                    GLint internalFormat,
                                    GLsizei width, GLsizei height,
                                    GLint border, GLenum format, GLenum type,
                                    const GLvoid *pixels )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

GLAPI void GLAPIENTRY glTexParameterf( GLenum target, GLenum pname, GLfloat param )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glGetTexParameterfv( GLenum target,
                                           GLenum pname, GLfloat *params)
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

GLAPI void GLAPIENTRY glTexParameteri( GLenum target, GLenum pname, GLint param )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glTexSubImage1D( GLenum target, GLint level,
                                       GLint xoffset,
                                       GLsizei width, GLenum format,
                                       GLenum type, const GLvoid *pixels )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}


GLAPI void GLAPIENTRY glTexSubImage2D( GLenum target, GLint level,
                                       GLint xoffset, GLint yoffset,
                                       GLsizei width, GLsizei height,
                                       GLenum format, GLenum type,
                                       const GLvoid *pixels )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

GLAPI void GLAPIENTRY glTranslatef( GLfloat x, GLfloat y, GLfloat z )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glVertex2f( GLfloat x, GLfloat y )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glVertex2fv( const GLfloat *v )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glVertex2i( GLint x, GLint y )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glVertex2iv( const GLint *v )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glVertex2s( GLshort x, GLshort y )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glVertex2sv( const GLshort *v )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glVertex3dv( const GLdouble *v )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glVertex3f( GLfloat x, GLfloat y, GLfloat z )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glVertex3fv( const GLfloat *v )
{ 
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n"); 
    exit(-1);
}

GLAPI void GLAPIENTRY glVertexPointer( GLint size, GLenum type,
                                       GLsizei stride, const GLvoid *ptr )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

GLAPI void GLAPIENTRY glViewport( GLint x, GLint y,
                                    GLsizei width, GLsizei height )
{
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);
}

#if defined(_WIN32)
HDC WINAPI wglGetCurrentDC( void )
{
    
    HDC null_hdc;
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);

    /* never get here */
    memset(&null_hdc, '\0', sizeof(null_hdc));

    return null_hdc;
}

PROC WINAPI wglGetProcAddress( LPCSTR lpszProc )
{
    PROC null_proc;
    fprintf(stderr, "[SPEC ERROR]: gl calls should not be invoked for blender SPEC builds\n");
    exit(-1);

    /* never get here */
    memset(&null_proc, '\0', sizeof(null_proc));

    return null_proc;
}




#endif

#endif /*SPEC && !_WIN32 */
