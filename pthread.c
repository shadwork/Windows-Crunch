#include "pthread.h"

int pthread_create(pthread_t *thread, pthread_attr_t const * attr,
                   void *(*start_routine)(void *), void * arg)
{
    return 0;
}

int pthread_detach(pthread_t  thid){
    return 0;
}
