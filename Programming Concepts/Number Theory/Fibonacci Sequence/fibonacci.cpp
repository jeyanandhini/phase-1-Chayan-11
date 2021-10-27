#include<iostream>
using namespace std;
//function to print the nth fibonacci number
int Fibonacci_number(int num)
{
	if(num <= 1)
	return num;
	return Fibonacci_number(num - 1) + Fibonacci_number(num - 2);
}
//function to print the fibonacci series
int Fibonacci_Series(int num)
{
	int a=0, b=1, i;
	if(num < 1)
	return 0;
	for(i=1; i<=num; i++)
	{
		cout << b << " ";
		int c = a + b;
		a = b;
		b = c;
	}
}

//Driver's code
int main()
{
	int num;
	cin >> num;
	cout << "The Fibonacci number at position " << num << " is " << Fibonacci_number(num);
	cout << "\nFibonacci Series : \n";
	Fibonacci_Series(num);
	return 0;
}


/*

Output :

5
The Fibonacci number at position 5 is 5
Fibonacci Series :
1 1 2 3 5

*/
