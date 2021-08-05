//Program to input 20 integers in a 4x5 matrix 1D array and count the number of positive, negative, zeroes, even and odd numbers from the input integers

#include<stdio.h>
int main()
{
	int a[4][5],i,j,p=0,n=0,z=0,ev=0,od=0;
	for(i=0; i<5; i++)
	for(j=0; j<3; j++)
	{
		printf("Enter the integers:- \n");
		scanf("%d",&a[i][j]);
		if(a[i][j]>0)
		p++;
		else
		if(a[i][j]<0)
		n++;
		else
		z++;
		if(a[i][j]%2==0)
		ev++;
		else
		if(a[i][j]%2==1)
		od++;
	}
	printf("%d\t%d\t%d\t%d\t%d\n",p,n,z,ev,od);
}
