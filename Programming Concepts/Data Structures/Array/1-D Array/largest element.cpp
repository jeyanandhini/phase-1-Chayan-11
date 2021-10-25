// Efficient approach to find largest element in an array  

#include<iostream>
using namespace std;

int largest(int arr[], int n)
{
	int result = arr[0];
	for(int i=1; i<n; i++)
		if(arr[i] > result)
		result = arr[i];	
	return result;
}

int main()
{
	int arr[] = {5, 2, 11, 27, 16};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Largest element in the given array is : " << largest(arr, n) << endl;
	return 0;
}
