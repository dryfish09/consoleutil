// ConsoleUtil.hpp - simple console utils for command-line app programming
// usage: #include "consoleutil.hpp"
// NOTE: THIS LIB IS IN DEVELOPMENT, you know

// include guard, don't ask me why i use this
#pragma once 
#include <iostream>
// #include <string_view>          TODO: uncomment when i learned how to use this
#include <string>
// log type enum
enum logType = {
    Info,
    Debug,
    Warn,
    Error,
    Fatal
};
inline std::string enumToString(logType type) {
    switch(type) {
        case Info:
        return "INFO";
        case Debug:
        return "DEBUG";
        case Warn:
        return "WARN";
        case Error:
        return "ERROR";
        case Fatal:
        return "FATAL";
    }
}
        
/* 
    log(string type, string text);
    example:
    - log("INFO", "Initializing");
    - log("WARN", "Additional deps not found");
*/
inline void log(const std::string& type, const std::string& text) {
    std::cout << type << ": " << text << '\n';
}

