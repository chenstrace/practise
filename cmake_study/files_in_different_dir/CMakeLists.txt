# CMake 最低版本号要求
cmake_minimum_required(VERSION 2.8)
# 项目信息
project (files_in_different_dir)

#当执行make时，输出编译过程中执行的命令
set(CMAKE_VERBOSE_MAKEFILE ON)

set(CMAKE_BUILD_TYPE "Debug")

#GCC Debug
set(CMAKE_C_FLAGS_DEBUG "$ENV{CFLAGS} -O0 -Wall -g -ggdb")  

#GCC Release
set(CMAKE_C_FLAGS_RELEASE "$ENV{CFLAGS} -O3 -Wall")

#G++ Debug
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")  

#G++ Release
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

include_directories(${CMAKE_SOURCE_DIR}/add)

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)
# 添加 add 子目录
add_subdirectory(add)


# 指定生成目标 
add_executable(testadd main.cc)
# 添加链接库
target_link_libraries(testadd add)
