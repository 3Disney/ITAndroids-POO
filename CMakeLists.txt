cmake_minimum_required(VERSION 3.22)
project(poo2)

set(CMAKE_CXX_STANDARD 14)

add_executable(poo2 main.cpp Rectangle.h Father.h Animal.h Subject.h Complex.cpp Complex.h Matrix.cpp Matrix.h Number.h FILE.cpp FILE.h)
