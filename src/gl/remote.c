#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <X11/Xlib.h>

#include "block.h"
#include "gl_helpers.h"
#include "glouija/glouija.h"
#include "remote.h"
#include "wrap/glpack.h"
#include "wrap/types.h"

#define GLOUIJA_CALL_INIT(ret_size)                            \
    {                                                          \
        .args = 1,                                             \
        .type = GLO_CALL_TYPE_CALL,                            \
        .arg = {                                               \
            {.type = GLO_ARG_TYPE_UINT, .data.ui = ret_size},  \
        0},                                                    \
    }


int remote_spawn(const char *path) {
    if (path == NULL) {
        path = "libgl_remote";
    }
    int fd = glouija_init_client();
    int pid = fork();
    if (pid == 0) {
        int gdb = getenv("LIBGL_REMOTE_GDB");
        const char *exec = gdb ? "gdb" : path;
        char **argv;
        char **fd_pos;
        char *argv_gdb[] = {"gdb", "--args", (char *)path, NULL, NULL};
        char *argv_real[] = {(char *)path, NULL, NULL};
        if (gdb) {
            argv = argv_gdb;
            fd_pos = &argv[3];
        } else {
            argv = argv_real;
            fd_pos = &argv[1];
        }
        if (asprintf(fd_pos, "%d", fd) < 0) {
            fprintf(stderr, "libGL: asprintf allocation failed\n");
        } else {
            execvp(exec, argv);
            if (errno) {
                fprintf(stderr, "libGL: launching '%s' failed with %d (%s)\n", path, errno, strerror(errno));
            }
        }
    }
    return pid;
}

static void write_memcpy(uintptr_t *dst, void *src, size_t size) {
    memcpy(*(void **)dst, src, size);
    *dst += size;
}

static void write_uint32(uintptr_t *dst, uint32_t i) {
    **(uint32_t **)dst = i;
    *dst += 4;
}

static void *read_ptr(uintptr_t *src, size_t size) {
    void *pos = (void *)*src;
    *src += size;
    return pos;
}

static uint32_t read_uint32(uintptr_t *src) {
    uint32_t i = *(uint32_t *)src;
    *src += 4;
    return i;
}

void *remote_serialize_block(block_t *block, size_t *ret_size) {
    size_t size = sizeof(uint32_t) + sizeof(block_t);
    size += sizeof(uint32_t);
    if (block->vert) {
        size += block->len * 3 * sizeof(GLfloat);
    }
    size += sizeof(uint32_t);
    if (block->normal) {
        size += block->len * 3 * sizeof(GLfloat);
    }
    size += sizeof(uint32_t);
    if (block->color) {
        size += block->len * 4 * sizeof(GLfloat);
    }
    for (int i = 0; i < MAX_TEX; i++) {
        size += sizeof(uint32_t);
        if (block->tex[i]) {
            size += block->len * 2 * sizeof(GLfloat);
        }
    }
    if (ret_size) {
        *ret_size = size;
    }
    void *buf = malloc(size);
    uintptr_t pos = (uintptr_t)buf;
    write_uint32(&pos, REMOTE_BLOCK_DRAW);
    write_memcpy(&pos, block, sizeof(block_t));
    if (block->vert) {
        write_memcpy(&pos, block->vert, block->len * 3 * sizeof(GLfloat));
    }
    if (block->normal) {
        write_memcpy(&pos, block->normal, block->len * 3 * sizeof(GLfloat));
    }
    if (block->color) {
        write_memcpy(&pos, block->color, block->len * 4 * sizeof(GLfloat));
    }
    for (int i = 0; i < MAX_TEX; i++) {
        if (block->tex[i]) {
            write_memcpy(&pos, block->tex[i], block->len * 2 * sizeof(GLfloat));
        }
    }
    return buf;
}

block_t *remote_deserialize_block(void *buf) {
    uintptr_t pos = (uintptr_t)buf;
    pos += sizeof(uint32_t);
    block_t *block = (block_t *)read_ptr(&pos, sizeof(block_t));
    if (block->vert) {
        block->vert = (GLfloat *)read_ptr(&pos, block->len * 3 * sizeof(GLfloat));
    }
    if (block->normal) {
        block->normal = (GLfloat *)read_ptr(&pos, block->len * 3 * sizeof(GLfloat));
    }
    if (block->color) {
        block->color = (GLfloat *)read_ptr(&pos, block->len * 4 * sizeof(GLfloat));
    }
    for (int i = 0; i < MAX_TEX; i++) {
        if (block->tex[i]) {
            block->tex[i] = (GLfloat *)read_ptr(&pos, block->len * 2 * sizeof(GLfloat));
        }
    }
    return block;
}

static int remote_call_preprocess(GlouijaCall *c, packed_call_t *call) {
    switch (call->index) {
        case glDeleteTextures_INDEX:
        {
            glDeleteTextures_PACKED *n = (glDeleteTextures_PACKED *)call;
            glouija_add_block(c, n->args.textures, n->args.n * sizeof(GLuint), true);
            break;
        }
        case glTexImage2D_INDEX:
        {
            glTexImage2D_PACKED *n = (glTexImage2D_PACKED *)call;
            size_t size = n->args.width * n->args.height * gl_pixel_sizeof(n->args.format, n->args.type);
            glouija_add_block(c, n->args.pixels, size, true);
            break;
        }
        case glXChooseVisual_INDEX:
        {
            glXChooseVisual_PACKED *n = (glXChooseVisual_PACKED *)call;
            int *attribList = n->args.attribList;
            int size = 0;
            while (attribList[size++]) {}
            glouija_add_block(c, attribList, size, true);
            return 1;
        }
    }
    return 0;
}

static void remote_call_postprocess(GlouijaCall *c, GlouijaCall *ret, packed_call_t *call, void *ret_v, size_t ret_size) {
    switch (call->index) {
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
    }
}

static void remote_call_raw(packed_call_t *call, size_t pack_size, void *ret_v, size_t ret_size) {
    GlouijaCall c = GLOUIJA_CALL_INIT(ret_size);
    glouija_add_block(&c, call, pack_size, true);
    int extra = remote_call_preprocess(&c, call);
    glouija_command_write(&c);
    GlouijaCall ret = {0};
    if (ret_size || extra) {
        glouija_command_read(&ret);
    }
    if (ret_size) {
        memcpy(ret_v, ret.arg[0].data.block.data, ret_size);
    }
    remote_call_postprocess(&c, &ret, call, ret_v, ret_size);
}

void remote_call(packed_call_t *call, void *ret_v) {
    int ret_size = INDEX_RET_SIZE[call->index];
    int pack_size = INDEX_PACKED_SIZE[call->index];
    if (ret_v == NULL) {
        ret_size = 0;
    }
    if (call->index >= 0) {
        printf("client call: ");
        glIndexedPrint(call);
    }
    remote_call_raw(call, pack_size, ret_v, ret_size);
    if (ret_size > 0) {
        printf("returned (%d): ", ret_size);
        if (ret_size == 4) {
            printf("0x%x\n", *(uint32_t *)ret_v);
        } else if (ret_size == 8) {
            printf("0x%x\n", *(uint64_t *)ret_v);
        } else {
            for (int i = 0; i < ret_size; i++) {
                printf("%x", ((unsigned char *)ret_v)[i]);
            }
            printf("\n");
        }
    }
}

void remote_serve_call(GlouijaCall *c, GlouijaCall *response, packed_call_t *call, void *ret) {
    if (call->index >= 0) {
        printf("remote call: ");
        glIndexedPrint(call);
    }
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
        case REMOTE_RENDER_RASTER:
        {
            return;
        }
        case glXChooseVisual_INDEX:
        {
            PACKED_glXChooseVisual *n = (PACKED_glXChooseVisual *)call;
            n->args.attribList = c->arg[2].data.block.data;
            int *attribList = n->args.attribList;
            XVisualInfo *info = NULL;
            glIndexedCall(call, (void *)&info);
            if (info) {
                glouija_add_block(response, info, sizeof(XVisualInfo), true);
            }
            return;
        }
    }
    glIndexedCall(call, (void *)ret);
}

int remote_serve(int fd) {
    if (glouija_init_server(fd)) {
        fprintf(stderr, "error mapping shared memory from fd %d\n", fd);
        return 2;
    }
    char retbuf[8];
    while (1) {
        GlouijaCall c = {0};
        glouija_command_read(&c);
        if (c.args < 2) {
            fprintf(stderr, "Invalid remote command.\n");
            return 3;
        }
        int retsize = c.arg[0].data.ui;
        packed_call_t *call = c.arg[1].data.block.data;
        void *ret = NULL;
        if (retsize > 8) {
            ret = malloc(retsize);
        } else if (retsize > 0) {
            ret = retbuf;
        }
        GlouijaCall response = {.args = 0, .type = GLO_CALL_TYPE_CALL, 0};
        remote_serve_call(&c, &response, call, ret);
        if (retsize > 0) {
            glouija_add_block(&response, ret, retsize, true);
        }
        if (response.args > 0) {
            glouija_command_write(&response);
        }
        free(call);
        if (retsize > 8) {
            free(ret);
        }
    }
}

void remote_block_draw(block_t *block) {
    size_t size = 0;
    void *buf = remote_serialize_block(block, &size);
    remote_call_raw(buf, size, NULL, 0);
    free(buf);
}

void remote_gl_get(GLenum pname, GLenum type, GLvoid *params) {
    size_t buf_size = sizeof(uint32_t) * 3;
    void *buf = malloc(buf_size);
    uintptr_t pos = (uintptr_t )buf;
    write_uint32(&pos, REMOTE_GL_GET);
    write_uint32(&pos, pname);
    write_uint32(&pos, type);
    size_t param_size = gl_sizeof(type) * gl_getv_length(pname);
    remote_call_raw((packed_call_t *)buf, buf_size, params, param_size);
}

void remote_render_raster(glstate_t *state) {
    viewport_state_t *v = &state->viewport;
    size_t raster_size = v->nwidth * v->nheight * gl_pixel_sizeof(GL_RGBA, GL_UNSIGNED_BYTE);
    uint32_t buf_size = sizeof(uint32_t) * 2;
    void *buf = malloc(buf_size);
    uintptr_t pos = (uintptr_t)buf;
    write_uint32(&pos, REMOTE_RENDER_RASTER);
    write_uint32(&pos, raster_size);
    GlouijaCall c = GLOUIJA_CALL_INIT(0);
    glouija_add_block(&c, buf, buf_size, true);
    glouija_add_block(&c, state->raster.buf, raster_size, true);
    glouija_command_write(&c);
}

void remote_glEnable(GLenum cap) {
    remote_call(pack_glEnable(cap), NULL);
}

void remote_glDisable(GLenum cap) {
    remote_call(pack_glDisable(cap), NULL);
}

void remote_glEnableClientState(GLenum cap) {
    remote_call(pack_glEnableClientState(cap), NULL);
}

void remote_glDisableClientState(GLenum cap) {
    remote_call(pack_glDisableClientState(cap), NULL);
}
