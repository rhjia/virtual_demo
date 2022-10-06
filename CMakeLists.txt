cmake_minimum_required(VERSION 3.21)
project(enen)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(enen
        cococo.cpp
        cococo.h)
