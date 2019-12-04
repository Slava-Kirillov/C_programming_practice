cmake_minimum_required(VERSION 3.15)
set(CMAKE_C_STANDARD 99)

#-----------------------------------------------------------------------------------------------------------------------
project(function_pointer C)

add_executable(function_pointer src/function_pointer/main.c src/function_pointer/function_pointer.h
        src/function_pointer/function_pointer.c)
#-----------------------------------------------------------------------------------------------------------------------

#-----------------------------------------------------------------------------------------------------------------------
project(parallel_computation C)
add_executable(parallel_computation src/parallel_computation/main.c src/parallel_computation/pi_parallel_computation.c src/parallel_computation/pi_parallel_computation.h)

target_link_libraries(parallel_computation -lpthread)
#-----------------------------------------------------------------------------------------------------------------------