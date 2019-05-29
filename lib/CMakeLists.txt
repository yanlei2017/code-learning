cmake_minimum_required(VERSION 3.10)

aux_source_directory(${CMAKE_CURRENT_LIST_DIR}/src LIB_HELLO_SRC)

include_directories(${CMAKE_CURRENT_LIST_DIR}/inc)

set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_LIST_DIR}/libso)#LIB输出位置

add_library(hello SHARED ${LIB_HELLO_SRC})
add_library(hello_static STATIC ${LIB_HELLO_SRC})
set_target_properties(hello_static PROPERTIES OUTPUT_NAME "hello")
set_target_properties(hello PROPERTIES VERSION 1.2 SOVERSION 1)
get_target_property(OUTPUT_VALUE hello_static OUTPUT_NAME)

install(TARGETS hello hello_static 
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

install(FILES hello.hpp 
        DESTINATION include/hello)

