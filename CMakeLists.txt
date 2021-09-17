# cmake_minimum_required(VERSION <specify CMake version here>)
project(mergeSort)

set(CMAKE_CXX_STANDARD 14)

add_executable(mergeSort mergeSort.cpp testCaseGen.h hanoi.h)