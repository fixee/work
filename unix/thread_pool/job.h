#ifndef _job_h_
#define _job_h_

typedef void* job_func( void * );

struct Job
{
    job_func *func;
    void *data;
    void *retval;
};
#endif //_job_h_
