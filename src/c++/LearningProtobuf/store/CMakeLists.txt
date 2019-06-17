project(primerplus)
# set_target_properties(primerplus PROPERTIES LINKER_LANGUAGE CXX)

cmake_minimum_required(VERSION 2.8)

#protobuf
find_package(Protobuf REQUIRED)
if(PROTOBUF_FOUND)
    message(STATUS "protobuf library found")
else()
    message(FATAL_ERROR "protobuf library is needed but cant be found")
endif()
include_directories(${PROTOBUF_INCLUDE_DIRS})
include_directories(${PROJECT_SOURCE_DIR}/protobuf/protobuf_generated)
aux_source_directory(${PROJECT_SOURCE_DIR}/protobuf/protobuf_generated SRC_LIST_PROTOBUF)
message("SRC_LIST_PROTOBUF: " ${SRC_LIST_PROTOBUF})

aux_source_directory(${PROJECT_SOURCE_DIR} SRC_LIST)
message("SRC_LIST: " ${SRC_LIST})

add_executable(${PROJECT_NAME} ${SRC_LIST} ${SRC_LIST_PROTOBUF})
target_link_libraries(${PROJECT_NAME} ${PROTOBUF_LIBRARIES})