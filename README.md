# DryFish's Console Utils library
This is a **simple, ez to use** console utils library for command-line app programming
## Requirement
C++ 23+ (for future updates), C++ projects, `rang` library
## Usage
### Basic use
1. Logging
```cpp
#include "consoleutil.hpp"
log(Info, "text");
```
2. Exit (with auto flush stuff before exit)
```cpp
#include "consoleutil.hpp"
quit(99);
```
3. Ask
```cpp
ask("are you gay?");
```
4. Colorful print
```cpp
printc("msg", Blue);
```
### Advanced use
Contribute to this project
## Roadmap:
- [ ] Multi-thread support
- [ ] Ez corountines
- [ ] More API (console color, random, C#/Kotlin's QoL (not GC))

*Made with :fish: by @dryfish09, Thanks for visiting!*
