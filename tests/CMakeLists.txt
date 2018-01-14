cmake_minimum_required(VERSION 3.1)

project(tests)
include_directories(${CMAKE_SOURCE_DIR}/mylib)
add_executable(tests test.cpp)
target_link_libraries(tests mylib)
add_test(NAME MylibTest COMMAND tests WORKING_DIRECTORY ${CMAKE_INSTALL_PREFIX})
