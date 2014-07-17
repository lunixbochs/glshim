int main() {
    GLuint list = glGenLists(3);
    glNewList(list, GL_COMPILE);
    glRectf(0, 0, 1, 1);
    glEndList();

    glNewList(list + 1, GL_COMPILE);
    glCallList(list);
    glEndList();

    glNewList(list + 2, GL_COMPILE);
    glCallList(list + 1);
    glEndList();

    glCallList(list + 2);

    GLfloat verts[] = {
        0, 0, 0,
        1, 0, 0,
        1, 1, 0,
        0, 1, 0,
    };

    test_glEnableClientState(GL_VERTEX_ARRAY);
    test_glVertexPointer(3, GL_FLOAT, 0, verts);
    test_glDrawArrays(6, 0, 4);
    test_glDisableClientState(GL_VERTEX_ARRAY);

    mock_return;
}
