// Using compare() function to print array in either ascending or descending order

#include<iostream>
#include<algorithm> // this header file contains sort() function 
using namespace std;
// defining a comparator function 

bool compare(int a, int b)
{
	cout << "Comparing " << a << " and " << b << endl;
	return a<b; // prints elements in ascending order
}

int main()
{
	int n, key;
	cin >> n;
	int a[1000];
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	// Sort an array using in-built sort() function
	sort(a, a+n, compare);
	for(int i=0; i<n; i++)
	{
		cout << a[i] << ",";
	}
	return 0;
 }
