cmake_minimum_required (VERSION 3.8)
project(FlightsManager)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED on)

include_directories(./include)
file( GLOB SOURCES ./src/*.cpp)
add_executable(my_exe ${SOURCES})