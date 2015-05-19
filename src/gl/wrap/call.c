#ifndef USE_ES2
#include "gles.h"
#include "../loader.h"
void glPackedCall(const packed_call_t *packed) {
    switch (packed->format) {
        case FORMAT_void_GLenum: {
            PACKED_void_GLenum *unpacked = (PACKED_void_GLenum *)packed;
            ARGS_void_GLenum args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLenum_GLclampf: {
            PACKED_void_GLenum_GLclampf *unpacked = (PACKED_void_GLenum_GLclampf *)packed;
            ARGS_void_GLenum_GLclampf args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLclampx: {
            PACKED_void_GLenum_GLclampx *unpacked = (PACKED_void_GLenum_GLclampx *)packed;
            ARGS_void_GLenum_GLclampx args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLuint: {
            PACKED_void_GLenum_GLuint *unpacked = (PACKED_void_GLenum_GLuint *)packed;
            ARGS_void_GLenum_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLenum: {
            PACKED_void_GLenum_GLenum *unpacked = (PACKED_void_GLenum_GLenum *)packed;
            ARGS_void_GLenum_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum: {
            PACKED_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum *unpacked = (PACKED_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum *)packed;
            ARGS_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLbitfield: {
            PACKED_void_GLbitfield *unpacked = (PACKED_void_GLbitfield *)packed;
            ARGS_void_GLbitfield args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLclampf_GLclampf_GLclampf_GLclampf: {
            PACKED_void_GLclampf_GLclampf_GLclampf_GLclampf *unpacked = (PACKED_void_GLclampf_GLclampf_GLclampf_GLclampf *)packed;
            ARGS_void_GLclampf_GLclampf_GLclampf_GLclampf args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLclampx_GLclampx_GLclampx_GLclampx: {
            PACKED_void_GLclampx_GLclampx_GLclampx_GLclampx *unpacked = (PACKED_void_GLclampx_GLclampx_GLclampx_GLclampx *)packed;
            ARGS_void_GLclampx_GLclampx_GLclampx_GLclampx args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLclampf: {
            PACKED_void_GLclampf *unpacked = (PACKED_void_GLclampf *)packed;
            ARGS_void_GLclampf args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLclampx: {
            PACKED_void_GLclampx *unpacked = (PACKED_void_GLclampx *)packed;
            ARGS_void_GLclampx args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLint: {
            PACKED_void_GLint *unpacked = (PACKED_void_GLint *)packed;
            ARGS_void_GLint args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLenum_const_GLfloat___GENPT__: {
            PACKED_void_GLenum_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_const_GLfixed___GENPT__: {
            PACKED_void_GLenum_const_GLfixed___GENPT__ *unpacked = (PACKED_void_GLenum_const_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_const_GLfixed___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLubyte_GLubyte_GLubyte_GLubyte: {
            PACKED_void_GLubyte_GLubyte_GLubyte_GLubyte *unpacked = (PACKED_void_GLubyte_GLubyte_GLubyte_GLubyte *)packed;
            ARGS_void_GLubyte_GLubyte_GLubyte_GLubyte args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLfixed_GLfixed_GLfixed_GLfixed: {
            PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed *unpacked = (PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed *)packed;
            ARGS_void_GLfixed_GLfixed_GLfixed_GLfixed args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLboolean_GLboolean_GLboolean_GLboolean: {
            PACKED_void_GLboolean_GLboolean_GLboolean_GLboolean *unpacked = (PACKED_void_GLboolean_GLboolean_GLboolean_GLboolean *)packed;
            ARGS_void_GLboolean_GLboolean_GLboolean_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint: {
            PACKED_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint *unpacked = (PACKED_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint *)packed;
            ARGS_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei: {
            PACKED_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei *unpacked = (PACKED_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei *)packed;
            ARGS_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLsizei_const_GLuint___GENPT__: {
            PACKED_void_GLsizei_const_GLuint___GENPT__ *unpacked = (PACKED_void_GLsizei_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLsizei_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLboolean: {
            PACKED_void_GLboolean *unpacked = (PACKED_void_GLboolean *)packed;
            ARGS_void_GLboolean args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLclampf_GLclampf: {
            PACKED_void_GLclampf_GLclampf *unpacked = (PACKED_void_GLclampf_GLclampf *)packed;
            ARGS_void_GLclampf_GLclampf args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLclampx_GLclampx: {
            PACKED_void_GLclampx_GLclampx *unpacked = (PACKED_void_GLclampx_GLclampx *)packed;
            ARGS_void_GLclampx_GLclampx args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLsizei: {
            PACKED_void_GLenum_GLint_GLsizei *unpacked = (PACKED_void_GLenum_GLint_GLsizei *)packed;
            ARGS_void_GLenum_GLint_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void: {
            PACKED_void *unpacked = (PACKED_void *)packed;
            unpacked->func();
            break;
        }
        case FORMAT_void_GLenum_GLfloat: {
            PACKED_void_GLenum_GLfloat *unpacked = (PACKED_void_GLenum_GLfloat *)packed;
            ARGS_void_GLenum_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLfixed: {
            PACKED_void_GLenum_GLfixed *unpacked = (PACKED_void_GLenum_GLfixed *)packed;
            ARGS_void_GLenum_GLfixed args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed: {
            PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed *unpacked = (PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed *)packed;
            ARGS_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLsizei_GLuint___GENPT__: {
            PACKED_void_GLsizei_GLuint___GENPT__ *unpacked = (PACKED_void_GLsizei_GLuint___GENPT__ *)packed;
            ARGS_void_GLsizei_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLboolean___GENPT__: {
            PACKED_void_GLenum_GLboolean___GENPT__ *unpacked = (PACKED_void_GLenum_GLboolean___GENPT__ *)packed;
            ARGS_void_GLenum_GLboolean___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLfixed___GENPT__: {
            PACKED_void_GLenum_GLfixed___GENPT__ *unpacked = (PACKED_void_GLenum_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_GLfixed___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_GLenum: {
            PACKED_GLenum *unpacked = (PACKED_GLenum *)packed;
            unpacked->func();
            break;
        }
        case FORMAT_void_GLenum_GLint___GENPT__: {
            PACKED_void_GLenum_GLint___GENPT__ *unpacked = (PACKED_void_GLenum_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLenum_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLfixed___GENPT__: {
            PACKED_void_GLenum_GLenum_GLfixed___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLfixed___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLvoid___GENPT____GENPT__: {
            PACKED_void_GLenum_GLvoid___GENPT____GENPT__ *unpacked = (PACKED_void_GLenum_GLvoid___GENPT____GENPT__ *)packed;
            ARGS_void_GLenum_GLvoid___GENPT____GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_const_GLubyte___GENPT___GLenum: {
            PACKED_const_GLubyte___GENPT___GLenum *unpacked = (PACKED_const_GLubyte___GENPT___GLenum *)packed;
            ARGS_const_GLubyte___GENPT___GLenum args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_GLboolean_GLuint: {
            PACKED_GLboolean_GLuint *unpacked = (PACKED_GLboolean_GLuint *)packed;
            ARGS_GLboolean_GLuint args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_GLboolean_GLenum: {
            PACKED_GLboolean_GLenum *unpacked = (PACKED_GLboolean_GLenum *)packed;
            ARGS_GLboolean_GLenum args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLfloat: {
            PACKED_void_GLenum_GLenum_GLfloat *unpacked = (PACKED_void_GLenum_GLenum_GLfloat *)packed;
            ARGS_void_GLenum_GLenum_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLenum_const_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLenum_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLfixed: {
            PACKED_void_GLenum_GLenum_GLfixed *unpacked = (PACKED_void_GLenum_GLenum_GLfixed *)packed;
            ARGS_void_GLenum_GLenum_GLfixed args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLenum_const_GLfixed___GENPT__: {
            PACKED_void_GLenum_GLenum_const_GLfixed___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_const_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_const_GLfixed___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLfloat: {
            PACKED_void_GLfloat *unpacked = (PACKED_void_GLfloat *)packed;
            ARGS_void_GLfloat args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLfixed: {
            PACKED_void_GLfixed *unpacked = (PACKED_void_GLfixed *)packed;
            ARGS_void_GLfixed args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_const_GLfloat___GENPT__: {
            PACKED_void_const_GLfloat___GENPT__ *unpacked = (PACKED_void_const_GLfloat___GENPT__ *)packed;
            ARGS_void_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_const_GLfixed___GENPT__: {
            PACKED_void_const_GLfixed___GENPT__ *unpacked = (PACKED_void_const_GLfixed___GENPT__ *)packed;
            ARGS_void_const_GLfixed___GENPT__ args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed: {
            PACKED_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed *unpacked = (PACKED_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed *)packed;
            ARGS_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLfixed_GLfixed_GLfixed: {
            PACKED_void_GLfixed_GLfixed_GLfixed *unpacked = (PACKED_void_GLfixed_GLfixed_GLfixed *)packed;
            ARGS_void_GLfixed_GLfixed_GLfixed args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLint: {
            PACKED_void_GLenum_GLint *unpacked = (PACKED_void_GLenum_GLint *)packed;
            ARGS_void_GLenum_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLfloat_GLfloat: {
            PACKED_void_GLfloat_GLfloat *unpacked = (PACKED_void_GLfloat_GLfloat *)packed;
            ARGS_void_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLfixed_GLfixed: {
            PACKED_void_GLfixed_GLfixed *unpacked = (PACKED_void_GLfixed_GLfixed *)packed;
            ARGS_void_GLfixed_GLfixed args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__: {
            PACKED_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__ *unpacked = (PACKED_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__ *)packed;
            ARGS_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLclampf_GLboolean: {
            PACKED_void_GLclampf_GLboolean *unpacked = (PACKED_void_GLclampf_GLboolean *)packed;
            ARGS_void_GLclampf_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLclampx_GLboolean: {
            PACKED_void_GLclampx_GLboolean *unpacked = (PACKED_void_GLclampx_GLboolean *)packed;
            ARGS_void_GLclampx_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLint_GLint_GLsizei_GLsizei: {
            PACKED_void_GLint_GLint_GLsizei_GLsizei *unpacked = (PACKED_void_GLint_GLint_GLsizei_GLsizei *)packed;
            ARGS_void_GLint_GLint_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLuint: {
            PACKED_void_GLenum_GLint_GLuint *unpacked = (PACKED_void_GLenum_GLint_GLuint *)packed;
            ARGS_void_GLenum_GLint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint: {
            PACKED_void_GLuint *unpacked = (PACKED_void_GLuint *)packed;
            ARGS_void_GLuint args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum: {
            PACKED_void_GLenum_GLenum_GLenum *unpacked = (PACKED_void_GLenum_GLenum_GLenum *)packed;
            ARGS_void_GLenum_GLenum_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint: {
            PACKED_void_GLenum_GLenum_GLint *unpacked = (PACKED_void_GLenum_GLenum_GLint *)packed;
            ARGS_void_GLenum_GLenum_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLenum_const_GLint___GENPT__: {
            PACKED_void_GLenum_GLenum_const_GLint___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_const_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLenum: {
            PACKED_void_GLenum_GLenum_GLenum_GLenum *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLenum *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLuint: {
            PACKED_void_GLuint_GLuint *unpacked = (PACKED_void_GLuint_GLuint *)packed;
            ARGS_void_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_const_GLchar___GENPT__: {
            PACKED_void_GLuint_const_GLchar___GENPT__ *unpacked = (PACKED_void_GLuint_const_GLchar___GENPT__ *)packed;
            ARGS_void_GLuint_const_GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint: {
            PACKED_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint *unpacked = (PACKED_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint *)packed;
            ARGS_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint: {
            PACKED_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint *unpacked = (PACKED_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint *)packed;
            ARGS_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint: {
            PACKED_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint *unpacked = (PACKED_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint *)packed;
            ARGS_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11, args.a12);
            break;
        }
        case FORMAT_GLboolean_GLsizei_const_GLuint___GENPT___GLboolean___GENPT__: {
            PACKED_GLboolean_GLsizei_const_GLuint___GENPT___GLboolean___GENPT__ *unpacked = (PACKED_GLboolean_GLsizei_const_GLuint___GENPT___GLboolean___GENPT__ *)packed;
            ARGS_GLboolean_GLsizei_const_GLuint___GENPT___GLboolean___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLenum_GLsizei_GLuint_GLuint: {
            PACKED_void_GLenum_GLint_GLenum_GLsizei_GLuint_GLuint *unpacked = (PACKED_void_GLenum_GLint_GLenum_GLsizei_GLuint_GLuint *)packed;
            ARGS_void_GLenum_GLint_GLenum_GLsizei_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLhandleARB_GLhandleARB: {
            PACKED_void_GLhandleARB_GLhandleARB *unpacked = (PACKED_void_GLhandleARB_GLhandleARB *)packed;
            ARGS_void_GLhandleARB_GLhandleARB args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLenum: {
            PACKED_void_GLuint_GLenum *unpacked = (PACKED_void_GLuint_GLenum *)packed;
            ARGS_void_GLuint_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint: {
            PACKED_void_GLenum_GLuint_GLuint *unpacked = (PACKED_void_GLenum_GLuint_GLuint *)packed;
            ARGS_void_GLenum_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLuint_const_GLchar___GENPT__: {
            PACKED_void_GLuint_GLuint_const_GLchar___GENPT__ *unpacked = (PACKED_void_GLuint_GLuint_const_GLchar___GENPT__ *)packed;
            ARGS_void_GLuint_GLuint_const_GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLhandleARB_GLuint_const_GLcharARB___GENPT__: {
            PACKED_void_GLhandleARB_GLuint_const_GLcharARB___GENPT__ *unpacked = (PACKED_void_GLhandleARB_GLuint_const_GLcharARB___GENPT__ *)packed;
            ARGS_void_GLhandleARB_GLuint_const_GLcharARB___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint_GLintptr: {
            PACKED_void_GLenum_GLuint_GLuint_GLintptr *unpacked = (PACKED_void_GLenum_GLuint_GLuint_GLintptr *)packed;
            ARGS_void_GLenum_GLuint_GLuint_GLintptr args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint_GLintptr_GLsizeiptr: {
            PACKED_void_GLenum_GLuint_GLuint_GLintptr_GLsizeiptr *unpacked = (PACKED_void_GLenum_GLuint_GLuint_GLintptr_GLsizeiptr *)packed;
            ARGS_void_GLenum_GLuint_GLuint_GLintptr_GLsizeiptr args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLuint_const_GLchar___GENPT__: {
            PACKED_void_GLuint_GLuint_GLuint_const_GLchar___GENPT__ *unpacked = (PACKED_void_GLuint_GLuint_GLuint_const_GLchar___GENPT__ *)packed;
            ARGS_void_GLuint_GLuint_GLuint_const_GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLint_GLboolean_GLint_GLenum_GLenum: {
            PACKED_void_GLuint_GLuint_GLint_GLboolean_GLint_GLenum_GLenum *unpacked = (PACKED_void_GLuint_GLuint_GLint_GLboolean_GLint_GLenum_GLenum *)packed;
            ARGS_void_GLuint_GLuint_GLint_GLboolean_GLint_GLenum_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLint_GLboolean_GLint_GLenum_GLint: {
            PACKED_void_GLuint_GLuint_GLint_GLboolean_GLint_GLenum_GLint *unpacked = (PACKED_void_GLuint_GLuint_GLint_GLboolean_GLint_GLenum_GLint *)packed;
            ARGS_void_GLuint_GLuint_GLint_GLboolean_GLint_GLenum_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_GLuint_GLenum_GLenum: {
            PACKED_GLuint_GLenum_GLenum *unpacked = (PACKED_GLuint_GLenum_GLenum *)packed;
            ARGS_GLuint_GLenum_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLuint: {
            PACKED_void_GLenum_GLenum_GLuint *unpacked = (PACKED_void_GLenum_GLenum_GLuint *)packed;
            ARGS_void_GLenum_GLenum_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_GLuint_GLenum: {
            PACKED_GLuint_GLenum *unpacked = (PACKED_GLuint_GLenum *)packed;
            ARGS_GLuint_GLenum args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_GLuint_GLenum_GLenum_GLenum: {
            PACKED_GLuint_GLenum_GLenum_GLenum *unpacked = (PACKED_GLuint_GLenum_GLenum_GLenum *)packed;
            ARGS_GLuint_GLenum_GLenum_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLintptr_GLsizei: {
            PACKED_void_GLuint_GLuint_GLintptr_GLsizei *unpacked = (PACKED_void_GLuint_GLuint_GLintptr_GLsizei *)packed;
            ARGS_void_GLuint_GLuint_GLintptr_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLenum_GLintptrARB: {
            PACKED_void_GLuint_GLuint_GLenum_GLintptrARB *unpacked = (PACKED_void_GLuint_GLuint_GLenum_GLintptrARB *)packed;
            ARGS_void_GLuint_GLuint_GLenum_GLintptrARB args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLenum_GLenum_GLuint: {
            PACKED_void_GLuint_GLuint_GLenum_GLenum_GLuint *unpacked = (PACKED_void_GLuint_GLuint_GLenum_GLenum_GLuint *)packed;
            ARGS_void_GLuint_GLuint_GLenum_GLenum_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLbyte_GLbyte_GLbyte: {
            PACKED_void_GLbyte_GLbyte_GLbyte *unpacked = (PACKED_void_GLbyte_GLbyte_GLbyte *)packed;
            ARGS_void_GLbyte_GLbyte_GLbyte args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_const_GLbyte___GENPT__: {
            PACKED_void_const_GLbyte___GENPT__ *unpacked = (PACKED_void_const_GLbyte___GENPT__ *)packed;
            ARGS_void_const_GLbyte___GENPT__ args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLdouble_GLdouble_GLdouble: {
            PACKED_void_GLdouble_GLdouble_GLdouble *unpacked = (PACKED_void_GLdouble_GLdouble_GLdouble *)packed;
            ARGS_void_GLdouble_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_const_GLdouble___GENPT__: {
            PACKED_void_const_GLdouble___GENPT__ *unpacked = (PACKED_void_const_GLdouble___GENPT__ *)packed;
            ARGS_void_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLint_GLint_GLint: {
            PACKED_void_GLint_GLint_GLint *unpacked = (PACKED_void_GLint_GLint_GLint *)packed;
            ARGS_void_GLint_GLint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_const_GLint___GENPT__: {
            PACKED_void_const_GLint___GENPT__ *unpacked = (PACKED_void_const_GLint___GENPT__ *)packed;
            ARGS_void_const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLshort_GLshort_GLshort: {
            PACKED_void_GLshort_GLshort_GLshort *unpacked = (PACKED_void_GLshort_GLshort_GLshort *)packed;
            ARGS_void_GLshort_GLshort_GLshort args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_const_GLshort___GENPT__: {
            PACKED_void_const_GLshort___GENPT__ *unpacked = (PACKED_void_const_GLshort___GENPT__ *)packed;
            ARGS_void_const_GLshort___GENPT__ args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLsizei_GLsizei_GLfloat_GLfloat_GLfloat_GLfloat_const_GLubyte___GENPT__: {
            PACKED_void_GLsizei_GLsizei_GLfloat_GLfloat_GLfloat_GLfloat_const_GLubyte___GENPT__ *unpacked = (PACKED_void_GLsizei_GLsizei_GLfloat_GLfloat_GLfloat_GLfloat_const_GLubyte___GENPT__ *)packed;
            ARGS_void_GLsizei_GLsizei_GLfloat_GLfloat_GLfloat_GLfloat_const_GLubyte___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLsizei_GLsizei_GLfixed_GLfixed_GLfixed_GLfixed_const_GLubyte___GENPT__: {
            PACKED_void_GLsizei_GLsizei_GLfixed_GLfixed_GLfixed_GLfixed_const_GLubyte___GENPT__ *unpacked = (PACKED_void_GLsizei_GLsizei_GLfixed_GLfixed_GLfixed_GLfixed_const_GLubyte___GENPT__ *)packed;
            ARGS_void_GLsizei_GLsizei_GLfixed_GLfixed_GLfixed_GLfixed_const_GLubyte___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLenum: {
            PACKED_void_GLuint_GLenum_GLenum *unpacked = (PACKED_void_GLuint_GLenum_GLenum *)packed;
            ARGS_void_GLuint_GLenum_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLenum_GLenum_GLenum: {
            PACKED_void_GLuint_GLenum_GLenum_GLenum_GLenum *unpacked = (PACKED_void_GLuint_GLenum_GLenum_GLenum_GLenum *)packed;
            ARGS_void_GLuint_GLenum_GLenum_GLenum_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLint_GLint_GLint_GLint_GLint_GLint_GLint_GLint_GLbitfield_GLenum: {
            PACKED_void_GLint_GLint_GLint_GLint_GLint_GLint_GLint_GLint_GLbitfield_GLenum *unpacked = (PACKED_void_GLint_GLint_GLint_GLint_GLint_GLint_GLint_GLint_GLbitfield_GLenum *)packed;
            ARGS_void_GLint_GLint_GLint_GLint_GLint_GLint_GLint_GLint_GLbitfield_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint64EXT_GLsizeiptr: {
            PACKED_void_GLenum_GLuint_GLuint64EXT_GLsizeiptr *unpacked = (PACKED_void_GLenum_GLuint_GLuint64EXT_GLsizeiptr *)packed;
            ARGS_void_GLenum_GLuint_GLuint64EXT_GLsizeiptr args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLsizeiptrARB_const_GLvoid___GENPT___GLenum: {
            PACKED_void_GLenum_GLsizeiptrARB_const_GLvoid___GENPT___GLenum *unpacked = (PACKED_void_GLenum_GLsizeiptrARB_const_GLvoid___GENPT___GLenum *)packed;
            ARGS_void_GLenum_GLsizeiptrARB_const_GLvoid___GENPT___GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLintptrARB_GLsizeiptrARB_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLintptrARB_GLsizeiptrARB_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLintptrARB_GLsizeiptrARB_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLintptrARB_GLsizeiptrARB_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLsizei_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLsizei_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLsizei_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLsizei_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_GLenum_GLenum: {
            PACKED_GLenum_GLenum *unpacked = (PACKED_GLenum_GLenum *)packed;
            ARGS_GLenum_GLenum args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_GLenum_GLuint_GLenum: {
            PACKED_GLenum_GLuint_GLenum *unpacked = (PACKED_GLenum_GLuint_GLenum *)packed;
            ARGS_GLenum_GLuint_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLenum_const_void___GENPT__: {
            PACKED_void_GLenum_GLenum_GLenum_GLenum_const_void___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLenum_const_void___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLenum_const_void___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLintptr_GLsizeiptr_GLenum_GLenum_const_void___GENPT__: {
            PACKED_void_GLenum_GLenum_GLintptr_GLsizeiptr_GLenum_GLenum_const_void___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLintptr_GLsizeiptr_GLenum_GLenum_const_void___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLintptr_GLsizeiptr_GLenum_GLenum_const_void___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLfloat_GLint: {
            PACKED_void_GLenum_GLint_GLfloat_GLint *unpacked = (PACKED_void_GLenum_GLint_GLfloat_GLint *)packed;
            ARGS_void_GLenum_GLint_GLfloat_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLint_const_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLint_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLint_const_GLint___GENPT__: {
            PACKED_void_GLenum_GLint_const_GLint___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_const_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLint_const_GLuint___GENPT__: {
            PACKED_void_GLenum_GLint_const_GLuint___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLint_GLint_GLint_GLint: {
            PACKED_void_GLint_GLint_GLint_GLint *unpacked = (PACKED_void_GLint_GLint_GLint_GLint *)packed;
            ARGS_void_GLint_GLint_GLint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLuint_GLuint: {
            PACKED_void_GLuint_GLuint_GLuint_GLuint *unpacked = (PACKED_void_GLuint_GLuint_GLuint_GLuint *)packed;
            ARGS_void_GLuint_GLuint_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLdouble: {
            PACKED_void_GLdouble *unpacked = (PACKED_void_GLdouble *)packed;
            ARGS_void_GLdouble args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLenum_GLenum_const_void___GENPT__: {
            PACKED_void_GLuint_GLenum_GLenum_GLenum_const_void___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLenum_GLenum_const_void___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLenum_GLenum_const_void___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLenum_GLenum_GLsizeiptr_GLsizeiptr_const_void___GENPT__: {
            PACKED_void_GLuint_GLenum_GLenum_GLenum_GLsizeiptr_GLsizeiptr_const_void___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLenum_GLenum_GLsizeiptr_GLsizeiptr_const_void___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLenum_GLenum_GLsizeiptr_GLsizeiptr_const_void___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_GLenum_GLsync_GLbitfield_GLuint64: {
            PACKED_GLenum_GLsync_GLbitfield_GLuint64 *unpacked = (PACKED_GLenum_GLsync_GLbitfield_GLuint64 *)packed;
            ARGS_GLenum_GLsync_GLbitfield_GLuint64 args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_const_GLdouble___GENPT__: {
            PACKED_void_GLenum_const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLenum_const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLenum_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_const_GLfloat___GENPT___const_GLfloat___GENPT__: {
            PACKED_void_const_GLfloat___GENPT___const_GLfloat___GENPT__ *unpacked = (PACKED_void_const_GLfloat___GENPT___const_GLfloat___GENPT__ *)packed;
            ARGS_void_const_GLfloat___GENPT___const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLhalfNV_GLhalfNV_GLhalfNV: {
            PACKED_void_GLhalfNV_GLhalfNV_GLhalfNV *unpacked = (PACKED_void_GLhalfNV_GLhalfNV_GLhalfNV *)packed;
            ARGS_void_GLhalfNV_GLhalfNV_GLhalfNV args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_const_GLhalfNV___GENPT__: {
            PACKED_void_const_GLhalfNV___GENPT__ *unpacked = (PACKED_void_const_GLhalfNV___GENPT__ *)packed;
            ARGS_void_const_GLhalfNV___GENPT__ args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLubyte_GLubyte_GLubyte: {
            PACKED_void_GLubyte_GLubyte_GLubyte *unpacked = (PACKED_void_GLubyte_GLubyte_GLubyte *)packed;
            ARGS_void_GLubyte_GLubyte_GLubyte args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_const_GLubyte___GENPT__: {
            PACKED_void_const_GLubyte___GENPT__ *unpacked = (PACKED_void_const_GLubyte___GENPT__ *)packed;
            ARGS_void_const_GLubyte___GENPT__ args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLuint: {
            PACKED_void_GLuint_GLuint_GLuint *unpacked = (PACKED_void_GLuint_GLuint_GLuint *)packed;
            ARGS_void_GLuint_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_const_GLuint___GENPT__: {
            PACKED_void_const_GLuint___GENPT__ *unpacked = (PACKED_void_const_GLuint___GENPT__ *)packed;
            ARGS_void_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLushort_GLushort_GLushort: {
            PACKED_void_GLushort_GLushort_GLushort *unpacked = (PACKED_void_GLushort_GLushort_GLushort *)packed;
            ARGS_void_GLushort_GLushort_GLushort args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_const_GLushort___GENPT__: {
            PACKED_void_const_GLushort___GENPT__ *unpacked = (PACKED_void_const_GLushort___GENPT__ *)packed;
            ARGS_void_const_GLushort___GENPT__ args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLbyte_GLbyte_GLbyte_GLbyte: {
            PACKED_void_GLbyte_GLbyte_GLbyte_GLbyte *unpacked = (PACKED_void_GLbyte_GLbyte_GLbyte_GLbyte *)packed;
            ARGS_void_GLbyte_GLbyte_GLbyte_GLbyte args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLdouble_GLdouble_GLdouble_GLdouble: {
            PACKED_void_GLdouble_GLdouble_GLdouble_GLdouble *unpacked = (PACKED_void_GLdouble_GLdouble_GLdouble_GLdouble *)packed;
            ARGS_void_GLdouble_GLdouble_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_void_const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__: {
            PACKED_void_const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__ *unpacked = (PACKED_void_const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__ *)packed;
            ARGS_void_const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLhalfNV_GLhalfNV_GLhalfNV_GLhalfNV: {
            PACKED_void_GLhalfNV_GLhalfNV_GLhalfNV_GLhalfNV *unpacked = (PACKED_void_GLhalfNV_GLhalfNV_GLhalfNV_GLhalfNV *)packed;
            ARGS_void_GLhalfNV_GLhalfNV_GLhalfNV_GLhalfNV args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLshort_GLshort_GLshort_GLshort: {
            PACKED_void_GLshort_GLshort_GLshort_GLshort *unpacked = (PACKED_void_GLshort_GLshort_GLshort_GLshort *)packed;
            ARGS_void_GLshort_GLshort_GLshort_GLshort args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLubyte_GLubyte_GLubyte_GLubyte_GLfloat_GLfloat: {
            PACKED_void_GLubyte_GLubyte_GLubyte_GLubyte_GLfloat_GLfloat *unpacked = (PACKED_void_GLubyte_GLubyte_GLubyte_GLubyte_GLfloat_GLfloat *)packed;
            ARGS_void_GLubyte_GLubyte_GLubyte_GLubyte_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_const_GLubyte___GENPT___const_GLfloat___GENPT__: {
            PACKED_void_const_GLubyte___GENPT___const_GLfloat___GENPT__ *unpacked = (PACKED_void_const_GLubyte___GENPT___const_GLfloat___GENPT__ *)packed;
            ARGS_void_const_GLubyte___GENPT___const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLubyte_GLubyte_GLubyte_GLubyte_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLubyte_GLubyte_GLubyte_GLubyte_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLubyte_GLubyte_GLubyte_GLubyte_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLubyte_GLubyte_GLubyte_GLubyte_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLushort_GLushort_GLushort_GLushort: {
            PACKED_void_GLushort_GLushort_GLushort_GLushort *unpacked = (PACKED_void_GLushort_GLushort_GLushort_GLushort *)packed;
            ARGS_void_GLushort_GLushort_GLushort_GLushort args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLint_GLenum_GLsizei: {
            PACKED_void_GLint_GLenum_GLsizei *unpacked = (PACKED_void_GLint_GLenum_GLsizei *)packed;
            ARGS_void_GLint_GLenum_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint: {
            PACKED_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint *unpacked = (PACKED_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint *)packed;
            ARGS_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint: {
            PACKED_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint *unpacked = (PACKED_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint *)packed;
            ARGS_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint: {
            PACKED_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint *unpacked = (PACKED_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint *)packed;
            ARGS_void_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11, args.a12, args.a13);
            break;
        }
        case FORMAT_void_GLuint_GLboolean_GLboolean_GLboolean_GLboolean: {
            PACKED_void_GLuint_GLboolean_GLboolean_GLboolean_GLboolean *unpacked = (PACKED_void_GLuint_GLboolean_GLboolean_GLboolean_GLboolean *)packed;
            ARGS_void_GLuint_GLboolean_GLboolean_GLboolean_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_const_GLuint___GENPT__: {
            PACKED_void_GLenum_const_GLuint___GENPT__ *unpacked = (PACKED_void_GLenum_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLenum_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLint_GLenum_GLsizei_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLint_GLenum_GLsizei_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLint_GLenum_GLsizei_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLint_GLenum_GLsizei_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLint_GLenum_GLint_const_GLvoid___GENPT___GLint: {
            PACKED_void_GLint_GLenum_GLint_const_GLvoid___GENPT___GLint *unpacked = (PACKED_void_GLint_GLenum_GLint_const_GLvoid___GENPT___GLint *)packed;
            ARGS_void_GLint_GLenum_GLint_const_GLvoid___GENPT___GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLint_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLint_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLint_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLint_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLenum_GLenum_GLenum: {
            PACKED_void_GLenum_GLenum_GLenum_GLenum_GLenum_GLenum *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLenum_GLenum_GLenum *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLenum_GLenum_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLenum_GLenum_GLenum_GLenum_GLboolean_GLboolean_GLboolean: {
            PACKED_void_GLenum_GLenum_GLenum_GLenum_GLenum_GLenum_GLenum_GLboolean_GLboolean_GLboolean *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLenum_GLenum_GLenum_GLenum_GLboolean_GLboolean_GLboolean *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLenum_GLenum_GLenum_GLenum_GLboolean_GLboolean_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_void_GLenum_const_GLint___GENPT__: {
            PACKED_void_GLenum_const_GLint___GENPT__ *unpacked = (PACKED_void_GLenum_const_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLhandleARB: {
            PACKED_void_GLhandleARB *unpacked = (PACKED_void_GLhandleARB *)packed;
            ARGS_void_GLhandleARB args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_const_GLchar___GENPT___const_GLint___GENPT__: {
            PACKED_void_GLuint_GLsizei_const_GLchar___GENPT___const_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_const_GLchar___GENPT___const_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_const_GLchar___GENPT___const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLint_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint_GLint_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLint_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLint_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11, args.a12);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLenum_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLenum_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLenum_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLenum_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLint_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLint_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLint_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLint_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLint_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_GLint_GLint_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLint_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLint_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11, args.a12);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLintptr_GLintptr_GLsizeiptr: {
            PACKED_void_GLenum_GLenum_GLintptr_GLintptr_GLsizeiptr *unpacked = (PACKED_void_GLenum_GLenum_GLintptr_GLintptr_GLsizeiptr *)packed;
            ARGS_void_GLenum_GLenum_GLintptr_GLintptr_GLsizeiptr args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLint_GLint_GLsizei: {
            PACKED_void_GLenum_GLsizei_GLint_GLint_GLsizei *unpacked = (PACKED_void_GLenum_GLsizei_GLint_GLint_GLsizei *)packed;
            ARGS_void_GLenum_GLsizei_GLint_GLint_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLint_GLsizei: {
            PACKED_void_GLenum_GLenum_GLint_GLint_GLsizei *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLint_GLsizei *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLint_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLint_GLsizei_GLsizei: {
            PACKED_void_GLenum_GLenum_GLint_GLint_GLsizei_GLsizei *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLint_GLsizei_GLsizei *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLint_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei: {
            PACKED_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11, args.a12, args.a13, args.a14, args.a15);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLint: {
            PACKED_void_GLenum_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLint *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLint *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint: {
            PACKED_void_GLenum_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLsizei: {
            PACKED_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLsizei *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLsizei *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei: {
            PACKED_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei: {
            PACKED_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_void_GLint_GLint_GLsizei_GLsizei_GLenum: {
            PACKED_void_GLint_GLint_GLsizei_GLsizei_GLenum *unpacked = (PACKED_void_GLint_GLint_GLsizei_GLsizei_GLenum *)packed;
            ARGS_void_GLint_GLint_GLsizei_GLsizei_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLint: {
            PACKED_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLint *unpacked = (PACKED_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLint *)packed;
            ARGS_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLint_GLint_GLint_GLsizei: {
            PACKED_void_GLenum_GLint_GLint_GLint_GLint_GLsizei *unpacked = (PACKED_void_GLenum_GLint_GLint_GLint_GLint_GLsizei *)packed;
            ARGS_void_GLenum_GLint_GLint_GLint_GLint_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei: {
            PACKED_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei *unpacked = (PACKED_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei *)packed;
            ARGS_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLint: {
            PACKED_void_GLuint_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLint *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLint *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint: {
            PACKED_void_GLuint_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei: {
            PACKED_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei: {
            PACKED_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei: {
            PACKED_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_void_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLenum_GLenum_const_GLfloat___GENPT__: {
            PACKED_void_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLenum_GLenum_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLenum_GLenum_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLenum_GLenum_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_GLuint: {
            PACKED_GLuint *unpacked = (PACKED_GLuint *)packed;
            unpacked->func();
            break;
        }
        case FORMAT_GLhandleARB: {
            PACKED_GLhandleARB *unpacked = (PACKED_GLhandleARB *)packed;
            unpacked->func();
            break;
        }
        case FORMAT_GLhandleARB_GLenum: {
            PACKED_GLhandleARB_GLenum *unpacked = (PACKED_GLhandleARB_GLenum *)packed;
            ARGS_GLhandleARB_GLenum args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_GLuint_GLenum_const_GLchar___GENPT__: {
            PACKED_GLuint_GLenum_const_GLchar___GENPT__ *unpacked = (PACKED_GLuint_GLenum_const_GLchar___GENPT__ *)packed;
            ARGS_GLuint_GLenum_const_GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_GLuint_GLenum_GLsizei_GLchar__GENPT__const___GENPT__: {
            PACKED_GLuint_GLenum_GLsizei_GLchar__GENPT__const___GENPT__ *unpacked = (PACKED_GLuint_GLenum_GLsizei_GLchar__GENPT__const___GENPT__ *)packed;
            ARGS_GLuint_GLenum_GLsizei_GLchar__GENPT__const___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_GLsync_struct__cl_context___GENPT___struct__cl_event___GENPT___GLbitfield: {
            PACKED_GLsync_struct__cl_context___GENPT___struct__cl_event___GENPT___GLbitfield *unpacked = (PACKED_GLsync_struct__cl_context___GENPT___struct__cl_event___GENPT___GLbitfield *)packed;
            ARGS_GLsync_struct__cl_context___GENPT___struct__cl_event___GENPT___GLbitfield args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLdouble___GENPT__: {
            PACKED_void_GLenum_GLdouble___GENPT__ *unpacked = (PACKED_void_GLenum_GLdouble___GENPT__ *)packed;
            ARGS_void_GLenum_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLDEBUGPROC_const_void___GENPT__: {
            PACKED_void_GLDEBUGPROC_const_void___GENPT__ *unpacked = (PACKED_void_GLDEBUGPROC_const_void___GENPT__ *)packed;
            ARGS_void_GLDEBUGPROC_const_void___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLDEBUGPROCAMD_GLvoid___GENPT__: {
            PACKED_void_GLDEBUGPROCAMD_GLvoid___GENPT__ *unpacked = (PACKED_void_GLDEBUGPROCAMD_GLvoid___GENPT__ *)packed;
            ARGS_void_GLDEBUGPROCAMD_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLDEBUGPROCARB_const_GLvoid___GENPT__: {
            PACKED_void_GLDEBUGPROCARB_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLDEBUGPROCARB_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLDEBUGPROCARB_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLsizei_const_GLuint___GENPT___GLboolean: {
            PACKED_void_GLenum_GLenum_GLenum_GLsizei_const_GLuint___GENPT___GLboolean *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLsizei_const_GLuint___GENPT___GLboolean *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLsizei_const_GLuint___GENPT___GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLsizei_const_GLuint___GENPT___GLboolean: {
            PACKED_void_GLenum_GLenum_GLsizei_const_GLuint___GENPT___GLboolean *unpacked = (PACKED_void_GLenum_GLenum_GLsizei_const_GLuint___GENPT___GLboolean *)packed;
            ARGS_void_GLenum_GLenum_GLsizei_const_GLuint___GENPT___GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLuint_GLenum_GLsizei_const_GLchar___GENPT__: {
            PACKED_void_GLenum_GLenum_GLuint_GLenum_GLsizei_const_GLchar___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLuint_GLenum_GLsizei_const_GLchar___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLuint_GLenum_GLsizei_const_GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLuint_GLsizei_const_GLchar___GENPT__: {
            PACKED_void_GLenum_GLenum_GLuint_GLsizei_const_GLchar___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLuint_GLsizei_const_GLchar___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLuint_GLsizei_const_GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLdouble_GLdouble_GLint_GLint_GLdouble_GLdouble_GLint_GLint_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__: {
            PACKED_void_GLenum_GLdouble_GLdouble_GLint_GLint_GLdouble_GLdouble_GLint_GLint_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLenum_GLdouble_GLdouble_GLint_GLint_GLdouble_GLdouble_GLint_GLint_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLenum_GLdouble_GLdouble_GLint_GLint_GLdouble_GLdouble_GLint_GLint_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11, args.a12, args.a13, args.a14);
            break;
        }
        case FORMAT_void_GLenum_GLfloat_GLfloat_GLint_GLint_GLfloat_GLfloat_GLint_GLint_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLfloat_GLfloat_GLint_GLint_GLfloat_GLfloat_GLint_GLint_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLfloat_GLfloat_GLint_GLint_GLfloat_GLfloat_GLint_GLint_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLfloat_GLfloat_GLint_GLint_GLfloat_GLfloat_GLint_GLint_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11, args.a12, args.a13, args.a14);
            break;
        }
        case FORMAT_void_GLuint_GLsizei: {
            PACKED_void_GLuint_GLsizei *unpacked = (PACKED_void_GLuint_GLsizei *)packed;
            ARGS_void_GLuint_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLint_const_GLchar___GENPT__: {
            PACKED_void_GLint_const_GLchar___GENPT__ *unpacked = (PACKED_void_GLint_const_GLchar___GENPT__ *)packed;
            ARGS_void_GLint_const_GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLuint_const_GLuint___GENPT__: {
            PACKED_void_GLenum_GLuint_const_GLuint___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLsync: {
            PACKED_void_GLsync *unpacked = (PACKED_void_GLsync *)packed;
            ARGS_void_GLsync args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLclampd_GLclampd: {
            PACKED_void_GLclampd_GLclampd *unpacked = (PACKED_void_GLclampd_GLclampd *)packed;
            ARGS_void_GLclampd_GLclampd args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLdouble_GLdouble: {
            PACKED_void_GLdouble_GLdouble *unpacked = (PACKED_void_GLdouble_GLdouble *)packed;
            ARGS_void_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_const_GLdouble___GENPT__: {
            PACKED_void_GLuint_GLsizei_const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLdouble_GLdouble: {
            PACKED_void_GLuint_GLdouble_GLdouble *unpacked = (PACKED_void_GLuint_GLdouble_GLdouble *)packed;
            ARGS_void_GLuint_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_const_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLsizei_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLsizei_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLsizei_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLintptr: {
            PACKED_void_GLintptr *unpacked = (PACKED_void_GLintptr *)packed;
            ARGS_void_GLintptr args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLsizei_GLsizei: {
            PACKED_void_GLenum_GLint_GLsizei_GLsizei *unpacked = (PACKED_void_GLenum_GLint_GLsizei_GLsizei *)packed;
            ARGS_void_GLenum_GLint_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLsizei_GLsizei_GLuint: {
            PACKED_void_GLenum_GLint_GLsizei_GLsizei_GLuint *unpacked = (PACKED_void_GLenum_GLint_GLsizei_GLsizei_GLuint *)packed;
            ARGS_void_GLenum_GLint_GLsizei_GLsizei_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLsizei_const_GLenum___GENPT__: {
            PACKED_void_GLsizei_const_GLenum___GENPT__ *unpacked = (PACKED_void_GLsizei_const_GLenum___GENPT__ *)packed;
            ARGS_void_GLsizei_const_GLenum___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLsizei: {
            PACKED_void_GLenum_GLsizei *unpacked = (PACKED_void_GLenum_GLsizei *)packed;
            ARGS_void_GLenum_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT___GLint: {
            PACKED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT___GLint *unpacked = (PACKED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT___GLint *)packed;
            ARGS_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT___GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT___GLsizei: {
            PACKED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT___GLsizei *unpacked = (PACKED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT___GLsizei *)packed;
            ARGS_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT___GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLenum_const_void___GENPT___GLsizei_GLuint: {
            PACKED_void_GLenum_GLsizei_GLenum_const_void___GENPT___GLsizei_GLuint *unpacked = (PACKED_void_GLenum_GLsizei_GLenum_const_void___GENPT___GLsizei_GLuint *)packed;
            ARGS_void_GLenum_GLsizei_GLenum_const_void___GENPT___GLsizei_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT___GLsizei_GLint: {
            PACKED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT___GLsizei_GLint *unpacked = (PACKED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT___GLsizei_GLint *)packed;
            ARGS_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT___GLsizei_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLenum_const_void___GENPT___GLsizei_GLint_GLuint: {
            PACKED_void_GLenum_GLsizei_GLenum_const_void___GENPT___GLsizei_GLint_GLuint *unpacked = (PACKED_void_GLenum_GLsizei_GLenum_const_void___GENPT___GLsizei_GLint_GLuint *)packed;
            ARGS_void_GLenum_GLsizei_GLenum_const_void___GENPT___GLsizei_GLint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint_GLint_GLsizei: {
            PACKED_void_GLenum_GLuint_GLuint_GLint_GLsizei *unpacked = (PACKED_void_GLenum_GLuint_GLuint_GLint_GLsizei *)packed;
            ARGS_void_GLenum_GLuint_GLuint_GLint_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint_GLsizei: {
            PACKED_void_GLenum_GLuint_GLuint_GLsizei *unpacked = (PACKED_void_GLenum_GLuint_GLuint_GLsizei *)packed;
            ARGS_void_GLenum_GLuint_GLuint_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint_GLsizei_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLuint_GLuint_GLsizei_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLuint_GLsizei_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLuint_GLsizei_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint_GLsizei_GLenum_const_GLvoid___GENPT___GLint: {
            PACKED_void_GLenum_GLuint_GLuint_GLsizei_GLenum_const_GLvoid___GENPT___GLint *unpacked = (PACKED_void_GLenum_GLuint_GLuint_GLsizei_GLenum_const_GLvoid___GENPT___GLint *)packed;
            ARGS_void_GLenum_GLuint_GLuint_GLsizei_GLenum_const_GLvoid___GENPT___GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLuint_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLuint_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLuint_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLsizei: {
            PACKED_void_GLenum_GLuint_GLsizei *unpacked = (PACKED_void_GLenum_GLuint_GLsizei *)packed;
            ARGS_void_GLenum_GLuint_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLsizei: {
            PACKED_void_GLsizei *unpacked = (PACKED_void_GLsizei *)packed;
            ARGS_void_GLsizei args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLsizei_GLsizei_const_GLboolean___GENPT__: {
            PACKED_void_GLsizei_GLsizei_const_GLboolean___GENPT__ *unpacked = (PACKED_void_GLsizei_GLsizei_const_GLboolean___GENPT__ *)packed;
            ARGS_void_GLsizei_GLsizei_const_GLboolean___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLint_const_GLboolean___GENPT___GLint: {
            PACKED_void_GLint_const_GLboolean___GENPT___GLint *unpacked = (PACKED_void_GLint_const_GLboolean___GENPT___GLint *)packed;
            ARGS_void_GLint_const_GLboolean___GENPT___GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_const_GLboolean___GENPT__: {
            PACKED_void_const_GLboolean___GENPT__ *unpacked = (PACKED_void_const_GLboolean___GENPT__ *)packed;
            ARGS_void_const_GLboolean___GENPT__ args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLint: {
            PACKED_void_GLenum_GLint_GLint *unpacked = (PACKED_void_GLenum_GLint_GLint *)packed;
            ARGS_void_GLenum_GLint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLint_GLint_GLint: {
            PACKED_void_GLenum_GLint_GLint_GLint_GLint *unpacked = (PACKED_void_GLenum_GLint_GLint_GLint_GLint *)packed;
            ARGS_void_GLenum_GLint_GLint_GLint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLint_GLint: {
            PACKED_void_GLint_GLint *unpacked = (PACKED_void_GLint_GLint *)packed;
            ARGS_void_GLint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLuint_const_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLuint_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLsizei_GLenum_GLfloat___GENPT__: {
            PACKED_void_GLsizei_GLenum_GLfloat___GENPT__ *unpacked = (PACKED_void_GLsizei_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLsizei_GLenum_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLsizei_GLenum_const_GLfixed___GENPT__: {
            PACKED_void_GLsizei_GLenum_const_GLfixed___GENPT__ *unpacked = (PACKED_void_GLsizei_GLenum_const_GLfixed___GENPT__ *)packed;
            ARGS_void_GLsizei_GLenum_const_GLfixed___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_GLsync_GLenum_GLbitfield: {
            PACKED_GLsync_GLenum_GLbitfield *unpacked = (PACKED_GLsync_GLenum_GLbitfield *)packed;
            ARGS_GLsync_GLenum_GLbitfield args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_GLint_GLuint___GENPT__: {
            PACKED_GLint_GLuint___GENPT__ *unpacked = (PACKED_GLint_GLuint___GENPT__ *)packed;
            ARGS_GLint_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLenum_GLintptr_GLsizeiptr: {
            PACKED_void_GLenum_GLintptr_GLsizeiptr *unpacked = (PACKED_void_GLenum_GLintptr_GLsizeiptr *)packed;
            ARGS_void_GLenum_GLintptr_GLsizeiptr args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLintptr_GLsizeiptr: {
            PACKED_void_GLuint_GLintptr_GLsizeiptr *unpacked = (PACKED_void_GLuint_GLintptr_GLsizeiptr *)packed;
            ARGS_void_GLuint_GLintptr_GLsizeiptr args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLsizei_GLvoid___GENPT__: {
            PACKED_void_GLsizei_GLvoid___GENPT__ *unpacked = (PACKED_void_GLsizei_GLvoid___GENPT__ *)packed;
            ARGS_void_GLsizei_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLint_const_GLvoid___GENPT___GLint: {
            PACKED_void_GLenum_GLint_const_GLvoid___GENPT___GLint *unpacked = (PACKED_void_GLenum_GLint_const_GLvoid___GENPT___GLint *)packed;
            ARGS_void_GLenum_GLint_const_GLvoid___GENPT___GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLhalfNV: {
            PACKED_void_GLhalfNV *unpacked = (PACKED_void_GLhalfNV *)packed;
            ARGS_void_GLhalfNV args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLsizei_const_GLfloat___GENPT__: {
            PACKED_void_GLsizei_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLsizei_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLsizei_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_const_GLenum___GENPT__: {
            PACKED_void_GLuint_GLsizei_const_GLenum___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_const_GLenum___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_const_GLenum___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLuint: {
            PACKED_void_GLenum_GLenum_GLenum_GLuint *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLuint *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLuint_GLint: {
            PACKED_void_GLenum_GLenum_GLuint_GLint *unpacked = (PACKED_void_GLenum_GLenum_GLuint_GLint *)packed;
            ARGS_void_GLenum_GLenum_GLuint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLuint_GLint: {
            PACKED_void_GLenum_GLenum_GLenum_GLuint_GLint *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLuint_GLint *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLuint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLuint_GLint_GLint: {
            PACKED_void_GLenum_GLenum_GLenum_GLuint_GLint_GLint *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLuint_GLint_GLint *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLuint_GLint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLuint_GLint_GLenum: {
            PACKED_void_GLenum_GLenum_GLuint_GLint_GLenum *unpacked = (PACKED_void_GLenum_GLenum_GLuint_GLint_GLenum *)packed;
            ARGS_void_GLenum_GLenum_GLuint_GLint_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLuint_GLint_GLint: {
            PACKED_void_GLenum_GLenum_GLuint_GLint_GLint *unpacked = (PACKED_void_GLenum_GLenum_GLuint_GLint_GLint *)packed;
            ARGS_void_GLenum_GLenum_GLuint_GLint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLdouble_GLdouble_GLdouble_GLdouble_GLdouble_GLdouble: {
            PACKED_void_GLdouble_GLdouble_GLdouble_GLdouble_GLdouble_GLdouble *unpacked = (PACKED_void_GLdouble_GLdouble_GLdouble_GLdouble_GLdouble_GLdouble *)packed;
            ARGS_void_GLdouble_GLdouble_GLdouble_GLdouble_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_GLuint_GLsizei: {
            PACKED_GLuint_GLsizei *unpacked = (PACKED_GLuint_GLsizei *)packed;
            ARGS_GLuint_GLsizei args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_GLuint_GLuint: {
            PACKED_GLuint_GLuint *unpacked = (PACKED_GLuint_GLuint *)packed;
            ARGS_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint___GENPT__: {
            PACKED_void_GLenum_GLuint_GLuint___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLuint___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_GLuint_GLenum_GLenum_GLenum_GLuint: {
            PACKED_GLuint_GLenum_GLenum_GLenum_GLuint *unpacked = (PACKED_GLuint_GLenum_GLenum_GLenum_GLuint *)packed;
            ARGS_GLuint_GLenum_GLenum_GLenum_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLenum_GLint___GENPT__: {
            PACKED_void_GLuint_GLuint_GLenum_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLuint_GLenum_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLuint_GLenum_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__: {
            PACKED_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__ *unpacked = (PACKED_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__ *)packed;
            ARGS_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLhandleARB_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLcharARB___GENPT__: {
            PACKED_void_GLhandleARB_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLcharARB___GENPT__ *unpacked = (PACKED_void_GLhandleARB_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLcharARB___GENPT__ *)packed;
            ARGS_void_GLhandleARB_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLcharARB___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__: {
            PACKED_void_GLuint_GLenum_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_GLenum_GLint___GENPT__: {
            PACKED_void_GLuint_GLenum_GLuint_GLenum_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLuint_GLenum_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLuint_GLenum_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__: {
            PACKED_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__ *unpacked = (PACKED_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__ *)packed;
            ARGS_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_const_GLuint___GENPT___GLenum_GLint___GENPT__: {
            PACKED_void_GLuint_GLsizei_const_GLuint___GENPT___GLenum_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_const_GLuint___GENPT___GLenum_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_const_GLuint___GENPT___GLenum_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLsizei___GENPT___GLenum___GENPT___GLchar___GENPT__: {
            PACKED_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLsizei___GENPT___GLenum___GENPT___GLchar___GENPT__ *unpacked = (PACKED_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLsizei___GENPT___GLenum___GENPT___GLchar___GENPT__ *)packed;
            ARGS_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLsizei___GENPT___GLenum___GENPT___GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLhandleARB_GLsizei_GLsizei___GENPT___GLhandleARB___GENPT__: {
            PACKED_void_GLhandleARB_GLsizei_GLsizei___GENPT___GLhandleARB___GENPT__ *unpacked = (PACKED_void_GLhandleARB_GLsizei_GLsizei___GENPT___GLhandleARB___GENPT__ *)packed;
            ARGS_void_GLhandleARB_GLsizei_GLsizei___GENPT___GLhandleARB___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_GLsizei___GENPT___GLuint___GENPT__: {
            PACKED_void_GLuint_GLsizei_GLsizei___GENPT___GLuint___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_GLsizei___GENPT___GLuint___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_GLsizei___GENPT___GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_GLint_GLuint_const_GLchar___GENPT__: {
            PACKED_GLint_GLuint_const_GLchar___GENPT__ *unpacked = (PACKED_GLint_GLuint_const_GLchar___GENPT__ *)packed;
            ARGS_GLint_GLuint_const_GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_GLint_GLhandleARB_const_GLcharARB___GENPT__: {
            PACKED_GLint_GLhandleARB_const_GLcharARB___GENPT__ *unpacked = (PACKED_GLint_GLhandleARB_const_GLcharARB___GENPT__ *)packed;
            ARGS_GLint_GLhandleARB_const_GLcharARB___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLboolean___GENPT__: {
            PACKED_void_GLenum_GLuint_GLboolean___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLboolean___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLboolean___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint64___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint64___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint64___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint64___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLuint64EXT___GENPT__: {
            PACKED_void_GLenum_GLenum_GLuint64EXT___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLuint64EXT___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLuint64EXT___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLintptr_GLsizeiptr_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLintptr_GLsizeiptr_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLintptr_GLsizeiptr_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLintptr_GLsizeiptr_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLintptrARB_GLsizeiptrARB_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLintptrARB_GLsizeiptrARB_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLintptrARB_GLsizeiptrARB_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLintptrARB_GLsizeiptrARB_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLenum_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLenum_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLenum_GLenum_GLenum_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLenum_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLenum_GLint___GENPT__: {
            PACKED_void_GLenum_GLenum_GLenum_GLenum_GLint___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLenum_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLenum_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLenum_GLenum_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLint___GENPT__: {
            PACKED_void_GLenum_GLenum_GLenum_GLint___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_GLint_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_GLuint_GLuint_GLsizei_GLenum___GENPT___GLenum___GENPT___GLuint___GENPT___GLenum___GENPT___GLsizei___GENPT___GLchar___GENPT__: {
            PACKED_GLuint_GLuint_GLsizei_GLenum___GENPT___GLenum___GENPT___GLuint___GENPT___GLenum___GENPT___GLsizei___GENPT___GLchar___GENPT__ *unpacked = (PACKED_GLuint_GLuint_GLsizei_GLenum___GENPT___GLenum___GENPT___GLuint___GENPT___GLenum___GENPT___GLsizei___GENPT___GLchar___GENPT__ *)packed;
            ARGS_GLuint_GLuint_GLsizei_GLenum___GENPT___GLenum___GENPT___GLuint___GENPT___GLenum___GENPT___GLsizei___GENPT___GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_GLuint_GLuint_GLsizei_GLenum___GENPT___GLuint___GENPT___GLuint___GENPT___GLsizei___GENPT___GLchar___GENPT__: {
            PACKED_GLuint_GLuint_GLsizei_GLenum___GENPT___GLuint___GENPT___GLuint___GENPT___GLsizei___GENPT___GLchar___GENPT__ *unpacked = (PACKED_GLuint_GLuint_GLsizei_GLenum___GENPT___GLuint___GENPT___GLuint___GENPT___GLsizei___GENPT___GLchar___GENPT__ *)packed;
            ARGS_GLuint_GLuint_GLsizei_GLenum___GENPT___GLuint___GENPT___GLuint___GENPT___GLsizei___GENPT___GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLdouble___GENPT__: {
            PACKED_void_GLenum_GLuint_GLdouble___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLdouble___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint___GENPT__: {
            PACKED_void_GLuint_GLenum_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLuint_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLfloat___GENPT__: {
            PACKED_void_GLfloat___GENPT__ *unpacked = (PACKED_void_GLfloat___GENPT__ *)packed;
            ARGS_void_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLenum_GLboolean_GLenum_GLenum_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLboolean_GLenum_GLenum_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLboolean_GLenum_GLenum_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLboolean_GLenum_GLenum_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_GLuint64_GLuint_GLint_GLboolean_GLint_GLenum: {
            PACKED_GLuint64_GLuint_GLint_GLboolean_GLint_GLenum *unpacked = (PACKED_GLuint64_GLuint_GLint_GLboolean_GLint_GLenum *)packed;
            ARGS_GLuint64_GLuint_GLint_GLboolean_GLint_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLhandleARB_GLsizei_GLsizei___GENPT___GLcharARB___GENPT__: {
            PACKED_void_GLhandleARB_GLsizei_GLsizei___GENPT___GLcharARB___GENPT__ *unpacked = (PACKED_void_GLhandleARB_GLsizei_GLsizei___GENPT___GLcharARB___GENPT__ *)packed;
            ARGS_void_GLhandleARB_GLsizei_GLsizei___GENPT___GLcharARB___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_GLint: {
            PACKED_GLint *unpacked = (PACKED_GLint *)packed;
            unpacked->func();
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLint64___GENPT__: {
            PACKED_void_GLenum_GLuint_GLint64___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLint64___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLint64___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLint64___GENPT__: {
            PACKED_void_GLenum_GLint64___GENPT__ *unpacked = (PACKED_void_GLenum_GLint64___GENPT__ *)packed;
            ARGS_void_GLenum_GLint64___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLint___GENPT__: {
            PACKED_void_GLenum_GLuint_GLint___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint64EXT___GENPT__: {
            PACKED_void_GLenum_GLuint_GLuint64EXT___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLuint64EXT___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLuint64EXT___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLuint64EXT___GENPT__: {
            PACKED_void_GLenum_GLuint64EXT___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint64EXT___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint64EXT___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLsizei_GLint64___GENPT__: {
            PACKED_void_GLenum_GLenum_GLenum_GLsizei_GLint64___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLsizei_GLint64___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLsizei_GLint64___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLsizei_GLint___GENPT__: {
            PACKED_void_GLenum_GLenum_GLenum_GLsizei_GLint___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLsizei_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLsizei_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLboolean___GENPT__: {
            PACKED_void_GLuint_GLenum_GLboolean___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLboolean___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLboolean___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLenum_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLenum_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLuint_GLenum_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLenum_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLenum_GLint___GENPT__: {
            PACKED_void_GLenum_GLuint_GLenum_GLint___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLenum_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLenum_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLenum_GLsizei_GLsizei_GLboolean_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLuint_GLenum_GLsizei_GLsizei_GLboolean_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLenum_GLsizei_GLsizei_GLboolean_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLenum_GLsizei_GLsizei_GLboolean_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLdouble___GENPT__: {
            PACKED_void_GLenum_GLenum_GLdouble___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLdouble___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLdouble___GENPT__: {
            PACKED_void_GLenum_GLenum_GLenum_GLdouble___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLdouble___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLenum_GLenum_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint_GLenum_GLenum_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLenum_GLenum_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLenum_GLenum_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLenum_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint_GLenum_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLenum_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLenum_GLint___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint_GLenum_GLint___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLenum_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLenum_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLuint___GENPT__: {
            PACKED_void_GLenum_GLenum_GLenum_GLuint___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLuint___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint64EXT___GENPT__: {
            PACKED_void_GLuint_GLenum_GLuint64EXT___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLuint64EXT___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLuint64EXT___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLintptr_GLsizeiptr_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLintptr_GLsizeiptr_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLintptr_GLsizeiptr_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLintptr_GLsizeiptr_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLenum_GLint___GENPT__: {
            PACKED_void_GLuint_GLenum_GLenum_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLenum_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLenum_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_GLint___GENPT__: {
            PACKED_void_GLuint_GLenum_GLuint_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLuint_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLuint_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_GLuint___GENPT__: {
            PACKED_void_GLuint_GLenum_GLuint_GLuint___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLuint_GLuint___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLuint_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_GLdouble___GENPT__: {
            PACKED_void_GLuint_GLenum_GLuint_GLdouble___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLuint_GLdouble___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLuint_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLenum_GLuint_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLuint_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLuint_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLenum_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_GLenum_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLenum_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLenum_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLint_const_GLchar___GENPT___GLsizei_GLint___GENPT___GLchar___GENPT__: {
            PACKED_void_GLint_const_GLchar___GENPT___GLsizei_GLint___GENPT___GLchar___GENPT__ *unpacked = (PACKED_void_GLint_const_GLchar___GENPT___GLsizei_GLint___GENPT___GLchar___GENPT__ *)packed;
            ARGS_void_GLint_const_GLchar___GENPT___GLsizei_GLint___GENPT___GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLint_const_GLchar___GENPT___GLenum_GLint___GENPT__: {
            PACKED_void_GLint_const_GLchar___GENPT___GLenum_GLint___GENPT__ *unpacked = (PACKED_void_GLint_const_GLchar___GENPT___GLenum_GLint___GENPT__ *)packed;
            ARGS_void_GLint_const_GLchar___GENPT___GLenum_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__: {
            PACKED_void_GLenum_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLhandleARB_GLenum_GLfloat___GENPT__: {
            PACKED_void_GLhandleARB_GLenum_GLfloat___GENPT__ *unpacked = (PACKED_void_GLhandleARB_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLhandleARB_GLenum_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLhandleARB_GLenum_GLint___GENPT__: {
            PACKED_void_GLhandleARB_GLenum_GLint___GENPT__ *unpacked = (PACKED_void_GLhandleARB_GLenum_GLint___GENPT__ *)packed;
            ARGS_void_GLhandleARB_GLenum_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_const_void___GENPT___GLsizei_GLsizei___GENPT___GLchar___GENPT__: {
            PACKED_void_const_void___GENPT___GLsizei_GLsizei___GENPT___GLchar___GENPT__ *unpacked = (PACKED_void_const_void___GENPT___GLsizei_GLsizei___GENPT___GLchar___GENPT__ *)packed;
            ARGS_void_const_void___GENPT___GLsizei_GLsizei___GENPT___GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint___GENPT__: {
            PACKED_void_GLuint_GLenum_GLuint___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLuint___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLubyte___GENPT__: {
            PACKED_void_GLuint_GLubyte___GENPT__ *unpacked = (PACKED_void_GLuint_GLubyte___GENPT__ *)packed;
            ARGS_void_GLuint_GLubyte___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_GLfloat_GLuint_GLsizei_GLsizei: {
            PACKED_GLfloat_GLuint_GLsizei_GLsizei *unpacked = (PACKED_GLfloat_GLuint_GLsizei_GLsizei *)packed;
            ARGS_GLfloat_GLuint_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLbitfield_GLuint_GLsizei_GLsizei_GLfloat___GENPT__: {
            PACKED_void_GLbitfield_GLuint_GLsizei_GLsizei_GLfloat___GENPT__ *unpacked = (PACKED_void_GLbitfield_GLuint_GLsizei_GLsizei_GLfloat___GENPT__ *)packed;
            ARGS_void_GLbitfield_GLuint_GLsizei_GLsizei_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLbitfield_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLsizei_GLfloat___GENPT__: {
            PACKED_void_GLbitfield_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLsizei_GLfloat___GENPT__ *unpacked = (PACKED_void_GLbitfield_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLsizei_GLfloat___GENPT__ *)packed;
            ARGS_void_GLbitfield_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLsizei_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLfloat_GLfloat_GLenum_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLfloat_GLfloat_GLenum_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLfloat_GLfloat_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLfloat_GLfloat_GLenum_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLsizei_GLuint___GENPT___GLint___GENPT__: {
            PACKED_void_GLuint_GLenum_GLsizei_GLuint___GENPT___GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLsizei_GLuint___GENPT___GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLsizei_GLuint___GENPT___GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLenum_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLuint_GLenum_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLuint_GLenum_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLuint_GLenum_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint___GENPT___GLint___GENPT___GLsizei_GLuint___GENPT__: {
            PACKED_void_GLuint_GLint___GENPT___GLint___GENPT___GLsizei_GLuint___GENPT__ *unpacked = (PACKED_void_GLuint_GLint___GENPT___GLint___GENPT___GLsizei_GLuint___GENPT__ *)packed;
            ARGS_void_GLuint_GLint___GENPT___GLint___GENPT___GLsizei_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__: {
            PACKED_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLint___GENPT___GLsizei_GLuint___GENPT__: {
            PACKED_void_GLint___GENPT___GLsizei_GLuint___GENPT__ *unpacked = (PACKED_void_GLint___GENPT___GLsizei_GLuint___GENPT__ *)packed;
            ARGS_void_GLint___GENPT___GLsizei_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLuint___GENPT__: {
            PACKED_void_GLenum_GLuint___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLushort___GENPT__: {
            PACKED_void_GLenum_GLushort___GENPT__ *unpacked = (PACKED_void_GLenum_GLushort___GENPT__ *)packed;
            ARGS_void_GLenum_GLushort___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLfixed___GENPT__: {
            PACKED_void_GLenum_GLint_GLfixed___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLfixed___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLuint_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLubyte___GENPT__: {
            PACKED_void_GLubyte___GENPT__ *unpacked = (PACKED_void_GLubyte___GENPT__ *)packed;
            ARGS_void_GLubyte___GENPT__ args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_GLsizei___GENPT___GLenum___GENPT___GLvoid___GENPT__: {
            PACKED_void_GLuint_GLsizei_GLsizei___GENPT___GLenum___GENPT___GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_GLsizei___GENPT___GLenum___GENPT___GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_GLsizei___GENPT___GLenum___GENPT___GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_const_GLubyte___GENPT___GLdouble___GENPT__: {
            PACKED_void_GLuint_GLsizei_const_GLubyte___GENPT___GLdouble___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_const_GLubyte___GENPT___GLdouble___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_const_GLubyte___GENPT___GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_const_GLubyte___GENPT___GLfloat___GENPT__: {
            PACKED_void_GLuint_GLsizei_const_GLubyte___GENPT___GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_const_GLubyte___GENPT___GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_const_GLubyte___GENPT___GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLenum_GLdouble___GENPT__: {
            PACKED_void_GLenum_GLuint_GLenum_GLdouble___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLenum_GLdouble___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLenum_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_GLuint_GLuint_GLenum_const_GLchar___GENPT__: {
            PACKED_GLuint_GLuint_GLenum_const_GLchar___GENPT__ *unpacked = (PACKED_GLuint_GLuint_GLenum_const_GLchar___GENPT__ *)packed;
            ARGS_GLuint_GLuint_GLenum_const_GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_GLint_GLuint_GLenum_const_GLchar___GENPT__: {
            PACKED_GLint_GLuint_GLenum_const_GLchar___GENPT__ *unpacked = (PACKED_GLint_GLuint_GLenum_const_GLchar___GENPT__ *)packed;
            ARGS_GLint_GLuint_GLenum_const_GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_GLsizei_const_GLenum___GENPT___GLsizei_GLsizei___GENPT___GLint___GENPT__: {
            PACKED_void_GLuint_GLenum_GLuint_GLsizei_const_GLenum___GENPT___GLsizei_GLsizei___GENPT___GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLuint_GLsizei_const_GLenum___GENPT___GLsizei_GLsizei___GENPT___GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLuint_GLsizei_const_GLenum___GENPT___GLsizei_GLsizei___GENPT___GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLubyte___GENPT__: {
            PACKED_void_GLuint_GLenum_GLubyte___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLubyte___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLubyte___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint64___GENPT__: {
            PACKED_void_GLuint_GLenum_GLint64___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLint64___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLint64___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint64EXT___GENPT__: {
            PACKED_void_GLuint_GLenum_GLint64EXT___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLint64EXT___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLint64EXT___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint64___GENPT__: {
            PACKED_void_GLuint_GLenum_GLuint64___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLuint64___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLuint64___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLvoid___GENPT___GLvoid___GENPT___GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLenum_GLvoid___GENPT___GLvoid___GENPT___GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLvoid___GENPT___GLvoid___GENPT___GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLvoid___GENPT___GLvoid___GENPT___GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint___GENPT___GLint___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint___GENPT___GLint___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint___GENPT___GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint___GENPT___GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_const_GLubyte___GENPT___GLenum_GLuint: {
            PACKED_const_GLubyte___GENPT___GLenum_GLuint *unpacked = (PACKED_const_GLubyte___GENPT___GLenum_GLuint *)packed;
            ARGS_const_GLubyte___GENPT___GLenum_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLsync_GLenum_GLsizei_GLsizei___GENPT___GLint___GENPT__: {
            PACKED_void_GLsync_GLenum_GLsizei_GLsizei___GENPT___GLint___GENPT__ *unpacked = (PACKED_void_GLsync_GLenum_GLsizei_GLsizei___GENPT___GLint___GENPT__ *)packed;
            ARGS_void_GLsync_GLenum_GLsizei_GLsizei___GENPT___GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLenum_GLenum_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLenum_GLenum_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLenum_GLenum_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLenum_GLenum_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLenum_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLint_GLenum_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLenum_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLenum_GLint___GENPT__: {
            PACKED_void_GLenum_GLint_GLenum_GLint___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLenum_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLenum_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLenum_GLfixed___GENPT__: {
            PACKED_void_GLenum_GLint_GLenum_GLfixed___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLenum_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLenum_GLfixed___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLuint___GENPT__: {
            PACKED_void_GLenum_GLenum_GLuint___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLuint___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_GLuint64_GLuint: {
            PACKED_GLuint64_GLuint *unpacked = (PACKED_GLuint64_GLuint *)packed;
            ARGS_GLuint64_GLuint args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLenum_GLenum_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_GLint_GLenum_GLenum_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLenum_GLenum_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLenum_GLenum_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLenum_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLenum_GLint_GLenum_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLenum_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLenum_GLint___GENPT__: {
            PACKED_void_GLuint_GLenum_GLint_GLenum_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLenum_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLenum_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLenum_GLuint___GENPT__: {
            PACKED_void_GLuint_GLenum_GLenum_GLuint___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLenum_GLuint___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLenum_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLenum_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLenum_GLenum_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLenum_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_GLuint64_GLuint_GLuint: {
            PACKED_GLuint64_GLuint_GLuint *unpacked = (PACKED_GLuint64_GLuint_GLuint *)packed;
            ARGS_GLuint64_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLint___GENPT__: {
            PACKED_void_GLuint_GLuint_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLuint_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLuint_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_GLuint_GLuint_const_GLchar___GENPT__: {
            PACKED_GLuint_GLuint_const_GLchar___GENPT__ *unpacked = (PACKED_GLuint_GLuint_const_GLchar___GENPT__ *)packed;
            ARGS_GLuint_GLuint_const_GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_GLint_GLuint_GLint: {
            PACKED_GLint_GLuint_GLint *unpacked = (PACKED_GLint_GLuint_GLint *)packed;
            ARGS_GLint_GLuint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_GLchar__GENPT__const___GENPT___GLuint___GENPT__: {
            PACKED_void_GLuint_GLsizei_GLchar__GENPT__const___GENPT___GLuint___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_GLchar__GENPT__const___GENPT___GLuint___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_GLchar__GENPT__const___GENPT___GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_GLintptr_GLuint_GLint: {
            PACKED_GLintptr_GLuint_GLint *unpacked = (PACKED_GLintptr_GLuint_GLint *)packed;
            ARGS_GLintptr_GLuint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLuint___GENPT__: {
            PACKED_void_GLenum_GLint_GLuint___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLuint___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLdouble___GENPT__: {
            PACKED_void_GLuint_GLint_GLdouble___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLdouble___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLint_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLhandleARB_GLint_GLfloat___GENPT__: {
            PACKED_void_GLhandleARB_GLint_GLfloat___GENPT__ *unpacked = (PACKED_void_GLhandleARB_GLint_GLfloat___GENPT__ *)packed;
            ARGS_void_GLhandleARB_GLint_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLint64EXT___GENPT__: {
            PACKED_void_GLuint_GLint_GLint64EXT___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLint64EXT___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLint64EXT___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLint___GENPT__: {
            PACKED_void_GLuint_GLint_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLhandleARB_GLint_GLint___GENPT__: {
            PACKED_void_GLhandleARB_GLint_GLint___GENPT__ *unpacked = (PACKED_void_GLhandleARB_GLint_GLint___GENPT__ *)packed;
            ARGS_void_GLhandleARB_GLint_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLuint64EXT___GENPT__: {
            PACKED_void_GLuint_GLint_GLuint64EXT___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLuint64EXT___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLuint64EXT___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLuint___GENPT__: {
            PACKED_void_GLuint_GLint_GLuint___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLuint___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLdouble___GENPT__: {
            PACKED_void_GLuint_GLenum_GLdouble___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLdouble___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLenum_GLdouble___GENPT__: {
            PACKED_void_GLuint_GLuint_GLenum_GLdouble___GENPT__ *unpacked = (PACKED_void_GLuint_GLuint_GLenum_GLdouble___GENPT__ *)packed;
            ARGS_void_GLuint_GLuint_GLenum_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLenum_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLuint_GLenum_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLuint_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLuint_GLenum_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLsizei_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLenum_GLsizei_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLsizei_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLsizei_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLsizei_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLsizei_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLsizei_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLsizei_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLboolean_GLenum_GLenum_GLsizei_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLboolean_GLenum_GLenum_GLsizei_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLboolean_GLenum_GLenum_GLsizei_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLboolean_GLenum_GLenum_GLsizei_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLsizei_GLdouble___GENPT__: {
            PACKED_void_GLenum_GLenum_GLsizei_GLdouble___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLsizei_GLdouble___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLsizei_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLsizei_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLenum_GLsizei_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLsizei_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLsizei_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLsizei_GLint___GENPT__: {
            PACKED_void_GLenum_GLenum_GLsizei_GLint___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLsizei_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLsizei_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLsizei_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLsizei_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLsizei_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLuint___GENPT__: {
            PACKED_void_GLenum_GLsizei_GLuint___GENPT__ *unpacked = (PACKED_void_GLenum_GLsizei_GLuint___GENPT__ *)packed;
            ARGS_void_GLenum_GLsizei_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLushort___GENPT__: {
            PACKED_void_GLenum_GLsizei_GLushort___GENPT__ *unpacked = (PACKED_void_GLenum_GLsizei_GLushort___GENPT__ *)packed;
            ARGS_void_GLenum_GLsizei_GLushort___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLsizei_GLubyte___GENPT__: {
            PACKED_void_GLsizei_GLubyte___GENPT__ *unpacked = (PACKED_void_GLsizei_GLubyte___GENPT__ *)packed;
            ARGS_void_GLsizei_GLubyte___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLsizei_GLvoid___GENPT___GLsizei_GLvoid___GENPT___GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLenum_GLsizei_GLvoid___GENPT___GLsizei_GLvoid___GENPT___GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLsizei_GLvoid___GENPT___GLsizei_GLvoid___GENPT___GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLsizei_GLvoid___GENPT___GLsizei_GLvoid___GENPT___GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLenum_GLenum_GLsizei_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLenum_GLenum_GLsizei_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLenum_GLenum_GLsizei_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLenum_GLenum_GLsizei_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLsizei_GLdouble___GENPT__: {
            PACKED_void_GLuint_GLint_GLsizei_GLdouble___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLsizei_GLdouble___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLsizei_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLsizei_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLint_GLsizei_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLsizei_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLsizei_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLsizei_GLint___GENPT__: {
            PACKED_void_GLuint_GLint_GLsizei_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLsizei_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLsizei_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLsizei_GLuint___GENPT__: {
            PACKED_void_GLuint_GLint_GLsizei_GLuint___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLsizei_GLuint___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLsizei_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLbyte: {
            PACKED_void_GLbyte *unpacked = (PACKED_void_GLbyte *)packed;
            ARGS_void_GLbyte args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLshort: {
            PACKED_void_GLshort *unpacked = (PACKED_void_GLshort *)packed;
            ARGS_void_GLshort args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLubyte: {
            PACKED_void_GLubyte *unpacked = (PACKED_void_GLubyte *)packed;
            ARGS_void_GLubyte args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLushort: {
            PACKED_void_GLushort *unpacked = (PACKED_void_GLushort *)packed;
            ARGS_void_GLushort args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLenum_GLboolean: {
            PACKED_void_GLenum_GLsizei_GLenum_GLboolean *unpacked = (PACKED_void_GLenum_GLsizei_GLenum_GLboolean *)packed;
            ARGS_void_GLenum_GLsizei_GLenum_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_GLsync_GLenum_GLintptr_GLbitfield: {
            PACKED_GLsync_GLenum_GLintptr_GLbitfield *unpacked = (PACKED_GLsync_GLenum_GLintptr_GLbitfield *)packed;
            ARGS_GLsync_GLenum_GLintptr_GLbitfield args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLsizei_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLsizei_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLsizei_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLsizei_GLint___GENPT__: {
            PACKED_void_GLsizei_GLint___GENPT__ *unpacked = (PACKED_void_GLsizei_GLint___GENPT__ *)packed;
            ARGS_void_GLsizei_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLuint_GLfloat: {
            PACKED_void_GLuint_GLuint_GLuint_GLfloat *unpacked = (PACKED_void_GLuint_GLuint_GLuint_GLfloat *)packed;
            ARGS_void_GLuint_GLuint_GLuint_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_const_GLenum___GENPT__: {
            PACKED_void_GLenum_GLsizei_const_GLenum___GENPT__ *unpacked = (PACKED_void_GLenum_GLsizei_const_GLenum___GENPT__ *)packed;
            ARGS_void_GLenum_GLsizei_const_GLenum___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_const_GLenum___GENPT___GLint_GLint_GLsizei_GLsizei: {
            PACKED_void_GLenum_GLsizei_const_GLenum___GENPT___GLint_GLint_GLsizei_GLsizei *unpacked = (PACKED_void_GLenum_GLsizei_const_GLenum___GENPT___GLint_GLint_GLsizei_GLsizei *)packed;
            ARGS_void_GLenum_GLsizei_const_GLenum___GENPT___GLint_GLint_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLint: {
            PACKED_void_GLuint_GLint *unpacked = (PACKED_void_GLuint_GLint *)packed;
            ARGS_void_GLuint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei: {
            PACKED_void_GLuint_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei *unpacked = (PACKED_void_GLuint_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei *)packed;
            ARGS_void_GLuint_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_GLboolean_GLenum_GLuint: {
            PACKED_GLboolean_GLenum_GLuint *unpacked = (PACKED_GLboolean_GLenum_GLuint *)packed;
            ARGS_GLboolean_GLenum_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_GLboolean_GLuint64: {
            PACKED_GLboolean_GLuint64 *unpacked = (PACKED_GLboolean_GLuint64 *)packed;
            ARGS_GLboolean_GLuint64 args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_GLboolean_GLint_const_GLchar___GENPT__: {
            PACKED_GLboolean_GLint_const_GLchar___GENPT__ *unpacked = (PACKED_GLboolean_GLint_const_GLchar___GENPT__ *)packed;
            ARGS_GLboolean_GLint_const_GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_GLboolean_GLuint_GLuint_GLfloat_GLfloat: {
            PACKED_GLboolean_GLuint_GLuint_GLfloat_GLfloat *unpacked = (PACKED_GLboolean_GLuint_GLuint_GLfloat_GLfloat *)packed;
            ARGS_GLboolean_GLuint_GLuint_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_GLboolean_GLuint_GLfloat_GLfloat: {
            PACKED_GLboolean_GLuint_GLfloat_GLfloat *unpacked = (PACKED_GLboolean_GLuint_GLfloat_GLfloat *)packed;
            ARGS_GLboolean_GLuint_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_GLboolean_GLsync: {
            PACKED_GLboolean_GLsync *unpacked = (PACKED_GLboolean_GLsync *)packed;
            ARGS_GLboolean_GLsync args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_GLboolean_GLuint_GLenum: {
            PACKED_GLboolean_GLuint_GLenum *unpacked = (PACKED_GLboolean_GLuint_GLenum *)packed;
            ARGS_GLboolean_GLuint_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLint_GLushort: {
            PACKED_void_GLint_GLushort *unpacked = (PACKED_void_GLint_GLushort *)packed;
            ARGS_void_GLint_GLushort args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLfloat: {
            PACKED_void_GLuint_GLenum_GLfloat *unpacked = (PACKED_void_GLuint_GLenum_GLfloat *)packed;
            ARGS_void_GLuint_GLenum_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLenum_const_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLenum_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint: {
            PACKED_void_GLuint_GLenum_GLint *unpacked = (PACKED_void_GLuint_GLenum_GLint *)packed;
            ARGS_void_GLuint_GLenum_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLenum_const_GLint___GENPT__: {
            PACKED_void_GLuint_GLenum_const_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_const_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLsizei_const_GLubyte___GENPT__: {
            PACKED_void_GLenum_GLuint_GLsizei_const_GLubyte___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLsizei_const_GLubyte___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLsizei_const_GLubyte___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLint_GLsizei: {
            PACKED_void_GLint_GLsizei *unpacked = (PACKED_void_GLint_GLsizei *)packed;
            ARGS_void_GLint_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint64: {
            PACKED_void_GLuint64 *unpacked = (PACKED_void_GLuint64 *)packed;
            ARGS_void_GLuint64 args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLuint64_GLenum: {
            PACKED_void_GLuint64_GLenum *unpacked = (PACKED_void_GLuint64_GLenum *)packed;
            ARGS_void_GLuint64_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__: {
            PACKED_void_GLenum_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLenum_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLenum_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLfixed_GLfixed_GLint_GLint_GLfixed: {
            PACKED_void_GLenum_GLfixed_GLfixed_GLint_GLint_GLfixed *unpacked = (PACKED_void_GLenum_GLfixed_GLfixed_GLint_GLint_GLfixed *)packed;
            ARGS_void_GLenum_GLfixed_GLfixed_GLint_GLint_GLfixed args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLdouble_GLdouble_GLint_GLint_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__: {
            PACKED_void_GLenum_GLdouble_GLdouble_GLint_GLint_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLenum_GLdouble_GLdouble_GLint_GLint_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLenum_GLdouble_GLdouble_GLint_GLint_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_void_GLenum_GLfloat_GLfloat_GLint_GLint_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLfloat_GLfloat_GLint_GLint_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLfloat_GLfloat_GLint_GLint_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLfloat_GLfloat_GLint_GLint_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_void_GLenum_GLfixed_GLfixed_GLint_GLint_GLfixed_GLfixed_GLint_GLint_GLfixed: {
            PACKED_void_GLenum_GLfixed_GLfixed_GLint_GLint_GLfixed_GLfixed_GLint_GLint_GLfixed *unpacked = (PACKED_void_GLenum_GLfixed_GLfixed_GLint_GLint_GLfixed_GLfixed_GLint_GLint_GLfixed *)packed;
            ARGS_void_GLenum_GLfixed_GLfixed_GLint_GLint_GLfixed_GLfixed_GLint_GLint_GLfixed args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_GLvoid___GENPT___GLenum_GLenum: {
            PACKED_GLvoid___GENPT___GLenum_GLenum *unpacked = (PACKED_GLvoid___GENPT___GLenum_GLenum *)packed;
            ARGS_GLvoid___GENPT___GLenum_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_GLvoid___GENPT___GLenum_GLintptr_GLsizeiptr_GLbitfield: {
            PACKED_GLvoid___GENPT___GLenum_GLintptr_GLsizeiptr_GLbitfield *unpacked = (PACKED_GLvoid___GENPT___GLenum_GLintptr_GLsizeiptr_GLbitfield *)packed;
            ARGS_GLvoid___GENPT___GLenum_GLintptr_GLsizeiptr_GLbitfield args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLenum_GLsizei_GLsizei_GLint_GLint_GLboolean_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLuint_GLenum_GLsizei_GLsizei_GLint_GLint_GLboolean_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLenum_GLsizei_GLsizei_GLint_GLint_GLboolean_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLenum_GLsizei_GLsizei_GLint_GLint_GLboolean_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_GLint_GLdouble_GLdouble: {
            PACKED_void_GLint_GLdouble_GLdouble *unpacked = (PACKED_void_GLint_GLdouble_GLdouble *)packed;
            ARGS_void_GLint_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLint_GLfloat_GLfloat: {
            PACKED_void_GLint_GLfloat_GLfloat *unpacked = (PACKED_void_GLint_GLfloat_GLfloat *)packed;
            ARGS_void_GLint_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLint_GLfixed_GLfixed: {
            PACKED_void_GLint_GLfixed_GLfixed *unpacked = (PACKED_void_GLint_GLfixed_GLfixed *)packed;
            ARGS_void_GLint_GLfixed_GLfixed args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLint_GLdouble_GLdouble_GLint_GLdouble_GLdouble: {
            PACKED_void_GLint_GLdouble_GLdouble_GLint_GLdouble_GLdouble *unpacked = (PACKED_void_GLint_GLdouble_GLdouble_GLint_GLdouble_GLdouble *)packed;
            ARGS_void_GLint_GLdouble_GLdouble_GLint_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLint_GLfloat_GLfloat_GLint_GLfloat_GLfloat: {
            PACKED_void_GLint_GLfloat_GLfloat_GLint_GLfloat_GLfloat *unpacked = (PACKED_void_GLint_GLfloat_GLfloat_GLint_GLfloat_GLfloat *)packed;
            ARGS_void_GLint_GLfloat_GLfloat_GLint_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLint_GLfixed_GLfixed_GLfixed_GLfixed: {
            PACKED_void_GLint_GLfixed_GLfixed_GLfixed_GLfixed *unpacked = (PACKED_void_GLint_GLfixed_GLfixed_GLfixed_GLfixed *)packed;
            ARGS_void_GLint_GLfixed_GLfixed_GLfixed_GLfixed args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_GLvoid___GENPT___GLuint_GLenum: {
            PACKED_GLvoid___GENPT___GLuint_GLenum *unpacked = (PACKED_GLvoid___GENPT___GLuint_GLenum *)packed;
            ARGS_GLvoid___GENPT___GLuint_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_GLvoid___GENPT___GLuint_GLintptr_GLsizeiptr_GLbitfield: {
            PACKED_GLvoid___GENPT___GLuint_GLintptr_GLsizeiptr_GLbitfield *unpacked = (PACKED_GLvoid___GENPT___GLuint_GLintptr_GLsizeiptr_GLbitfield *)packed;
            ARGS_GLvoid___GENPT___GLuint_GLintptr_GLsizeiptr_GLbitfield args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_GLvoid___GENPT___GLuint: {
            PACKED_GLvoid___GENPT___GLuint *unpacked = (PACKED_GLvoid___GENPT___GLuint *)packed;
            ARGS_GLvoid___GENPT___GLuint args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_GLvoid___GENPT___GLuint_GLint_GLbitfield_const_GLint___GENPT___const_GLenum___GENPT__: {
            PACKED_GLvoid___GENPT___GLuint_GLint_GLbitfield_const_GLint___GENPT___const_GLenum___GENPT__ *unpacked = (PACKED_GLvoid___GENPT___GLuint_GLint_GLbitfield_const_GLint___GENPT___const_GLenum___GENPT__ *)packed;
            ARGS_GLvoid___GENPT___GLuint_GLint_GLbitfield_const_GLint___GENPT___const_GLenum___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__: {
            PACKED_void_GLuint_GLuint_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLuint_GLuint_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLuint_GLuint_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLuint_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLuint_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLuint_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLdouble_GLdouble_GLint_GLint_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__: {
            PACKED_void_GLuint_GLuint_GLdouble_GLdouble_GLint_GLint_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLuint_GLuint_GLdouble_GLdouble_GLint_GLint_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLuint_GLuint_GLdouble_GLdouble_GLint_GLint_GLdouble_GLdouble_GLint_GLint_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLfloat_GLfloat_GLint_GLint_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLuint_GLfloat_GLfloat_GLint_GLint_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLuint_GLfloat_GLfloat_GLint_GLint_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLuint_GLfloat_GLfloat_GLint_GLint_GLfloat_GLfloat_GLint_GLint_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11);
            break;
        }
        case FORMAT_void_GLenum_GLdouble_GLdouble_GLdouble_GLdouble_GLdouble_GLdouble: {
            PACKED_void_GLenum_GLdouble_GLdouble_GLdouble_GLdouble_GLdouble_GLdouble *unpacked = (PACKED_void_GLenum_GLdouble_GLdouble_GLdouble_GLdouble_GLdouble_GLdouble *)packed;
            ARGS_void_GLenum_GLdouble_GLdouble_GLdouble_GLdouble_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLint_const_GLubyte___GENPT__: {
            PACKED_void_GLint_const_GLubyte___GENPT__ *unpacked = (PACKED_void_GLint_const_GLubyte___GENPT__ *)packed;
            ARGS_void_GLint_const_GLubyte___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLint_const_GLuint___GENPT__: {
            PACKED_void_GLint_const_GLuint___GENPT__ *unpacked = (PACKED_void_GLint_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLint_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLint_const_GLushort___GENPT__: {
            PACKED_void_GLint_const_GLushort___GENPT__ *unpacked = (PACKED_void_GLint_const_GLushort___GENPT__ *)packed;
            ARGS_void_GLint_const_GLushort___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLdouble_GLdouble_GLdouble_GLdouble: {
            PACKED_void_GLenum_GLdouble_GLdouble_GLdouble_GLdouble *unpacked = (PACKED_void_GLenum_GLdouble_GLdouble_GLdouble_GLdouble *)packed;
            ARGS_void_GLenum_GLdouble_GLdouble_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLdouble_GLdouble_GLdouble: {
            PACKED_void_GLenum_GLdouble_GLdouble_GLdouble *unpacked = (PACKED_void_GLenum_GLdouble_GLdouble_GLdouble *)packed;
            ARGS_void_GLenum_GLdouble_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLenum_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLenum_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLenum_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLboolean: {
            PACKED_void_GLenum_GLenum_GLboolean *unpacked = (PACKED_void_GLenum_GLenum_GLboolean *)packed;
            ARGS_void_GLenum_GLenum_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_const_GLint___GENPT___const_GLsizei___GENPT___GLsizei: {
            PACKED_void_GLenum_const_GLint___GENPT___const_GLsizei___GENPT___GLsizei *unpacked = (PACKED_void_GLenum_const_GLint___GENPT___const_GLsizei___GENPT___GLsizei *)packed;
            ARGS_void_GLenum_const_GLint___GENPT___const_GLsizei___GENPT___GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_const_void___GENPT___GLsizei_GLsizei: {
            PACKED_void_GLenum_const_void___GENPT___GLsizei_GLsizei *unpacked = (PACKED_void_GLenum_const_void___GENPT___GLsizei_GLsizei *)packed;
            ARGS_void_GLenum_const_void___GENPT___GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_const_GLvoid___GENPT___GLsizei_GLsizei: {
            PACKED_void_GLenum_const_GLvoid___GENPT___GLsizei_GLsizei *unpacked = (PACKED_void_GLenum_const_GLvoid___GENPT___GLsizei_GLsizei *)packed;
            ARGS_void_GLenum_const_GLvoid___GENPT___GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_const_GLsizei___GENPT___GLenum_GLvoid__GENPT__const___GENPT___GLsizei: {
            PACKED_void_GLenum_const_GLsizei___GENPT___GLenum_GLvoid__GENPT__const___GENPT___GLsizei *unpacked = (PACKED_void_GLenum_const_GLsizei___GENPT___GLenum_GLvoid__GENPT__const___GENPT___GLsizei *)packed;
            ARGS_void_GLenum_const_GLsizei___GENPT___GLenum_GLvoid__GENPT__const___GENPT___GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_const_GLsizei___GENPT___GLenum_GLvoid__GENPT__const___GENPT___GLsizei_const_GLint___GENPT__: {
            PACKED_void_GLenum_const_GLsizei___GENPT___GLenum_GLvoid__GENPT__const___GENPT___GLsizei_const_GLint___GENPT__ *unpacked = (PACKED_void_GLenum_const_GLsizei___GENPT___GLenum_GLvoid__GENPT__const___GENPT___GLsizei_const_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_const_GLsizei___GENPT___GLenum_GLvoid__GENPT__const___GENPT___GLsizei_const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_const_GLsizei___GENPT___GLenum_const_GLvoid___GENPT___GLsizei: {
            PACKED_void_GLenum_const_GLsizei___GENPT___GLenum_const_GLvoid___GENPT___GLsizei *unpacked = (PACKED_void_GLenum_const_GLsizei___GENPT___GLenum_const_GLvoid___GENPT___GLsizei *)packed;
            ARGS_void_GLenum_const_GLsizei___GENPT___GLenum_const_GLvoid___GENPT___GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLenum_const_void___GENPT___GLsizei_GLsizei: {
            PACKED_void_GLenum_GLenum_const_void___GENPT___GLsizei_GLsizei *unpacked = (PACKED_void_GLenum_GLenum_const_void___GENPT___GLsizei_GLsizei *)packed;
            ARGS_void_GLenum_GLenum_const_void___GENPT___GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLenum_const_GLvoid___GENPT___GLsizei_GLsizei: {
            PACKED_void_GLenum_GLenum_const_GLvoid___GENPT___GLsizei_GLsizei *unpacked = (PACKED_void_GLenum_GLenum_const_GLvoid___GENPT___GLsizei_GLsizei *)packed;
            ARGS_void_GLenum_GLenum_const_GLvoid___GENPT___GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint_const_GLint___GENPT___const_GLsizei___GENPT___GLsizei: {
            PACKED_void_GLenum_GLuint_GLuint_const_GLint___GENPT___const_GLsizei___GENPT___GLsizei *unpacked = (PACKED_void_GLenum_GLuint_GLuint_const_GLint___GENPT___const_GLsizei___GENPT___GLsizei *)packed;
            ARGS_void_GLenum_GLuint_GLuint_const_GLint___GENPT___const_GLsizei___GENPT___GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_const_GLenum___GENPT___const_GLint___GENPT___const_GLsizei___GENPT___GLsizei_GLint: {
            PACKED_void_const_GLenum___GENPT___const_GLint___GENPT___const_GLsizei___GENPT___GLsizei_GLint *unpacked = (PACKED_void_const_GLenum___GENPT___const_GLint___GENPT___const_GLsizei___GENPT___GLsizei_GLint *)packed;
            ARGS_void_const_GLenum___GENPT___const_GLint___GENPT___const_GLsizei___GENPT___GLsizei_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_const_GLenum___GENPT___const_GLsizei___GENPT___GLenum_GLvoid__GENPT__const___GENPT___GLsizei_GLint: {
            PACKED_void_const_GLenum___GENPT___const_GLsizei___GENPT___GLenum_GLvoid__GENPT__const___GENPT___GLsizei_GLint *unpacked = (PACKED_void_const_GLenum___GENPT___const_GLsizei___GENPT___GLenum_GLvoid__GENPT__const___GENPT___GLsizei_GLint *)packed;
            ARGS_void_const_GLenum___GENPT___const_GLsizei___GENPT___GLenum_GLvoid__GENPT__const___GENPT___GLsizei_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLbyte: {
            PACKED_void_GLenum_GLbyte *unpacked = (PACKED_void_GLenum_GLbyte *)packed;
            ARGS_void_GLenum_GLbyte args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_const_GLbyte___GENPT__: {
            PACKED_void_GLenum_const_GLbyte___GENPT__ *unpacked = (PACKED_void_GLenum_const_GLbyte___GENPT__ *)packed;
            ARGS_void_GLenum_const_GLbyte___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLdouble: {
            PACKED_void_GLenum_GLdouble *unpacked = (PACKED_void_GLenum_GLdouble *)packed;
            ARGS_void_GLenum_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLhalfNV: {
            PACKED_void_GLenum_GLhalfNV *unpacked = (PACKED_void_GLenum_GLhalfNV *)packed;
            ARGS_void_GLenum_GLhalfNV args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_const_GLhalfNV___GENPT__: {
            PACKED_void_GLenum_const_GLhalfNV___GENPT__ *unpacked = (PACKED_void_GLenum_const_GLhalfNV___GENPT__ *)packed;
            ARGS_void_GLenum_const_GLhalfNV___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLshort: {
            PACKED_void_GLenum_GLshort *unpacked = (PACKED_void_GLenum_GLshort *)packed;
            ARGS_void_GLenum_GLshort args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_const_GLshort___GENPT__: {
            PACKED_void_GLenum_const_GLshort___GENPT__ *unpacked = (PACKED_void_GLenum_const_GLshort___GENPT__ *)packed;
            ARGS_void_GLenum_const_GLshort___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLenum_GLbyte_GLbyte: {
            PACKED_void_GLenum_GLbyte_GLbyte *unpacked = (PACKED_void_GLenum_GLbyte_GLbyte *)packed;
            ARGS_void_GLenum_GLbyte_GLbyte args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLdouble_GLdouble: {
            PACKED_void_GLenum_GLdouble_GLdouble *unpacked = (PACKED_void_GLenum_GLdouble_GLdouble *)packed;
            ARGS_void_GLenum_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLfloat_GLfloat: {
            PACKED_void_GLenum_GLfloat_GLfloat *unpacked = (PACKED_void_GLenum_GLfloat_GLfloat *)packed;
            ARGS_void_GLenum_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLhalfNV_GLhalfNV: {
            PACKED_void_GLenum_GLhalfNV_GLhalfNV *unpacked = (PACKED_void_GLenum_GLhalfNV_GLhalfNV *)packed;
            ARGS_void_GLenum_GLhalfNV_GLhalfNV args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLshort_GLshort: {
            PACKED_void_GLenum_GLshort_GLshort *unpacked = (PACKED_void_GLenum_GLshort_GLshort *)packed;
            ARGS_void_GLenum_GLshort_GLshort args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLfixed_GLfixed: {
            PACKED_void_GLenum_GLfixed_GLfixed *unpacked = (PACKED_void_GLenum_GLfixed_GLfixed *)packed;
            ARGS_void_GLenum_GLfixed_GLfixed args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLbyte_GLbyte_GLbyte: {
            PACKED_void_GLenum_GLbyte_GLbyte_GLbyte *unpacked = (PACKED_void_GLenum_GLbyte_GLbyte_GLbyte *)packed;
            ARGS_void_GLenum_GLbyte_GLbyte_GLbyte args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLhalfNV_GLhalfNV_GLhalfNV: {
            PACKED_void_GLenum_GLhalfNV_GLhalfNV_GLhalfNV *unpacked = (PACKED_void_GLenum_GLhalfNV_GLhalfNV_GLhalfNV *)packed;
            ARGS_void_GLenum_GLhalfNV_GLhalfNV_GLhalfNV args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLint_GLint: {
            PACKED_void_GLenum_GLint_GLint_GLint *unpacked = (PACKED_void_GLenum_GLint_GLint_GLint *)packed;
            ARGS_void_GLenum_GLint_GLint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLshort_GLshort_GLshort: {
            PACKED_void_GLenum_GLshort_GLshort_GLshort *unpacked = (PACKED_void_GLenum_GLshort_GLshort_GLshort *)packed;
            ARGS_void_GLenum_GLshort_GLshort_GLshort args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLfixed_GLfixed_GLfixed: {
            PACKED_void_GLenum_GLfixed_GLfixed_GLfixed *unpacked = (PACKED_void_GLenum_GLfixed_GLfixed_GLfixed *)packed;
            ARGS_void_GLenum_GLfixed_GLfixed_GLfixed args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLbyte_GLbyte_GLbyte_GLbyte: {
            PACKED_void_GLenum_GLbyte_GLbyte_GLbyte_GLbyte *unpacked = (PACKED_void_GLenum_GLbyte_GLbyte_GLbyte_GLbyte *)packed;
            ARGS_void_GLenum_GLbyte_GLbyte_GLbyte_GLbyte args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLhalfNV_GLhalfNV_GLhalfNV_GLhalfNV: {
            PACKED_void_GLenum_GLhalfNV_GLhalfNV_GLhalfNV_GLhalfNV *unpacked = (PACKED_void_GLenum_GLhalfNV_GLhalfNV_GLhalfNV_GLhalfNV *)packed;
            ARGS_void_GLenum_GLhalfNV_GLhalfNV_GLhalfNV_GLhalfNV args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLshort_GLshort_GLshort_GLshort: {
            PACKED_void_GLenum_GLshort_GLshort_GLshort_GLshort *unpacked = (PACKED_void_GLenum_GLshort_GLshort_GLshort_GLshort *)packed;
            ARGS_void_GLenum_GLshort_GLshort_GLshort_GLshort args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLenum_const_GLuint___GENPT__: {
            PACKED_void_GLenum_GLenum_const_GLuint___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLenum_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLfloat: {
            PACKED_void_GLenum_GLenum_GLenum_GLfloat *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLfloat *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_const_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLenum_GLenum_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLenum_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLenum_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLint: {
            PACKED_void_GLenum_GLenum_GLenum_GLint *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLint *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_const_GLint___GENPT__: {
            PACKED_void_GLenum_GLenum_GLenum_const_GLint___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLenum_const_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLenum_const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_GLdouble: {
            PACKED_void_GLenum_GLenum_GLenum_GLdouble *unpacked = (PACKED_void_GLenum_GLenum_GLenum_GLdouble *)packed;
            ARGS_void_GLenum_GLenum_GLenum_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_const_GLdouble___GENPT__: {
            PACKED_void_GLenum_GLenum_GLenum_const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLenum_const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLenum_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLenum_const_GLuint___GENPT__: {
            PACKED_void_GLenum_GLenum_GLenum_const_GLuint___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLenum_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLenum_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLint_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint_GLint_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLint_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLint_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11, args.a12);
            break;
        }
        case FORMAT_void_GLuint_GLsizeiptr_const_GLvoid___GENPT___GLenum: {
            PACKED_void_GLuint_GLsizeiptr_const_GLvoid___GENPT___GLenum *unpacked = (PACKED_void_GLuint_GLsizeiptr_const_GLvoid___GENPT___GLenum *)packed;
            ARGS_void_GLuint_GLsizeiptr_const_GLvoid___GENPT___GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLintptr_GLsizeiptr_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLintptr_GLsizeiptr_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLintptr_GLsizeiptr_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLintptr_GLsizeiptr_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLintptr_GLintptr_GLsizeiptr: {
            PACKED_void_GLuint_GLuint_GLintptr_GLintptr_GLsizeiptr *unpacked = (PACKED_void_GLuint_GLuint_GLintptr_GLintptr_GLsizeiptr *)packed;
            ARGS_void_GLuint_GLuint_GLintptr_GLintptr_GLsizeiptr args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLenum_GLuint: {
            PACKED_void_GLuint_GLenum_GLenum_GLuint *unpacked = (PACKED_void_GLuint_GLenum_GLenum_GLuint *)packed;
            ARGS_void_GLuint_GLenum_GLenum_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLenum_GLuint_GLint: {
            PACKED_void_GLuint_GLenum_GLenum_GLuint_GLint *unpacked = (PACKED_void_GLuint_GLenum_GLenum_GLuint_GLint *)packed;
            ARGS_void_GLuint_GLenum_GLenum_GLuint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLenum_GLuint_GLint_GLint: {
            PACKED_void_GLuint_GLenum_GLenum_GLuint_GLint_GLint *unpacked = (PACKED_void_GLuint_GLenum_GLenum_GLuint_GLint_GLint *)packed;
            ARGS_void_GLuint_GLenum_GLenum_GLuint_GLint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_GLint: {
            PACKED_void_GLuint_GLenum_GLuint_GLint *unpacked = (PACKED_void_GLuint_GLenum_GLuint_GLint *)packed;
            ARGS_void_GLuint_GLenum_GLuint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_GLint_GLenum: {
            PACKED_void_GLuint_GLenum_GLuint_GLint_GLenum *unpacked = (PACKED_void_GLuint_GLenum_GLuint_GLint_GLenum *)packed;
            ARGS_void_GLuint_GLenum_GLuint_GLint_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_GLint_GLint: {
            PACKED_void_GLuint_GLenum_GLuint_GLint_GLint *unpacked = (PACKED_void_GLuint_GLenum_GLuint_GLint_GLint *)packed;
            ARGS_void_GLuint_GLenum_GLuint_GLint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_GLdouble_GLdouble_GLdouble_GLdouble: {
            PACKED_void_GLuint_GLenum_GLuint_GLdouble_GLdouble_GLdouble_GLdouble *unpacked = (PACKED_void_GLuint_GLenum_GLuint_GLdouble_GLdouble_GLdouble_GLdouble *)packed;
            ARGS_void_GLuint_GLenum_GLuint_GLdouble_GLdouble_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_const_GLdouble___GENPT__: {
            PACKED_void_GLuint_GLenum_GLuint_const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLuint_const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLuint_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLuint_GLenum_GLuint_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLuint_GLenum_GLuint_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLuint_GLenum_GLuint_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_const_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLenum_GLuint_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLuint_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLuint_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_GLint_GLint_GLint_GLint: {
            PACKED_void_GLuint_GLenum_GLuint_GLint_GLint_GLint_GLint *unpacked = (PACKED_void_GLuint_GLenum_GLuint_GLint_GLint_GLint_GLint *)packed;
            ARGS_void_GLuint_GLenum_GLuint_GLint_GLint_GLint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_const_GLint___GENPT__: {
            PACKED_void_GLuint_GLenum_GLuint_const_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLuint_const_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLuint_const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint: {
            PACKED_void_GLuint_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint *unpacked = (PACKED_void_GLuint_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint *)packed;
            ARGS_void_GLuint_GLenum_GLuint_GLuint_GLuint_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_const_GLuint___GENPT__: {
            PACKED_void_GLuint_GLenum_GLuint_const_GLuint___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLuint_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLuint_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_GLsizei_const_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLenum_GLuint_GLsizei_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLuint_GLsizei_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLuint_GLsizei_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_GLsizei_const_GLint___GENPT__: {
            PACKED_void_GLuint_GLenum_GLuint_GLsizei_const_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLuint_GLsizei_const_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLuint_GLsizei_const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_GLsizei_const_GLuint___GENPT__: {
            PACKED_void_GLuint_GLenum_GLuint_GLsizei_const_GLuint___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLuint_GLsizei_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLuint_GLsizei_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLenum_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLsizei_GLsizei: {
            PACKED_void_GLuint_GLenum_GLsizei_GLsizei *unpacked = (PACKED_void_GLuint_GLenum_GLsizei_GLsizei *)packed;
            ARGS_void_GLuint_GLenum_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_GLsizei_GLenum_GLsizei_GLsizei: {
            PACKED_void_GLuint_GLsizei_GLsizei_GLenum_GLsizei_GLsizei *unpacked = (PACKED_void_GLuint_GLsizei_GLsizei_GLenum_GLsizei_GLsizei *)packed;
            ARGS_void_GLuint_GLsizei_GLsizei_GLenum_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_GLenum_GLsizei_GLsizei: {
            PACKED_void_GLuint_GLsizei_GLenum_GLsizei_GLsizei *unpacked = (PACKED_void_GLuint_GLsizei_GLenum_GLsizei_GLsizei *)packed;
            ARGS_void_GLuint_GLsizei_GLenum_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLint_const_GLchar___GENPT___GLint_const_GLchar___GENPT__: {
            PACKED_void_GLenum_GLint_const_GLchar___GENPT___GLint_const_GLchar___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_const_GLchar___GENPT___GLint_const_GLchar___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_const_GLchar___GENPT___GLint_const_GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_GLuint_GLsizei_const_GLvoid___GENPT___GLenum: {
            PACKED_GLuint_GLsizei_const_GLvoid___GENPT___GLenum *unpacked = (PACKED_GLuint_GLsizei_const_GLvoid___GENPT___GLenum *)packed;
            ARGS_GLuint_GLsizei_const_GLvoid___GENPT___GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLsizei_const_GLchar___GENPT__: {
            PACKED_void_GLenum_GLuint_GLsizei_const_GLchar___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLsizei_const_GLchar___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLsizei_const_GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_const_void___GENPT___GLsizei_const_GLchar___GENPT__: {
            PACKED_void_const_void___GENPT___GLsizei_const_GLchar___GENPT__ *unpacked = (PACKED_void_const_void___GENPT___GLsizei_const_GLchar___GENPT__ *)packed;
            ARGS_void_const_void___GENPT___GLsizei_const_GLchar___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_GLenum_GLenum_GLuint_GLenum: {
            PACKED_GLenum_GLenum_GLuint_GLenum *unpacked = (PACKED_GLenum_GLenum_GLuint_GLenum *)packed;
            ARGS_GLenum_GLenum_GLuint_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLenum: {
            PACKED_void_GLuint_GLuint_GLenum *unpacked = (PACKED_void_GLuint_GLuint_GLenum *)packed;
            ARGS_void_GLuint_GLuint_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_const_GLubyte___GENPT___GLsizei_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLsizei_const_GLubyte___GENPT___GLsizei_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_const_GLubyte___GENPT___GLsizei_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_const_GLubyte___GENPT___GLsizei_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLsizei_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_const_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLsizei_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLenum_const_GLvoid___GENPT___GLbitfield_GLuint_GLsizei_GLenum_GLuint_GLfloat: {
            PACKED_void_GLuint_GLenum_const_GLvoid___GENPT___GLbitfield_GLuint_GLsizei_GLenum_GLuint_GLfloat *unpacked = (PACKED_void_GLuint_GLenum_const_GLvoid___GENPT___GLbitfield_GLuint_GLsizei_GLenum_GLuint_GLfloat *)packed;
            ARGS_void_GLuint_GLenum_const_GLvoid___GENPT___GLbitfield_GLuint_GLsizei_GLenum_GLuint_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_GLuint_GLenum_const_GLvoid___GENPT___GLbitfield_GLsizei_GLenum_const_GLvoid___GENPT___GLenum_GLuint_GLfloat: {
            PACKED_void_GLuint_GLenum_const_GLvoid___GENPT___GLbitfield_GLsizei_GLenum_const_GLvoid___GENPT___GLenum_GLuint_GLfloat *unpacked = (PACKED_void_GLuint_GLenum_const_GLvoid___GENPT___GLbitfield_GLsizei_GLenum_const_GLvoid___GENPT___GLenum_GLuint_GLfloat *)packed;
            ARGS_void_GLuint_GLenum_const_GLvoid___GENPT___GLbitfield_GLsizei_GLenum_const_GLvoid___GENPT___GLenum_GLuint_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_GLsizei_GLsizei_const_GLubyte___GENPT___GLsizei_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLsizei_GLsizei_GLsizei_const_GLubyte___GENPT___GLsizei_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_GLsizei_GLsizei_const_GLubyte___GENPT___GLsizei_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_GLsizei_GLsizei_const_GLubyte___GENPT___GLsizei_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_GLsizei_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLsizei_GLsizei_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_GLsizei_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_GLsizei_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_const_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLenum_GLint_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLint_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_const_GLuint___GENPT__: {
            PACKED_void_GLenum_GLsizei_const_GLuint___GENPT__ *unpacked = (PACKED_void_GLenum_GLsizei_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLenum_GLsizei_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_const_GLushort___GENPT__: {
            PACKED_void_GLenum_GLsizei_const_GLushort___GENPT__ *unpacked = (PACKED_void_GLenum_GLsizei_const_GLushort___GENPT__ *)packed;
            ARGS_void_GLenum_GLsizei_const_GLushort___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLint_const_GLfixed___GENPT__: {
            PACKED_void_GLenum_GLint_const_GLfixed___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_const_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_const_GLfixed___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_GLboolean_GLuint_GLsizei_GLsizei_GLfloat_GLfloat___GENPT___GLfloat___GENPT___GLfloat___GENPT___GLfloat___GENPT__: {
            PACKED_GLboolean_GLuint_GLsizei_GLsizei_GLfloat_GLfloat___GENPT___GLfloat___GENPT___GLfloat___GENPT___GLfloat___GENPT__ *unpacked = (PACKED_GLboolean_GLuint_GLsizei_GLsizei_GLfloat_GLfloat___GENPT___GLfloat___GENPT___GLfloat___GENPT___GLfloat___GENPT__ *)packed;
            ARGS_GLboolean_GLuint_GLsizei_GLsizei_GLfloat_GLfloat___GENPT___GLfloat___GENPT___GLfloat___GENPT___GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_GLint_GLint___GENPT__: {
            PACKED_GLint_GLint___GENPT__ *unpacked = (PACKED_GLint_GLint___GENPT__ *)packed;
            ARGS_GLint_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLuint_GLuint64EXT_GLuint_GLuint_GLenum_GLenum_GLuint_GLenum_GLuint_GLenum_GLuint_GLenum_GLuint: {
            PACKED_void_GLuint_GLuint64EXT_GLuint_GLuint_GLenum_GLenum_GLuint_GLenum_GLuint_GLenum_GLuint_GLenum_GLuint *unpacked = (PACKED_void_GLuint_GLuint64EXT_GLuint_GLuint_GLenum_GLenum_GLuint_GLenum_GLuint_GLenum_GLuint_GLenum_GLuint *)packed;
            ARGS_void_GLuint_GLuint64EXT_GLuint_GLuint_GLenum_GLenum_GLuint_GLenum_GLuint_GLenum_GLuint_GLenum_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11, args.a12, args.a13);
            break;
        }
        case FORMAT_void_GLuint_GLuint64EXT_GLuint_GLuint_GLenum_GLenum_GLuint_GLuint_GLenum_GLuint_GLuint: {
            PACKED_void_GLuint_GLuint64EXT_GLuint_GLuint_GLenum_GLenum_GLuint_GLuint_GLenum_GLuint_GLuint *unpacked = (PACKED_void_GLuint_GLuint64EXT_GLuint_GLuint_GLenum_GLenum_GLuint_GLuint_GLenum_GLuint_GLuint *)packed;
            ARGS_void_GLuint_GLuint64EXT_GLuint_GLuint_GLenum_GLenum_GLuint_GLuint_GLenum_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11);
            break;
        }
        case FORMAT_void_GLsizei_const_GLuint___GENPT___const_GLfloat___GENPT__: {
            PACKED_void_GLsizei_const_GLuint___GENPT___const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLsizei_const_GLuint___GENPT___const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLsizei_const_GLuint___GENPT___const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLsizei_const_GLuint___GENPT___const_GLclampf___GENPT__: {
            PACKED_void_GLsizei_const_GLuint___GENPT___const_GLclampf___GENPT__ *unpacked = (PACKED_void_GLsizei_const_GLuint___GENPT___const_GLclampf___GENPT__ *)packed;
            ARGS_void_GLsizei_const_GLuint___GENPT___const_GLclampf___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLsizei_const_GLuint___GENPT___const_GLfixed___GENPT__: {
            PACKED_void_GLsizei_const_GLuint___GENPT___const_GLfixed___GENPT__ *unpacked = (PACKED_void_GLsizei_const_GLuint___GENPT___const_GLfixed___GENPT__ *)packed;
            ARGS_void_GLsizei_const_GLuint___GENPT___const_GLfixed___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLenum_const_GLvoid___GENPT___GLsizei: {
            PACKED_void_GLuint_GLenum_const_GLvoid___GENPT___GLsizei *unpacked = (PACKED_void_GLuint_GLenum_const_GLvoid___GENPT___GLsizei *)packed;
            ARGS_void_GLuint_GLenum_const_GLvoid___GENPT___GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint_GLsizei_const_GLint___GENPT__: {
            PACKED_void_GLenum_GLuint_GLuint_GLsizei_const_GLint___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLuint_GLsizei_const_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLuint_GLsizei_const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint_GLsizei_const_GLuint___GENPT__: {
            PACKED_void_GLenum_GLuint_GLuint_GLsizei_const_GLuint___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLuint_GLsizei_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLuint_GLsizei_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint_GLsizei_const_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLuint_GLuint_GLsizei_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLuint_GLsizei_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLuint_GLsizei_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLdouble_GLdouble_GLdouble_GLdouble: {
            PACKED_void_GLenum_GLuint_GLdouble_GLdouble_GLdouble_GLdouble *unpacked = (PACKED_void_GLenum_GLuint_GLdouble_GLdouble_GLdouble_GLdouble *)packed;
            ARGS_void_GLenum_GLuint_GLdouble_GLdouble_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLuint_const_GLdouble___GENPT__: {
            PACKED_void_GLenum_GLuint_const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLenum_GLuint_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLenum_GLuint_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLenum_GLuint_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLint_GLint_GLint_GLint: {
            PACKED_void_GLenum_GLuint_GLint_GLint_GLint_GLint *unpacked = (PACKED_void_GLenum_GLuint_GLint_GLint_GLint_GLint *)packed;
            ARGS_void_GLenum_GLuint_GLint_GLint_GLint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLuint_const_GLint___GENPT__: {
            PACKED_void_GLenum_GLuint_const_GLint___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_const_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLsizei_const_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLuint_GLsizei_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLsizei_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLsizei_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLsizei_const_GLint___GENPT__: {
            PACKED_void_GLenum_GLuint_GLsizei_const_GLint___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLsizei_const_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLsizei_const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLsizei_const_GLuint___GENPT__: {
            PACKED_void_GLenum_GLuint_GLsizei_const_GLuint___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLsizei_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLsizei_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_const_GLubyte___GENPT___GLdouble_GLdouble_GLdouble_GLdouble: {
            PACKED_void_GLuint_GLsizei_const_GLubyte___GENPT___GLdouble_GLdouble_GLdouble_GLdouble *unpacked = (PACKED_void_GLuint_GLsizei_const_GLubyte___GENPT___GLdouble_GLdouble_GLdouble_GLdouble *)packed;
            ARGS_void_GLuint_GLsizei_const_GLubyte___GENPT___GLdouble_GLdouble_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_const_GLubyte___GENPT___const_GLdouble___GENPT__: {
            PACKED_void_GLuint_GLsizei_const_GLubyte___GENPT___const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_const_GLubyte___GENPT___const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_const_GLubyte___GENPT___const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_const_GLubyte___GENPT___GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLuint_GLsizei_const_GLubyte___GENPT___GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLuint_GLsizei_const_GLubyte___GENPT___GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLuint_GLsizei_const_GLubyte___GENPT___GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_const_GLubyte___GENPT___const_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLsizei_const_GLubyte___GENPT___const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_const_GLubyte___GENPT___const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_const_GLubyte___GENPT___const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLsizei_const_GLdouble___GENPT__: {
            PACKED_void_GLenum_GLuint_GLsizei_const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLenum_GLuint_GLsizei_const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLenum_GLuint_GLsizei_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLdouble: {
            PACKED_void_GLuint_GLint_GLdouble *unpacked = (PACKED_void_GLuint_GLint_GLdouble *)packed;
            ARGS_void_GLuint_GLint_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLsizei_const_GLdouble___GENPT__: {
            PACKED_void_GLuint_GLint_GLsizei_const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLsizei_const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLsizei_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLfloat: {
            PACKED_void_GLuint_GLint_GLfloat *unpacked = (PACKED_void_GLuint_GLint_GLfloat *)packed;
            ARGS_void_GLuint_GLint_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLsizei_const_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLint_GLsizei_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLsizei_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLsizei_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLint: {
            PACKED_void_GLuint_GLint_GLint *unpacked = (PACKED_void_GLuint_GLint_GLint *)packed;
            ARGS_void_GLuint_GLint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLint64EXT: {
            PACKED_void_GLuint_GLint_GLint64EXT *unpacked = (PACKED_void_GLuint_GLint_GLint64EXT *)packed;
            ARGS_void_GLuint_GLint_GLint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLsizei_const_GLint64EXT___GENPT__: {
            PACKED_void_GLuint_GLint_GLsizei_const_GLint64EXT___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLsizei_const_GLint64EXT___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLsizei_const_GLint64EXT___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLsizei_const_GLint___GENPT__: {
            PACKED_void_GLuint_GLint_GLsizei_const_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLsizei_const_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLsizei_const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLuint: {
            PACKED_void_GLuint_GLint_GLuint *unpacked = (PACKED_void_GLuint_GLint_GLuint *)packed;
            ARGS_void_GLuint_GLint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLuint64EXT: {
            PACKED_void_GLuint_GLint_GLuint64EXT *unpacked = (PACKED_void_GLuint_GLint_GLuint64EXT *)packed;
            ARGS_void_GLuint_GLint_GLuint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLsizei_const_GLuint64EXT___GENPT__: {
            PACKED_void_GLuint_GLint_GLsizei_const_GLuint64EXT___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLsizei_const_GLuint64EXT___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLsizei_const_GLuint64EXT___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLsizei_const_GLuint___GENPT__: {
            PACKED_void_GLuint_GLint_GLsizei_const_GLuint___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLsizei_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLsizei_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLdouble_GLdouble: {
            PACKED_void_GLuint_GLint_GLdouble_GLdouble *unpacked = (PACKED_void_GLuint_GLint_GLdouble_GLdouble *)packed;
            ARGS_void_GLuint_GLint_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLfloat_GLfloat: {
            PACKED_void_GLuint_GLint_GLfloat_GLfloat *unpacked = (PACKED_void_GLuint_GLint_GLfloat_GLfloat *)packed;
            ARGS_void_GLuint_GLint_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLint_GLint: {
            PACKED_void_GLuint_GLint_GLint_GLint *unpacked = (PACKED_void_GLuint_GLint_GLint_GLint *)packed;
            ARGS_void_GLuint_GLint_GLint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLint64EXT_GLint64EXT: {
            PACKED_void_GLuint_GLint_GLint64EXT_GLint64EXT *unpacked = (PACKED_void_GLuint_GLint_GLint64EXT_GLint64EXT *)packed;
            ARGS_void_GLuint_GLint_GLint64EXT_GLint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLuint_GLuint: {
            PACKED_void_GLuint_GLint_GLuint_GLuint *unpacked = (PACKED_void_GLuint_GLint_GLuint_GLuint *)packed;
            ARGS_void_GLuint_GLint_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLuint64EXT_GLuint64EXT: {
            PACKED_void_GLuint_GLint_GLuint64EXT_GLuint64EXT *unpacked = (PACKED_void_GLuint_GLint_GLuint64EXT_GLuint64EXT *)packed;
            ARGS_void_GLuint_GLint_GLuint64EXT_GLuint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLdouble_GLdouble_GLdouble: {
            PACKED_void_GLuint_GLint_GLdouble_GLdouble_GLdouble *unpacked = (PACKED_void_GLuint_GLint_GLdouble_GLdouble_GLdouble *)packed;
            ARGS_void_GLuint_GLint_GLdouble_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLuint_GLint_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLuint_GLint_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLuint_GLint_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLint_GLint_GLint: {
            PACKED_void_GLuint_GLint_GLint_GLint_GLint *unpacked = (PACKED_void_GLuint_GLint_GLint_GLint_GLint *)packed;
            ARGS_void_GLuint_GLint_GLint_GLint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLint64EXT_GLint64EXT_GLint64EXT: {
            PACKED_void_GLuint_GLint_GLint64EXT_GLint64EXT_GLint64EXT *unpacked = (PACKED_void_GLuint_GLint_GLint64EXT_GLint64EXT_GLint64EXT *)packed;
            ARGS_void_GLuint_GLint_GLint64EXT_GLint64EXT_GLint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLuint_GLuint_GLuint: {
            PACKED_void_GLuint_GLint_GLuint_GLuint_GLuint *unpacked = (PACKED_void_GLuint_GLint_GLuint_GLuint_GLuint *)packed;
            ARGS_void_GLuint_GLint_GLuint_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLuint64EXT_GLuint64EXT_GLuint64EXT: {
            PACKED_void_GLuint_GLint_GLuint64EXT_GLuint64EXT_GLuint64EXT *unpacked = (PACKED_void_GLuint_GLint_GLuint64EXT_GLuint64EXT_GLuint64EXT *)packed;
            ARGS_void_GLuint_GLint_GLuint64EXT_GLuint64EXT_GLuint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLdouble_GLdouble_GLdouble_GLdouble: {
            PACKED_void_GLuint_GLint_GLdouble_GLdouble_GLdouble_GLdouble *unpacked = (PACKED_void_GLuint_GLint_GLdouble_GLdouble_GLdouble_GLdouble *)packed;
            ARGS_void_GLuint_GLint_GLdouble_GLdouble_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLuint_GLint_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLuint_GLint_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLuint_GLint_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLint_GLint_GLint_GLint: {
            PACKED_void_GLuint_GLint_GLint_GLint_GLint_GLint *unpacked = (PACKED_void_GLuint_GLint_GLint_GLint_GLint_GLint *)packed;
            ARGS_void_GLuint_GLint_GLint_GLint_GLint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLint64EXT_GLint64EXT_GLint64EXT_GLint64EXT: {
            PACKED_void_GLuint_GLint_GLint64EXT_GLint64EXT_GLint64EXT_GLint64EXT *unpacked = (PACKED_void_GLuint_GLint_GLint64EXT_GLint64EXT_GLint64EXT_GLint64EXT *)packed;
            ARGS_void_GLuint_GLint_GLint64EXT_GLint64EXT_GLint64EXT_GLint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLuint_GLuint_GLuint_GLuint: {
            PACKED_void_GLuint_GLint_GLuint_GLuint_GLuint_GLuint *unpacked = (PACKED_void_GLuint_GLint_GLuint_GLuint_GLuint_GLuint *)packed;
            ARGS_void_GLuint_GLint_GLuint_GLuint_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLuint64EXT_GLuint64EXT_GLuint64EXT_GLuint64EXT: {
            PACKED_void_GLuint_GLint_GLuint64EXT_GLuint64EXT_GLuint64EXT_GLuint64EXT *unpacked = (PACKED_void_GLuint_GLint_GLuint64EXT_GLuint64EXT_GLuint64EXT_GLuint64EXT *)packed;
            ARGS_void_GLuint_GLint_GLuint64EXT_GLuint64EXT_GLuint64EXT_GLuint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLuint64: {
            PACKED_void_GLuint_GLint_GLuint64 *unpacked = (PACKED_void_GLuint_GLint_GLuint64 *)packed;
            ARGS_void_GLuint_GLint_GLuint64 args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLsizei_const_GLuint64___GENPT__: {
            PACKED_void_GLuint_GLint_GLsizei_const_GLuint64___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLsizei_const_GLuint64___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLsizei_const_GLuint64___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLsizei_GLboolean_const_GLdouble___GENPT__: {
            PACKED_void_GLuint_GLint_GLsizei_GLboolean_const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLsizei_GLboolean_const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLsizei_GLboolean_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_GLbitfield_GLfixed___GENPT___GLint___GENPT__: {
            PACKED_GLbitfield_GLfixed___GENPT___GLint___GENPT__ *unpacked = (PACKED_GLbitfield_GLfixed___GENPT___GLint___GENPT__ *)packed;
            ARGS_GLbitfield_GLfixed___GENPT___GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLshort_GLshort: {
            PACKED_void_GLshort_GLshort *unpacked = (PACKED_void_GLshort_GLshort *)packed;
            ARGS_void_GLshort_GLshort args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLsizei_GLvoid___GENPT__: {
            PACKED_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLsizei_GLvoid___GENPT__ *unpacked = (PACKED_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLsizei_GLvoid___GENPT__ *)packed;
            ARGS_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLsizei_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_const_GLdouble___GENPT___const_GLdouble___GENPT__: {
            PACKED_void_const_GLdouble___GENPT___const_GLdouble___GENPT__ *unpacked = (PACKED_void_const_GLdouble___GENPT___const_GLdouble___GENPT__ *)packed;
            ARGS_void_const_GLdouble___GENPT___const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_const_GLint___GENPT___const_GLint___GENPT__: {
            PACKED_void_const_GLint___GENPT___const_GLint___GENPT__ *unpacked = (PACKED_void_const_GLint___GENPT___const_GLint___GENPT__ *)packed;
            ARGS_void_const_GLint___GENPT___const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_const_GLshort___GENPT___const_GLshort___GENPT__: {
            PACKED_void_const_GLshort___GENPT___const_GLshort___GENPT__ *unpacked = (PACKED_void_const_GLshort___GENPT___const_GLshort___GENPT__ *)packed;
            ARGS_void_const_GLshort___GENPT___const_GLshort___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_const_GLfixed___GENPT___const_GLfixed___GENPT__: {
            PACKED_void_const_GLfixed___GENPT___const_GLfixed___GENPT__ *unpacked = (PACKED_void_const_GLfixed___GENPT___const_GLfixed___GENPT__ *)packed;
            ARGS_void_const_GLfixed___GENPT___const_GLfixed___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_GLint_GLenum: {
            PACKED_GLint_GLenum *unpacked = (PACKED_GLint_GLenum *)packed;
            ARGS_GLint_GLenum args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLsizei_GLsizei: {
            PACKED_void_GLenum_GLenum_GLsizei_GLsizei *unpacked = (PACKED_void_GLenum_GLenum_GLsizei_GLsizei *)packed;
            ARGS_void_GLenum_GLenum_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLenum_GLsizei_GLsizei: {
            PACKED_void_GLenum_GLsizei_GLenum_GLsizei_GLsizei *unpacked = (PACKED_void_GLenum_GLsizei_GLenum_GLsizei_GLsizei *)packed;
            ARGS_void_GLenum_GLsizei_GLenum_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLsizei_GLenum_GLsizei_GLsizei: {
            PACKED_void_GLenum_GLsizei_GLsizei_GLenum_GLsizei_GLsizei *unpacked = (PACKED_void_GLenum_GLsizei_GLsizei_GLenum_GLsizei_GLsizei *)packed;
            ARGS_void_GLenum_GLsizei_GLsizei_GLenum_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_const_GLuint___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__: {
            PACKED_void_const_GLuint___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__ *unpacked = (PACKED_void_const_GLuint___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__ *)packed;
            ARGS_void_const_GLuint___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11);
            break;
        }
        case FORMAT_void_const_GLuint___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__: {
            PACKED_void_const_GLuint___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__ *unpacked = (PACKED_void_const_GLuint___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__ *)packed;
            ARGS_void_const_GLuint___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLubyte_GLubyte_GLubyte_GLubyte_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLuint_GLubyte_GLubyte_GLubyte_GLubyte_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLuint_GLubyte_GLubyte_GLubyte_GLubyte_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLuint_GLubyte_GLubyte_GLubyte_GLubyte_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_const_GLuint___GENPT___const_GLubyte___GENPT___const_GLfloat___GENPT__: {
            PACKED_void_const_GLuint___GENPT___const_GLubyte___GENPT___const_GLfloat___GENPT__ *unpacked = (PACKED_void_const_GLuint___GENPT___const_GLubyte___GENPT___const_GLfloat___GENPT__ *)packed;
            ARGS_void_const_GLuint___GENPT___const_GLubyte___GENPT___const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11, args.a12, args.a13);
            break;
        }
        case FORMAT_void_const_GLuint___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__: {
            PACKED_void_const_GLuint___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__ *unpacked = (PACKED_void_const_GLuint___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__ *)packed;
            ARGS_void_const_GLuint___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLuint_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLuint_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLuint_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_const_GLuint___GENPT___const_GLfloat___GENPT__: {
            PACKED_void_const_GLuint___GENPT___const_GLfloat___GENPT__ *unpacked = (PACKED_void_const_GLuint___GENPT___const_GLfloat___GENPT__ *)packed;
            ARGS_void_const_GLuint___GENPT___const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLfloat_GLboolean: {
            PACKED_void_GLfloat_GLboolean *unpacked = (PACKED_void_GLfloat_GLboolean *)packed;
            ARGS_void_GLfloat_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLfixed_GLboolean: {
            PACKED_void_GLfixed_GLboolean *unpacked = (PACKED_void_GLfixed_GLboolean *)packed;
            ARGS_void_GLfixed_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLbitfield: {
            PACKED_void_GLuint_GLbitfield *unpacked = (PACKED_void_GLuint_GLbitfield *)packed;
            ARGS_void_GLuint_GLbitfield args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLenum_const_GLuint___GENPT__: {
            PACKED_void_GLuint_GLenum_const_GLuint___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_const_GLint___GENPT__: {
            PACKED_void_GLuint_GLsizei_const_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_const_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLint_GLsizei_GLsizei: {
            PACKED_void_GLuint_GLint_GLint_GLsizei_GLsizei *unpacked = (PACKED_void_GLuint_GLint_GLint_GLsizei_GLsizei *)packed;
            ARGS_void_GLuint_GLint_GLint_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_const_GLint___GENPT__: {
            PACKED_void_GLuint_const_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_const_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLboolean_GLuint_GLint_GLuint___GENPT__: {
            PACKED_void_GLuint_GLboolean_GLuint_GLint_GLuint___GENPT__ *unpacked = (PACKED_void_GLuint_GLboolean_GLuint_GLint_GLuint___GENPT__ *)packed;
            ARGS_void_GLuint_GLboolean_GLuint_GLint_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT___const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLenum_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT___const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT___const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT___const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLuint_const_GLfloat___GENPT__: {
            PACKED_void_GLuint_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLsizei_const_GLuint___GENPT___GLenum_const_GLvoid___GENPT___GLsizei: {
            PACKED_void_GLsizei_const_GLuint___GENPT___GLenum_const_GLvoid___GENPT___GLsizei *unpacked = (PACKED_void_GLsizei_const_GLuint___GENPT___GLenum_const_GLvoid___GENPT___GLsizei *)packed;
            ARGS_void_GLsizei_const_GLuint___GENPT___GLenum_const_GLvoid___GENPT___GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint_GLuint: {
            PACKED_void_GLenum_GLuint_GLuint_GLuint *unpacked = (PACKED_void_GLenum_GLuint_GLuint_GLuint *)packed;
            ARGS_void_GLenum_GLuint_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLuint_GLuint_GLuint: {
            PACKED_void_GLenum_GLuint_GLuint_GLuint_GLuint *unpacked = (PACKED_void_GLenum_GLuint_GLuint_GLuint_GLuint *)packed;
            ARGS_void_GLenum_GLuint_GLuint_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_GLchar__GENPT__const___GENPT___const_GLint___GENPT__: {
            PACKED_void_GLuint_GLsizei_GLchar__GENPT__const___GENPT___const_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_GLchar__GENPT__const___GENPT___const_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_GLchar__GENPT__const___GENPT___const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLhandleARB_GLsizei_const_GLcharARB___GENPT___const_GLint___GENPT__: {
            PACKED_void_GLhandleARB_GLsizei_const_GLcharARB___GENPT___const_GLint___GENPT__ *unpacked = (PACKED_void_GLhandleARB_GLsizei_const_GLcharARB___GENPT___const_GLint___GENPT__ *)packed;
            ARGS_void_GLhandleARB_GLsizei_const_GLcharARB___GENPT___const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLsizei_GLuint: {
            PACKED_void_GLsizei_GLuint *unpacked = (PACKED_void_GLsizei_GLuint *)packed;
            ARGS_void_GLsizei_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLenum_GLuint_GLenum_const_GLfloat___GENPT__: {
            PACKED_void_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLenum_GLuint_GLenum_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLenum_GLuint_GLenum_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLenum_GLuint_GLenum_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint: {
            PACKED_void_GLuint_GLenum_GLuint *unpacked = (PACKED_void_GLuint_GLenum_GLuint *)packed;
            ARGS_void_GLuint_GLenum_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLint_GLuint: {
            PACKED_void_GLenum_GLenum_GLint_GLuint *unpacked = (PACKED_void_GLenum_GLenum_GLint_GLuint *)packed;
            ARGS_void_GLenum_GLenum_GLint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLint_GLuint_GLenum_const_GLfloat___GENPT__: {
            PACKED_void_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLint_GLuint_GLenum_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLint_GLuint_GLenum_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLsizei_GLenum_const_GLvoid___GENPT___GLuint_GLint_GLuint_GLenum_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLenum_GLenum_GLenum_GLenum: {
            PACKED_void_GLuint_GLuint_GLenum_GLenum_GLenum_GLenum *unpacked = (PACKED_void_GLuint_GLuint_GLenum_GLenum_GLenum_GLenum *)packed;
            ARGS_void_GLuint_GLuint_GLenum_GLenum_GLenum_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLuint_GLintptr_GLsizeiptr: {
            PACKED_void_GLenum_GLenum_GLuint_GLintptr_GLsizeiptr *unpacked = (PACKED_void_GLenum_GLenum_GLuint_GLintptr_GLsizeiptr *)packed;
            ARGS_void_GLenum_GLenum_GLuint_GLintptr_GLsizeiptr args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLbyte_GLbyte: {
            PACKED_void_GLbyte_GLbyte *unpacked = (PACKED_void_GLbyte_GLbyte *)packed;
            ARGS_void_GLbyte_GLbyte args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11, args.a12);
            break;
        }
        case FORMAT_void_const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__: {
            PACKED_void_const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__ *unpacked = (PACKED_void_const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__ *)packed;
            ARGS_void_const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT___const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLfloat_GLfloat_GLubyte_GLubyte_GLubyte_GLubyte_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLfloat_GLfloat_GLubyte_GLubyte_GLubyte_GLubyte_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLfloat_GLfloat_GLubyte_GLubyte_GLubyte_GLubyte_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLfloat_GLfloat_GLubyte_GLubyte_GLubyte_GLubyte_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_const_GLfloat___GENPT___const_GLubyte___GENPT___const_GLfloat___GENPT__: {
            PACKED_void_const_GLfloat___GENPT___const_GLubyte___GENPT___const_GLfloat___GENPT__ *unpacked = (PACKED_void_const_GLfloat___GENPT___const_GLubyte___GENPT___const_GLfloat___GENPT__ *)packed;
            ARGS_void_const_GLfloat___GENPT___const_GLubyte___GENPT___const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLhalfNV_GLhalfNV: {
            PACKED_void_GLhalfNV_GLhalfNV *unpacked = (PACKED_void_GLhalfNV_GLhalfNV *)packed;
            ARGS_void_GLhalfNV_GLhalfNV args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11, args.a12, args.a13, args.a14, args.a15);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLsizei_const_GLfloat___GENPT__: {
            PACKED_void_GLenum_GLenum_GLsizei_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_GLsizei_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLsizei_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLdouble: {
            PACKED_void_GLenum_GLenum_GLdouble *unpacked = (PACKED_void_GLenum_GLenum_GLdouble *)packed;
            ARGS_void_GLenum_GLenum_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLenum_const_GLdouble___GENPT__: {
            PACKED_void_GLenum_GLenum_const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLenum_GLenum_const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLint_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLint_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLint_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLint_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLint_GLsizei_GLsizei_GLboolean: {
            PACKED_void_GLenum_GLsizei_GLint_GLsizei_GLsizei_GLboolean *unpacked = (PACKED_void_GLenum_GLsizei_GLint_GLsizei_GLsizei_GLboolean *)packed;
            ARGS_void_GLenum_GLsizei_GLint_GLsizei_GLsizei_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLsizei_GLint_GLsizei_GLsizei_GLboolean: {
            PACKED_void_GLenum_GLsizei_GLsizei_GLint_GLsizei_GLsizei_GLboolean *unpacked = (PACKED_void_GLenum_GLsizei_GLsizei_GLint_GLsizei_GLsizei_GLboolean *)packed;
            ARGS_void_GLenum_GLsizei_GLsizei_GLint_GLsizei_GLsizei_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLint_GLsizei_GLsizei_GLsizei_GLboolean: {
            PACKED_void_GLenum_GLsizei_GLint_GLsizei_GLsizei_GLsizei_GLboolean *unpacked = (PACKED_void_GLenum_GLsizei_GLint_GLsizei_GLsizei_GLsizei_GLboolean *)packed;
            ARGS_void_GLenum_GLsizei_GLint_GLsizei_GLsizei_GLsizei_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLsizei_GLint_GLsizei_GLsizei_GLsizei_GLboolean: {
            PACKED_void_GLenum_GLsizei_GLsizei_GLint_GLsizei_GLsizei_GLsizei_GLboolean *unpacked = (PACKED_void_GLenum_GLsizei_GLsizei_GLint_GLsizei_GLsizei_GLsizei_GLboolean *)packed;
            ARGS_void_GLenum_GLsizei_GLsizei_GLint_GLsizei_GLsizei_GLsizei_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLenum_GLsizei: {
            PACKED_void_GLenum_GLsizei_GLenum_GLsizei *unpacked = (PACKED_void_GLenum_GLsizei_GLenum_GLsizei *)packed;
            ARGS_void_GLenum_GLsizei_GLenum_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLboolean: {
            PACKED_void_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLboolean *unpacked = (PACKED_void_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLboolean *)packed;
            ARGS_void_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLsizei: {
            PACKED_void_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLsizei *unpacked = (PACKED_void_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLsizei *)packed;
            ARGS_void_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLsizei_GLboolean: {
            PACKED_void_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLsizei_GLboolean *unpacked = (PACKED_void_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLsizei_GLboolean *)packed;
            ARGS_void_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLsizei_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLenum_GLenum_GLsizei_GLsizei_GLsizei_GLsizei_GLbitfield: {
            PACKED_void_GLenum_GLenum_GLsizei_GLsizei_GLsizei_GLsizei_GLbitfield *unpacked = (PACKED_void_GLenum_GLenum_GLsizei_GLsizei_GLsizei_GLsizei_GLbitfield *)packed;
            ARGS_void_GLenum_GLenum_GLsizei_GLsizei_GLsizei_GLsizei_GLbitfield args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLint_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLint_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLint_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLint_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11);
            break;
        }
        case FORMAT_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11, args.a12, args.a13);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLenum_GLuint_GLintptr_GLsizeiptr: {
            PACKED_void_GLuint_GLenum_GLenum_GLuint_GLintptr_GLsizeiptr *unpacked = (PACKED_void_GLuint_GLenum_GLenum_GLuint_GLintptr_GLsizeiptr *)packed;
            ARGS_void_GLuint_GLenum_GLenum_GLuint_GLintptr_GLsizeiptr args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLsizei_GLsizei_GLint_GLsizei_GLsizei_GLboolean: {
            PACKED_void_GLuint_GLenum_GLsizei_GLsizei_GLint_GLsizei_GLsizei_GLboolean *unpacked = (PACKED_void_GLuint_GLenum_GLsizei_GLsizei_GLint_GLsizei_GLsizei_GLboolean *)packed;
            ARGS_void_GLuint_GLenum_GLsizei_GLsizei_GLint_GLsizei_GLsizei_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLsizei_GLint_GLsizei_GLsizei_GLboolean: {
            PACKED_void_GLuint_GLenum_GLsizei_GLint_GLsizei_GLsizei_GLboolean *unpacked = (PACKED_void_GLuint_GLenum_GLsizei_GLint_GLsizei_GLsizei_GLboolean *)packed;
            ARGS_void_GLuint_GLenum_GLsizei_GLint_GLsizei_GLsizei_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLenum_GLsizei_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLsizei_GLsizei_GLint_GLsizei_GLsizei_GLsizei_GLboolean: {
            PACKED_void_GLuint_GLenum_GLsizei_GLsizei_GLint_GLsizei_GLsizei_GLsizei_GLboolean *unpacked = (PACKED_void_GLuint_GLenum_GLsizei_GLsizei_GLint_GLsizei_GLsizei_GLsizei_GLboolean *)packed;
            ARGS_void_GLuint_GLenum_GLsizei_GLsizei_GLint_GLsizei_GLsizei_GLsizei_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLsizei_GLint_GLsizei_GLsizei_GLsizei_GLboolean: {
            PACKED_void_GLuint_GLenum_GLsizei_GLint_GLsizei_GLsizei_GLsizei_GLboolean *unpacked = (PACKED_void_GLuint_GLenum_GLsizei_GLint_GLsizei_GLsizei_GLsizei_GLboolean *)packed;
            ARGS_void_GLuint_GLenum_GLsizei_GLint_GLsizei_GLsizei_GLsizei_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLenum_const_GLint___GENPT__: {
            PACKED_void_GLuint_GLenum_GLenum_const_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLenum_const_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLenum_const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLenum_const_GLuint___GENPT__: {
            PACKED_void_GLuint_GLenum_GLenum_const_GLuint___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLenum_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLenum_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLenum_GLfloat: {
            PACKED_void_GLuint_GLenum_GLenum_GLfloat *unpacked = (PACKED_void_GLuint_GLenum_GLenum_GLfloat *)packed;
            ARGS_void_GLuint_GLenum_GLenum_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLenum_const_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLenum_GLenum_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLenum_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLenum_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLenum_GLint: {
            PACKED_void_GLuint_GLenum_GLenum_GLint *unpacked = (PACKED_void_GLuint_GLenum_GLenum_GLint *)packed;
            ARGS_void_GLuint_GLenum_GLenum_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLsizei_GLenum_GLsizei: {
            PACKED_void_GLuint_GLenum_GLsizei_GLenum_GLsizei *unpacked = (PACKED_void_GLuint_GLenum_GLsizei_GLenum_GLsizei *)packed;
            ARGS_void_GLuint_GLenum_GLsizei_GLenum_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLsizei_GLenum_GLsizei_GLsizei: {
            PACKED_void_GLuint_GLenum_GLsizei_GLenum_GLsizei_GLsizei *unpacked = (PACKED_void_GLuint_GLenum_GLsizei_GLenum_GLsizei_GLsizei *)packed;
            ARGS_void_GLuint_GLenum_GLsizei_GLenum_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLboolean: {
            PACKED_void_GLuint_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLboolean *unpacked = (PACKED_void_GLuint_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLboolean *)packed;
            ARGS_void_GLuint_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLsizei: {
            PACKED_void_GLuint_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLsizei *unpacked = (PACKED_void_GLuint_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLsizei *)packed;
            ARGS_void_GLuint_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLsizei_GLboolean: {
            PACKED_void_GLuint_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLsizei_GLboolean *unpacked = (PACKED_void_GLuint_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLsizei_GLboolean *)packed;
            ARGS_void_GLuint_GLenum_GLsizei_GLenum_GLsizei_GLsizei_GLsizei_GLboolean args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLenum_GLsizei_GLsizei_GLsizei_GLsizei_GLbitfield: {
            PACKED_void_GLuint_GLenum_GLenum_GLsizei_GLsizei_GLsizei_GLsizei_GLbitfield *unpacked = (PACKED_void_GLuint_GLenum_GLenum_GLsizei_GLsizei_GLsizei_GLsizei_GLbitfield *)packed;
            ARGS_void_GLuint_GLenum_GLenum_GLsizei_GLsizei_GLsizei_GLsizei_GLbitfield args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLint_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_GLint_GLint_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLint_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLint_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9, args.a10, args.a11, args.a12);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_GLenum_GLuint_GLuint_GLuint_GLuint: {
            PACKED_void_GLuint_GLenum_GLuint_GLenum_GLuint_GLuint_GLuint_GLuint *unpacked = (PACKED_void_GLuint_GLenum_GLuint_GLenum_GLuint_GLuint_GLuint_GLuint *)packed;
            ARGS_void_GLuint_GLenum_GLuint_GLenum_GLuint_GLuint_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLenum_GLuint_GLenum_GLenum: {
            PACKED_void_GLenum_GLuint_GLenum_GLenum *unpacked = (PACKED_void_GLenum_GLuint_GLenum_GLenum *)packed;
            ARGS_void_GLenum_GLuint_GLenum_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLsizei_const_GLint___GENPT___GLenum: {
            PACKED_void_GLsizei_const_GLint___GENPT___GLenum *unpacked = (PACKED_void_GLsizei_const_GLint___GENPT___GLenum *)packed;
            ARGS_void_GLsizei_const_GLint___GENPT___GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLsizei_const_GLint___GENPT___GLsizei_const_GLint___GENPT___GLenum: {
            PACKED_void_GLsizei_const_GLint___GENPT___GLsizei_const_GLint___GENPT___GLenum *unpacked = (PACKED_void_GLsizei_const_GLint___GENPT___GLsizei_const_GLint___GENPT___GLenum *)packed;
            ARGS_void_GLsizei_const_GLint___GENPT___GLsizei_const_GLint___GENPT___GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_GLchar__GENPT__const___GENPT___GLenum: {
            PACKED_void_GLuint_GLsizei_GLchar__GENPT__const___GENPT___GLenum *unpacked = (PACKED_void_GLuint_GLsizei_GLchar__GENPT__const___GENPT___GLenum *)packed;
            ARGS_void_GLuint_GLsizei_GLchar__GENPT__const___GENPT___GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_const_GLchar___GENPT___GLenum: {
            PACKED_void_GLuint_GLsizei_const_GLchar___GENPT___GLenum *unpacked = (PACKED_void_GLuint_GLsizei_const_GLchar___GENPT___GLenum *)packed;
            ARGS_void_GLuint_GLsizei_const_GLchar___GENPT___GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_const_GLint___GENPT___GLenum: {
            PACKED_void_GLuint_GLsizei_const_GLint___GENPT___GLenum *unpacked = (PACKED_void_GLuint_GLsizei_const_GLint___GENPT___GLenum *)packed;
            ARGS_void_GLuint_GLsizei_const_GLint___GENPT___GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLenum_const_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLuint_GLenum_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLuint_GLenum_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLuint_GLenum_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLint_GLdouble: {
            PACKED_void_GLint_GLdouble *unpacked = (PACKED_void_GLint_GLdouble *)packed;
            ARGS_void_GLint_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLint_GLsizei_const_GLdouble___GENPT__: {
            PACKED_void_GLint_GLsizei_const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLint_GLsizei_const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLint_GLsizei_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLint_GLfloat: {
            PACKED_void_GLint_GLfloat *unpacked = (PACKED_void_GLint_GLfloat *)packed;
            ARGS_void_GLint_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLint_GLsizei_const_GLfloat___GENPT__: {
            PACKED_void_GLint_GLsizei_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLint_GLsizei_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLint_GLsizei_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLint_GLint64EXT: {
            PACKED_void_GLint_GLint64EXT *unpacked = (PACKED_void_GLint_GLint64EXT *)packed;
            ARGS_void_GLint_GLint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLint_GLsizei_const_GLint64EXT___GENPT__: {
            PACKED_void_GLint_GLsizei_const_GLint64EXT___GENPT__ *unpacked = (PACKED_void_GLint_GLsizei_const_GLint64EXT___GENPT__ *)packed;
            ARGS_void_GLint_GLsizei_const_GLint64EXT___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLint_GLsizei_const_GLint___GENPT__: {
            PACKED_void_GLint_GLsizei_const_GLint___GENPT__ *unpacked = (PACKED_void_GLint_GLsizei_const_GLint___GENPT__ *)packed;
            ARGS_void_GLint_GLsizei_const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLint_GLuint: {
            PACKED_void_GLint_GLuint *unpacked = (PACKED_void_GLint_GLuint *)packed;
            ARGS_void_GLint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLint_GLuint64EXT: {
            PACKED_void_GLint_GLuint64EXT *unpacked = (PACKED_void_GLint_GLuint64EXT *)packed;
            ARGS_void_GLint_GLuint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLint_GLsizei_const_GLuint64EXT___GENPT__: {
            PACKED_void_GLint_GLsizei_const_GLuint64EXT___GENPT__ *unpacked = (PACKED_void_GLint_GLsizei_const_GLuint64EXT___GENPT__ *)packed;
            ARGS_void_GLint_GLsizei_const_GLuint64EXT___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLint_GLsizei_const_GLuint___GENPT__: {
            PACKED_void_GLint_GLsizei_const_GLuint___GENPT__ *unpacked = (PACKED_void_GLint_GLsizei_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLint_GLsizei_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLint_GLint64EXT_GLint64EXT: {
            PACKED_void_GLint_GLint64EXT_GLint64EXT *unpacked = (PACKED_void_GLint_GLint64EXT_GLint64EXT *)packed;
            ARGS_void_GLint_GLint64EXT_GLint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLint_GLuint_GLuint: {
            PACKED_void_GLint_GLuint_GLuint *unpacked = (PACKED_void_GLint_GLuint_GLuint *)packed;
            ARGS_void_GLint_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLint_GLuint64EXT_GLuint64EXT: {
            PACKED_void_GLint_GLuint64EXT_GLuint64EXT *unpacked = (PACKED_void_GLint_GLuint64EXT_GLuint64EXT *)packed;
            ARGS_void_GLint_GLuint64EXT_GLuint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLint_GLdouble_GLdouble_GLdouble: {
            PACKED_void_GLint_GLdouble_GLdouble_GLdouble *unpacked = (PACKED_void_GLint_GLdouble_GLdouble_GLdouble *)packed;
            ARGS_void_GLint_GLdouble_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLint_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLint_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLint_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLint_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLint_GLint64EXT_GLint64EXT_GLint64EXT: {
            PACKED_void_GLint_GLint64EXT_GLint64EXT_GLint64EXT *unpacked = (PACKED_void_GLint_GLint64EXT_GLint64EXT_GLint64EXT *)packed;
            ARGS_void_GLint_GLint64EXT_GLint64EXT_GLint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLint_GLuint_GLuint_GLuint: {
            PACKED_void_GLint_GLuint_GLuint_GLuint *unpacked = (PACKED_void_GLint_GLuint_GLuint_GLuint *)packed;
            ARGS_void_GLint_GLuint_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLint_GLuint64EXT_GLuint64EXT_GLuint64EXT: {
            PACKED_void_GLint_GLuint64EXT_GLuint64EXT_GLuint64EXT *unpacked = (PACKED_void_GLint_GLuint64EXT_GLuint64EXT_GLuint64EXT *)packed;
            ARGS_void_GLint_GLuint64EXT_GLuint64EXT_GLuint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLint_GLdouble_GLdouble_GLdouble_GLdouble: {
            PACKED_void_GLint_GLdouble_GLdouble_GLdouble_GLdouble *unpacked = (PACKED_void_GLint_GLdouble_GLdouble_GLdouble_GLdouble *)packed;
            ARGS_void_GLint_GLdouble_GLdouble_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLint_GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLint_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLint_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLint_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLint_GLint_GLint_GLint_GLint: {
            PACKED_void_GLint_GLint_GLint_GLint_GLint *unpacked = (PACKED_void_GLint_GLint_GLint_GLint_GLint *)packed;
            ARGS_void_GLint_GLint_GLint_GLint_GLint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLint_GLint64EXT_GLint64EXT_GLint64EXT_GLint64EXT: {
            PACKED_void_GLint_GLint64EXT_GLint64EXT_GLint64EXT_GLint64EXT *unpacked = (PACKED_void_GLint_GLint64EXT_GLint64EXT_GLint64EXT_GLint64EXT *)packed;
            ARGS_void_GLint_GLint64EXT_GLint64EXT_GLint64EXT_GLint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLint_GLuint_GLuint_GLuint_GLuint: {
            PACKED_void_GLint_GLuint_GLuint_GLuint_GLuint *unpacked = (PACKED_void_GLint_GLuint_GLuint_GLuint_GLuint *)packed;
            ARGS_void_GLint_GLuint_GLuint_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLint_GLuint64EXT_GLuint64EXT_GLuint64EXT_GLuint64EXT: {
            PACKED_void_GLint_GLuint64EXT_GLuint64EXT_GLuint64EXT_GLuint64EXT *unpacked = (PACKED_void_GLint_GLuint64EXT_GLuint64EXT_GLuint64EXT_GLuint64EXT *)packed;
            ARGS_void_GLint_GLuint64EXT_GLuint64EXT_GLuint64EXT_GLuint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLint_GLuint64: {
            PACKED_void_GLint_GLuint64 *unpacked = (PACKED_void_GLint_GLuint64 *)packed;
            ARGS_void_GLint_GLuint64 args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLint_GLsizei_const_GLuint64___GENPT__: {
            PACKED_void_GLint_GLsizei_const_GLuint64___GENPT__ *unpacked = (PACKED_void_GLint_GLsizei_const_GLuint64___GENPT__ *)packed;
            ARGS_void_GLint_GLsizei_const_GLuint64___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLint_GLsizei_GLboolean_const_GLdouble___GENPT__: {
            PACKED_void_GLint_GLsizei_GLboolean_const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLint_GLsizei_GLboolean_const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLint_GLsizei_GLboolean_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__: {
            PACKED_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLsizei_const_GLvoid___GENPT___GLenum: {
            PACKED_void_GLuint_GLuint_GLsizei_const_GLvoid___GENPT___GLenum *unpacked = (PACKED_void_GLuint_GLuint_GLsizei_const_GLvoid___GENPT___GLenum *)packed;
            ARGS_void_GLuint_GLuint_GLsizei_const_GLvoid___GENPT___GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLbitfield_GLuint: {
            PACKED_void_GLuint_GLbitfield_GLuint *unpacked = (PACKED_void_GLuint_GLbitfield_GLuint *)packed;
            ARGS_void_GLuint_GLbitfield_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLvdpauSurfaceNV_GLenum_GLsizei_GLsizei___GENPT___GLint___GENPT__: {
            PACKED_void_GLvdpauSurfaceNV_GLenum_GLsizei_GLsizei___GENPT___GLint___GENPT__ *unpacked = (PACKED_void_GLvdpauSurfaceNV_GLenum_GLsizei_GLsizei___GENPT___GLint___GENPT__ *)packed;
            ARGS_void_GLvdpauSurfaceNV_GLenum_GLsizei_GLsizei___GENPT___GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_const_GLvoid___GENPT___const_GLvoid___GENPT__: {
            PACKED_void_const_GLvoid___GENPT___const_GLvoid___GENPT__ *unpacked = (PACKED_void_const_GLvoid___GENPT___const_GLvoid___GENPT__ *)packed;
            ARGS_void_const_GLvoid___GENPT___const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLvdpauSurfaceNV: {
            PACKED_void_GLvdpauSurfaceNV *unpacked = (PACKED_void_GLvdpauSurfaceNV *)packed;
            ARGS_void_GLvdpauSurfaceNV args = unpacked->args;
            unpacked->func(args.a1);
            break;
        }
        case FORMAT_void_GLsizei_const_GLvdpauSurfaceNV___GENPT__: {
            PACKED_void_GLsizei_const_GLvdpauSurfaceNV___GENPT__ *unpacked = (PACKED_void_GLsizei_const_GLvdpauSurfaceNV___GENPT__ *)packed;
            ARGS_void_GLsizei_const_GLvdpauSurfaceNV___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_GLvdpauSurfaceNV_GLvoid___GENPT___GLenum_GLsizei_const_GLuint___GENPT__: {
            PACKED_GLvdpauSurfaceNV_GLvoid___GENPT___GLenum_GLsizei_const_GLuint___GENPT__ *unpacked = (PACKED_GLvdpauSurfaceNV_GLvoid___GENPT___GLenum_GLsizei_const_GLuint___GENPT__ *)packed;
            ARGS_GLvdpauSurfaceNV_GLvoid___GENPT___GLenum_GLsizei_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_GLvdpauSurfaceNV_const_GLvoid___GENPT___GLenum_GLsizei_const_GLuint___GENPT__: {
            PACKED_GLvdpauSurfaceNV_const_GLvoid___GENPT___GLenum_GLsizei_const_GLuint___GENPT__ *unpacked = (PACKED_GLvdpauSurfaceNV_const_GLvoid___GENPT___GLenum_GLsizei_const_GLuint___GENPT__ *)packed;
            ARGS_GLvdpauSurfaceNV_const_GLvoid___GENPT___GLenum_GLsizei_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLvdpauSurfaceNV_GLenum: {
            PACKED_void_GLvdpauSurfaceNV_GLenum *unpacked = (PACKED_void_GLvdpauSurfaceNV_GLenum *)packed;
            ARGS_void_GLvdpauSurfaceNV_GLenum args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLsizei_GLuint_GLuint: {
            PACKED_void_GLuint_GLenum_GLsizei_GLuint_GLuint *unpacked = (PACKED_void_GLuint_GLenum_GLsizei_GLuint_GLuint *)packed;
            ARGS_void_GLuint_GLenum_GLsizei_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLuint_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLenum_GLuint_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLuint_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLuint_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_const_GLbyte___GENPT__: {
            PACKED_void_GLuint_const_GLbyte___GENPT__ *unpacked = (PACKED_void_GLuint_const_GLbyte___GENPT__ *)packed;
            ARGS_void_GLuint_const_GLbyte___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_const_GLdouble___GENPT__: {
            PACKED_void_GLuint_const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLuint_const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLuint_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_const_GLshort___GENPT__: {
            PACKED_void_GLuint_const_GLshort___GENPT__ *unpacked = (PACKED_void_GLuint_const_GLshort___GENPT__ *)packed;
            ARGS_void_GLuint_const_GLshort___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_const_GLubyte___GENPT__: {
            PACKED_void_GLuint_const_GLubyte___GENPT__ *unpacked = (PACKED_void_GLuint_const_GLubyte___GENPT__ *)packed;
            ARGS_void_GLuint_const_GLubyte___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_const_GLuint___GENPT__: {
            PACKED_void_GLuint_const_GLuint___GENPT__ *unpacked = (PACKED_void_GLuint_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLuint_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_const_GLushort___GENPT__: {
            PACKED_void_GLuint_const_GLushort___GENPT__ *unpacked = (PACKED_void_GLuint_const_GLushort___GENPT__ *)packed;
            ARGS_void_GLuint_const_GLushort___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLuint_GLintptr_GLsizei: {
            PACKED_void_GLuint_GLuint_GLuint_GLintptr_GLsizei *unpacked = (PACKED_void_GLuint_GLuint_GLuint_GLintptr_GLsizei *)packed;
            ARGS_void_GLuint_GLuint_GLuint_GLintptr_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLint_GLenum_GLsizei_GLintptr: {
            PACKED_void_GLuint_GLuint_GLint_GLenum_GLsizei_GLintptr *unpacked = (PACKED_void_GLuint_GLuint_GLint_GLenum_GLsizei_GLintptr *)packed;
            ARGS_void_GLuint_GLuint_GLint_GLenum_GLsizei_GLintptr args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLsizei_GLintptr: {
            PACKED_void_GLuint_GLuint_GLsizei_GLintptr *unpacked = (PACKED_void_GLuint_GLuint_GLsizei_GLintptr *)packed;
            ARGS_void_GLuint_GLuint_GLsizei_GLintptr args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLenum_GLsizei_GLintptr: {
            PACKED_void_GLuint_GLuint_GLenum_GLsizei_GLintptr *unpacked = (PACKED_void_GLuint_GLuint_GLenum_GLsizei_GLintptr *)packed;
            ARGS_void_GLuint_GLuint_GLenum_GLsizei_GLintptr args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLenum_GLint_GLenum_GLsizei_GLintptr: {
            PACKED_void_GLuint_GLuint_GLenum_GLint_GLenum_GLsizei_GLintptr *unpacked = (PACKED_void_GLuint_GLuint_GLenum_GLint_GLenum_GLsizei_GLintptr *)packed;
            ARGS_void_GLuint_GLuint_GLenum_GLint_GLenum_GLsizei_GLintptr args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLint_GLenum_GLboolean_GLuint: {
            PACKED_void_GLuint_GLuint_GLint_GLenum_GLboolean_GLuint *unpacked = (PACKED_void_GLuint_GLuint_GLint_GLenum_GLboolean_GLuint *)packed;
            ARGS_void_GLuint_GLuint_GLint_GLenum_GLboolean_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLint_GLenum_GLuint: {
            PACKED_void_GLuint_GLuint_GLint_GLenum_GLuint *unpacked = (PACKED_void_GLuint_GLuint_GLint_GLenum_GLuint *)packed;
            ARGS_void_GLuint_GLuint_GLint_GLenum_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLuint_GLint_GLenum_GLsizei_GLintptr: {
            PACKED_void_GLuint_GLuint_GLuint_GLint_GLenum_GLsizei_GLintptr *unpacked = (PACKED_void_GLuint_GLuint_GLuint_GLint_GLenum_GLsizei_GLintptr *)packed;
            ARGS_void_GLuint_GLuint_GLuint_GLint_GLenum_GLsizei_GLintptr args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLuint_GLint_GLenum_GLboolean_GLsizei_GLintptr: {
            PACKED_void_GLuint_GLuint_GLuint_GLint_GLenum_GLboolean_GLsizei_GLintptr *unpacked = (PACKED_void_GLuint_GLuint_GLuint_GLint_GLenum_GLboolean_GLsizei_GLintptr *)packed;
            ARGS_void_GLuint_GLuint_GLuint_GLint_GLenum_GLboolean_GLsizei_GLintptr args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case FORMAT_void_GLuint_GLdouble: {
            PACKED_void_GLuint_GLdouble *unpacked = (PACKED_void_GLuint_GLdouble *)packed;
            ARGS_void_GLuint_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLfloat: {
            PACKED_void_GLuint_GLfloat *unpacked = (PACKED_void_GLuint_GLfloat *)packed;
            ARGS_void_GLuint_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLhalfNV: {
            PACKED_void_GLuint_GLhalfNV *unpacked = (PACKED_void_GLuint_GLhalfNV *)packed;
            ARGS_void_GLuint_GLhalfNV args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_const_GLhalfNV___GENPT__: {
            PACKED_void_GLuint_const_GLhalfNV___GENPT__ *unpacked = (PACKED_void_GLuint_const_GLhalfNV___GENPT__ *)packed;
            ARGS_void_GLuint_const_GLhalfNV___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLshort: {
            PACKED_void_GLuint_GLshort *unpacked = (PACKED_void_GLuint_GLshort *)packed;
            ARGS_void_GLuint_GLshort args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLfloat_GLfloat: {
            PACKED_void_GLuint_GLfloat_GLfloat *unpacked = (PACKED_void_GLuint_GLfloat_GLfloat *)packed;
            ARGS_void_GLuint_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLhalfNV_GLhalfNV: {
            PACKED_void_GLuint_GLhalfNV_GLhalfNV *unpacked = (PACKED_void_GLuint_GLhalfNV_GLhalfNV *)packed;
            ARGS_void_GLuint_GLhalfNV_GLhalfNV args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLshort_GLshort: {
            PACKED_void_GLuint_GLshort_GLshort *unpacked = (PACKED_void_GLuint_GLshort_GLshort *)packed;
            ARGS_void_GLuint_GLshort_GLshort args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLdouble_GLdouble_GLdouble: {
            PACKED_void_GLuint_GLdouble_GLdouble_GLdouble *unpacked = (PACKED_void_GLuint_GLdouble_GLdouble_GLdouble *)packed;
            ARGS_void_GLuint_GLdouble_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLhalfNV_GLhalfNV_GLhalfNV: {
            PACKED_void_GLuint_GLhalfNV_GLhalfNV_GLhalfNV *unpacked = (PACKED_void_GLuint_GLhalfNV_GLhalfNV_GLhalfNV *)packed;
            ARGS_void_GLuint_GLhalfNV_GLhalfNV_GLhalfNV args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLshort_GLshort_GLshort: {
            PACKED_void_GLuint_GLshort_GLshort_GLshort *unpacked = (PACKED_void_GLuint_GLshort_GLshort_GLshort *)packed;
            ARGS_void_GLuint_GLshort_GLshort_GLshort args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLubyte_GLubyte_GLubyte_GLubyte: {
            PACKED_void_GLuint_GLubyte_GLubyte_GLubyte_GLubyte *unpacked = (PACKED_void_GLuint_GLubyte_GLubyte_GLubyte_GLubyte *)packed;
            ARGS_void_GLuint_GLubyte_GLubyte_GLubyte_GLubyte args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLdouble_GLdouble_GLdouble_GLdouble: {
            PACKED_void_GLuint_GLdouble_GLdouble_GLdouble_GLdouble *unpacked = (PACKED_void_GLuint_GLdouble_GLdouble_GLdouble_GLdouble *)packed;
            ARGS_void_GLuint_GLdouble_GLdouble_GLdouble_GLdouble args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat: {
            PACKED_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (PACKED_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLhalfNV_GLhalfNV_GLhalfNV_GLhalfNV: {
            PACKED_void_GLuint_GLhalfNV_GLhalfNV_GLhalfNV_GLhalfNV *unpacked = (PACKED_void_GLuint_GLhalfNV_GLhalfNV_GLhalfNV_GLhalfNV *)packed;
            ARGS_void_GLuint_GLhalfNV_GLhalfNV_GLhalfNV_GLhalfNV args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLshort_GLshort_GLshort_GLshort: {
            PACKED_void_GLuint_GLshort_GLshort_GLshort_GLshort *unpacked = (PACKED_void_GLuint_GLshort_GLshort_GLshort_GLshort *)packed;
            ARGS_void_GLuint_GLshort_GLshort_GLshort_GLshort args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLenum_GLboolean_GLsizei_GLuint_GLuint: {
            PACKED_void_GLuint_GLint_GLenum_GLboolean_GLsizei_GLuint_GLuint *unpacked = (PACKED_void_GLuint_GLint_GLenum_GLboolean_GLsizei_GLuint_GLuint *)packed;
            ARGS_void_GLuint_GLint_GLenum_GLboolean_GLsizei_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLenum_GLboolean_GLuint: {
            PACKED_void_GLuint_GLint_GLenum_GLboolean_GLuint *unpacked = (PACKED_void_GLuint_GLint_GLenum_GLboolean_GLuint *)packed;
            ARGS_void_GLuint_GLint_GLenum_GLboolean_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLenum_GLboolean_GLsizei: {
            PACKED_void_GLuint_GLint_GLenum_GLboolean_GLsizei *unpacked = (PACKED_void_GLuint_GLint_GLenum_GLboolean_GLsizei *)packed;
            ARGS_void_GLuint_GLint_GLenum_GLboolean_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLuint_GLuint_GLuint: {
            PACKED_void_GLuint_GLuint_GLuint_GLuint_GLuint *unpacked = (PACKED_void_GLuint_GLuint_GLuint_GLuint_GLuint *)packed;
            ARGS_void_GLuint_GLuint_GLuint_GLuint_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLenum_GLuint: {
            PACKED_void_GLuint_GLint_GLenum_GLuint *unpacked = (PACKED_void_GLuint_GLint_GLenum_GLuint *)packed;
            ARGS_void_GLuint_GLint_GLenum_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLenum_GLsizei: {
            PACKED_void_GLuint_GLint_GLenum_GLsizei *unpacked = (PACKED_void_GLuint_GLint_GLenum_GLsizei *)packed;
            ARGS_void_GLuint_GLint_GLenum_GLsizei args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLenum_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLint64EXT: {
            PACKED_void_GLuint_GLint64EXT *unpacked = (PACKED_void_GLuint_GLint64EXT *)packed;
            ARGS_void_GLuint_GLint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_const_GLint64EXT___GENPT__: {
            PACKED_void_GLuint_const_GLint64EXT___GENPT__ *unpacked = (PACKED_void_GLuint_const_GLint64EXT___GENPT__ *)packed;
            ARGS_void_GLuint_const_GLint64EXT___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLuint64EXT: {
            PACKED_void_GLuint_GLuint64EXT *unpacked = (PACKED_void_GLuint_GLuint64EXT *)packed;
            ARGS_void_GLuint_GLuint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_const_GLuint64EXT___GENPT__: {
            PACKED_void_GLuint_const_GLuint64EXT___GENPT__ *unpacked = (PACKED_void_GLuint_const_GLuint64EXT___GENPT__ *)packed;
            ARGS_void_GLuint_const_GLuint64EXT___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLuint_GLint64EXT_GLint64EXT: {
            PACKED_void_GLuint_GLint64EXT_GLint64EXT *unpacked = (PACKED_void_GLuint_GLint64EXT_GLint64EXT *)packed;
            ARGS_void_GLuint_GLint64EXT_GLint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLuint64EXT_GLuint64EXT: {
            PACKED_void_GLuint_GLuint64EXT_GLuint64EXT *unpacked = (PACKED_void_GLuint_GLuint64EXT_GLuint64EXT *)packed;
            ARGS_void_GLuint_GLuint64EXT_GLuint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLint64EXT_GLint64EXT_GLint64EXT: {
            PACKED_void_GLuint_GLint64EXT_GLint64EXT_GLint64EXT *unpacked = (PACKED_void_GLuint_GLint64EXT_GLint64EXT_GLint64EXT *)packed;
            ARGS_void_GLuint_GLint64EXT_GLint64EXT_GLint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLuint64EXT_GLuint64EXT_GLuint64EXT: {
            PACKED_void_GLuint_GLuint64EXT_GLuint64EXT_GLuint64EXT *unpacked = (PACKED_void_GLuint_GLuint64EXT_GLuint64EXT_GLuint64EXT *)packed;
            ARGS_void_GLuint_GLuint64EXT_GLuint64EXT_GLuint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint64EXT_GLint64EXT_GLint64EXT_GLint64EXT: {
            PACKED_void_GLuint_GLint64EXT_GLint64EXT_GLint64EXT_GLint64EXT *unpacked = (PACKED_void_GLuint_GLint64EXT_GLint64EXT_GLint64EXT_GLint64EXT *)packed;
            ARGS_void_GLuint_GLint64EXT_GLint64EXT_GLint64EXT_GLint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLuint64EXT_GLuint64EXT_GLuint64EXT_GLuint64EXT: {
            PACKED_void_GLuint_GLuint64EXT_GLuint64EXT_GLuint64EXT_GLuint64EXT *unpacked = (PACKED_void_GLuint_GLuint64EXT_GLuint64EXT_GLuint64EXT_GLuint64EXT *)packed;
            ARGS_void_GLuint_GLuint64EXT_GLuint64EXT_GLuint64EXT_GLuint64EXT args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLboolean_GLuint: {
            PACKED_void_GLuint_GLenum_GLboolean_GLuint *unpacked = (PACKED_void_GLuint_GLenum_GLboolean_GLuint *)packed;
            ARGS_void_GLuint_GLenum_GLboolean_GLuint args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLenum_GLboolean_const_GLuint___GENPT__: {
            PACKED_void_GLuint_GLenum_GLboolean_const_GLuint___GENPT__ *unpacked = (PACKED_void_GLuint_GLenum_GLboolean_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLuint_GLenum_GLboolean_const_GLuint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLint_GLenum_GLboolean_GLsizei_const_GLvoid___GENPT__: {
            PACKED_void_GLuint_GLint_GLenum_GLboolean_GLsizei_const_GLvoid___GENPT__ *unpacked = (PACKED_void_GLuint_GLint_GLenum_GLboolean_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLuint_GLint_GLenum_GLboolean_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_const_GLhalfNV___GENPT__: {
            PACKED_void_GLuint_GLsizei_const_GLhalfNV___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_const_GLhalfNV___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_const_GLhalfNV___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_const_GLshort___GENPT__: {
            PACKED_void_GLuint_GLsizei_const_GLshort___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_const_GLshort___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_const_GLshort___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_const_GLubyte___GENPT__: {
            PACKED_void_GLuint_GLsizei_const_GLubyte___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_const_GLubyte___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_const_GLubyte___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_GLenum_GLuint_GLuint___GENPT___GLuint64EXT___GENPT__: {
            PACKED_GLenum_GLuint_GLuint___GENPT___GLuint64EXT___GENPT__ *unpacked = (PACKED_GLenum_GLuint_GLuint___GENPT___GLuint64EXT___GENPT__ *)packed;
            ARGS_GLenum_GLuint_GLuint___GENPT___GLuint64EXT___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLenum_const_GLdouble___GENPT__: {
            PACKED_void_GLuint_GLuint_GLenum_const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLuint_GLuint_GLenum_const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLuint_GLuint_GLenum_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLuint_GLuint_GLenum_const_GLint___GENPT__: {
            PACKED_void_GLuint_GLuint_GLenum_const_GLint___GENPT__ *unpacked = (PACKED_void_GLuint_GLuint_GLenum_const_GLint___GENPT__ *)packed;
            ARGS_void_GLuint_GLuint_GLenum_const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLsync_GLbitfield_GLuint64: {
            PACKED_void_GLsync_GLbitfield_GLuint64 *unpacked = (PACKED_void_GLsync_GLbitfield_GLuint64 *)packed;
            ARGS_void_GLsync_GLbitfield_GLuint64 args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3);
            break;
        }
        case FORMAT_void_GLuint_GLsizei_const_GLuint___GENPT___const_GLfloat___GENPT__: {
            PACKED_void_GLuint_GLsizei_const_GLuint___GENPT___const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLuint_GLsizei_const_GLuint___GENPT___const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLuint_GLsizei_const_GLuint___GENPT___const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case FORMAT_void_GLint_const_GLbyte___GENPT__: {
            PACKED_void_GLint_const_GLbyte___GENPT__ *unpacked = (PACKED_void_GLint_const_GLbyte___GENPT__ *)packed;
            ARGS_void_GLint_const_GLbyte___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLint_const_GLdouble___GENPT__: {
            PACKED_void_GLint_const_GLdouble___GENPT__ *unpacked = (PACKED_void_GLint_const_GLdouble___GENPT__ *)packed;
            ARGS_void_GLint_const_GLdouble___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLint_const_GLfloat___GENPT__: {
            PACKED_void_GLint_const_GLfloat___GENPT__ *unpacked = (PACKED_void_GLint_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLint_const_GLfloat___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLint_const_GLint___GENPT__: {
            PACKED_void_GLint_const_GLint___GENPT__ *unpacked = (PACKED_void_GLint_const_GLint___GENPT__ *)packed;
            ARGS_void_GLint_const_GLint___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        case FORMAT_void_GLint_const_GLshort___GENPT__: {
            PACKED_void_GLint_const_GLshort___GENPT__ *unpacked = (PACKED_void_GLint_const_GLshort___GENPT__ *)packed;
            ARGS_void_GLint_const_GLshort___GENPT__ args = unpacked->args;
            unpacked->func(args.a1, args.a2);
            break;
        }
        default:
            fprintf(stderr, "warning: glPackedCall with unknown format: %d\n", packed->format);
            break;
    }
}
#endif
