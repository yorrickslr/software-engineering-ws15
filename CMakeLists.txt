cmake_minimum_required(VERSION 3.0.1 FATAL_ERROR)

project(Converter)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_CXX_FLAGS "${CMAKE_CSS_FLAGS} -std=c++11")

include_directories(${CMAKE_SOURCE_DIR}/include)
file(GLOB HEADERS ${CMAKE_SOURCE_DIR}/include/*.hpp)
file(GLOB SOURCES ${CMAKE_SOURCE_DIR}/include/*.cpp)
add_library(includelib ${SOURCES} ${HEADERS})

add_executable(tests ${CMAKE_SOURCE_DIR}/include/tinytest.h ${CMAKE_SOURCE_DIR}/src/tests.cpp)
target_link_libraries(tests includelib)

add_executable(converter ${CMAKE_SOURCE_DIR}/src/main.cpp)
target_link_libraries(converter includelib)