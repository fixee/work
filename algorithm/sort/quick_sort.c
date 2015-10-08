#include<stdio.h>
#include<stdlib.h>

void swap( int *a, int i, int j )
{
    if( i == j )
        return;

    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}

void quick_sort( int *a, int beg, int end )
{
    if( end <= beg )
        return;

    int i = beg-1, j;
    for( j = beg; j < end; j++ )
    {
        if( a[j] < a[end] )
            swap( a, ++i, j );
    }

    swap( a, ++i, end );

    quick_sort( a, beg, i - 1 );
    quick_sort( a, i + 1, end );
}

int main( int argc, int argv )
{
    int a[] = {1, 2, 1, 3, 5, 4, 9, 6};
    int size = sizeof( a ) / sizeof( a[0] );

    quick_sort( a, 0, size - 1 );

    int i = 0;
    for( ; i < size; i++ )
    {
        printf( "%d\n", a[i] );
    }
    return 0;
}
