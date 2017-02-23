cmake_minimum_required(VERSION 3.6)
project(CS2370_ICP12)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp NUMBERLIST.cpp NUMBERLIST.h)
add_executable(CS2370_ICP12 ${SOURCE_FILES})