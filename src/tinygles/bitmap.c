#include "zgl.h"
#include "util/pixel.h"
#include "gl_helpers.h"

void tglRasterPos3f(GLfloat x, GLfloat y, GLfloat z) {
    GLContext *c = gl_get_context();
    GLRasterPos *pos = &c->raster_pos;
    pos->x = x;
    pos->y = y;
    // TODO: update the zbuffer?
    pos->z = z;
}

const uintptr_t pbuf_pos(ZBuffer *zb, int x, int y) {
    return (uintptr_t)zb->pbuf + (y * zb->linesize) + x * PSZB;
}

void tglBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig,
              GLfloat xmove, GLfloat ymove, const GLubyte *bitmap) {
    GLContext *c = gl_get_context();
    GLRasterPos *pos = &c->raster_pos;
    ZBuffer *zb = c->zb;
    // TODO: shouldn't be drawn if the raster pos is outside the viewport?
    // TODO: negative width/height mirrors bitmap?
    if (!width && !height) {
        pos->x += xmove;
        pos->y -= ymove;
        return;
    }

    const GLubyte *from;
    // TODO: support 16-bit pixel size?
    uintptr_t to;
    int x, y;

#if 0 // __ARM_NEON__
    uint32_t mask1s[] = {128, 64, 32, 16};
    uint32_t mask2s[] = {8, 4, 2, 1};
    uint32x4_t mask1 = vld1q_u32(mask1s);
    uint32x4_t mask2 = vld1q_u32(mask2s);
#endif

    // copy to pixel data
    // TODO: strip blank lines and mirror vertically?
    for (y = 0; y < height; y++) {
        to = pbuf_pos(zb, pos->x, pos->y - y);
        from = bitmap + (y * 2);
        for (x = 0; x < width; x += 8) {
            if (pos->x + x > zb->xsize || pos->y - y > zb->ysize)
                continue;

            GLuint b = *from++;
#if 0 // __ARM_NEON__
            uint32x4_t b1, b2;
            b1 = vld1q_dup_u32(&b);
            b1 = vtstq_u32(b1, mask1);
            vst1q_u32((uint32_t *)to, b1);
            to += (PSZB * 4);

            b2 = vld1q_dup_u32(&b);
            b2 = vtstq_u32(b2, mask2);
            vst1q_u32((uint32_t *)to, b2);
            to += (PSZB * 4);
#else
            for (int j = 8; j--; ) {
                GLuint value = (b & (1 << j)) ? 0xFFFFFFFF : 0;
                *(TGL_PIXEL_TYPE *)to |= value;
                to += PSZB;
            }
#endif // __ARM_NEON__
        }
    }

    pos->x += xmove;
    pos->y += ymove;
}

void tglDrawPixels(GLsizei width, GLsizei height, GLenum format,
                  GLenum type, const GLvoid *data) {
    GLContext *c = gl_get_context();
    GLRasterPos *pos = &c->raster_pos;
    ZBuffer *zb = c->zb;
    GLViewport *viewport = &c->viewport;
    const GLvoid *from;
    GLvoid *to;
    // shrink our pixel ranges to stay inside the viewport
    int ystart = MAX(0, -pos->y);
    height = MIN(pos->y, height);
    if (pos->y >= viewport->ysize) {
        ystart += (pos->y - viewport->ysize - 1);
    }
    int xstart = MAX(0, -pos->x);
    int screen_width = MIN(viewport->xsize - pos->x, width - 1);
    if (screen_width < 0) return;

    GLsizei src_stride = gl_pixel_sizeof(format, type);
    for (int y = ystart; y < height; y++) {
        to = (GLubyte *)pbuf_pos(zb, pos->x, pos->y - y - 1);
        from = data + src_stride * (xstart + y * width);
        pixel_convert_direct(from, to, screen_width, format, type, src_stride, GL_RGBA, TGL_PIXEL_ENUM, PSZB);
    }
}
