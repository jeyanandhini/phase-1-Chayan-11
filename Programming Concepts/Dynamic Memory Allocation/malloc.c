#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char n[100];
	char *des;
	strcpy(n, "Chayan");
	
	//memory allocation dynamically
	
	des = malloc(200 * sizeof(char));
	if(des == NULL)
	{
		printf(stderr, "Error - unable to allocate required memory\n");	
	}
	else
	{
		strcpy(des, "Coding can be fun");
	}
	printf("Name = %s\n", n);
	printf("Description :- %s\n", des);
}
