//Program to create a function and calculate the factorial value of any integer as per users choice

#include <stdio.h>
int factorial(int);
int main()
{
 int n,fact;
 printf("Enter any number:- \n");
 scanf("%d",&n);
 fact = factorial(n);
 printf("Factorial value = %d\n",fact);
 return 0;
}

int factorial(int x)
{
 int f=1,i;
 for(i=x; i>=1; i--)
 f=f*i;
 return(f);
}
