#ifndef WAIT_H_INCLUDED
#define WAIT_H_INCLUDED

#include <unistd.h>
#include <windows.h>

void sleep(int seconds);
pid_t fork(void);
pid_t  wait(int *);

#endif // WAIT_H_INCLUDED
