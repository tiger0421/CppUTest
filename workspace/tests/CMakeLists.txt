cmake_minimum_required(VERSION 3.10)
project(MathOperationsTest)

set(CMAKE_CXX_STANDARD 11)

include_directories(../autoGen ../src)
add_executable(test_add test_add.cpp ../autoGen/add.c)
add_executable(test_sub test_sub.cpp ../src/sub.c)

target_link_libraries(test_add CppUTest CppUTestExt)
target_link_libraries(test_sub CppUTest CppUTestExt)

