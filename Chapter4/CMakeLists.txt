cmake_minimum_required(VERSION 3.14)
project(Chapter4 C)

set(CMAKE_C_STANDARD 99)

add_executable(Chapter4 05.printfln.c)
#target_compile_definitions(04.conditional_macro.c PUBLIC DEBUG)