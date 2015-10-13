#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<string.h>

int my_connect()
{
    struct sockaddr_in serv;
    int fd;

    fd = socket( AF_INET, SOCK_STREAM, 0 );

    bzero( &serv, sizeof( serv ) );
    serv.sin_family = AF_INET;
    inet_pton(AF_INET, "127.0.0.1", &serv.sin_addr);
    serv.sin_port = htons( 8081 );

    connect( fd, (struct sockaddr *)&serv, sizeof( serv ) );

    return fd;
}

int main( int argc, char **argv )
{
    int i = 0;

    for( ; i < 20; i++ )
    {
        my_connect();
        printf( "%d\n",i );
    }
}
