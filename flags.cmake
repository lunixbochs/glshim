add_definitions(-g -funwind-tables -ffast-math)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fpermissive")

# this causes "illegal instruction" on rpi:
#if(CMAKE_SYSTEM_PROCESSOR MATCHES "^arm")
#    add_definitions(-fsingle-precision-constant -mfpu=neon -march=armv7-a -mcpu=cortex-a8 -mtune=cortex-a8)
#endif()
