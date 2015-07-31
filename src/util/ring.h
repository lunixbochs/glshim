#ifndef RING_H
#define RING_H

#include <semaphore.h>
#include <stdint.h>

typedef struct {
    uint32_t *read, *mark, *write, *wrap;
    sem_t *sync;
    void *buf;
    size_t size;
    uint32_t me, *dir;
} ring_t;

typedef struct {
    void *buf;
    size_t size;
} ring_val_t;

void *ring_read(ring_t *ring, size_t *size_ret);
void ring_read_into(ring_t *ring, void *dst);
void ring_advance(ring_t *ring);
int ring_write_multi(ring_t *ring, ring_val_t *vals, int count);
int ring_write(ring_t *ring, void *buf, size_t size);
int ring_server(ring_t *ring, char *name);
char *ring_client(ring_t *ring, char *title);

#endif
