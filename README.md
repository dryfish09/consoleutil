# DryFish's Console Utils library
CUtils (Console Utils) is a **simple, ez to use** console utils library for command-line app programming
## Requirement
C++ 17+ (for future updates), C++ projects, all dependencies are included in this library, you just need to add it to your project, then use.
## Usage
### Import to a project
1. Clone this repository:
```bash
git clone git@github.com:dryfish09/cutils
```
Or
```bash
git clone https://github.com/dryfish09/cutils.git
```
2. Copy source its source code to your project
```bash
cd cutils/src && cp * ur/project/path
```
3. Coding
### Basic use
1. Logging
```cpp
#include "cutils.hpp"
fih::log(fih::Info, "text");
```
2. Exit (with auto flush stuff before exit)
```cpp
#include "cutils.hpp"
fih::quit(99);
```
3. Ask
```cpp
fih::ask("are you gay?");
```
4. Colorful print
```cpp
fih::printc("msg", fih::Blue);
```

**For more example, view [CUtils's code examples](./examples/)**
### Advanced use
Contribute to this project
## Roadmap:
- [ ] Basic console QoL
- [ ] File I/O wrapper
- [ ] JSON
- [ ] Corountines
- [ ] Kotlin/C# features/QoL (not GC)

*Made with :fish: by @dryfish09, Thanks for visiting!*
