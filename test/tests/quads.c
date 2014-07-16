int main() {
    glBegin(GL_QUADS);
    glVertex3f(0, 1, 2);
    glColor4f(0, 0.1, 0.2, 0.3);
    glTexCoord2f(.4, .5);
    glEnd();

    // TODO: out of order glEnableClientState?
    test_glColor4f(0.0, 0.1, 0.2, 0.3);
    test_glEnableClientState(GL_VERTEX_ARRAY);
    test_glVertexPointer(3, GL_FLOAT, 0, NULL);
    test_glEnableClientState(GL_COLOR_ARRAY);
    test_glColorPointer(4, GL_FLOAT, 0, NULL);
    test_glEnableClientState(GL_TEXTURE_COORD_ARRAY);
    test_glTexCoordPointer(2, GL_FLOAT, 0, NULL);
    test_glDrawElements(4, 1, GL_UNSIGNED_SHORT, NULL);

    test_glDisableClientState(GL_VERTEX_ARRAY);
    test_glDisableClientState(GL_COLOR_ARRAY);
    test_glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    mock_return;
}
