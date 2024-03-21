cmake_minimum_required(VERSION 3.27)
project(c_utils C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

#############
# Options for build.
option(UNIT_TEST "Build test programs" OFF)

##############
# For project build.
add_subdirectory(src)
enable_testing()
add_subdirectory(tests)
