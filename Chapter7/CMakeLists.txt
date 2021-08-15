cmake_minimum_required(VERSION 3.14)
project(Chapter7 C)

set(CMAKE_C_STANDARD 99)

add_executable(Chapter7 helloworld.c mathutils/factorial.c mathutils/fibonacci.c mathutils/include/factorial.h mathutils/include/fibonacci.h)