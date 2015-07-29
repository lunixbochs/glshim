/* ring.c
 * inspired by slaeshjag's Glouija
 */

#include <fcntl.h>
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>

#include "ring.h"

#define RING_SIZE (1024 * 4096)
#define ALIGN(x) (((x) & 3) ? (((x) & ~3) + 4) : (x))

static void ring_wait_read(ring_t *ring) {
    while (*ring->dir != ring->me) {
        sem_wait(ring->in);
    }
    while (*ring->mark == *ring->write && *ring->wrap == 0) {
        // TODO: make this time out
        sem_wait(ring->in);
    }
}

static void ring_wait_write(ring_t *ring, size_t size) {
    size_t avail = 0;
    uint32_t read, write, mark, wrap;
    while (1) {
        // TODO: handle dir?
        read = *ring->read;
        write = *ring->write;
        mark = *ring->mark;
        wrap = *ring->wrap;
        if (write < mark) {
            avail = read - write;
        } else if (write > mark || (write == mark && wrap == 0)) {
            avail = ring->size - write;
            if (read > avail)
                avail = read;
        }
        if (avail >= size) {
            break;
        }
        sem_wait(ring->in);
    }
}

void *ring_read(ring_t *ring, size_t *size_ret) {
    // TODO: write magic bytes into the mess to mark new messages and signal memory problems?
    ring_wait_read(ring);
    if (*ring->mark > 0 && *ring->mark == *ring->wrap) {
        *ring->mark = 0;
        *ring->wrap = 0;
    }
    uint32_t size = *(uint32_t *)(ring->buf + *ring->mark);
    if (size == 0) {
        fprintf(stderr, "panic: ring data size (0)\n");
        abort();
    }
    if (size > ring->size) {
        fprintf(stderr, "panic: ring data size %lu > ring size %lu\n", size, ring->size);
        abort();
    }
    void *data;
    if (*ring->mark + size <= ring->size) {
        data = ring->buf + *ring->mark + sizeof(uint32_t);
        *ring->mark += size;
    } else {
        data = ring->buf;
        *ring->mark = size;
    }
    if (size_ret) *size_ret = size;
    return data;
}

void ring_read_into(ring_t *ring, void *dst) {
    size_t size;
    void *data = ring_read(ring, &size);
    memcpy(dst, data, size);
}

void ring_advance(ring_t *ring) {
    sem_trywait(ring->out);
    sem_post(ring->out);
    *ring->read = *ring->mark;
}

int ring_write(ring_t *ring, void *buf, size_t bufsize) {
    size_t size = ALIGN(bufsize) + sizeof(uint32_t);
    uint32_t read = *ring->read, mark = *ring->mark;
    uint32_t marked;
    if (mark < read) {
        marked = ring->size - read + mark;
    } else {
        marked = mark - read;
    }
    uint32_t unmarked = ring->size - marked;
    if (size > unmarked) {
        fprintf(stderr, "panic: ring_write size %lu > unmarked %lu\n", size + 4, unmarked);
        abort();
    }
    ring_wait_write(ring, size);
    size_t remain = ring->size - *ring->write;
    if (remain > size) {
        uint32_t *size_write = ring->buf + *ring->write;
        *size_write = size;
        memcpy(ring->buf + *ring->write + sizeof(uint32_t), buf, bufsize);
        *ring->write += size;
    } else {
        uint32_t *size_write = ring->buf;
        *size_write = size;
        memcpy(ring->buf + sizeof(uint32_t), buf, bufsize);
        *ring->wrap = *ring->write;
        *ring->write = size;
    }
    if (*ring->dir == ring->me) {
        *ring->dir = !ring->me;
    }
    sem_trywait(ring->out);
    sem_post(ring->out);
    return 0;
}

int ring_server(ring_t *ring, char *name) {
    // set up shm
    int fd = shm_open(name, O_RDWR, 0700);
    int size = 4096 + RING_SIZE;
    void *addr = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if (addr == MAP_FAILED) {
        return -1;
    }
    shm_unlink(name);

    // set up semaphore
    char buf[32];
    snprintf(buf, 32, "%s.mosi", name);
    ring->in = sem_open(buf, 1);
    sem_unlink(buf);
    snprintf(buf, 32, "%s.miso", name);
    ring->out = sem_open(buf, 1);
    sem_unlink(buf);

    ring->read = addr;
    ring->write = ring->read + sizeof(uint32_t);
    ring->mark = ring->write + sizeof(uint32_t);
    ring->wrap = ring->mark + sizeof(uint32_t);
    ring->dir = ring->wrap + sizeof(uint32_t);
    ring->buf = addr + 4096;
    ring->size = RING_SIZE;
    ring->me = 0;
    return 0;
}

char *ring_client(ring_t *ring, char *title) {
    char buf[32] = {0};
    int i = 0;
    int fd = -1;
    // set up shm
    while (fd < 0) {
        snprintf(buf, 32, "/%s.%d", title, i++);
        fd = shm_open(buf, O_RDWR | O_CREAT, 0700);
        if (i > 65535) {
            fprintf(stderr, "panic: failed to shm_open() 65535 times, giving up.\n");
            abort();
        }
    }
    // map it
    int size = 4096 + RING_SIZE;
    char *name = strdup(buf);
    ftruncate(fd, size);
    void *addr = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if (addr == MAP_FAILED) {
        return NULL;
    }

    // set up semaphore
    snprintf(buf, 32, "%s.mosi", name);
    sem_unlink(buf);
    ring->out = sem_open(buf, O_CREAT, 0700, 0);
    snprintf(buf, 32, "%s.miso", name);
    sem_unlink(buf);
    ring->in = sem_open(buf, O_CREAT, 0700, 0);

    ring->read = addr;
    ring->write = ring->read + sizeof(uint32_t);
    ring->mark = ring->write + sizeof(uint32_t);
    ring->wrap = ring->mark + sizeof(uint32_t);
    ring->dir = ring->wrap + sizeof(uint32_t);
    ring->buf = addr + 4096;
    ring->size = RING_SIZE;
    ring->me = 1;
    memset(ring->buf, 0, sizeof(size));
    return name;
}
