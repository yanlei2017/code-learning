cmake_minimum_required(VERSION 3.0.0)#cmake最小版本
project(hello VERSION 0.1.0)#工程名字
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g") #开启调试
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)#输出文件夹
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)#设定安装的文件夹 也可以用 cmake -D CMAKE_INSTALL_PREFIX=/home/yanlei/temp/cmake ..
set(CMAKE_CXX_STANDARD 11)#C++11标准
#set(CMAKE_INSTALL_PREFIX /home/yanlei/temp/cmake)
#把src/c++中的源文件全部加入变量DIR_SRCS
#aux_source_directory(src/c++ DIR_SRCS)

#头文件目录
include_directories(
/home/yanlei/note/c++/inc
)

#源文件
#set(DIR_SRCS
#src/c++/main.cpp
#src/c++/hello.cpp
#)

#控制台打印消息
message("This is DIR_SRCS: " ${DIR_SRCS})
message("This is PROJECT_SOURCE_DIR: " ${PROJECT_SOURCE_DIR})#工程代码所在目录
message("This is PROJECT_BINARY_DIR: " ${PROJECT_BINARY_DIR})#PROJECT_BINARY_DIR就是编译发生的当前目录

message("This is hello_SOURCE_DIR: " ${hello_SOURCE_DIR})
message("This is CMAKE_CXX_FLAGS: " ${CMAKE_CXX_FLAGS})
message("This is EXECUTABLE_OUTPUT_PATH: " ${EXECUTABLE_OUTPUT_PATH})
add_subdirectory(src bin)

#link可执行文件
#add_executable(hello ${DIR_SRCS})


install(FILES COPYRIGHT README.MD DESTINATION share/doc/cmake/t2)
install(PROGRAMS runhello.sh DESTINATION bin)
install(DIRECTORY doc/ DESTINATION share/doc/cmake/t2)

