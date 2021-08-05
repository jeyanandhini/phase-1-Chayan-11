//Program to input any string and if it's in lower case then convert it into upper case and vice-versa

#include <stdio.h>
int main()
{
  int i;
  char n[1000];
  printf("Enter the string:- \n");
  scanf("%s",n);
  for(i=0;n[i]!='\0';i++)
    if(n[i]>=65 && n[i]<=90)
    n[i]+=32;
  else
    if(n[i]>=97 && n[i]<=122)
    n[i]-=32;
  printf("%s",n);
    return 0;
}
