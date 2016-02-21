#include <assert.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

#include "remote.h"
#include "wrap/glpack.h"
#include "types.h"
#include "ring.h"

int main(int argc, char **argv) {
    if (argc == 1) {
        signal(SIGCHLD, SIG_IGN);
        int pid = remote_spawn(argv[0]);
        if (pid < 0) {
            fprintf(stderr, "Error spawning remote.\n");
            return 1;
        }
        state.remote = 1;
        assert(strstr(glGetString(GL_VERSION), "glshim"));
        kill(pid, SIGTERM);
    } else {
        if (remote_serve(argv[1])) {
            fprintf(stderr, "Error mapping shared memory: %s\n", argv[1]);
            return 2;
        }
    }
    return 0;
}
