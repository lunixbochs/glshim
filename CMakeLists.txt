cmake_minimum_required(VERSION 2.6)

project(glshim)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

include_directories(include)

# Raspberry PI
if(BCMHOST)

    # new libraspberrypi-dev (firwmare - /opt/vc/include)
    # removed lots definition so rpi-includes must
    # come *after* glshim's own definitions
    # reason example: "typedef void* EGLSyncNV;" has disappeared between
    # https://github.com/raspberrypi/firmware/blob/1ce424181429e40f0b68a9ff0be396168fe94671/opt/vc/include/EGL/eglext.h
    # and
    # https://github.com/raspberrypi/firmware/blob/855e997fb4588ef47ab6b4db23b47e42043f7527/opt/vc/include/EGL/eglext.h

    include_directories(/opt/vc/include /opt/vc/include/interface/vcos/pthreads /opt/vc/include/interface/vmcs_host/linux)
    link_directories(/opt/vc/lib)
    add_definitions(-DBCMHOST -D_GNU_SOURCE)
endif()

link_directories(${CMAKE_BINARY_DIR}/lib)
add_definitions(-O2)
include(flags.cmake)

add_subdirectory(src)
