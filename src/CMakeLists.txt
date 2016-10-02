include_directories(util)

file(GLOB_RECURSE REMOTE_SOURCES remote/*.c)
add_executable(remote EXCLUDE_FROM_ALL ${REMOTE_SOURCES})
set_target_properties(remote PROPERTIES OUTPUT_NAME libgl_remote)
target_link_libraries(remote GL_static X11 m dl pthread)

file(GLOB_RECURSE GL_SOURCES gl/*.c gl/*.cpp)
file(GLOB UTIL_SOURCES util/*.c util/math/*.c)

include_directories(glx)
aux_source_directory(glx GLX_SOURCES)
set(GL_SOURCES ${GL_SOURCES} ${GLX_SOURCES} ${UTIL_SOURCES})
if(DUALMODE)
    set(GL_SOURCES ${GL_SOURCES} ${REMOTE_SOURCES})
endif()

add_library(GL_obj OBJECT ${GL_SOURCES})
set_target_properties(GL_obj PROPERTIES POSITION_INDEPENDENT_CODE 1)

add_library(GL SHARED $<TARGET_OBJECTS:GL_obj>)
target_link_libraries(GL X11 m dl pthread)

add_library(GL_static STATIC $<TARGET_OBJECTS:GL_obj>)
set_target_properties(GL_static PROPERTIES OUTPUT_NAME GL)

add_library(GL2 SHARED EXCLUDE_FROM_ALL ${GL_SOURCES})
set_target_properties(GL2 PROPERTIES COMPILE_FLAGS -DUSE_ES2)

aux_source_directory(preload PRELOAD_SOURCES)
add_library(preload SHARED EXCLUDE_FROM_ALL ${PRELOAD_SOURCES})
target_link_libraries(preload X11)

if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    target_link_libraries(GL rt)
    target_link_libraries(remote rt)
    if(DUALMODE)
        target_link_libraries(GL -fPIE -pie)
    endif()
endif()

INSTALL(TARGETS GL
    ${INSTALL_TARGETS_DEFAULT_ARGS}
)
