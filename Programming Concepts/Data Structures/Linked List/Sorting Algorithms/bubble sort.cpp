// Implementation of bubble sort in linked list

#include<stdio.h>
#include<stdlib.h>

// structure for a node

struct Node
{
	int data;
	struct Node *next;
};

//Function to insert a node at the beginning of a linked list 
void insert_node_begin(struct Node **start_ref, int data);

//Function to Bubble sort the Linked List
void bubble_sort(struct Node *start);

//Function to swap data of two nodes a & b
void swap(struct Node *a, struct Node *b);

//Function to print the nodes in the given Linked List
void print_list(struct Node *start);

int main()
{
	int arr[] = {8, 5, 1, 7, 2, 4};
	int list_size, i;
	struct Node *start = NULL;
	for(i=0; i<6; i++)
	insert_node_begin(&start, arr[i]);
	
	printf("Linked List before sorting :\n");
	print_list(start);
	bubble_sort(start);
	printf("\nLinked List after sorting :\n");
	print_list(start);
	getchar();
	return 0; 
}

//Function to insert node at beginning of LL
void insert_node_begin(struct Node **start_ref, int data)
{
	struct Node *ptr1 = (struct Node*)malloc(sizeof(struct Node));
	ptr1->data = data;
	ptr1->next = *start_ref;
	*start_ref = ptr1;
}

//Function to print nodes in a given LL
void print_list(struct Node *start) 
{ 
    struct Node *temp = start; 
    printf(" "); 
    while (temp!=NULL) 
    { 
        printf("%d ", temp->data); 
        temp = temp->next; 
    } 
}

//Bubble sorting the given LL
void bubble_sort(struct Node *start)
{
	int swapped, i;
	struct Node *ptr1; 
	struct Node *lptr = NULL;
	
	// Checking for empty list
	if(start == NULL)
	return;
	do
	{
		swapped = 0;
		ptr1 = start;
		while(ptr1->next != lptr)
		{
			if(ptr1->data > ptr1->next->data)
			{
				swap(ptr1, ptr1->next);
				swapped = 1;
			}
			ptr1 = ptr1->next;
		}
		lptr = ptr1;
	}
	while(swapped);
}


//Function to swap data of two nodes a & b
void swap(struct Node *a, struct Node *b) 
{ 
    int temp = a->data; 
    a->data = b->data; 
    b->data = temp; 
} 


/*

Output : 

Linked List before sorting :
 4 2 7 1 5 8
Linked List after sorting :
 1 2 4 5 7 8

*/
