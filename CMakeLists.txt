cmake_minimum_required(VERSION 3.21)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE SOURCE ${CMAKE_SOURCE_DIR} src/*.cpp include/*.h)

add_executable(untitled ${SOURCE})