#include <errno.h>
#include <semaphore.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/wait.h>
#include <unistd.h>

#include "block.h"
#include "gl_helpers.h"
#include "remote.h"
#include "ring.h"
#include "wrap/glpack.h"
#include "wrap/remote.h"
#include "wrap/types.h"

static ring_t ring = {0};
static int g_remote_noisy = 0;
static void (*old_sigchld)(int);

static void remote_sigchld(int sig) {
    if (state.remote) {
        int status;
        pid_t pid;
        while ((pid = waitpid(-1, &status, WNOHANG)) > 0) {
            if (pid == state.remote) {
                state.remote = 0;
                if (WIFSIGNALED(status)) {
                    fprintf(stderr, "libgl_remote killed with signal: %d\n", WTERMSIG(status));
                } else if (WIFEXITED(status)) {
                    fprintf(stderr, "libgl_remote exited with code: %d\n", WEXITSTATUS(status));
                }
            }
        }
        if (! state.remote) {
            abort();
        }
    }
    if (old_sigchld == SIG_DFL) {
        signal(sig, SIG_DFL);
        raise(sig);
        signal(sig, remote_sigchld);
    } else if (old_sigchld == SIG_IGN) {
        return;
    } else {
        old_sigchld(sig);
    }
}

int remote_spawn(const char *path) {
    unsetenv("LIBGL_REMOTE");
    static int first = 1;
    if (first) {
        first = 0;
        old_sigchld = signal(SIGCHLD, remote_sigchld);
        g_remote_noisy = !!getenv("LIBGL_REMOTE_NOISY");
    }
    if (path == NULL) {
        path = "libgl_remote";
    }
    char *shm_name = ring_client(&ring, "glshim");
    if (! shm_name) {
        fprintf(stderr, "libGL: failed to allocate shm for remote\n");
        abort();
    }
    state.remote_ring = &ring;
    // this is how many frames will fit in the ringbuffer before it blocks
    for (int i = 0; i < 2; i++) {
        sem_post(ring.sync);
    }
    int pid = fork();
    if (pid == 0) {
        char *gdb = getenv("LIBGL_REMOTE_GDB");
        const char *exec = gdb ? "gdb" : path;
        char **argv;
        char *argv_gdb[] = {"gdb", "--args", (char *)path, shm_name, NULL};
        char *argv_real[] = {(char *)path, shm_name, NULL};
        if (gdb) {
            argv = argv_gdb;
        } else {
            argv = argv_real;
        }
        execvp(exec, argv);
        if (errno) {
            fprintf(stderr, "libGL: launching '%s' failed with %d (%s)\n", path, errno, strerror(errno));
            shm_unlink(shm_name);
            abort();
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
    if (block->vert) {
        size += block->len * 3 * sizeof(GLfloat);
    }
    if (block->normal) {
        size += block->len * 3 * sizeof(GLfloat);
    }
    if (block->color) {
        size += block->len * 4 * sizeof(GLfloat);
    }
    for (int i = 0; i < MAX_TEX; i++) {
        if (block->tex[i]) {
            size += block->len * 2 * sizeof(GLfloat);
        }
    }
    if (block->indices) {
        size += block->count * sizeof(GLushort);
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
    if (block->indices) {
        write_memcpy(&pos, block->indices, block->count * sizeof(GLushort));
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
    if (block->indices) {
        block->indices = (GLushort *)read_ptr(&pos, block->count * sizeof(GLushort));
    }
    return block;
}

static void remote_call_raw(packed_call_t *call, size_t pack_size, void *ret_v, uint32_t ret_size) {
    ring_write(&ring, &ret_size, sizeof(uint32_t));
    ring_write(&ring, call, pack_size);
    remote_local_pre(&ring, call);
    if (ret_size) {
        memcpy(ret_v, ring_read(&ring, NULL), ret_size);
        ring_advance(&ring);
    }
    remote_local_post(&ring, call, ret_v, ret_size);
}

void remote_call(packed_call_t *call, void *ret_v) {
    int ret_size = INDEX_RET_SIZE[call->index];
    int pack_size = INDEX_PACKED_SIZE[call->index];
    if (ret_v == NULL) {
        ret_size = 0;
    }
    if (call->index >= 0 && g_remote_noisy) {
        printf("client call: ");
        glIndexedPrint(call);
    }
    remote_call_raw(call, pack_size, ret_v, ret_size);
    if (ret_size > 0 && g_remote_noisy) {
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

int remote_serve(char *name) {
    if (ring_server(&ring, name)) {
        fprintf(stderr, "Error mapping shared memory: %s\n", name);
        return 2;
    }
    char retbuf[8];
    while (1) {
        uint32_t retsize = *(uint32_t *)ring_read(&ring, NULL);
        packed_call_t *call = (packed_call_t *)ring_read(&ring, NULL);
        void *ret = NULL;
        if (retsize > 8) {
            ret = malloc(retsize);
        } else if (retsize > 0) {
            ret = retbuf;
        }
        if (call->index >= 0 && g_remote_noisy) {
            printf("remote call: ");
            glIndexedPrint(call);
        }
        remote_target_pre(&ring, call, ret);
        if (retsize > 0) {
            ring_write(&ring, ret, retsize);
        }
        remote_target_post(&ring, call, ret);
        ring_advance(&ring);
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
