// A Palindrome Sequence is a sequnce of numbers which is the same when read from both front and rear side. //
// e.g : 1, 2, 3, 2, 1

#include<iostream>
using namespace std;

bool isPalindrome(int arr[], int n)
{
	for(int i=0; i<=(n/2); i++)
	{
		if(arr[i] != arr[n-i-1])
		return false;
	}
	return true;
}

int main()
{
	cout << "Enter the number of elements wanted in the array : " << endl;
	int n;
	cin >> n;
	cout << "Enter the elements of the array : " << endl;
	int arr[n];
	for(int i=0; i<n; i++)
	cin >> arr[i];
	if(isPalindrome(arr, n))
	cout << "The given array is Palindrome" << endl;
	else
	cout << "The given array isn't a Plaindrome" << endl;
	return 0;
}


/*

Enter the number of elements wanted in the array :
5
Enter the elements of the array :
0
2
4
2
0
The given array is Palindrome

*/
