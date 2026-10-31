cmake_minimum_required(VERSION 3.16)
project(ConsoleUtil CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Header-only library
add_library(ConsoleUtil INTERFACE)

target_include_directories(ConsoleUtil INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)


target_compile_features(ConsoleUtil INTERFACE cxx_std_17)
