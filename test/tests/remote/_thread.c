#include <assert.h>
#include <fcntl.h>
#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <sys/wait.h>

#include "remote.h"
#include "wrap/glpack.h"
#include "types.h"
#include "ring.h"

#define RACE_COUNT 1000000

pthread_mutex_t thread_join = PTHREAD_MUTEX_INITIALIZER;

typedef struct {
    int sync_fd;
} remote_args;

void *remote_process(remote_args *args) {
    pthread_mutex_lock(&thread_join);
    ring_t _ring = {0};
    ring_t *ring = &_ring;
    int fd = accept(args->sync_fd, NULL, 0);
    ring_setup(ring, fd);
    if (ring_server_handshake(ring)) {
        fprintf(stderr, "Error doing server handshake.\n");
        goto error;
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
            fprintf(stderr, "read=%d, mark=%d, call=%d, write=%d, %02X%02X %02X%02X %02x%02x %02x%02x\n", *ring->read, *ring->mark, (uintptr_t)c - (uintptr_t)ring->buf, *ring->write, c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7]);
            kill(getppid(), SIGTERM);
            return 1;
        }
        // fprintf(stderr, "reading call\n");
        packed_call_t *call = buf + sizeof(uint32_t);
        unsigned char *c = call;
        // fprintf(stderr, "read=%d, mark=%d, call=%d, write=%d, %02X%02X %02X%02X %02x%02x %02x%02x %d\n", *ring->read, *ring->mark, (uintptr_t)c - (uintptr_t)ring->buf, *ring->write, c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], call->index);

        if (call->index != REMOTE_BLOCK_DRAW) {
            fprintf(stderr, "ERROR: Expected REMOTE_BLOCK_DRAW. Got: %d\n", call->index);
            fprintf(stderr, "read=%d, mark=%d, call=%d, write=%d, %02X%02X %02X%02X %02x%02x %02x%02x %d\n", *ring->read, *ring->mark, (uintptr_t)c - (uintptr_t)ring->buf, *ring->write, c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], call->index);
            kill(getppid(), SIGTERM);
            goto error;
        }
        block_t *block = remote_read_block(ring, (void *)call);
        // fprintf(stderr, "block->len: %d\n", block->len);
        if (block->len != 4) {
            fprintf(stderr, "ERROR: Expected block->len == 4, got: %d\n", block->len);
            fprintf(stderr, "read=%d, mark=%d, call=%d, write=%d, %02X%02X %02X%02X %02x%02x %02x%02x %d\n", *ring->read, *ring->mark, (uintptr_t)c - (uintptr_t)ring->buf, *ring->write, c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], call->index);
            kill(getppid(), SIGTERM);
            goto error;
        }
        ring_advance(ring);
    }
    pthread_mutex_unlock(&thread_join);
    return 0;
error:
    pthread_mutex_unlock(&thread_join);
    return 1;
}

int main(int argc, char **argv) {
    state.remote = 1;
    pthread_t thread;

    // create listening socket
    int s = socket(AF_LOCAL, SOCK_STREAM, 0);
    struct sockaddr_un addr = {
        .sun_family = AF_UNIX,
        .sun_path = "/tmp/glshim.0",
    };
    unlink(addr.sun_path);
    int enable = 1;
    setsockopt(s, SOL_SOCKET, SO_REUSEADDR, &enable, sizeof(int));
    if (bind(s, (struct sockaddr *)&addr, sizeof(addr))) {
        perror("connect");
        return 1;
    }
    if (listen(s, 1)) {
        perror("listen");
        return 1;
    }

    // spawn server thread
    remote_args args = {s};
    pthread_create(&thread, NULL, remote_process, &args);

    // start client connection
    setenv("LIBGL_REMOTE_NOSPAWN", addr.sun_path, 1);
    int pid = remote_spawn(argv[0]);

    // run commands
    for (int i = 0; i < RACE_COUNT; i++) {
        glRectf(0, 0, 1, 1);
    }
    pthread_mutex_lock(&thread_join);
    return 0;
}
