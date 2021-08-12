cmake_minimum_required(VERSION 3.14)
project(Chapter6 C)

set(CMAKE_C_STANDARD 99)

add_executable(Chapter6 include/print_util.h 06.shuffle_array.c 07.quick_sort.c)