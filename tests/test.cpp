#include "consoleutil.hpp"

int main() {
    log(Info,  "smoke test: info");
    log(Debug, "smoke test: debug");
    log(Warn,  "smoke test: warn");
    log(Error, "smoke test: error");
    log(Fatal, "smoke test: fatal");
    //printc
    printc("txt", Red);
    printc("t", Cyan);
    setBg(Blue);
    resetBg();
    setBg(Cyan);
    printc(":)", Black);
    resetBg();
    return 0;
}
