/*
 * Z buffer: 16 bits Z / 16 bits color
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "zbuffer.h"

ZBuffer *ZB_open(int xsize, int ysize, int mode,
                 int nb_colors,
                 unsigned char *color_indexes,
                 int *color_table,
                 void *frame_buffer) {
    ZBuffer *zb;
    int size;

    zb = malloc(sizeof(ZBuffer));
    if (zb == NULL)
        return NULL;

    zb->xsize = xsize;
    zb->ysize = ysize;
    zb->mode = mode;
    zb->linesize = (xsize * PSZB + 3) & ~3;

    switch (mode) {
        case ZB_MODE_INDEX:
            ZB_initDither(zb, nb_colors, color_indexes, color_table);
            break;
        case ZB_MODE_RGBA:
        case ZB_MODE_5R6G5B:
            zb->nb_colors = 0;
            break;
        default:
            goto error;
    }

    size = zb->xsize * zb->ysize * sizeof(unsigned short);

    zb->zbuf = malloc(size);
    if (zb->zbuf == NULL)
        goto error;

    if (frame_buffer == NULL) {
        zb->pbuf = malloc(zb->ysize * zb->linesize);
        if (zb->pbuf == NULL) {
            free(zb->zbuf);
            goto error;
        }
        zb->frame_buffer_allocated = 1;
    } else {
        zb->frame_buffer_allocated = 0;
        zb->pbuf = frame_buffer;
    }

    zb->current_texture = NULL;
    return zb;
error:
    free(zb);
    return NULL;
}

void ZB_close(ZBuffer * zb) {
    if (zb->mode == ZB_MODE_INDEX)
        ZB_closeDither(zb);

    if (zb->frame_buffer_allocated)
        free(zb->pbuf);

    free(zb->zbuf);
    free(zb);
}

void ZB_resize(ZBuffer * zb, void *frame_buffer, int xsize, int ysize) {
    int size;

    /* xsize must be a multiple of 4 */
    xsize = xsize & ~3;

    zb->xsize = xsize;
    zb->ysize = ysize;
    zb->linesize = (xsize * PSZB + 3) & ~3;

    size = zb->xsize * zb->ysize * sizeof(unsigned short);

    free(zb->zbuf);
    zb->zbuf = malloc(size);

    if (zb->frame_buffer_allocated)
        free(zb->pbuf);

    if (frame_buffer == NULL) {
        zb->pbuf = malloc(zb->ysize * zb->linesize);
        zb->frame_buffer_allocated = 1;
    } else {
        zb->pbuf = frame_buffer;
        zb->frame_buffer_allocated = 0;
    }
}

static void ZB_copyBuffer(ZBuffer * zb, void *buf, int linesize) {
    unsigned char *p1;
    PIXEL *q;
    int y, n;

    q = zb->pbuf;
    p1 = buf;
    n = zb->xsize * PSZB;
    for (y = 0; y < zb->ysize; y++) {
        memcpy(p1, q, n);
        p1 += linesize;
        q = (PIXEL *)((char *)q + zb->linesize);
    }
}

#define RGB32_TO_RGB16(v) \
  (((v >> 8) & 0xf800) | (((v) >> 5) & 0x07e0) | (((v) & 0xff) >> 3))

/* XXX: not optimized */
void ZB_copyFrameBuffer5R6G5B(ZBuffer *zb, void *buf, int linesize) {
#ifdef __ARM_NEON__
    asm volatile (
        "blu .req d0\n"
        "grn .req d1\n"
        "red .req d2\n"
        "alp .req d3\n"
        "gb .req grn\n"
        "rg .req red\n"

        "pld [%1]\n"
        // y = 0
        "mov r0, #0\n"
        ".outer:\n"
            // n = zb->xsize >> 2;
            "mov r1, %3\n"
            // p = p1
            "mov r2, %0\n"
            // this could be faster if X were divisible by 8, but unfortunately that's not always the case :(
            ".inner:\n"
                // load zb->pbuf; zb->pbuf += 32
                "vld4.8 {blu, grn, red, alp}, [%1]!\n"
                "pld [%1, #32]\n"
                // n -= 2
                "sub r1, r1, #2\n"

                // shuffle pixels
                "vsri.8 red, grn, #5\n"
                "vshl.u8 gb, grn, #3\n"
                "vsri.8 gb, blu, #3\n"

                // memcpy(p, {gb, rg}, 32)
                "vst2.8 {gb, rg}, [r2]\n"

                // p += 16
                "add r2, r2, #16\n"
                "cmp r1, #0\n"
                "bgt .inner\n"

            // buf += linesize
            "add %0, %0, %4\n"
            // y += 1
            "add r0, r0, #1\n"
            // if y < zb->ysize; goto .outer
            "cmp r0, %2\n"
            "blt .outer\n"

        :
        : "r"(buf), "r"(zb->pbuf), "r"(zb->ysize), "r"(zb->xsize >> 2), "r"(linesize)
        : "r0", "r1", "r2", "d0", "d1", "d2", "d3"
    );
#else
    PIXEL *q = zb->pbuf;
    unsigned short *p, *p1 = (unsigned short *) buf;
    for (int y = 0; y < zb->ysize; y++) {
        int n = zb->xsize >> 2;
        p = p1;
        do {
            p[0] = RGB32_TO_RGB16(q[0]);
            p[1] = RGB32_TO_RGB16(q[1]);
            p[2] = RGB32_TO_RGB16(q[2]);
            p[3] = RGB32_TO_RGB16(q[3]);
            q += 4;
            p += 4;
        } while (--n > 0);
        p1 = (unsigned short *)((char *)p1 + linesize);
    }
#endif
}

void ZB_copyFrameBuffer(ZBuffer * zb, void *buf, int linesize) {
    switch (zb->mode) {
        case ZB_MODE_5R6G5B:
            ZB_copyFrameBuffer5R6G5B(zb, buf, linesize);
            break;
        case ZB_MODE_RGBA:
            ZB_copyBuffer(zb, buf, linesize);
            break;
        default:
            assert(0);
    }
}

/*
 * adr must be aligned on an 'int'
 */
static void memset_short(void *adr, int val, int count) {
    int i, n, v;
    unsigned int *p;
    unsigned short *q;

    p = adr;
    v = val | (val << 16);

    n = count >> 3;
    for (i = 0; i < n; i++) {
        p[0] = v;
        p[1] = v;
        p[2] = v;
        p[3] = v;
        p += 4;
    }

    q = (unsigned short *) p;
    n = count & 7;
    for (i = 0; i < n; i++)
        *q++ = val;
}

static void memset_long(void *adr, int val, int count) {
    int i, n, v;
    unsigned int *p;

    p = adr;
    v = val;
    n = count >> 2;
    for (i = 0; i < n; i++) {
        p[0] = v;
        p[1] = v;
        p[2] = v;
        p[3] = v;
        p += 4;
    }

    n = count & 3;
    for (i = 0; i < n; i++)
        *p++ = val;
}

/* count must be a multiple of 4 and >= 4 */
void memset_RGB24(void *adr, int r, int v, int b, long count) {
    long i, n;
    register long v1, v2, v3,*pt = (long *)(adr);
    unsigned char *p, R = (unsigned char)r, V = (unsigned char)v , B = (unsigned char)b;

    p=(unsigned char *)adr;
    *p++ = R;
    *p++ = V;
    *p++ = B;
    *p++ = R;
    *p++ = V;
    *p++ = B;
    *p++ = R;
    *p++ = V;
    *p++ = B;
    *p++ = R;
    *p++ = V;
    *p++ = B;
    v1 = *pt++;
    v2 = *pt++;
    v3 = *pt++;
    n = count >> 2;
    for(int i = 1; i < n; i++) {
        *pt++ = v1;
        *pt++ = v2;
        *pt++ = v3;
    }
}

void ZB_clear(ZBuffer * zb, int clear_z, int z, int clear_color, int r, int g, int b) {
    int color;
    int y;
    PIXEL *pp;

    if (clear_z) {
        memset_short(zb->zbuf, z, zb->xsize * zb->ysize);
    }
    if (clear_color) {
        pp = zb->pbuf;
        for (y = 0; y < zb->ysize; y++) {
            color = RGB_TO_PIXEL(r, g, b);
            memset_long(pp, color, zb->xsize);
            pp = (PIXEL *) ((char *)pp + zb->linesize);
        }
    }
}
