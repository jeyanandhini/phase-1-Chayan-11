/*Implementing a singly linked list with insert, delete and display operations.
Declare Linked List Node, Insert Node at the beginning, Delete Node from beginning and display all linked list Nodes.
*/

#include<iostream>
using namespace std;

// Firstly, Declare a Node

struct Node
{
	int num;
	Node *next;
};

// Declare the first node also called as 'Head' node

struct Node *head = NULL;

// Insert Node at the starting 

void InsertNode(int n)
{
	struct Node *newNode = new Node;
	newNode->num = n;
	newNode->next = head;
	head = newNode;
}

// Traversing and Displaying all the nodes and printing the nodes

void display()
{
	if(head == NULL)
	{
		cout << "The List is empty !" << endl;
		return; 
	}
	
	struct Node *p = head;
	while(p != NULL)
	{
		cout << p->num <<" ";
		p = p->next;
	}
	cout << endl;
}

// Delete Node from the start

void deleteItem()
{
	if(head == NULL)
	{
		cout << "The List is Empty !" << endl;
		return;
	}
	cout << head->num << " is removed. " << endl;
	head = head->next;
}

int main()
{
	display();
	InsertNode(10);
	InsertNode(40);
	InsertNode(70);
	InsertNode(80);
	InsertNode(90);
	display();
	deleteItem(); deleteItem(); deleteItem(); deleteItem(); deleteItem();
    deleteItem();
    display();
    return 0;
}

/*

Output:- 

The List is empty !
90 80 70 40 10
90 is removed.
80 is removed.
70 is removed.
40 is removed.
10 is removed.
The List is Empty !
The List is empty !

*/
