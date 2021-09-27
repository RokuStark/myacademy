cmake_minimum_required(VERSION 3.0)

project(myacademy)

add_executable(myacademy main.cpp)

install(TARGETS myacademy RUNTIME DESTINATION bin)
