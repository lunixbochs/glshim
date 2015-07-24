#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

#include "glouija/glouija.h"
#include "remote.h"

int main(int argc, char **argv) {
    if (argc == 1) {
        int pid = remote_spawn(argv[0]);
        GlouijaCall c = {
            .args = 1,
            .type = GLO_CALL_TYPE_CALL,
            .arg = {
                {.type = GLO_ARG_TYPE_UINT, .data.ui = 42},
                0,
            },
        };
        glouija_command_write(&c);
        glouija_command_read(&c);
        if (c.args != 1 || c.arg[0].data.ui != 43) {
            fprintf(stderr, "Bad response from server.\n");
            return 1;
        }
        int status = 0;
        waitpid(pid, &status, 0);
        if (WEXITSTATUS(status)) {
            fprintf(stderr, "Error from libgl_remote.\n");
            return 1;
        }
    } else {
        int fd = atoi(argv[1]);
        if (glouija_init_server(fd)) {
            fprintf(stderr, "Error mapping shared memory from fd %d.\n", fd);
            return 2;
        }
        GlouijaCall c;
        glouija_command_read(&c);
        if (c.args != 1 || c.arg[0].data.ui != 42) {
            fprintf(stderr, "Bad command from client.\n");
            return 1;
        }
        GlouijaCall ret = {
            .args = 1,
            .type = GLO_CALL_TYPE_CALL,
            .arg = {
                {.type = GLO_ARG_TYPE_UINT, .data.ui = c.arg[0].data.ui + 1},
                0,
            },
        };
        glouija_command_write(&ret);
    }
    return 0;
}
