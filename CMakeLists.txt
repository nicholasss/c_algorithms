# cmake files start with required versions
cmake_minimum_required(VERSION 3.20...4.0)

# project 'statement' listing version and languages is nice here
project(Algorithms
  VERSION 0.1.0
  LANGUAGES C)

# setting c language standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# setting compiler flags
set(COMPILER_FLAGS
  -ggdb3
  -Wall
  -Wextra
  -Wconversion
  -Wdouble-promotion
  -Wno-unused-parameter
  -Wno-unused-function
  -Wno-sign-conversion
  -Wpedantic
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# libraries
add_library(print_array STATIC print_array.c print_array.h)

# algorithm library
add_library(binary_search STATIC binary_search.c binary_search.h)
add_library(linear_search STATIC linear_search.c linear_search.h)

add_library(selection_sort STATIC selection_sort.c selection_sort.h)
add_library(bubble_sort STATIC bubble_sort.c bubble_sort.h)
add_library(merge_sort STATIC merge_sort.c merge_sort.h)

# add executable
add_executable(test_binary_search test_binary_search.c)
add_executable(test_linear_search test_linear_search.c)

add_executable(test_selection_sort test_selection_sort.c)
add_executable(test_bubble_sort test_bubble_sort.c)
add_executable(test_merge_sort test_merge_sort.c)

# set target and direct to link with libraries
target_link_libraries(test_binary_search binary_search print_array)
target_link_libraries(test_linear_search linear_search print_array)

target_link_libraries(test_selection_sort selection_sort print_array)
target_link_libraries(test_bubble_sort bubble_sort print_array)
target_link_libraries(test_merge_sort merge_sort print_array)

# set compiler flags
target_compile_options(test_binary_search PRIVATE ${COMPILER_FLAGS})
target_compile_options(test_linear_search PRIVATE ${COMPILER_FLAGS})

target_compile_options(test_selection_sort PRIVATE ${COMPILER_FLAGS})
target_compile_options(test_bubble_sort PRIVATE ${COMPILER_FLAGS})
target_compile_options(test_merge_sort PRIVATE ${COMPILER_FLAGS})
