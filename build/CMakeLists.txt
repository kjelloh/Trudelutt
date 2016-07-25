cmake_minimum_required(VERSION 3.5)
project(Trudelutt)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp FrontEnd.cpp FrontEnd.h Core.cpp Core.h BackEnd.cpp BackEnd.h Active.cpp Active.h)
add_executable(Trudelutt ${SOURCE_FILES} FrontEnd.cpp FrontEnd.h Core.cpp Core.h BackEnd.cpp BackEnd.h Active.cpp Active.h)

# We need to specify the threads library to have gcc/clang and autotolls work on Linux (or Linux emulation console on windows e.g., MSYS2)
find_package( Threads )
target_link_libraries( Trudelutt ${CMAKE_THREAD_LIBS_INIT} )