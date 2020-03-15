cmake_minimum_required(VERSION 3.13)
project(cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


add_executable(cpp main.cpp)
add_executable(operator_sequence operator_sequence.cpp)
add_executable(read_write_binary_file read_write_binary_file.cpp)
add_executable(ctor_dtor_sequence ctor_dtor_sequence.cpp)
add_executable(mkdir mkdir.cpp)
target_include_directories(read_write_binary_file PUBLIC /usr/local/include)
target_link_libraries(read_write_binary_file -L/usr/local/lib -lboost_system -lboost_filesystem)