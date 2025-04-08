# cmake files start with required versions
cmake_minimum_required(VERSION 3.20...4.0)

# project 'statement' listing version and languages is nice here
project(Algorithms
  VERSION 0.0.1
  LANGUAGES C)

# setting c language standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# libraries
add_library(binary_search STATIC binary_search.c binary_search.h)

# add executable
add_executable(test_binary_search test_binary_search.c)

# set target and direct to link with libraries
target_link_libraries(test_binary_search binary_search)

# set compiler flags
target_compile_options(test_binary_search PRIVATE
  -g3 -Wall -Wextra -Wconversion -Wdouble-promotion
  -Wno-unused-parameter -Wno-unused-function -Wno-sign-conversion)
