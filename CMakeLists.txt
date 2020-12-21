cmake_minimum_required(VERSION 3.11)

project(weriety)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

configure_file(werietyconfig.h.in werietyconfig.h)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(plugin)
add_subdirectory(sample)
add_subdirectory(test)

