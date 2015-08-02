#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define P(n) n, n, n, n
#define P8(a, b, c, d, e, f, g, h) P(a), P(b), P(c), P(d), P(e), P(f), P(g), P(h)

const unsigned char sprite[] = {
    P(0), P(1), P(2), P(3),
    P(0), P(1), P(2), P(3),
    P(0), P(1), P(2), P(3),
    P(0), P(1), P(2), P(3),
    P(4), P(5), P(6), P(7),
    P(4), P(5), P(6), P(7),
    P(4), P(5), P(6), P(7),
    P(4), P(5), P(6), P(7),
};

const uint16_t bitmap[] = {
    0x0008, 0x0007, 0x0006, 0x0005, 0x0004, 0x0003, 0x0002, 0x0001,
};

const unsigned char bitmap_ref[] = {
    P8(0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF),
    P8(0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00),
    P8(0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF),
    P8(0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00),
    P8(0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF),
    P8(0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00),
    P8(0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF),
    P8(0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00),
};

void set_pos(int x, int y) {
    if (x < 0 || y < 0) {
        glWindowPos2i(0, 0);
        glBitmap(0, 0, 0, 0, x, y, NULL);
    } else {
        glWindowPos2i(x, y);
    }
}

int main() {
    int width = 8;
    int height = 8;
    size_t bufsize = 4 * width * height * sizeof(GLubyte);
    GLubyte *buf = (GLubyte *)malloc(bufsize * 3);

    glViewport(0, 0, width, height);
    test_glViewport(0, 0, width, height);
    state.raster.buf = buf + bufsize;

    // test for normal operation
    memset(buf, 0xFF, bufsize * 3);
    glDrawPixels(width, height, GL_RGBA, GL_UNSIGNED_BYTE, sprite);
    assert(memcmp(buf, buf + bufsize * 2, bufsize) == 0);
    assert(memcmp(state.raster.buf, sprite, bufsize) == 0);

    memset(buf, 0, bufsize * 3);
    glWindowPos2i(0, height - 1);
    glBitmap(width, height, 0, 0, 0, 0, bitmap);
    assert(memcmp(buf, buf + bufsize * 2, bufsize) == 0);
    assert(memcmp(state.raster.buf, bitmap_ref, bufsize) == 0);

    // test for over/underrun
    for (int x = -width; x < width; x++) {
        for (int y = -height; y < height; y++) {
            memset(buf, 0, bufsize * 3);
            set_pos(x, y);
            glBitmap(width, height, 0, 0, 0, 0, bitmap);
            assert(memcmp(buf, buf + bufsize * 2, bufsize) == 0 && "glBitmap");
        }
    }
    for (int x = 0; x < width; x++) {
        for (int y = 0; y < height; y++) {
            memset(buf, 0, bufsize * 3);
            set_pos(x, y);
            glDrawPixels(width, height, GL_RGBA, GL_UNSIGNED_BYTE, sprite);
            assert(memcmp(buf, buf + bufsize * 2, bufsize) == 0 && "glDrawPixels");
        }
    }
    mock_return;
}
