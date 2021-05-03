cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(Test VERSION 0.1)

# add the executable
add_executable(Tutorial TestCode.cpp)

add_custom_command(
  OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/Tutorial.h
  COMMAND Tutorial ${CMAKE_CURRENT_BINARY_DIR}/Tutorial.h
  DEPENDS Tutorial
  )