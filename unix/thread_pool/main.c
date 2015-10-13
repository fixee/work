#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

#include "job.h"

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

void * func( void *data )
{
    struct Job *job = ( struct Job *)data;

    pthread_mutex_lock( &lock );

    if( NULL != job->func )
    {
        job->retval = (*(job->func))(data);
    }
    pthread_mutex_unlock( &lock );
}

void *hello( void *data )
{
    printf( "hello world\n" );
    return NULL;
}

int main( int argc, char **argv )
{
    pthread_t tid;
    struct Job job = {0};
    pthread_mutex_lock( &lock );

    pthread_create(&tid, NULL, &func, &job);

    sleep( 2 );
    printf( "unlock\n" );
    job.func = &hello;
    job.data = NULL;
    job.retval = NULL;
    pthread_mutex_unlock( &lock );

    pthread_join( tid, NULL );
}

