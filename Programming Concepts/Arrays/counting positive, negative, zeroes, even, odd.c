//Program to input 25 elements in array and find out how many of them are positive, negative, odd and even numbers out of them
	
#include<stdio.h>
int main()
{
	int n[25],i,negative=0,positive=0,odd=0,even=0;
	printf("Enter the 25 elements in the array:- \n");
	for(i=0; i<=24; i++)
	scanf("%d",&n[i]);
	for(i=0; i<=24; i++)
	{
		n[i]<0 ? negative++ : (positive++);
		n[i]%2 ? odd++ : (even++);
	}
	printf("Negative elements are:- %d\n",negative);
	printf("Positive elements are:- %d\n",positive);
	printf("Even elements are:- %d\n",even);
	printf("odd elements are:- %d\n",odd);
	return 0;
}
