#include<stdio.h>
#include<stdlib.h>
int arr[100], n=0; // n represents number of nodes in heap
int main()
{
	int choice, num;
	while(1)
	{
		printf("1.Insert the element : \n");
		printf("2.Delete the element : \n");
		printf("3.Display the elements : \n");
		printf("4.Quit\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter the elements to be inserted : ");
				scanf("%d", &num);
				insert(num, n);
				n++;
				break;	
			case 2:
				printf("Enter the elements to be deleted : ");
				scanf("%d", &num);
				delete (num);
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid choice\n");
		}
	}
}

display()
{
	int i;
	if(n==0)
	{
		printf("Heap is empty\n");
		return;
	}
	for(i=0; i<n; i++)
	printf("%d", arr[i]);
	printf("\n");
}

insert(int num, int loc)
{
	int parentnode;
	while(loc > 0)
	{
		parentnode = (loc-1)/2;
		if(num <= arr[parentnode])
		{
			arr[loc] = num;
			return;
		}
		arr[loc] = arr[parentnode];
		loc = parentnode;
	}
	arr[0] = num; // assign the number to root node
}

delete(int num)
{
	int left, right, i, temp, parentnode;
	for(i=0; i<num; i++)
	{
		if(num == arr[i])
		{
			break;
		}
		if(num != arr[i])
		{
			printf("%d is not found in the Heap\n", num);
			return;
		}
		arr[i] = arr[n-1];
		n = n - 1;
		parentnode = (i-1)/2; // find the parent node of node i
		if(arr[i] > arr[parentnode])
		{
			insert(arr[i], i);
			return;
		}
		left = 2 * i + 1; //left child of i
		right = 2 * i + 2; //right child of i
		while(right < n)
		{
			if(arr[i] >= arr[left] && arr[i] >= arr[right])
			return;
			if(arr[right] <= arr[left])
			{
				temp = arr[i];
				arr[i] = arr[left];
				arr[left] = temp;
				i = left;
			}
			else
			{
				temp = arr[i];
				arr[i] = arr[right];
				arr[right] = temp;
				i = right;
			}
			
			left = 2 * i + 1;
			right = 2 * i + 2;
		}
		if(left == n-1 && arr[i])
		{
			temp = arr[i];
			arr[i] = arr[left];
			arr[left] = temp;
		}
	}
}
