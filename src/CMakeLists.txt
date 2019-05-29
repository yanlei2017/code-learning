cmake_minimum_required(VERSION 3.10)

set(DIR_SRCS
main.cpp
)

#include_directories(/usr/include/hello)

find_path(myheader hello.hpp)                   
if(myheader)
message( "This is myheader: " ${myheader})
include_directories(${myheader})    
endif(myheader)
#前面我们直接使用了绝对路径 INCLUDE_DIRECTORIES(/usr/include/hello)告诉工程这个头文件目录。
#为了将程序更智能一点，我们可以使用 CMAKE_INCLUDE_PATH 来进行

#特殊的环境变量 CMAKE_INCLUDE_PATH 和 CMAKE_LIBRARY_PATH
#务必注意，这两个是环境变量而不是 cmake 变量。
#使用方法是要在 bash 中用 export 或者在 csh 中使用 set 命令设置或者
#CMAKE_INCLUDE_PATH=/home/include 等方式

#find_path(myheader hello.hpp /usr/include/hello /usr/include )#指定路径寻找


find_library(mylib hello)
if(mylib)
message( "This is mylib: " ${mylib})
link_directories(${mylib})
endif(mylib)

find_library(mylib hello /home/yanlei/note/c++/lib/libso)


#set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)#bin输出文件夹
#set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)#静态 动态库 存放的路径

add_executable(main ${DIR_SRCS})
target_link_libraries(main ${mylib})
#target_link_libraries(main hello)

#install(TARGETS hello RUNTIME DESTINATION bin)  #安装可执行程序