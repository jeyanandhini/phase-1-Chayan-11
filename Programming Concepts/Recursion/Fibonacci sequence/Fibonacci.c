// Fibonacci sequence using recursion 

#include<stdio.h>
int fibonacci(int n)
{
	if(n == 0)
	{
		return 0;
	}
	else if(n == 1)
	{
		return 1;
	}
	else
	{
		return (fibonacci(n-1) + fibonacci(n-2));
	}
}
int main()
{
	int i, n;
	printf("Enter the number whose sequence is to be found : ");
	scanf("%d", &n);
	printf("Fibonacci sequence of %d : ", n);
	for(i=0; i<n; i++)
	{
		printf("%d", fibonacci(i));
	}
}


/*

Output :

Enter the number whose sequence is to be found : 10
Fibonacci sequence of 10 : 0112358132134

*/
