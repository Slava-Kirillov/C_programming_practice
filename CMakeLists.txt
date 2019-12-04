cmake_minimum_required(VERSION 3.15)
project(testproject C)

set(CMAKE_C_STANDARD 99)

add_executable(testproject src/function_pointer_main.c src/function_pointer.h src/function_pointer.c)