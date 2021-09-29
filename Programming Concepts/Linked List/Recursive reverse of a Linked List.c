// Write a function to recursively reverse a Linked List.

#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}*first=NULL;

void create (int A[], int n)
{
	int i; 
	struct Node *t, *last;
	first=(struct Node *)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	last=first;
	for(i=1; i<n; i++)
	{
		t=(struct Node *)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}

void Display(struct Node *p)
{
	while(p!=NULL)
	{
		printf("%d ", p->data);
		p=p->next;
	}
}

void Recursive_Reverse(struct Node *q, struct Node *p)
{
	if(p)
	{
		Recursive_Reverse(p, p->next);
		p->next=q;
	}
	else
	    first=q;
}

int main()
{
	int A[]={80, 40, 20, 50, 100};
	create(A,5);
	Recursive_Reverse(NULL, first);
	Display(first);
	printf("\n\n");
	return 0;
}


/*

Output :- 

100 50 20 40 80

*/
