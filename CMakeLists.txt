cmake_minimum_required(VERSION 3.17)
project(EasyC__)

set(CMAKE_CXX_STANDARD 14)

add_executable(EasyC__ main.cpp inline&overload/inline.h inline&overload/inline.cpp template/template.h)