// Program to concatanate two different strings

#include<stdio.h>
#include<string.h>
int main()
{
	char n[]={"Chayan"};
	char m[100];
	printf("Enter any string:- ");
	scanf("%s",m);
	strcat(n,m);
	strcat(n,"Debbarma");
	printf("%s",n);
}
