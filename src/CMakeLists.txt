

set(DIR_SRCS
c++/main.cpp
c++/hello.cpp
)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)#bin输出文件夹
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)#静态 动态库 存放的路径
add_executable(hello ${DIR_SRCS})