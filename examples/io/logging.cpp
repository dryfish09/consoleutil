#include "cutils"
int main() {
    // supported: Warn, Info, Debug, Error, Fatal
    fih::log(fih::Info, "Hello!"); // [INFO]: Hello!
    return 0;
}
