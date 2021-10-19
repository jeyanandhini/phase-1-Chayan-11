// Finding the largest and smallest number in the array

#include<iostream>
#include<climits> // header file which gives the max range of int data type
using namespace std;

int main()
{
	int n, key;
	cout << "Enter the number of elements to be entered :" << endl;
	cin >> n;
	int a[1000];
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	
/* Algorithm for finding the largest and smallest number */
	
		int largest = INT_MIN;
		int smallest = INT_MAX;
		for(int i=0; i<n; i++)
		{
			if(a[i] > largest)
			{
				largest = a[i];
			}
			if(a[i] < smallest)
			{
				smallest=a[i];
			}
		}
		cout << "Largest number is : " << largest << endl;
		cout << "Smallest number is : " << smallest << endl;
}


/* *****************************************************************************************************************************************************************

 OR

 ******************************************************************************************************************************************************************* */


// Finding the largest and smallest number in the array

#include<iostream>
#include<climits> // header file which gives the max range of int data type
using namespace std;

int main()
{
	int n, key;
	cout << "Enter the number of elements to be entered :" << endl;
	cin >> n;
	int a[1000];
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	
/* Algorithm for finding the largest and smallest number */
	
		int largest = INT_MIN;
		int smallest = INT_MAX;
		
		for(int i=0; i<n; i++)
		{
			// using in-built functions to find the largest & smallest number
			largest = max(largest, a[i]);
			smallest = min(smallest, a[i]);
		}
		cout << "Largest number is : " << largest << endl;
		cout << "Smallest number is : " << smallest << endl;
}
