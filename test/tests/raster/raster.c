#define P(n) n, n, n, n

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

const unsigned char bitmap[] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
};

const unsigned char bitmap_ref[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00,
};

int main() {
    int width = 8;
    int height = 8;
    size_t bufsize = 4 * width * height * sizeof(GLubyte);
    GLubyte *buf = (GLubyte *)malloc(bufsize * 3);

    glViewport(0, 0, width, height);
    test_glViewport(0, 0, width, height);
    state.raster.buf = buf + bufsize;

    memset(buf, 0xFF, bufsize * 3);
    glDrawPixels(width, height, GL_RGBA, GL_UNSIGNED_BYTE, sprite);
    assert(memcmp(buf, buf + bufsize * 2, bufsize) == 0);
    assert(memcmp(state.raster.buf, sprite, bufsize) == 0);

    memset(buf, 0xFF, bufsize * 3);
    glRasterPos2i(0, height);
    glBitmap(width, height, 0, 0, 0, 0, bitmap);
    assert(memcmp(buf, buf + bufsize * 2, bufsize) == 0);
    assert(memcmp(state.raster.buf, bitmap_ref, bufsize) == 0);

    glRasterPos2i(0, 0);
    glBitmap(width, height, 0, 0, 0, 0, bitmap);
    mock_return;
}
