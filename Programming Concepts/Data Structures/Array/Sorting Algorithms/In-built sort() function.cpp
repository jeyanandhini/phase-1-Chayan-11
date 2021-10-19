#include<iostream>
#include<algorithm> // this header file contains sort() function 
using namespace std;

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
	sort(a, a+n);
	for(int i=0; i<n; i++)
	{
		cout << a[i] << ",";
	}
	return 0;
 }
