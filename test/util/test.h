#define LOAD_RAW(...) {}
#define LOAD_GLES(...) {}
#define PROXY(...) {}

#include <stdio.h>
#include <string.h>
#include "mock.h"

#define free(...) {}
#undef emit_glGetError
#define emit_glGetError(...) {}

#define RED "\e[1;31m"
#define CLEAR "\e[0m"

static void memcmp_print(void *a, void *b, size_t size) {
    char *ac = a, *bc = b;
    for (size_t i = 0; i < size; i++) {
        if (i > 0 && i % 4 == 0)  printf(" ");
        if (i > 0 && i % 32 == 0) printf("\n");
        if (ac[i] == bc[i]) printf("%02X", (unsigned char)ac[i]);
        else                printf(RED "%02X" CLEAR, (unsigned char)ac[i]);
    }
    printf("\n");
}

static int memcmp_inspect(void *a, char *aname, void *b, char *bname, size_t size) {
    int ret = memcmp(a, b, size);
    if (ret) {
        char *ac = a, *bc = b;
        printf("- %s -\n", aname);
        memcmp_print(a, b, size);
        printf("- %s -\n", bname);
        memcmp_print(b, a, size);
        printf("\n");
    }
    return ret;
}

#define memcmp(a, b, size) memcmp_inspect(a, #a, b, #b, size)
