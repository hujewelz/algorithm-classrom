cmake_minimum_required(VERSION 3.10)

project(algorithm)

add_executable(main main.cpp)
target_include_directories(main
 PRIVATE 
  ${CMAKE_SOURCE_DIR}/sort
  ${CMAKE_SOURCE_DIR}/helper)