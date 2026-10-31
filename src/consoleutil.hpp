// ConsoleUtil.hpp - simple console utils for command-line app programming
// usage: #include "consoleutil.hpp"
// NOTE: THIS LIB IS IN DEVELOPMENT, you know
#pragma once 
#include <iostream>
// #include <string_view>          TODO: uncomment when i learned how to use this
#include <string>

/* 
    log(string type, string text);
    example:
    - log("INFO", "Initializing");
    - log("WARN", "Additional deps not found");
*/
void log(const std::string& type, const std::string& text) {
    std::cout << type << ": " << text << '\n';
}
// todo: add more function
