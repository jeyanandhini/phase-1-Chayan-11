#include<iostream>
using namespace std;

// Function that sort the given input

void count_sort(int arr[], int n)
{
	int result[n]; // result will have sorted input array
	int max = arr[0];
	int min = arr[0];
	for(int i=1; i<n; i++)
	{
		if(arr[i] > max)
		max = arr[i]; // max value in array
		else if (arr[i] < min)
		min = arr[i]; // min value in array
	}
	
	int k = max - min + 1; // size of count array
	int count_arr[k]; // create a count array to store count of each individual input value
	fill_n(count_arr, k, 0); // Initialize count_arr elements as zero
	for(int i=0; i<n; i++)
	count_arr[arr[i] - min]++; // store count of each individual input value
	/*change count_arr so that it contains actual position of input values in result array*/
	for(int i=1; i<k; i++)
	count_arr[i] += count_arr[i-1];
	
	// populate the result array using count_arr and arr[i]
	for(int i=0; i<n; i++)
	{
		result[count_arr[arr[i] - min] - 1] = arr[i];
		count_arr[arr[i] - min]--;
	}
	
	for(int i=0; i<n; i++)
	    arr[i] = result[i]; // copy the result array to arr[i] so that it contains sorted values
}

// Driver's code

int main()
{
	int n, i;
	cout << "Enter the number of elements wanted in the array : " << endl;
	cin >> n;
	
	int arr[n];
	cout << "Enter the array elements : " << endl;
	for(i=0; i<n; i++)
	{
		cin >> arr[i];
    }
    
    count_sort(arr, n);
    cout << "Sorted array : ";
    for(i=0; i<n; i++)
    cout << arr[i] << " ";
    
    return 0;
}


/*

Output:

Enter the number of elements wanted in the array :
9
Enter the array elements :
1
5
2
7
3
4
4
1
5
Sorted array : 1 1 2 3 4 4 5 5 7

*/
