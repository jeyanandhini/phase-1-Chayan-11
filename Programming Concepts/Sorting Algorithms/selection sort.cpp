#include<iostream>
using namespace std;

//Selection sorting 

void selection_sort(int a[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		// find the smallest element index in the unsorted part
		int min_idx = i;
		for(int j=i; j<=n-1; j++)
		{
			if(a[j]<a[min_idx])
			{
				min_idx = j;
			}
		}
		// Swap the numbers 
		swap(a[i], a[min_idx]);
	}
}

int main()
{
	int n;
	cout << "Enter the number of elements :" << endl; 
	cin >> n;
	int a[1000];
	for(int i=0; i<n; i++)
	{
		cout << "Enter the elements :" << endl;
		cin >> a[i];
	}
	selection_sort(a, n);
	for(int i=0; i<n; i++)
	{
		cout << a[i] << ",";
	}
}
