//Program to write a recursive function for displaying elements in Linked List.

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

void RDisplay(struct Node *p)
{
	if(p!=NULL)
	{
		printf("%d ", p->data);
		RDisplay(p->next);
	}
}

int main()
{
	int A[]={8, 5, 7, 2, 4, 14, 21, 18};
	create(A, 8);
	RDisplay(first);
	return 0;
}

/*

output:- 

8 5 7 2 4 14 21 18

*/
