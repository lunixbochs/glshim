#define SYS_proxy 9999
#define MAX_EVAL_ORDER 30

#define MAX_TEX 4
#define GL_TEXTURE_MAX (GL_TEXTURE0 + MAX_TEX)

// don't auto-wrap these functions
#define skip_glColor4ub

// gl.c
#define skip_glColor4f
#define skip_glDisable
#define skip_glEnable
#define skip_glIsEnabled
#define skip_glNormal3f

// get.c
#define skip_glGetFloatv
#define skip_glGetIntegerv
#define skip_glGetString

// matrix.cpp
#ifdef LOCAL_MATRIX
#define skip_glFrustumf
#define skip_glLoadIdentity
#define skip_glLoadMatrixf
#define skip_glMatrixMode
#define skip_glMultMatrixf
#define skip_glOrthof
#define skip_glPopMatrix
#define skip_glPushMatrix
#define skip_glRotatef
#define skip_glScalef
#define skip_glTranslatef
#endif

// light.c
#define skip_glLightModelf

// raster.c
#define skip_glViewport

// texture.c
#define skip_glActiveTexture
#define skip_glBindTexture
#define skip_glClientActiveTexture
#define skip_glDeleteTextures
#define skip_glMultiTexCoord4f
#define skip_glPixelStorei
#define skip_glTexImage2D
#define skip_glTexParameteri
#define skip_glTexSubImage2D

// glDrawArrays
#define skip_glDrawArrays
#define skip_glDrawElements
#define skip_glVertexPointer
#define skip_glColorPointer
#define skip_glNormalPointer
#define skip_glTexCoordPointer
#define skip_glDisableClientState
#define skip_glEnableClientState


// don't compile these into display lists
#define direct_glColorPointer
#define direct_glDeleteLists
#define direct_glDisableClientState
#define direct_glEdgeFlagPointer
#define direct_glEnableClientState
#define direct_glFeedbackBuffer
#define direct_glFinish
#define direct_glFlush
#define direct_glGenLists
#define direct_glIndexPointer
#define direct_glInterleavedArrays
#define direct_glIsEnabled
#define direct_glIsList
#define direct_glNormalPointer
#define direct_glPopClientAttrib
#define direct_glPixelStore
#define direct_glPushClientAttrib
#define direct_glReadPixels
#define direct_glRenderMode
#define direct_glSelectBuffer
#define direct_glTexCoordPointer
#define direct_glVertexPointer
