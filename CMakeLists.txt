cmake_minimum_required(VERSION 3.0.0)
project(hello VERSION 0.1.0)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g") #开启调试
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)#输出文件夹

#aux_source_directory(src/c++ DIR_SRCS)
include_directories(
/home/yanlei/note/c++/inc
)
set(DIR_SRCS
src/c++/main.cpp
src/c++/hello.cpp
)
message("this is DIR_SRCS ${DIR_SRCS}")
message("this is PROJECT_SOURCE_DIR" ${PROJECT_SOURCE_DIR})



add_executable(hello ${DIR_SRCS})

