/*
 * glouija.c
 * written by slaeshjag
 */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "glouija.h"

#define SIZE_ROUND_ALIGN(x) (((x) & 3) ? (((x) & ~3) + 4) : (x))

/* FIXME: For now, assume endian is AlwaysCorrect™ */

typedef struct {
    int server_write;
    int client_write;
    int server_read;
    int client_read;
} StatusStruct;

typedef struct {
    bool used_local;
    bool used_remote;
    void *ptr;
    uint32_t size;
} TagEntry;

static struct {
    StatusStruct *stat;
    void *send_buffer;
    void *recv_buffer;

    int *next_read;
    int *next_write;
    int *remote_read;
    int *remote_write;
    int recv_size;
    int send_size;

    /* Bookkeeping relevant to state destruction */
    int buffsz;

    TagEntry *tag;
    int tags;
} global_state;

static void glouija_expand_tag_store(uint32_t last_tag) {
    uint32_t tag_border;
    if (global_state.tags > last_tag)
        return;

    tag_border = global_state.tags;
    global_state.tags = last_tag + 1;

    /* Malloc never fails, right? :p */
    global_state.tag = realloc(global_state.tag, sizeof(*global_state.tag) * global_state.tags);
    for (; tag_border < global_state.tags; tag_border++) {
        global_state.tag[tag_border].used_remote = false;
        global_state.tag[tag_border].used_local = false;
    }
    return;
}

static void glouija_alloc_local_tag(void *data, uint32_t size, uint32_t tag) {
    glouija_expand_tag_store(tag);

    global_state.tag[tag].size = size;
    global_state.tag[tag].ptr = data;
    global_state.tag[tag].used_local = true;
}

static void glouija_free_local_tag(uint32_t tag) {
    if (global_state.tags <= tag) {
        fprintf(stderr, "WARNING: Attempted to free an unalocated tag %u\n", tag);
        return;
    }

    free(global_state.tag[tag].ptr);
    global_state.tag[tag].used_local = false;
    return;
}

uint32_t glouija_alloc_remote_tag(void *data, uint32_t size) {
    uint32_t tag;
    GlouijaCall c;

    for (tag = 0; tag < global_state.tags; tag++)
        if (!global_state.tag[tag].used_remote)
            break;
    glouija_expand_tag_store(tag);
    global_state.tag[tag].used_remote = true;
    c.type = GLO_CALL_TYPE_TAG_NEW;
    c.args = 2;
    c.arg[0].type = GLO_ARG_TYPE_UINT;
    c.arg[0].data.ui = tag;
    c.arg[1].type = GLO_ARG_TYPE_BLOCK;
    c.arg[1].data.block.data = data;
    c.arg[1].data.block.size = size;
    if (glouija_command_write(&c)) {
        /* TODO: Implement tag expansions for partial buffer transfers */
        fprintf(stderr, "ERROR: Unable to alloc tag: %i (data would not fit in buffer)\n", tag);
        return ~0;
    }
    return tag;
}

void glouija_free_remote_tag(uint32_t tag) {
    GlouijaCall c;

    global_state.tag[tag].used_remote = false;
    c.type = GLO_CALL_TYPE_TAG_DEL;
    c.args = 1;
    c.arg[0].type = GLO_ARG_TYPE_UINT;
    c.arg[0].data.ui = tag;
    glouija_command_write(&c);
    return;
}

void glouija_await_incoming() {
    while (*global_state.remote_write == *global_state.next_read)
        usleep(1);
    return;
}

int glouija_await_sendbuffer(int sendbuff_size) {
    if (sendbuff_size > global_state.send_size)
        return -1;
    for (;;) {
        int read_pos;
        
        read_pos = *global_state.remote_read;
        if (read_pos < *global_state.next_write) {
            if (global_state.send_size - (*global_state.next_write - read_pos) >= sendbuff_size)
                return 0;
        } else if (read_pos > *global_state.next_write) {
            if (read_pos - *global_state.next_write >= sendbuff_size)
                return 0;
        } else
            return 0;
        // fprintf(stderr, "Awaiting sendbuffer space %i %i %i\n", sendbuff_size, read_pos, *global_state.next_write);
        usleep(1);
    }
}

static int glouija_data_write(void *data, int size, int pos) {
    int write_size;

    write_size = global_state.send_size - pos;
    if (write_size < size) {
        memcpy(global_state.send_buffer + pos, data, write_size);
        return glouija_data_write(data + write_size, size - write_size, 0);
    } else {
        memcpy(global_state.send_buffer + pos, data, size);
        return SIZE_ROUND_ALIGN(pos + size);
    }
    return -1;
}

static int glouija_data_read(void *data, int size, int pos) {
    int read_size;

    read_size = global_state.send_size - pos;
    if (read_size < size) {
        memcpy(data, global_state.recv_buffer + pos, read_size);
        return glouija_data_read(data + read_size, size - read_size, 0);
    } else {
        memcpy(data, global_state.recv_buffer + pos, size);
        return SIZE_ROUND_ALIGN(pos + size);
    }
    return -1;
}

void glouija_add_block(GlouijaCall *c, void *data, size_t size) {
    int i = c->args++;
    c->arg[i].type = GLO_ARG_TYPE_BLOCK;
    c->arg[i].data.block.data = data;
    c->arg[i].data.block.size = size;
    c->arg[i].data.block.free = true;
}

void glouija_copy_block(GlouijaCall *c, int pos, void *dst) {
    void *data = c->arg[pos].data.block.data;
    memcpy(dst, data, c->arg[pos].data.block.size);
}

int glouija_command_write(GlouijaCall *c) {
    int pos, i, argsz;
    GlouijaSerialCallHead cbuff;
    GlouijaSerialArgHead abuff;

    pos = *global_state.next_write;

    /* Determine the command size */
    for (i = argsz = 0; i < c->args; i++) {
        argsz += sizeof(GlouijaSerialArgHead);
        if (c->arg[i].type == GLO_ARG_TYPE_BLOCK)
            argsz += SIZE_ROUND_ALIGN(c->arg[i].data.block.size);
    }

    argsz += sizeof(GlouijaSerialCallHead);

    if (glouija_await_sendbuffer(argsz)) {
        fprintf(stderr, "Command of size %i bytes will not fit inside the send buffer\n", argsz);
        return -1;
    }

    cbuff.args = c->args;
    cbuff.type = c->type;
    pos = glouija_data_write(&cbuff, sizeof(cbuff), pos);
    
    for (i = 0; i < c->args; i++) {
        abuff.type = c->arg[i].type;
        
        if (c->arg[i].type == GLO_ARG_TYPE_BLOCK) {
            abuff.size = c->arg[i].data.block.size;
            pos = glouija_data_write(&abuff, sizeof(abuff), pos);
            pos = glouija_data_write(c->arg[i].data.block.data, c->arg[i].data.block.size, pos);
        } else {
            abuff.data.ui = c->arg[i].data.ui;
            abuff.size = 0;
            pos = glouija_data_write(&abuff, sizeof(abuff), pos);
        }
    }

    *global_state.next_write = pos;
    return 0;
}

int glouija_command_read(GlouijaCall *c) {
    int i, pos;
    GlouijaSerialCallHead cbuff;
    GlouijaSerialArgHead abuff;

    pos = *global_state.next_read;

    glouija_await_incoming();
    pos = glouija_data_read(&cbuff, sizeof(cbuff), pos);
    c->args = cbuff.args;
    c->type = cbuff.type;

    for (i = 0; i < c->args; i++) {
        pos = glouija_data_read(&abuff, sizeof(abuff), pos);
        c->arg[i].type = abuff.type;
        if (c->arg[i].type == GLO_ARG_TYPE_BLOCK) {
            c->arg[i].data.block.free = true;
            c->arg[i].data.block.size = abuff.size;
            c->arg[i].data.block.data = malloc(abuff.size);
            pos = glouija_data_read(c->arg[i].data.block.data, abuff.size, pos);
        } else {
            if (c->arg[i].type == GLO_ARG_TYPE_TAG) {
                uint32_t tag = abuff.data.tag;

                c->arg[i].data.block.free = false;
                if (tag >= global_state.tags) {
                    c->arg[i].data.block.data = NULL;
                    c->arg[i].data.block.size = 0;
                    fprintf(stderr, "WARNING: Command refered to out of bound tag %i\n", tag);
                } else if (global_state.tag[tag].used_local) {
                    c->arg[i].data.block.data = global_state.tag[tag].ptr;
                    c->arg[i].data.block.size = global_state.tag[tag].size;
                } else {
                    c->arg[i].data.block.data = NULL;
                    c->arg[i].data.block.size = 0;
                    fprintf(stderr, "WARNING: Command refered to unallocated tag %i\n", tag);
                }
            } else {
                c->arg[i].data.block.data = NULL;
                c->arg[i].data.ui = abuff.data.ui;
            }
        }
    }

    *global_state.next_read = pos;
    if (c->type == GLO_CALL_TYPE_TAG_NEW) {
        if (!c->arg[1].data.block.free) {
            void *data;

            data = malloc(c->arg[1].data.block.size);
            memcpy(data, c->arg[1].data.block.data, c->arg[1].data.block.size);
            glouija_alloc_local_tag(data, c->arg[1].data.block.size, c->arg[0].data.ui);
        } else
            glouija_alloc_local_tag(c->arg[1].data.block.data, c->arg[1].data.block.size, c->arg[0].data.ui);
        return glouija_command_read(c);
    } else if (c->type == GLO_CALL_TYPE_TAG_DEL) {
        glouija_free_local_tag(c->arg[0].data.ui);
        return glouija_command_read(c);
    }
    return 0;
}

void glouija_command_free(GlouijaCall *c) {
    for (int i = 0; i < GLO_CALL_ARG_MAX; i++) {
        if (i < c->args && c->arg[i].type == GLO_ARG_TYPE_BLOCK && c->arg[i].data.block.free) {
            free(c->arg[i].data.block.data);
            c->arg[i].data.block.data = NULL;
        }
    }
}

int glouija_init_server(char *name) {
    int fd = shm_open(name, O_RDWR, 0700);
    int buffsz = SERVER_BUFFER_SIZE + CLIENT_BUFFER_SIZE + 4096;
    void *addr = mmap(NULL, buffsz, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if (addr == MAP_FAILED) {
        return -1;
    }
    shm_unlink(name);
    global_state.buffsz = buffsz;
    global_state.stat = addr;

    global_state.send_buffer = addr + 4096;
    global_state.recv_buffer = global_state.send_buffer + SERVER_BUFFER_SIZE;
    global_state.next_read = &global_state.stat->server_read;
    global_state.next_write = &global_state.stat->server_write;
    global_state.remote_read = &global_state.stat->client_read;
    global_state.remote_write = &global_state.stat->client_write;
    global_state.send_size = SERVER_BUFFER_SIZE;
    global_state.recv_size = CLIENT_BUFFER_SIZE;
    *global_state.next_read = 0;

    global_state.tag = NULL;
    global_state.tags = 0;
    return 0;
}

char *glouija_init_client() {
    int buffsz = SERVER_BUFFER_SIZE + CLIENT_BUFFER_SIZE + 4096;

    char buf[32] = {0};
    int i = 0;
    int fd = -1;
    while (fd < 0) {
        snprintf(buf, 32, "/glshim.%d", i++);
        fd = shm_open(buf, O_RDWR | O_CREAT, 0700);
        if (i > 65535) {
            fprintf(stderr, "Failed to shm_open() 65535 times, giving up.\n");
            abort();
        }
    }
    char *name = strdup(buf);
    ftruncate(fd, buffsz);
    void *addr = mmap(NULL, buffsz, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if (addr == MAP_FAILED) {
        return NULL;
    }

    global_state.buffsz = buffsz;
    global_state.stat = addr;

    global_state.next_read = &global_state.stat->client_read;
    global_state.next_write = &global_state.stat->client_write;
    global_state.remote_read = &global_state.stat->server_read;
    global_state.remote_write = &global_state.stat->server_write;
    global_state.recv_buffer = addr + 4096;
    global_state.send_buffer = global_state.recv_buffer + SERVER_BUFFER_SIZE;
    global_state.recv_size = SERVER_BUFFER_SIZE;
    global_state.send_size = CLIENT_BUFFER_SIZE;
    *global_state.next_read = 0;

    global_state.stat->server_write = 0;
    global_state.stat->client_write = 0;

    global_state.tag = NULL;
    global_state.tags = 0;
    return name;
}
