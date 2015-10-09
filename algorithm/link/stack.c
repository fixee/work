#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct snode
{
	int val;
	struct snode *prev;
};

typedef struct snode ** shead;

void pop( struct snode **head )
{
    struct snode * node = (*head)->prev;
    free( *head );

    *head = node;
}

int top( struct snode **head )
{
	if( NULL != *head )
		return (*head)->val;
	return 0;
}

void push( struct snode **head, int val )
{
	struct snode *node = (struct snode *) malloc( sizeof( struct snode ) );
	node->val = val;
	node->prev = *head;

	*head = node;
}


int main( int argc, char **argv )
{
    struct snode *head = NULL;
    push( &head, 1 );
    push( &head, 2 );
    push( &head, 3 );
    push( &head, 4 );

    while( head != NULL )
    {
        printf( "%d\n", top( &head ) );
        pop( &head );
    }
}
