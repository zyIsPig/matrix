cmake_minimum_required(VERSION 3.16)
project(matrix)

set(CMAKE_CXX_STANDARD 14)

add_executable(matrix main.cpp matrix/matrix.cpp matrix/matrix.h matrix/sparse_matrix.cpp matrix/sparse_matrix.h matrix/exception.h matrix/Complex.h matrix/Vector.cpp matrix/Vector.h)