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
set_tests_properties(Usage
  PROPERTIES PASS_REGULAR_EXPRESSION "Usage:.*number"
  )

# define a function to simplify adding tests
function(do_test target arg result)
  add_test(NAME Comp${arg} COMMAND ${target} ${arg})
  set_tests_properties(Comp${arg}
    PROPERTIES PASS_REGULAR_EXPRESSION ${result}
    )
endfunction(do_test)

# do a bunch of result based tests
do_test(Tutorial "main function, yes")