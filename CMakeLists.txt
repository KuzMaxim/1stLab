cmake_minimum_required(VERSION 3.10)

project(MyCalculator)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(src)

add_executable(MyCalculator src/main.cpp src/utils.cpp)