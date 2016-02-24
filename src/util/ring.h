#ifndef RING_H
#define RING_H

#include <stdint.h>

typedef struct {
    volatile uint32_t *read, *mark, *write, *wrap;
    volatile uint32_t *waiting;
    // file descriptor for setup/sync
    uint32_t fd;
    void *buf;
    size_t size;
    uint32_t me, *dir;
    uint32_t dma_write;
} ring_t;

typedef struct {
    void *buf;
    size_t size;
} ring_val_t;

void ring_wait(ring_t *ring);
void ring_post(ring_t *ring);
void *ring_read(ring_t *ring, size_t *size_ret);
void ring_read_into(ring_t *ring, void *dst);
void ring_advance(ring_t *ring);
int ring_write_multi(ring_t *ring, ring_val_t *vals, int count);
int ring_write(ring_t *ring, void *buf, size_t size);
void *ring_dma(ring_t *ring, size_t size);
void ring_dma_done(ring_t *ring);
void ring_setup(ring_t *ring, int sync_fd);
int ring_server_handshake(ring_t *ring);
int ring_client_handshake(ring_t *ring, char *title);

#endif
