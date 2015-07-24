#include <stdio.h>
#include <unistd.h>

#include "block.h"
#include "glouija/glouija.h"
#include "wrap/gles.h"
#include "wrap/types.h"

#include <string.h>

int remote_spawn(char *path) {
    if (path == NULL) {
        path = "libgl_remote";
    }
    int fd = glouija_init_client();
    int pid = fork();
    if (pid == 0) {
        char *argv[] = {path, NULL, NULL};
        asprintf(&argv[1], "%d", fd);
        execve(path, argv, NULL);
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
    printf("len: %d\n", block->len);
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
    write_uint32(&pos, (uint32_t)RENDER_BLOCK_INDEX);
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

void remote_call(packed_call_t *call, void *ret_v) {
    int ret_size = INDEX_RET_SIZE[call->index];
    int pack_size = INDEX_PACKED_SIZE[call->index];
    if (ret_v == NULL) {
        ret_size = 0;
    }
    GlouijaCall c = {
        .args = 2,
        .type = GLO_CALL_TYPE_CALL,
        .arg = {
            {
                .type = GLO_ARG_TYPE_BLOCK,
                .data.block = {
                    .data = call,
                    .size = pack_size,
                    .free = true,
                },
            },
            {
                .type = GLO_ARG_TYPE_UINT,
                .data.ui = ret_size,
            },
            0,
        },
    };
    glouija_command_write(&c);
    if (ret_size) {
        GlouijaCall ret = {0};
        glouija_command_read(&ret);
        memcpy(ret_v, ret.arg[0].data.block.data, ret_size);
    }
}

int remote_serve(int fd) {
    if (glouija_init_server(fd)) {
        fprintf(stderr, "error mapping shared memory from fd %d\n", fd);
        return 2;
    }
    while (1) {
        GlouijaCall c = {0};
        glouija_command_read(&c);
        if (c.args != 3) {
            fprintf(stderr, "Invalid remote command.\n");
            return 3;
        }
        packed_call_t *call = c.arg[0].data.block.data;
        int retsize = c.arg[1].data.ui;
        if (retsize > 0) {
            char retbuf[8];
            glIndexedCall(call, (void *)retbuf);
            GlouijaCall ret = {
                .args = 1,
                .type = GLO_CALL_TYPE_CALL,
                .arg = {
                    {.type = GLO_ARG_TYPE_BLOCK,
                    .data.block = {
                        .data = retbuf,
                        .size = retsize,
                        .free = true,
                    }}, 0,
                },
            };
            glouija_command_write(&ret);
        } else {
            glIndexedCall(call, NULL);
        }
        free(call);
    }
}

void remote_block_draw(block_t *block) {
    size_t size = 0;
    void *buf = remote_serialize_block(block, &size);
    GlouijaCall c = {
        .args = 2,
        .type = GLO_CALL_TYPE_CALL,
        .arg = {
            {
                .type = GLO_ARG_TYPE_BLOCK,
                .data.block = {
                    .data = buf,
                    .size = size,
                    .free = true,
                },
            },
            {
                .type = GLO_ARG_TYPE_UINT,
                .data.ui = 0,
            },
            0,
        },
    };
    glouija_command_write(&c);
    free(buf);
    return;
}
