cmake_minimum_required(VERSION 3.0.1 FATAL_ERROR)

project(Converter)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_CXX_FLAGS "${CMAKE_CSS_FLAGS} -std=c++11")

enable_testing()

include_directories(${CMAKE_SOURCE_DIR}/include)
file(GLOB HEADERS ${CMAKE_SOURCE_DIR}/include/*.hpp)
file(GLOB SOURCES ${CMAKE_SOURCE_DIR}/include/*.cpp)
add_library(includelib ${SOURCES} ${HEADERS})

# not working since last exercise, using ctest.cpp instead
# add_executable(tests ${CMAKE_SOURCE_DIR}/include/tinytest.h ${CMAKE_SOURCE_DIR}/src/tests.cpp)
# target_link_libraries(tests includelib)

add_executable(converter ${CMAKE_SOURCE_DIR}/src/main.cpp)
target_link_libraries(converter includelib)

add_executable(ctest ${CMAKE_SOURCE_DIR}/src/ctest.cpp)
target_link_libraries(ctest includelib)

# currency tests
add_test(currency1 bin/ctest EuroToDollar 1)
add_test(currency2 bin/ctest DollarToEuro 1)
add_test(currency3 bin/ctest DollarToYen 1)

# length tests
add_test(length1 bin/ctest InchToCentimeter 1)
add_test(length2 bin/ctest MilesToMeter 1)
add_test(length3 bin/ctest YardToMeter 1)

# temperature test
add_test(temperature1 bin/ctest CelsiusToFahrenheit 1)
add_test(temperature2 bin/ctest CelsiusToKelvin 1)
add_test(temperature3 bin/ctest FahrenheitToCelsius 1)
