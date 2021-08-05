//Program to reverse a series of numbers in an array as per user choice using variable length array concept

#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of elements you want to reverse:- \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter all the %d elements:- \n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements in reverse order are as follows:- \n");
	for(i=n-1; i>=0; i--)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
