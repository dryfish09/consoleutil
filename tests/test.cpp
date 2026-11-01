#include "cutils.hpp"

using namespace fih;

void test_logging() {
    log(Info,  "smoke test: info");
    log(Debug, "smoke test: debug");
    log(Warn,  "smoke test: warn");
    log(Error, "smoke test: error");
    log(Fatal, "smoke test: fatal");
}

void test_colored_printing() {
    printc("txt", Red);
    printc("t", Cyan);
    
    setBg(Blue);
    resetBg();
    
    setBg(Cyan);
    printc(":)", Black);
    resetBg();
}

void test_delays() {
    delayForSec(10);
    delayForMillisec(3500);
}

int main() {
    test_logging();
    test_colored_printing();
    test_delays();
    
    return 0;
}
