// Program to add two numbers using pointers

#include <stdio.h>
int main()
{
   int f,s,*p,*q,sum;
   
   printf("\n\n Pointer : Add two numbers :\n"); 
   printf("--------------------------------\n");   
   printf(" Input the first number : ");
   scanf("%d", &f);
   printf(" Input the second  number : ");
   scanf("%d", &s);  
   p = &f;
   q = &s;
   sum = *p + *q;
   printf(" The sum of the entered numbers is : %d\n\n",sum);
   return 0;
}
