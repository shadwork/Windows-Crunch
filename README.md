### Code::Blocks build for crunch - wordlist generator

Original source came from sourceforge - [crunch - wordlist generator](http://sourceforge.net/projects/crunch-wordlist/files/crunch-wordlist/)

Source code can't build under Windows. Using pthread and POSIX avalaible under Windows with serious gaps. Build under Cygwin success, but result crash on running. Main idea using simple wrapper around original source code with minimal editing. If you want using update version of crunch just place crunch.c in project root folder and build it.

P.S. Code::Blocks can store build path separately. If project not build under IDE just add root path to search directories or replace by hand

```c
#include <pthread.h> to  #include “pthread.h”
#include <sys/wait.h> to  #include “sys/wait.h”
```