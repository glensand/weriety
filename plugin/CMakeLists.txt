cmake_minimum_required(VERSION 3.11)

project(weriety_plugin)

add_definitions(-DEXPORT=1)

file(GLOB W_HEADERS
    *.h)
	
file(GLOB W_SOURSES
    *.cpp)

add_library(weriety_plugin SHARED ${W_HEADERS} ${W_SOURSES})