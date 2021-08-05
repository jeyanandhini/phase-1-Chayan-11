#Program to input any string and print all the characters of the string in reverse order

#include <stdio.h>
int main()
{
    int i,l=0;
    char n[1000];
    printf("Enter the string:- \n");
    scanf("%s",n);
    for(i=0;n[i]!='\0';i++)
        l++;
    for(i=l-1;i>=0;i--)
        printf("%c",n[i]);
    return 0;
}
