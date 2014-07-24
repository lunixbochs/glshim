#include "tack.h"

int main() {
    GLfloat buffer[4096];
    glFeedbackBuffer(4096, GL_2D, buffer);
    glRenderMode(GL_FEEDBACK);

    glPassThrough(7);
    glRectf(0, 0, 1, 1);

    int size = glRenderMode(GL_RENDER);
    assert(size == 15);

    GLfloat *pos = buffer;
#define _(val) assert(*pos++ == val)
    _(GL_PASS_THROUGH_TOKEN);
    _(7.0f);
    _(GL_POLYGON_TOKEN);
    _(3.0f);
    _(1.0f);
    _(0.0f);
    _(1.0f);
    _(1.0f);
    _(0.0f);
    _(0.0f);
    _(GL_POLYGON_TOKEN);
    _(3.0f);
    _(1.0f);
    _(1.0f);
    _(0.0f);
    _(1.0f);
    _(0.0f);
    _(0.0f);
    mock_return;
}
