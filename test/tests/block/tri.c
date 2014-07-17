int main() {
    glBegin(GL_TRIANGLES);
    glVertex3f(0, 1, 2);
    glVertex3f(3, 4, 5);
    glVertex3f(6, 7, 8);
    glEnd();

    test_glEnableClientState(GL_VERTEX_ARRAY);
    GLfloat verts[] = {
        0, 1, 2,
        3, 4, 5,
        6, 7, 8,
    };
    test_glVertexPointer(3, GL_FLOAT, 0, verts);
    test_glDrawArrays(GL_TRIANGLES, 0, 3);
    test_glDisableClientState(GL_VERTEX_ARRAY);
    mock_return;
}
