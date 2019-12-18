[![Build Status](https://travis-ci.org/lunixbochs/glshim.svg?branch=master)](https://travis-ci.org/lunixbochs/glshim)

glshim
====

This is a shim providing OpenGL 1.x functionality to OpenGL ES accelerated cards.

----

Compiling
----

    cmake .; make GL

----

GLU
----

You probably want the glu branch from https://github.com/lunixbochs/glues

    git clone https://github.com/lunixbochs/glues.git --depth 1 \
    && cd glues && git checkout glu && cmake . && cmake --build .


----

Installation
----

Put lib/libGL.so.1 in your `LD_LIBRARY_PATH`. If you need GLU, build libGLU.so.1 from the glues repo and do likewise.
