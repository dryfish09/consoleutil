cmake_minimum_required(VERSION 3.16)
project(ConsoleUtil CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(ConsoleUtil INTERFACE)
target_include_directories(ConsoleUtil INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)
target_compile_features(ConsoleUtil INTERFACE cxx_std_17)

option(CONSOLEUTIL_BUILD_TESTS "Build tests" OFF)
if (CONSOLEUTIL_BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()
