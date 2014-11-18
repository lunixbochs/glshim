int main() {
#define STRIDE 0, 0, 0, 0, 0, 0, 0, 0, 0
    GLfloat vert[] = {
        0, 0, 0, STRIDE,
        1, 1, 1, STRIDE,
        2, 2, 2, STRIDE,
        3, 3, 3, STRIDE,
        4, 4, 4, STRIDE,
        5, 5, 5, STRIDE,
    };
    glEnableClientState(GL_VERTEX_ARRAY);
    glVertexPointer(3, GL_FLOAT, 12 * sizeof(GLfloat), vert);
    glDrawArrays(GL_QUADS, 2, 4);

    GLfloat vert_out[] = {
        2, 2, 2,
        3, 3, 3,
        4, 4, 4,
        5, 5, 5,
    };
    GLushort indices[] = {0, 1, 3, 1, 2, 3};
    test_glEnableClientState(GL_VERTEX_ARRAY);
    test_glVertexPointer(3, GL_FLOAT, 12 * 4, vert);
    test_glVertexPointer(3, GL_FLOAT, 0, vert_out);
    test_glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, indices);
    mock_return;
}
