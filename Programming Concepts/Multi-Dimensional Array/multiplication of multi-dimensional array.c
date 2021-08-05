//Program to show product of multi-dimensional array

#include<stdio.h>
#define MAX 50
int main()
{
	int a[MAX][MAX], b[MAX][MAX], prod[MAX][MAX];
	int arows, acolumns, brows, bcolumns;
	int i, j, k;
	int sum=0;
	
	printf("Enter the rows and columns of the matrix a:- \n");
	scanf("%d %d",&arows, &acolumns);
	
	printf("Enter the elements of matrix a:- \n");
	for(i=0; i<arows; i++)
	{
		for(j=0; j<acolumns; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter the rows and columns of the matrix b:- \n");
	scanf("%d %d",&brows, &bcolumns);
	
	if(brows!=acolumns)
	{
		printf("We cannot multiply the matrices a and b");
	}
	else
	{
		printf("Enter the elements of matrix b:- \n");
		for(i=0; i<brows; i++)
		{
			for(j=0; j<bcolumns; j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
	}
	
	printf("\n");
	
	for(i=0; i<arows; i++)
	{
		for(j=0; j<bcolumns; j++)
		{
			for(k=0; k<brows; k++)
			{
				sum += a[i][k] * b[k][j];
			}
			prod[i][j] = sum;
			sum = 0;
		}
	}
	
	printf("Resultant matrix = \n");
	for(i=0; i<arows; i++)
	{
		for(j=0; j<bcolumns; j++)
		{
			printf("%d ",prod[i][j]);
		}
		printf("\n");
	}
	return 0;
}
