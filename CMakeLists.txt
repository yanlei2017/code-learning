cmake_minimum_required(VERSION 3.0.0)#cmake最小版本
project(hello VERSION 0.1.0)#工程名字
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall") #开启调试
set (CMAKE_CXX_STANDARD 11)#C++11标准
#CMAKE语言，指令是大小写无关的，参数和变量是大小写相关的

#set(CMAKE_INSTALL_PREFIX /home/yanlei/temp/cmake)#设定安装的文件夹 也可以用 cmake -D CMAKE_INSTALL_PREFIX=/home/yanlei/temp/cmake ..

################################################################
#                          编译库文件
################################################################

aux_source_directory(${CMAKE_CURRENT_LIST_DIR}/lib/src LIB_SRC)

include_directories(${CMAKE_CURRENT_LIST_DIR}/lib/inc)

set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_LIST_DIR}/lib/libso)#LIB输出位置
add_library(hello SHARED ${LIB_SRC})
add_library(hello_static STATIC ${LIB_SRC})

set_target_properties(hello_static PROPERTIES OUTPUT_NAME "hello")
set_target_properties(hello PROPERTIES VERSION 1.2 SOVERSION 1)

#get_target_property(output_name hello_static OUTPUT_NAME)
#if(output_name)
#message("This is output_name： " ${output_name：})  
#endif(output_name)

install(TARGETS hello hello_static 
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

install(FILES lib/inc/hello.hpp 
        DESTINATION include/hello)

################################################################
#                         endof  编译库文件
################################################################

set(PROJECT_SRCS
main.cpp
)

#头文件目录
include_directories(
/home/yanlei/note/c++/inc
/home/yanlei/note/c++/lib/inc
)
#前面我们直接使用了绝对路径 INCLUDE_DIRECTORIES(/usr/include/hello)告诉工程这个头文件目录。
#为了将程序更智能一点，我们可以使用 CMAKE_INCLUDE_PATH 来进行

#特殊的环境变量 CMAKE_INCLUDE_PATH 和 CMAKE_LIBRARY_PATH
#务必注意，这两个是环境变量而不是 cmake 变量。使用方法是要在 bash 中用 export 或者在 csh 中
#使用 set 命令设置或者CMAKE_INCLUDE_PATH=/home/include 等方式

#find_path(myheader hello.hpp /usr/include/hello /usr/include )#指定路径寻找


#库文件目录
link_directories(
    /home/yanlei/note/c++/lib/libso
)

# find_library(mylib hello)      #find_library会查找CMAKE_LIBRARY_PATH路径
# if(mylib)
# message( "This is mylib: " ${mylib})
# link_directories(${mylib})
# endif(mylib)

find_library(mylib NAMES hello PATH /home/yanlei/note/c++/lib/libso)
#控制台打印消息
message("This is project name : " ${PROJECT_NAME})
message("This is PROJECT_SOURCE_DIR: " ${PROJECT_SOURCE_DIR})#工程代码所在目录
message("This is PROJECT_BINARY_DIR: " ${PROJECT_BINARY_DIR})#PROJECT_BINARY_DIR就是编译发生的当前目录
message("This is hello_SOURCE_DIR: " ${hello_SOURCE_DIR})
message("This is CMAKE_CXX_FLAGS: " ${CMAKE_CXX_FLAGS})
message("This is CMAKE_INSTALL_PREFIX: " ${CMAKE_INSTALL_PREFIX})

#link可执行文件
set (EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)#输出文件夹
add_executable(helloworld ${PROJECT_SRCS})
target_link_libraries(helloworld hello)
# target_link_libraries(helloworld ${mylib})

install(FILES COPYRIGHT README.MD DESTINATION share/doc/hello) #安装文件到DESTINATION，share/doc/cmake/t2是相对CMAKE_INSTALL_PREFIX的路径
install(PROGRAMS script/runhello.sh  DESTINATION bin)          #安装程序到/usr/local/bin
install(DIRECTORY doc/ DESTINATION share/doc/hello)            #安装doc目录下的文件到/usr/localshare/doc/hello
install(TARGETS helloworld RUNTIME DESTINATION bin )           #安装可执行文件helloworld到/usr/local/bin