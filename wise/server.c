#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<string.h>

int main( int argc, char **argv )
{
    struct sockaddr_in serv, cli;
    socklen_t cli_len;
    int serv_fd, cli_fd;

    serv_fd = socket( AF_INET, SOCK_STREAM, 0 );
    bzero( &serv, sizeof( struct sockaddr_in ) );


    serv.sin_family = AF_INET;
    serv.sin_addr.s_addr = htonl( INADDR_ANY );
    serv.sin_port = htons( 8081 );

    bind( serv_fd, (struct sockaddr *)&serv, sizeof( serv ) );
    listen( serv_fd, 10 );

    sleep(10000 );

//    while(1)
//    {
//    }
}
