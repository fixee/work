#ifndef _worker_h_
#define _worker_h_

#include "job.h"

typedef void complete_callback( struct Worker *worker );

struct Worker
{
    struct Job *job;

    pthread_mutex lock;
    complete_callback *callback;
};

void *worker_func( void *data );
void woker_init( struct Worker *worker );
void worker_destroy( struct Worker *worker );

#endif _worker_h_
