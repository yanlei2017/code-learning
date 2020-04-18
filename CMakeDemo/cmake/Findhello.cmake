find_path(HELLO_INCLUDE_DIR hello.hpp 
    /usr/local/include/hello 
    /usr/include/hello 
    )
find_library(HELLO_LIBRARY NAMES hello PATH /usr/local/lib /usr/lib)#find_library是找出这个库，而不是这个库的路径

if(HELLO_LIBRARY AND HELLO_INCLUDE_DIR)
    set(HELLO_FOND TRUE)
endif(HELLO_LIBRARY AND HELLO_INCLUDE_DIR)

if(HELLO_FOUND)
    include_directories(${HELLO_INCLUDE_DIR})
    if(NOT HELLO_FIND_QUIETLY)
    MESSAGE(STATUS "Found Hello: ${HELLO_LIBRARY}")
    endif(NOT HELLO_FIND_QUIETLY)
  else(HELLO_FOUND)  
     if (HELLO_FIND_REQUIRED)
        message(FATAL_ERROR "Could not find hello library")
     endif (HELLO_FIND_REQUIRED)     
endif(HELLO_FOUND)
    
    