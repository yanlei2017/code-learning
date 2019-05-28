cmake_minimum_required(VERSION 3.5)
#项目名称
project(hello_slam)
#add_definitions(-Wall)
#代码路径
aux_source_directory(. DIR_TOOT_SRCS)
include_directories("/usr/include/eigen3")
#dubug 模式
set (CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -g")
#生成可执行的文件
add_executable(hello_slam ${DIR_TOOT_SRCS})
