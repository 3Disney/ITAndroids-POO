cmake_minimum_required(VERSION 3.22)
project(poo1)

set(CMAKE_CXX_STANDARD 14)

add_executable(poo1 main.cpp line.h point.h Robot.cpp Robot.h Person.cpp Person.h)
