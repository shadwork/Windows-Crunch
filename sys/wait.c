#include "wait.h"

void sleep(int seconds){
    Sleep( seconds*1000L );
}

pid_t fork(void){
    return 0;
};

pid_t  wait(int * pid){
    return 0;
}


