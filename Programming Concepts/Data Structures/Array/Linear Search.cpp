// Implementing Linear Search Algorithm in Array 

#include<iostream>
using namespace std;

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
	
	// Asking the user to enter the element to be searched
	
	cout << "Enter the element to be searched :" << endl;
	cin >> key;
	
	// Finding out the index of the element by traversing the array
	
	for(i=0; i<=n-1; i++)
	{
		if(a[i]==key)
		{
			cout << key << " is found at " << "index " << i;
			break;
		}
	}
	if(i==n)
	{
		cout << key << " is not found " << endl;
	}
}
