cmake_minimum_required(VERSION 2.8.12 FATAL_ERROR)
project(practice CXX)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "-std=c++14 -Wall" )
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")


add_executable(abc047b_other abc047b_other.cpp)
