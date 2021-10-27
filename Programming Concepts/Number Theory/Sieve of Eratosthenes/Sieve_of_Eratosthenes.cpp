#include<iostream>
using namespace std;
void Sieve_of_Eratosthenes(int n)
{
	/*Create a boolean array 'Prime[0, ....., n]' and initialize all entries as true.
	A value in Prime[i] will finally be false if i is not prime, else it will be true*/
	
	bool prime[n+1];
	for(int p=2; p*p <= n; p++)
	{
		// If prime[p] is not changed, then it is prime
		if(prime[p] == true)
		{
			// Update all multiples of p
			for(int i=p*2; i<=n; i+=p)
			prime[i] = false;
		}
	}
	
	// Print all the prime numbers
	for(int p=2; p<=n; p++)
	if(prime[p])
	cout << p << " ";
}

// Driver's Code

int main()
{
	int n=30;
	cout << "Following are the prime numbers smaller than or equal to " << n << endl;
	Sieve_of_Eratosthenes(n);
	return 0;
}


/*

Output :

Following are the prime numbers smaller than or equal to 30
8 9 10 16 17 18 20 21 24

*/
