int main() {
    glRectf(0, 0, 1, 1);

    test_glEnableClientState(GL_VERTEX_ARRAY);
    // TODO: pointers are skipped in verification
    GLfloat verts[] = {
        0, 0, 0, 0, 0, 0,
    };
    test_glVertexPointer(3, GL_FLOAT, 0, verts);
    test_glDrawArrays(6, 0, 4);
    test_glDisableClientState(GL_VERTEX_ARRAY);
    mock_return;
}
