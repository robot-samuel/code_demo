cmake_minimum_required(VERSION 2.8.0)

project(16-udpnpde_exam_2_sync)



include_directories(

)

# Linker options
set(CMAKE_LDFLAGS "${CMAKE_LDFLAGS}  ")

# Library path
set(CMAKE_LDFLAGS "${CMAKE_LDFLAGS} -L\".\" -L\"/usr/local/lib/\" -L\"/usr/lib/\" -L\"/lib/\" ")

# Define the CXX sources
set ( CXX_SRCS
    main.cpp
    udpnode_sync.cpp
)

set_source_files_properties(
    ${CXX_SRCS} PROPERTIES COMPILE_FLAGS 
    " -g -O0 -Wall")

add_executable(16-udpnpde_exam_2_sync ${CXX_SRCS} ${C_SRCS})

target_link_libraries(16-udpnpde_exam_2_sync
    -lz
    -ldl
    -lm
    -lpthread
    -lboost_date_time
    -lboost_filesystem
    -lboost_graph
    -lboost_iostreams
    -lboost_thread
    -lboost_math_c99
    -lboost_math_c99f
    -lboost_math_tr1
    -lboost_math_tr1f
    -lboost_serialization
    -lboost_signals
    -lboost_system
)

