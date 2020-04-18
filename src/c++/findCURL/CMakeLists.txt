cmake_minimum_required( VERSION 3.1.0)
project(findCURL)
INCLUDE_DIRECTORIES(/usr/include)

find_package(curl)
if(curl_FOND)
    INCLUDE_DIRECTORIES(${CURL_INCLUDE_DIR})
    target_link_libraries(${PROJECT_NAME} ${CURL_LIBRARY})
    else(curl_FOND)
    message(FATAL_ERROR "CURL LIBRARY NOT FOUND")
    
endif(curl_FOND)

add_executable(${PROJECT_NAME} main.cpp)
TARGET_LINK_LIBRARIES(${PROJECT_NAME} curl)