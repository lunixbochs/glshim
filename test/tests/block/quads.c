int main() {
    glBegin(GL_QUADS);
    glColor4f(0, 0.1, 0.2, 0.3);
    glTexCoord2f(0.4, 0.5);
    glVertex3f(0, 1, 2);
    glVertex3f(3, 4, 5);
    glVertex3f(6, 7, 8);
    glVertex3f(9, 10, 11);
    glEnd();

    block_attr_t attr[] = {
        {.vert={0, 1, 2}, .color={0, 0.1, 0.2, 0.3}, .tex[0] = {0.4, 0.5, 0, 1}},
        {.vert={3, 4, 5}, .color={0, 0.1, 0.2, 0.3}, .tex[0] = {0.4, 0.5, 0, 1}},
        {.vert={6, 7, 8}, .color={0, 0.1, 0.2, 0.3}, .tex[0] = {0.4, 0.5, 0, 1}},
        {.vert={9, 10, 11}, .color={0, 0.1, 0.2, 0.3}, .tex[0] = {0.4, 0.5, 0, 1}},
    };
    // we don't care about the other attrs because the verts will check them
    char empty[0];
    GLushort indices[] = {
        0, 1, 3,
        1, 2, 3,
    };

    // TODO: out of order glEnableClientState?
    test_glColor4f(0.0, 0.1, 0.2, 0.3);

    test_glEnableClientState(GL_VERTEX_ARRAY);
    test_glVertexPointer(3, GL_FLOAT, sizeof(block_attr_t), attr);
    test_glEnableClientState(GL_COLOR_ARRAY);
    test_glColorPointer(4, GL_FLOAT, sizeof(block_attr_t), empty);
    test_glEnableClientState(GL_TEXTURE_COORD_ARRAY);
    test_glTexCoordPointer(4, GL_FLOAT, sizeof(block_attr_t), empty);
    test_glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, indices);

    test_glDisableClientState(GL_VERTEX_ARRAY);
    test_glDisableClientState(GL_COLOR_ARRAY);
    test_glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    mock_return;
}
