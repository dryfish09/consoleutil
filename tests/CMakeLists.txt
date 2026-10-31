add_executable(test test.cpp)
target_link_libraries(test PRIVATE ConsoleUtil)
add_test(NAME test COMMAND test)
