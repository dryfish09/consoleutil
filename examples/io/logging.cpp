#include "cutils"
int main() {
    // supported: Warn, Info, Debug, Error, Fatal
    fih::log(Info, "Hello!"); // [INFO]: Hello!
    return 0;
}
