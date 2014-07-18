include_directories(util)

file(GLOB_RECURSE GL_SOURCES gl/*.c gl/*.cpp)
file(GLOB UTIL_SOURCES util/*.c)
set(GL_SOURCES ${GL_SOURCES} ${UTIL_SOURCES})

if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    include_directories(glx)
    aux_source_directory(glx GLX_SOURCES)
    list(APPEND GL_SOURCES ${GLX_SOURCES})
else()
    message(STATUS "Not on Linux: building without GLX support.")
endif()

add_library(GL SHARED ${GL_SOURCES})
set_target_properties(GL PROPERTIES VERSION 1.2.0 SOVERSION 1.2.0)
# target_link_libraries(GL EGL)

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
if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    target_link_libraries(preload X11)
endif()

add_subdirectory(proxy)
