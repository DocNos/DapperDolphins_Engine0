cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(Test VERSION 0.1)

# add the executable
add_executable(Tutorial TestCode.cpp)

enable_testing()

# does the application run
add_test(NAME Runs COMMAND Tutorial)

# does the usage message work?
add_test(NAME Usage COMMAND Tutorial)

# do a bunch of result based tests
do_test(Tutorial "main function, yes")