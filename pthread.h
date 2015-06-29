#ifndef PTHREAD_H_INCLUDED
#define PTHREAD_H_INCLUDED

typedef unsigned int uint32_t;
typedef unsigned int size_t;
typedef int int32_t;

typedef struct {
    void * p;                   /* Pointer to actual object */
    unsigned int x;             /* Extra information - reuse count etc */
} pthread_t;

typedef struct
{
    uint32_t flags;
    void * stack_base;
    size_t stack_size;
    size_t guard_size;
    int32_t sched_policy;
    int32_t sched_priority;
} pthread_attr_t;

int pthread_create(pthread_t *thread, pthread_attr_t const * attr,
                   void *(*start_routine)(void *), void * arg);

int pthread_detach(pthread_t  thid);

#endif // PTHREAD_H_INCLUDED
