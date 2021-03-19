cmake_minimum_required(VERSION 3.17)
project(21s-pa02-MikeCuzzo)

set(CMAKE_CXX_STANDARD 17)

include_directories(./src)

add_executable(21s-pa02-MikeCuzzo
        src/main.cpp
        src/AlgorithmStrategy.h
        src/Sort.cpp
        src/Sort.h
        src/SortAlgs.cpp
        src/SortAlgs.h)