#include<stdio.h>

struct snode
{
	int val;
	struct snode *prev;
};

typedef struct snode * shead;

void pop( struct snode *head )
{
}

int top( struct snode *head )
{
	if( NULL != head )
		return head->val;
	return 0;
}

void push( struct snode **head, int val )
{
	struct snode *node = new struct snode;
	node->val = val;
	node->prev = *head;

	*head = node;
}


int main( int argc, char **argv )
{
}
