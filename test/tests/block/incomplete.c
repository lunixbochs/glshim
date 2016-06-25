int main() {
    GLfloat c1 = 0.1, c2 = 0.2;
    GLuint list = glGenLists(1);

    glNewList(list, GL_COMPILE);
    glColor3f(c1, c1, c1);
    glBegin(GL_LINES);
    glVertex3f(1, 1, 0);
    glVertex3f(-1, 1, 0);
    glColor3f(c2, c2, c2);
    glVertex3f(1, 1, 0);
    glVertex3f(-1, 1, 0);
    glEnd();
    glEndList();
    glCallList(list);

    block_attr_t attr[] = {
        {.vert={1, 1, 0}, .color={c1, c1, c1, 1.0}},
        {.vert={-1, 1, 0}, .color={c1, c1, c1, 1.0}},
        {.vert={1, 1, 0}, .color={c2, c2, c2, 1.0}},
        {.vert={-1, 1, 0}, .color={c2, c2, c2, 1.0}},
    };
    // we don't care about the colors because the verts will check it
    char empty[0];

    test_glColor4f(c1, c1, c1, 1.0);
    test_glEnableClientState(GL_VERTEX_ARRAY);

    test_glVertexPointer(3, GL_FLOAT, sizeof(block_attr_t), attr);
    test_glEnableClientState(GL_COLOR_ARRAY);
    test_glColorPointer(4, GL_FLOAT, sizeof(block_attr_t), empty);
    test_glDrawArrays(GL_LINES, 0, 4);
    test_glDisableClientState(GL_VERTEX_ARRAY);
    test_glDisableClientState(GL_COLOR_ARRAY);
    test_glColor4f(c2, c2, c2, 1.0);

    mock_return;
}
