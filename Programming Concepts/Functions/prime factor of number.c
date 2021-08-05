//Program to write a function and obtain the prime factors of a number by users choice

#include<stdio.h>
void prime(int); //function_prototype_declaration
int main()
{
	int n;
	printf("Enter any integer:- \n");
	scanf("%d",&n);
	prime(n); //function call
	return 0;
}

void prime(int n) //function definition
{
	int i=2;
	printf("Prime factors of %d are:- \n",n);
	while(n!=1)
	{
	if(n%i==0)
	printf("%d\t",i);
	else
	{
		i++;
		continue;
	}
	n=n/i;
    }
}
