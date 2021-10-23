// Array Rotation 
// Rotate array arr[] of size n by d elements

#include<stdio.h>

void Rotate(int arr[], int r, int n)
{
	int temp[r];
	for(int i=0; i<r; i++)
	temp[i] = arr[i];
	
	for(int i=r; i<n; i++)
	arr[i-r] = arr[i];
	
	for(int i=n-r; i<n; i++)
	arr[i] = temp[i-(n-r)];
}

int main()
{
	int n, r;
	printf("Enter the number of elements wanted in the array : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the elements of the array : \n");
	for(int i=0; i<n; i++)
	scanf("%d", &arr[i]);
	printf("Enter the value for roatation cycle : ");
	scanf("%d", &r);
	
	Rotate(arr, r, n);
	for(int i=0; i<n; i++)
	printf("%d ", arr[i]);
	
	return 0;
}



/*
Output :

Enter the number of elements wanted in the array : 5
Enter the elements of the array :
1
2
3
4
5
Enter the value for roatation cycle : 2
3 4 5 1 2

*/
