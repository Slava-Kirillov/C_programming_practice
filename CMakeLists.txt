cmake_minimum_required(VERSION 3.15)
project(testproject C)

set(CMAKE_C_STANDARD 99)

add_executable(testproject function_pointer.c)