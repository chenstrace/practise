# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)
set(CMAKE_VERBOSE_MAKEFILE ON)

# 项目信息
project (helloworld)
# 指定生成目标
add_executable(helloworld test.c)
