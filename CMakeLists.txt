cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(citest)

add_subdirectory(mylib)

enable_testing()
add_subdirectory(tests)
