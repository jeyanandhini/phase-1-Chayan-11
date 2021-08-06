// Program to use pointers and find the smallest number in an array of 25 integers
	
#include<stdio.h>
int main()
{
	int arr[25],i,n;
	printf("Enter 25 elements in an array:- \n");
	for(i=0; i<=24; i++)
	scanf("%d",&arr[i]);
	n=*arr;
	for(i=0; i<=24; i++)
	{
		if(*(arr+i)<n)
		n=*(arr+i);
	}
	printf("Smallest number in the array is:- %d\n",n);
	return 0;
}
