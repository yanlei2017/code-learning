cmake_minimum_required(VERSION 3.1.0)
project(main)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
find_package(hello)
#指令是大小写无关的，参数和变量是大小写相关的
if(HELLO_FOUND)
    add_executable(${PROJECT_NAME} main.cpp)
    target_link_libraries(${PROJECT_NAME} ${HELLO_LIBRARY})
endif(HELLO_FOUND)