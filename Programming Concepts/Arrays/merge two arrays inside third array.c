//Program to merge two 1D array inside a third array

#include<stdio.h>
#define max 100
int main()
{
	int n[max], m[max], s[max], i, a, b;
	printf("Enter how many numbers you want to enter:- \n");
	scanf("%d %d",&a, &b);
	if(a+b>=max)
	{
		printf("Not possible");
		return 0;
	}
	for(i=0; i<a; i++)
	{
		printf("Enter the integers:- \n");
		scanf("%d",&n[i]);
		s[i]=n[i];
	}
	for(i=0; i<b; i++)
	{
		printf("Enter the integers:- \n");
		scanf("%d",&m[i]);
		s[i+a]= m[i];
	}
	for(i=0; i<a+b; i++)
	printf("%d\t", s[i]);
}
