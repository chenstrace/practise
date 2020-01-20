cmake_minimum_required(VERSION 3.5)

project(test)
SET(CMAKE_CXX_STANDARD 11)
set(CMAKE_C_STANDARD 99)

aux_source_directory(${PROJECT_SOURCE_DIR} ALL_SOURCE_FILES)

message(STATUS "Found source files: ${ALL_SOURCE_FILES}")

foreach( source_file ${ALL_SOURCE_FILES} )
	get_filename_component(exec_file ${source_file} NAME_WE)
    add_executable(${exec_file} ${source_file} )
endforeach()
