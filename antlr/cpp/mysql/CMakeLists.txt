cmake_minimum_required(VERSION 3.14)
project(mysql_demo)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_FLAGS "-g -ggdb3")
set(CMAKE_C_FLAGS "-g -ggdb3")
include_directories(
        ${PROJECT_SOURCE_DIR}/generated/
        ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime/src
)
set(src_dir
    ${PROJECT_SOURCE_DIR}/generated/MySqlLexer.cpp
    ${PROJECT_SOURCE_DIR}/generated/MySqlParser.cpp
    ${PROJECT_SOURCE_DIR}/generated/MySqlParserBaseListener.cpp
    ${PROJECT_SOURCE_DIR}/generated/MySqlParserListener.cpp
 )
file(GLOB antlr4-cpp-src
    ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime/src/*.cpp
    ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime/src/atn/*.cpp
    ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime/src/dfa/*.cpp
    ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime/src/misc/*.cpp
    ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime/src/support/*.cpp
    ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime/src/tree/*.cpp
    ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime/src/tree/pattern/*.cpp
    ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime/src/tree/xpath/*.cpp
)
add_library (antlr4-cpp-runtime ${antlr4-cpp-src})
add_executable(${PROJECT_NAME} ${src_dir} main.cpp)
target_link_libraries(${PROJECT_NAME} antlr4-cpp-runtime)
