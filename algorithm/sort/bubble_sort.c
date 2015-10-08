#include<stdio.h>
#include<stdlib.h>

void *bubble_sort( int *a, int size )
{
    if( NULL == a || 0 == size )
        return;

    int i, j, tmp;
    for( j = size - 1; j > 0; j-- )
    {
        for( i = 0; i < j; i++ )
        {
            if( a[i] > a[i+1] )
            {
                tmp = a[i];
                a[i] = a[i+1];
                a[i+1] = tmp;
            }
        }
    }
}

int main( int argc, char **argv )
{
    int a[] = {1, 2, 1, 3, 5, 4, 9, 6};
    int size = sizeof( a ) / sizeof( a[0] );

    bubble_sort( a, size );

    int i = 0;
    for( ; i < size; i++ )
    {
        printf( "%d\n", a[i] );
    }
}

