int main() {
    glBegin(GL_QUADS);
    glColor4f(0, 0.1, 0.2, 0.3);
    glTexCoord2f(0.4, 0.5);
    glVertex3f(0, 1, 2);
    glVertex3f(3, 4, 5);
    glVertex3f(6, 7, 8);
    glVertex3f(9, 10, 11);
    glEnd();

    GLfloat verts[] = {
        0, 1, 2,
        3, 4, 5,
        6, 7, 8,
        9, 10, 11,
    };

    GLfloat color[] = {
        0, 0.1, 0.2, 0.3,
        0, 0.1, 0.2, 0.3,
        0, 0.1, 0.2, 0.3,
        0, 0.1, 0.2, 0.3,
    };

    GLfloat tex[] = {
        0.4, 0.5, 0, 1,
        0.4, 0.5, 0, 1,
        0.4, 0.5, 0, 1,
        0.4, 0.5, 0, 1,
    };

    GLushort indices[] = {
        0, 1, 3,
        1, 2, 3,
    };

    // TODO: out of order glEnableClientState?
    test_glColor4f(0.0, 0.1, 0.2, 0.3);

    test_glEnableClientState(GL_VERTEX_ARRAY);
    test_glVertexPointer(3, GL_FLOAT, 0, verts);
    test_glEnableClientState(GL_COLOR_ARRAY);
    test_glColorPointer(4, GL_FLOAT, 0, color);
    test_glEnableClientState(GL_TEXTURE_COORD_ARRAY);
    test_glTexCoordPointer(4, GL_FLOAT, 0, tex);
    test_glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, indices);

    test_glDisableClientState(GL_VERTEX_ARRAY);
    test_glDisableClientState(GL_COLOR_ARRAY);
    test_glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    mock_return;
}
