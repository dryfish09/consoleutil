#include "ConsoleUtil.hpp"

int main() {
    log(Info,  "smoke test: info");
    log(Debug, "smoke test: debug");
    log(Warn,  "smoke test: warn");
    log(Error, "smoke test: error");
    log(Fatal, "smoke test: fatal");
    return 0;
}
