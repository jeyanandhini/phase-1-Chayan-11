// Program to find the sum of sub-arrays in given range

#include<stdio.h>
int summation(int arr[], int low, int high); 

int summation(int arr[], int low, int high) 
{
	int lv, sum=0;
	for(lv=low; lv<=high; lv++)
	{
		sum = sum + arr[lv];
	}
	return sum;
}

void main() 
{
	int a[6] = {1, 6, 2, 9, 4, 3};
	int answer;
	int start;
	int end;
	for(start=0; start<=5; start++)
	{
		for(end=start; end<=5; end++)
		{
			printf("%d", summation(a, start, end));
		}
	}
}
