// Program to input any string and count the number of vowels, consonants and blank space in it

#include <stdio.h>
int main()
{
   char n[100];
   int i,v=0,c=0,w,b=0;
   printf("Enter the string:- \n");
   scanf("%s",n);
   for(i=0;n[i]!='\0';i++)
   {
       if((n[i]>=65 && n[i]<=90) || (n[i]>=97 && n[i]<=122))
        if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u')
        v++;
        else
        c++;
       if(n[i]==' ')
        b++;
   }
   printf("\nThe number of words are:- %d\n The number of vowels are:- %d\n The number of consonants are:- %d",b+1,v,c);
    return 0;
}
