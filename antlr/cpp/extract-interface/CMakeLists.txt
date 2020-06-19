cmake_minimum_required(VERSION 3.14)
project(extract_interface)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_FLAGS "-g -ggdb3")
set(CMAKE_C_FLAGS "-g -ggdb3")
include_directories(
        ${PROJECT_SOURCE_DIR}/third_party/
        ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime/src
)
set(src_dir
        ${PROJECT_SOURCE_DIR}/JavaLexer.cpp
        ${PROJECT_SOURCE_DIR}/JavaParser.cpp
        ${PROJECT_SOURCE_DIR}/JavaBaseListener.cpp
        ${PROJECT_SOURCE_DIR}/JavaListener.cpp
 )
add_executable(extract_interface ${src_dir} main.cpp)
target_link_libraries(extract_interface  -L${PROJECT_SOURCE_DIR} libantlr4-cpp-runtime.a)
