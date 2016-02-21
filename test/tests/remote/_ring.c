#include <signal.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

#include "ring.h"
#include "remote.h"

int main(int argc, char **argv) {
    if (argc == 1) {
        signal(SIGCHLD, SIG_IGN);
        int pid = remote_spawn(argv[0]);
        if (pid < 1) {
            fprintf(stderr, "failed to spawn remote\n");
            return 1;
        }
        ring_t *ring = state.remote_ring;
        for (int i = 0; i < 100000; i++) {
            uint32_t n = 42;
            ring_write(ring, &n, sizeof(uint32_t));
            uint32_t *resp = (uint32_t *)ring_read(ring, NULL);
            if (*resp != 43) {
                fprintf(stderr, "Bad response from server: %d != 43\n", *resp);
                return 1;
            }
            ring_advance(ring);
        }
        int status = 0;
        waitpid(pid, &status, 0);
        if (WEXITSTATUS(status)) {
            fprintf(stderr, "Error from libgl_remote.\n");
            return 1;
        }
    } else {
        ring_t _ring = {0};
        ring_t *ring = &_ring;
        ring_setup(ring, strtol(argv[1]+1, NULL, 10));
        if (ring_server_handshake(ring)) {
            fprintf(stderr, "Error doing server handshake\n", argv[1]);
            kill(getppid(), SIGTERM);
            return 2;
        }
        for (int i = 0; i < 100000; i++) {
            uint32_t *q = (uint32_t *)ring_read(ring, NULL);
            if (*q != 42) {
                fprintf(stderr, "Bad query from client: %d != 42\n", *q);
                kill(getppid(), SIGTERM);
                return 1;
            }
            uint32_t n = *q + 1;
            ring_advance(ring);
            ring_write(ring, &n, sizeof(uint32_t));
        }
    }
    return 0;
}
