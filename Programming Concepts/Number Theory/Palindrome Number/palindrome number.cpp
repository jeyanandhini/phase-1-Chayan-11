#include<iostream>
using namespace std;
int main()
{
	int n, rem, rev=0;
	cout << "Enter any number : ";
	cin >> n;
	int temp = n;
	while(temp != 0)
	{
		rem = temp % 10;
		temp = temp / 10;
		rev = (rev * 10) + rem; 
	}
	if(rev != n)
	{
		cout << "Entered number is not Palindrome" << endl;
	}
	else
	{
		cout << "Entered number is Palindrome" << endl;
	}
	return 0;
}


/*

Output :

Enter any number : 12321
Entered number is Palindrome

*/
