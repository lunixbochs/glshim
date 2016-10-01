cmake_minimum_required(VERSION 2.8.8)

project(glshim)
set(CMAKE_MACOSX_RPATH 1)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
    link_directories(/opt/X11/lib)
endif()

set(BIN_INSTALL_DIR bin)
set(LIB_INSTALL_DIR lib/${CMAKE_LIBRARY_ARCHITECTURE}/glshim)

set(INSTALL_TARGETS_DEFAULT_ARGS RUNTIME DESTINATION "${BIN_INSTALL_DIR}"
                                 LIBRARY DESTINATION "${LIB_INSTALL_DIR}"
                                 ARCHIVE DESTINATION "${LIB_INSTALL_DIR}")

link_directories(${CMAKE_BINARY_DIR}/lib)
add_definitions(-O2)
include(flags.cmake)

include_directories(include)
add_subdirectory(src)
