cmake_minimum_required(VERSION 3.5)
project(Trudelutt)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp FrontEnd.cpp FrontEnd.h Core.cpp Core.h BackEnd.cpp BackEnd.h Active.cpp Active.h)
add_executable(Trudelutt ${SOURCE_FILES} FrontEnd.cpp FrontEnd.h Core.cpp Core.h BackEnd.cpp BackEnd.h Active.cpp Active.h)