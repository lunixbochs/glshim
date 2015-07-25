include_directories(. util)

file(GLOB_RECURSE GL_SOURCES gl/*.c gl/*.cpp)
file(GLOB UTIL_SOURCES util/*.c util/math/*.c util/glouija/*.c)
set(GL_SOURCES ${GL_SOURCES} ${UTIL_SOURCES})

include_directories(glx)
aux_source_directory(glx GLX_SOURCES)
list(APPEND GL_SOURCES ${GLX_SOURCES})

add_library(GL SHARED ${GL_SOURCES})
set_target_properties(GL PROPERTIES VERSION 1 SOVERSION 1.2.0)
target_link_libraries(GL X11 m dl)

add_library(GL_static STATIC EXCLUDE_FROM_ALL ${GL_SOURCES})
set_target_properties(GL_static PROPERTIES OUTPUT_NAME GL)

add_library(GL2 SHARED EXCLUDE_FROM_ALL ${GL_SOURCES})
set_target_properties(GL2 PROPERTIES COMPILE_FLAGS -DUSE_ES2)

if(BCMHOST)
    set(PI_LIBS bcm_host vcos pthread)
    target_link_libraries(GL ${PI_LIBS} GLESv1_CM)
    target_link_libraries(GL2 ${PI_LIBS} GLESv2)
endif()

aux_source_directory(preload PRELOAD_SOURCES)
add_library(preload SHARED EXCLUDE_FROM_ALL ${PRELOAD_SOURCES})
target_link_libraries(preload X11)

file(GLOB_RECURSE REMOTE_SOURCES remote/*.c)
add_executable(remote EXCLUDE_FROM_ALL ${REMOTE_SOURCES})
set_target_properties(remote PROPERTIES OUTPUT_NAME libgl_remote)
target_link_libraries(remote X11 GL_static)

INSTALL(TARGETS GL
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
)
