#include "stub.h"

#define STUB(def)\
def {\
    char *debug = getenv("LIBGL_DEBUG");\
    if (debug && strcmp(debug, "1") == 0)\
        printf("stub: %s;\n", #def);\
}

STUB(void glFogCoordd(GLdouble coord))
STUB(void glFogCoordf(GLfloat coord))
STUB(void glFogCoorddv(const GLdouble *coord))
STUB(void glFogCoordfv(const GLfloat *coord))
#ifdef BCMHOST
STUB(void glDiscardFramebufferEXT(GLenum target, GLsizei numAttachments, const GLenum *attachments))
#endif

#ifdef USE_ES2
STUB(void glClipPlanef(GLenum plane, const GLfloat *equation));
STUB(void glDisableClientState(GLenum state));
STUB(void glEnableClientState(GLenum state));
STUB(void glFogf(GLenum pname, GLfloat param));
STUB(void glFogfv(GLenum pname, const GLfloat *params));
STUB(void glGetClipPlanef(GLenum plane, GLfloat *equation));
STUB(void glLightf(GLenum light, GLenum pname, GLfloat param));
STUB(void glLightfv(GLenum light, GLenum pname, const GLfloat *params));
STUB(void glMaterialf(GLenum face, GLenum pname, GLfloat param));
STUB(void glTexEnvi(GLenum target, GLenum pname, GLint param));
#endif

// STUB(void glMultiTexCoord());
// STUB(void glVertexAttrib());
STUB(void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha))
STUB(void glColorMaterial(GLenum face, GLenum mode))
STUB(void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type))
STUB(void glDrawBuffer(GLenum mode))
STUB(void glEdgeFlag(GLboolean flag))
STUB(void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLvoid * img))
STUB(void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat *params))
STUB(void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint *params))
STUB(void glIndexf(GLfloat c))
STUB(void glPixelTransferf(GLenum pname, GLfloat param))
STUB(void glPixelTransferi(GLenum pname, GLint param))
STUB(void glPixelZoom(GLfloat xfactor, GLfloat yfactor))
STUB(void glPolygonMode(GLenum face, GLenum mode))
STUB(void glPolygonStipple(const GLubyte *mask))
STUB(void glReadBuffer(GLenum mode))
STUB(void glSecondaryColor3f(GLfloat r, GLfloat g, GLfloat b))

#undef STUB
