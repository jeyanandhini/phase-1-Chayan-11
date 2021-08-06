/*Program to enter 25 numbers and find if the number to be searched is either present in the array and if found then display the number of times it appeared in the array.*/
	
#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[25],a,i,count=0;
	for (i=0; i<25; i++)
	{
	printf("Enter number :- \n");
	scanf("%d", &arr[i]);
	}
	printf("\n\nEnter the number you want to search :- ");
	scanf("%d", &a);
	for (i=0; i<25; i++)
	{
	if (arr[i] == a)
	count++;
	}
	if (count)
	printf("\n\n%d is present in the data %d times.", a,count);
	else
	printf("\n\n%d is not present in the data.", a);
	_getch();
	return 0;
}
