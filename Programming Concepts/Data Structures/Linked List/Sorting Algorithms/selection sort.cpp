// Implementing Selection Sort in Linked List

#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node *head, *run;
void insert(int val);
void display();
void selection_sort();

void insert(int val)
{
	if(head == NULL)
	{
		head = new Node();
		head->data = val;
		head->next = NULL;
	}
	else
	{
		run = head;
		while(run->next)
		{
			run = run->next;
		}
		run->next = new Node();
		run = run->next;
		run->data = val;
		run->next = NULL;
	}
}

void display()
{
	run = head;
	while(run)
	{
		cout << run->data << " ";
		run = run->next;
	}
	cout << "\n";
 }
 
 void selection_sort()
 {
 	Node *begin = head;
 	Node *min = head;
 	
 	while(begin->next != NULL)
 	{
 		min = begin;
 		Node *current = begin->next;
 		
 		while(current)
 		{
 			if(current->data < min->data)
 			{
 				min = current;
			}
			current = current->next;
		}
		
		int t = begin->data;
		begin->data = min->data;
		min->data = t;
		
		begin = begin->next;
	}
}

int main()
{
	insert(9);
	insert(2);
	insert(4);
	insert(5);
	insert(1);
	insert(8);
	cout << "Before Sorting : " << endl;
	display();
	selection_sort();
	cout << "After Sorting : " << endl;
	display();
	return 0;
} 


/*

Output :

Before Sorting :
9 2 4 5 1 8
After Sorting :
1 2 4 5 8 9

*/
