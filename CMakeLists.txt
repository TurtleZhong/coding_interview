cmake_minimum_required(VERSION 3.9)
project(coding_interview)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(05_replace_spaces src/05_replace_spaces.cpp)

add_executable(03_duplication_in_array src/03_duplication_in_array.cpp)