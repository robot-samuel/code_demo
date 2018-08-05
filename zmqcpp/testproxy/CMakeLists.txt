cmake_minimum_required(VERSION 2.6.2)

project(testproxy)

include_directories(
    
    ./
)

set(CMAKE_CXXFLAGS "${CMAKE_CXXFLAGS}  -g -pedantic -W -fopenmp -Wall -O0")

# Linker options
set(CMAKE_LDFLAGS "${CMAKE_LDFLAGS} -s")

# Library path
set(CMAKE_LDFLAGS "${CMAKE_LDFLAGS} -L\"/usr/local/lib/\" -L\"/usr/lib/\" -L\"/lib/\" -I\"/usr/include/")

set(SRCS
    main.cpp
    common/zmq.hpp
)

add_executable(testproxy ${SRCS})

target_link_libraries(testproxy
    -lzmq
    -lz
    -ldl
    -lm
)

