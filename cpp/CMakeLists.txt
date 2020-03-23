cmake_minimum_required(VERSION 3.5)
project(cpp)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_C_STANDARD 99)
#set(CMAKE_VERBOSE_MAKEFILE ON)
#set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
#set(CMAKE_BUILD_TYPE Release)

add_executable(main main.cpp)
add_executable(operator_sequence operator_sequence.cpp)
add_executable(read_write_binary_file read_write_binary_file.cpp)
add_executable(ctor_dtor_sequence ctor_dtor_sequence.cpp)
add_executable(rw_binary_file_in_c rw_binary_file_in_c.c)
add_executable(mkdir mkdir.cpp)
target_link_libraries(read_write_binary_file -L/usr/local/lib -lboost_system -lboost_filesystem)


