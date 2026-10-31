add_executable(smoke_test test.cpp)
target_link_libraries(smoke_test PRIVATE ConsoleUtil)
add_test(NAME smoke_test COMMAND smoke_test)
