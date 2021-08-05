//Program to create a function power(a,b) to calculate the value of a raised to b

#include<stdio.h>
int power(int a,int b); //function_prototype_declaration
int main()
{
	int n1,n2,result;
	printf("Enter two numbers for base and exponent:- \n");
	scanf("%d %d",&n1,&n2);
	result=power(n1,n2); //function call
	printf("\nThe Result of %d^%d is = %d",n1,n2,result);
}
	
int power(int x,int y) //function definition
{
	int value,i;
	value=1;
	for(i=1;i<=y;i++)
	{
		value=value*x;
	}
	return value;
}
