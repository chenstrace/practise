cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_FLAGS "-g -ggdb3")
project(labeledexpr)
set(CMAKE_CXX_STANDARD 14)
include_directories(
        ${PROJECT_SOURCE_DIR}/generated/
        ${PROJECT_SOURCE_DIR}/third_party/
        ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime/src
        ${PROJECT_SOURCE_DIR}/src/
)
set(src_dir
        ${PROJECT_SOURCE_DIR}/generated/LabeledExprLexer.cpp
        ${PROJECT_SOURCE_DIR}/generated/LabeledExprParser.cpp
        ${PROJECT_SOURCE_DIR}/generated/LabeledExprVisitor.cpp
        ${PROJECT_SOURCE_DIR}/generated/LabeledExprBaseVisitor.cpp
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
add_executable(labeledexpr ${src_dir} src/main.cpp)
target_link_libraries(labeledexpr antlr4-cpp-runtime)
