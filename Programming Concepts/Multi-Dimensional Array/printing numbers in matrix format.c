//Program to initialize 20 integers in a 4x5 matrix and print the numbers in matrix format

#include<stdio.h>
int main()
{
	int n[4][5]={ {1,2,3,4,5},
	              {5,4,3,2,1},
	              {1,2,3,4,5},
	              {5,4,3,2,1}
			       	};	
int i,j;
for(i=0; i<4; i++)
{
	for(j=0;j<5; j++)
	printf("%d\t",n[i][j]);
	printf("\n");
}	
}
