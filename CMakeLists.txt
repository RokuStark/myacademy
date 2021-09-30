# CMakeLists 
cmake_minimum_required(VERSION 3.0)
project(myacademy)

#include directory
include_directories( src )
aux_source_directory( src SRC_LIST )
add_executable(myacademy main.cpp ${SRC_LIST})

#add target
install(TARGETS myacademy RUNTIME DESTINATION bin)
