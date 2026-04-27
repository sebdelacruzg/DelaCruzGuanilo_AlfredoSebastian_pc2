cmake_minimum_required(VERSION 3.10)
project(PC2_Number_Of_Atoms)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Headers
include_directories(include)

# Solucion
add_library(solution_lib src/Solution.cpp)

# Tests
add_executable(run_tests tests/test_main.cpp)

# Link librerias
target_link_libraries(run_tests solution_lib)