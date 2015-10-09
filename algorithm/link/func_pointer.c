#include<stdio.h>

#define array_size(a) sizeof(a) / sizeof(a[0])

int main( int argc, char **argv )
{
	int a = 1;
	int b[5] = {0};
	int c = 1;

	int size = array_size(b);

	printf( "%d\n", size );


	return 0;
}
