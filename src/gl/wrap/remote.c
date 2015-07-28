#include "../remote.h"
#include "./glpack.h"
#include "./remote.h"
#include "gl_helpers.h"

int remote_local_pre(GlouijaCall *c, packed_call_t *call) {
    switch (call->index) {
        case glDeleteTextures_INDEX:
        {
            glDeleteTextures_PACKED *n = (glDeleteTextures_PACKED *)call;
            glouija_add_block(c, n->args.textures, n->args.n * sizeof(GLuint));
            break;
        }
        case glTexImage2D_INDEX:
        {
            glTexImage2D_PACKED *n = (glTexImage2D_PACKED *)call;
            size_t size = n->args.width * n->args.height * gl_pixel_sizeof(n->args.format, n->args.type);
            glouija_add_block(c, n->args.pixels, size);
            break;
        }
        case glLoadMatrixf_INDEX:
        {
            glLoadMatrixf_PACKED *n = (glLoadMatrixf_PACKED *)call;
            glouija_add_block(c, n->args.m, 16 * sizeof(GLfloat));
            break;
        }
        case glLightfv_INDEX:
        {
            glLightfv_PACKED *n = (glLightfv_PACKED *)call;
            int count = 1;
            switch (n->args.pname) {
                case GL_AMBIENT:
                case GL_DIFFUSE:
                case GL_SPECULAR:
                case GL_POSITION:
                    count = 4;
                    break;
                case GL_SPOT_DIRECTION:
                    count = 3;
                    break;
            }
            glouija_add_block(c, n->args.params, count * sizeof(GLfloat));
            break;
        }
        case glMaterialfv_INDEX:
        {
            glMaterialfv_PACKED *n = (glMaterialfv_PACKED *)call;
            int count = 4;
            switch (n->args.pname) {
                case GL_SHININESS:
                    count = 1;
                    break;
                case GL_COLOR_INDEXES:
                    count = 3;
                    break;
            }
            glouija_add_block(c, n->args.params, count * sizeof(GLfloat));
            break;
        }
        case glGenTextures_INDEX:
            return 1;
        case glBitmap_INDEX:
        {
            glBitmap_PACKED *n = (glBitmap_PACKED *)call;
            size_t size = ((n->args.width + 7) / 8) * n->args.height;
            glouija_add_block(c, n->args.bitmap, size);
            break;
        }
        case glDrawPixels_INDEX:
        {
            glDrawPixels_PACKED *n = (glDrawPixels_PACKED *)call;
            size_t size = n->args.width * n->args.height * gl_pixel_sizeof(n->args.format, n->args.type);
            glouija_add_block(c, n->args.pixels, size);
        }
#if 0
        // this is disabled to remove the X dependency for now
        // it looks like glXChooseVisual returns don't matter anyway
        case glXChooseVisual_INDEX:
        {
            glXChooseVisual_PACKED *n = (glXChooseVisual_PACKED *)call;
            int *attribList = n->args.attribList;
            int size = 0;
            while (attribList[size++]) {}
            glouija_add_block(c, attribList, size);
            return 1;
        }
#endif
    }
    return 0;
}

void remote_local_post(GlouijaCall *c, GlouijaCall *ret, packed_call_t *call, void *ret_v, size_t ret_size) {
    switch (call->index) {
        case glGenTextures_INDEX:
            glouija_copy_block(ret, 0, ((glGenTextures_PACKED *)call)->args.textures);
            break;
#if 0
        // see above
        case glXChooseVisual_INDEX:
        {
            glXChooseVisual_PACKED *n = (glXChooseVisual_PACKED *)call;
            XVisualInfo **ret_vis = (XVisualInfo **)ret_v;
            if (*ret_vis) {
                XVisualInfo *visual = ret->arg[1].data.block.data;
                int count;
                XVisualInfo tmp;
                XMatchVisualInfo(n->args.dpy, visual->screen, visual->depth, visual->class, &tmp);
                memcpy(visual, &tmp, sizeof(XVisualInfo));
                *ret_vis = visual;
            }
            break;
        }
#endif
    }
}

void remote_target_pre(GlouijaCall *c, GlouijaCall *response, packed_call_t *call, void *ret) {
    if (call->index >= 0) {
        printf("remote call: ");
        glIndexedPrint(call);
    }
    void *first = c->arg[2].data.block.data;
    switch (call->index) {
        case REMOTE_BLOCK_DRAW:
        {
            block_t *block = remote_deserialize_block((void *)call);
            bl_draw(block);
            return;
        }
        case REMOTE_GL_GET:
        {
            return;
        }
        case glDeleteTextures_INDEX:
            ((glDeleteTextures_PACKED *)call)->args.textures = first;
            break;
        case glTexImage2D_INDEX:
            ((glTexImage2D_PACKED *)call)->args.pixels = first;
            break;
        case glLoadMatrixf_INDEX:
            ((glLoadMatrixf_PACKED *)call)->args.m = first;
            break;
        case glLightfv_INDEX:
            ((glLightfv_PACKED *)call)->args.params = first;
            break;
        case glMaterialfv_INDEX:
            ((glMaterialfv_PACKED *)call)->args.params = first;
            break;
        case glBitmap_INDEX:
            ((glBitmap_PACKED *)call)->args.bitmap = first;
            break;
        case glDrawPixels_INDEX:
            ((glDrawPixels_PACKED *)call)->args.pixels = first;
            break;
        case glGenTextures_INDEX:
        {
            glGenTextures_PACKED *n = (glGenTextures_PACKED *)call;
            size_t size = n->args.n * sizeof(GLuint);
            n->args.textures = malloc(size);
            glIndexedCall(call, NULL);
            glouija_add_block(response, n->args.textures, size);
            return;
        }
#if 0
        // see above
        case glXChooseVisual_INDEX:
        {
            PACKED_glXChooseVisual *n = (PACKED_glXChooseVisual *)call;
            n->args.attribList = c->arg[2].data.block.data;
            int *attribList = n->args.attribList;
            XVisualInfo *info = NULL;
            glIndexedCall(call, (void *)&info);
            if (info) {
                glouija_add_block(response, info, sizeof(XVisualInfo));
            }
            return;
        }
#endif
    }
    glIndexedCall(call, (void *)ret);
}

void remote_target_post(GlouijaCall *c, GlouijaCall *response, packed_call_t *call, void *ret) {
    switch (call->index) {
        case glGenTextures_INDEX:
            free(((glGenTextures_PACKED *)call)->args.textures);
            break;
    }
}
