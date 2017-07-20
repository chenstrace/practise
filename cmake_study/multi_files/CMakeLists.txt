# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)
# 项目信息
project (multi_files)
# 指定生成目标
add_executable(test_add main.c add.c)
