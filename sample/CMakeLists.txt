cmake_minimum_required(VERSION 3.11)

project(sample)

file(GLOB SAMPLE_HEADERS
    inc/*.h)
	
file(GLOB SAMPLE_SOURSES
    src/*.cpp)

add_executable(sample ${SAMPLE_HEADERS} ${SAMPLE_SOURSES})
target_include_directories(sample PUBLIC ../plugin)
target_link_libraries(sample weriety_plugin)