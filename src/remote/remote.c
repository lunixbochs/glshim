#include <stdio.h>

#include "gl/remote.h"

int main(int argc, char **argv) {
    if (argc < 3) {
        fprintf(stderr, "usage: %s <shm name> <pipe fd>\n", argv[0]);
        return 1;
    }
    if (remote_serve(argv[1], strtol(argv[2], NULL, 10)) != 0) {
        fprintf(stderr, "Error during remote_serve().\n");
        return 2;
    }
    return 0;
}
