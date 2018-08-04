cmake_minimum_required(VERSION 3.8)
project(hand_in_6_1)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c utility.h utility.c)
add_executable(hand_in_6_1 ${SOURCE_FILES})