// Implementation of Binary Search in Array

#include<iostream>
using namespace std;

// One of the efficient way to search in sorted array is Binary Search 
// Binary Search Algorithm

int Binary_Search(int a[], int key, int n)
{
	int start = 0;
	int end = n-1;
	while(start<=end)
	{
		int mid = (start + end)/2;
		if(a[mid]==key)
		{
			return mid;
		}
		else if(a[mid] > key)
		{
			end = mid-1;
		}
		else 
		{
			start = mid+1;
		}
	}
	return -1;
}


int main()
{
	int n, key;
	cout << "Enter the number of elements to be entered :" << endl;
	cin >> n;
	int a[1000];
	int i;
	for(i=0; i<n; i++)
	{
		cin >> a[i];
	}
	cout << "Enter the element to be searched :" << endl;
	cin >> key;
	cout << Binary_Search(a, key, n) << endl; // returns the index of the element which is searched 
	return 0;
}
