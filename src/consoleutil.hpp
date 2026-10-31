// ConsoleUtil.hpp - simple console utils for command-line app programming
// usage: #include "consoleutil.hpp"
// NOTE: THIS LIB IS IN DEVELOPMENT, you know

// include guard, don't ask me why i use this
#pragma once 
#include "./libs/rang.hpp"
#include <iostream>
// #include <string_view>          TODO: uncomment when i learned how to use this
#include <string>
#include <cstdlib>
using namespace rang;
// log type enum
enum logType {
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
        default:
        return "NONE";
    }
}
        
/* 
    log(type, string text);
    example:
    - log(Info, "Initializing");
    - log(Warn, "Additional deps not found");
*/
inline void log(logType typ, const std::string& text) {
    std::string type = enumToString(typ);
    if (type == "INFO") {
        std::cout << fg::cyan << type << ": " << text << style::reset << '\n';
    }
    else if (type == "ERROR" || type == "FATAL") {
        std::cerr << fg::red << type << ": " << text << style::reset << '\n';
    }
    else if (type == "WARN") {
        std::cout << fg::yellow << type << ": " << text << style::reset << '\n';
    }
    else {
        std::cout << type << ": " << text << '\n';
    }
}
// this make u no need to include smth else
inline void quit(int code) {
    std::cout.flush();
    std::cerr.flush();
    std::exit(code);
}

