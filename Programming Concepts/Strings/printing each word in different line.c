//Program to input any string and print each word in different line

#include <stdio.h>
int main()
{
   int i;
   char n[1000];
   printf("Enter the string:- \n");
   scanf("%s",n);
   for(i=0;n[i]!='\0';i++)
   {
       printf("%c\n",n[i]);
       if(n[i]==' ')
       {
           printf("\n");
       }
   }
    return 0;
}
