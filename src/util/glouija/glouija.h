/*
 * glouija.h
 * written by slaeshjag
 */

#ifndef __GLOUIJA_H__
#define __GLOUIJA_H__

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define SERVER_BUFFER_SIZE (1024*1024)
#define CLIENT_BUFFER_SIZE (1024*1024)
#define GLO_CALL_ARG_MAX 8

enum GlouijaCallType {
    GLO_CALL_TYPE_TAG_NEW,
    GLO_CALL_TYPE_TAG_DEL,
    GLO_CALL_TYPE_RETURN,
    GLO_CALL_TYPE_CALL,
};

enum GlouijaArgumentType {
    GLO_ARG_TYPE_SINT,
    GLO_ARG_TYPE_UINT,
    GLO_ARG_TYPE_TAG,
    GLO_ARG_TYPE_BLOCK,
};

typedef struct {
    enum GlouijaArgumentType type;
    union {
        int32_t si;
        uint32_t ui;
        uint32_t tag;
        struct {
            void *data;
            uint32_t size;
            bool free;
        } block;
    } data;
} GlouijaArgument;

typedef struct {
    enum GlouijaCallType type;
    GlouijaArgument arg[GLO_CALL_ARG_MAX];
    unsigned int args;
} GlouijaCall;

typedef struct {
    uint32_t type;
    uint32_t args;
} GlouijaSerialCallHead;

typedef struct {
    uint32_t type;
    union {
        int32_t si;
        uint32_t ui;
        uint32_t tag;
    } data;
    uint32_t size;
} GlouijaSerialArgHead;

uint32_t glouija_alloc_remote_tag(void *data, uint32_t size);
void glouija_free_remote_tag(uint32_t tag);
void glouija_await_incoming();
void glouija_add_block(GlouijaCall *c, void *data, size_t size, int free);
int glouija_command_write(GlouijaCall *c);
int glouija_command_read(GlouijaCall *c);
int glouija_init_server(int fd);
int glouija_init_client();

#endif
