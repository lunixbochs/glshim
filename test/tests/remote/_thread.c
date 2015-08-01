#include <assert.h>
#include <fcntl.h>
#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

#include "remote.h"
#include "wrap/glpack.h"
#include "types.h"
#include "ring.h"

#define RACE_COUNT 1000000

typedef struct {
    char *shm_name;
    int sync_fd;
} remote_args;

void *remote_process(remote_args *args) {
    ring_t _ring = {0};
    ring_t *ring = &_ring;
    if (ring_server(ring, args->shm_name, args->sync_fd)) {
        fprintf(stderr, "Error mapping shared memory: %s\n", args->shm_name);
        return 2;
    }
    for (int i = 0; i < RACE_COUNT - 1; i++) {
        // fprintf(stderr, "remote %d\n", i);
        // fprintf(stderr, "reading retsize\n");
        void *buf = ring_read(ring, NULL);
        uint32_t retsize = *(uint32_t *)buf;
        // fprintf(stderr, "retsize=%d\n", retsize);
        if (retsize != 0) {
            unsigned char *c = buf;
            fprintf(stderr, "ERROR: Expected retsize=0. Got: %d\n", retsize);
            fprintf(stderr, "read=%d, mark=%d, call=%d, write=%d, %02X%02X %02X%02X %02x%02x %02x%02x\n", *ring->read, ring->mark, (uintptr_t)c - (uintptr_t)ring->buf, *ring->write, c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7]);
            kill(getppid(), SIGTERM);
            return 1;
        }
        // fprintf(stderr, "reading call\n");
        packed_call_t *call = buf + sizeof(uint32_t);
        unsigned char *c = call;
        // fprintf(stderr, "read=%d, mark=%d, call=%d, write=%d, %02X%02X %02X%02X %02x%02x %02x%02x %d\n", *ring->read, ring->mark, (uintptr_t)c - (uintptr_t)ring->buf, *ring->write, c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], call->index);

        if (call->index != REMOTE_BLOCK_DRAW) {
            fprintf(stderr, "ERROR: Expected REMOTE_BLOCK_DRAW. Got: %d\n", call->index);
            fprintf(stderr, "read=%d, mark=%d, call=%d, write=%d, %02X%02X %02X%02X %02x%02x %02x%02x %d\n", *ring->read, ring->mark, (uintptr_t)c - (uintptr_t)ring->buf, *ring->write, c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], call->index);
            kill(getppid(), SIGTERM);
            return 1;
        }
        block_t *block = remote_read_block(ring, (void *)call);
        // fprintf(stderr, "block->len: %d\n", block->len);
        if (block->len != 4) {
            fprintf(stderr, "ERROR: Expected block->len == 4, got: %d\n", block->len);
            fprintf(stderr, "read=%d, mark=%d, call=%d, write=%d, %02X%02X %02X%02X %02x%02x %02x%02x %d\n", *ring->read, ring->mark, (uintptr_t)c - (uintptr_t)ring->buf, *ring->write, c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], call->index);
            kill(getppid(), SIGTERM);
            return 1;
        }
        ring_advance(ring);
    }
}

int main(int argc, char **argv) {
    setenv("LIBGL_REMOTE_NOSPAWN", "/tmp/glshim.0", 1);
    int pid = remote_spawn(argv[0]);
    state.remote = 1;
    pthread_t thread;
    remote_args args = {"/glshim.0", open("/tmp/glshim.0", O_RDWR)};
    pthread_create(&thread, NULL, remote_process, &args);
    for (int i = 0; i < RACE_COUNT; i++) {
        glRectf(0, 0, 1, 1);
    }
    pthread_join(&thread, NULL);
    return 0;
}
