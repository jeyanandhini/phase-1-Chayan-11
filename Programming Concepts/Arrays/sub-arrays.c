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

---------------------------------------------------------------------------------------------------------------------------------------------------------
	
// Program to find the sum of sub arrays in given range with implementation in c++

#include<bits/stdc++.h>
using namespace std;

long int SubArraySum(int arr[], int n)
{
	long int result = 0, temp = 0;
	for(int i=0; i<n; i++)
	{
		temp = 0;
		for(int j=i; j<n; j++)
		{
			temp+=arr[j];
			result+=temp;
		}
	}
	return result;
}

int main()
{
	int arr[] = {1, 2, 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Sum of SubArray:- " << SubArraySum(arr, n) << endl;
	return 0;
}
