// ConsoleUtil.hpp - simple console utils for command-line app programming
// usage: #include "consoleutil.hpp"
// NOTE: THIS LIB IS IN DEVELOPMENT, you know

// include guard, don't ask me why i use this
#pragma once 
#include "./libs/rang.hpp"
#include <iostream>
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
inline const char* enumToString(logType type) {
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
    const char* type = enumToString(typ);
    if (typ == Info) {
        std::cout << fg::cyan << "[" << type << ": " << text << "]"<< style::reset << '\n';
    }
    else if (typ == Error || typ == Fatal) {
        std::cout << fg::red << "[" << type << ": " << text << "]"<< style::reset << '\n';
    }
    else if (typ == Warn) {
        std::cout << fg::yellow << "[" << type << ": " << text << "]"<< style::reset << '\n';
    }
    else {
        std::cout << "[" << type << "]" << ": " << text << '\n';
    }
}
// std::exit wrapper
// usage: quit(0);
inline void quit(int code) {
    std::cout.flush();
    std::cerr.flush();
    std::exit(code);
}
// ask()
// usage: std::string name = ask("What's ur name);
inline std::string ask(const std::string& question) {
    std::cout << fg::green << question << style::reset << '\n';
    std::string answer;
    std::getline(std::cin, answer);
    return answer;
}

