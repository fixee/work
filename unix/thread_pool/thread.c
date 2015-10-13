#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void * func( void *data )
{
    printf( "hello world\n" );
}

int main( int argc, char **argv )
{
    pthread_t tid;

    pthread_create(&tid, NULL, &func, NULL);

    pthread_join( tid, NULL );
}

