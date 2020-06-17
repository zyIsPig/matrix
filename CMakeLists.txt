cmake_minimum_required(VERSION 3.16)
project(matrix)

set(CMAKE_CXX_STANDARD 14)


include_directories("Eigen")

add_executable(matrix main.cpp matrix.cpp matrix.h sparse_matrix.cpp sparse_matrix.h exception.h Complex.h convert.cpp
        vector.hpp
        )