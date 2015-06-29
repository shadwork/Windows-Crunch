#include "pthread.h"
#include <stdio.h>

int pthread_create(pthread_t *thread, pthread_attr_t const * attr,
                   void *(*start_routine)(void *), void * arg)
{
    unsigned long tid = _beginthread( start_routine, 0, arg );
    // windows return tread id or -1L if error occured
    return tid==-1L?1:0;
}

int pthread_detach(pthread_t  thid){
    // windows not need it
    return 0;
}

void pthread_exit(void *retval){
    // strange but without pthread_exit declaration program still compile and works
    _endthread();
    fprintf(stderr,"\nSTILL END CALL\n");
}
