#include<iostream>
using namespace std;

// Bubble Sorting

void bubble_sort(int a[], int n)
{
	// Move n-1 large elements to the end
	for(int i=1; i<=n-1; i++)
	{
		// pairwise swapping in the unsorted part of the array
		for(int j=0; j<=(n-i-1); j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j], a[j+1]);
			}
		}
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
		cin >> a[i];
	}
	bubble_sort(a, n);
	for(int i=0; i<n; i++)
	{
		cout << a[i] << ",";
	}
	return 0;
}
