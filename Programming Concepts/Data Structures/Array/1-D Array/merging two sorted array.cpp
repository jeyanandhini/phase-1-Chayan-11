// Merging two sorted array a[] and b[] into c[]

#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	int i, n1, n2;
	cout << "Enter the number of elements in array 1 : ";
	cin >> n1;
	int a[n1];
	cout << "Enter the sorted array : " << endl;
	for(i=0; i<n1; i++)
	{
		cin >> a[i];
	}
	cout << "Enter the number of elements in array 2 : ";
	cin >> n2;
	int b[n2], c[n1+n2];
	cout << "Enter the sorted array : " << endl;
	for(i=0; i<n2; i++)
	{
		cin >> b[i];
	}
	int k=0, j=0;
	i=0;
	
	// Traverse both the array
	
	while(i<n1 && j<n2)
	{
		if(a[i] > b[j])
		c[k++] = b[j++];
		else
		c[k++] = a[i++];
	}
	
	// copying remaining elements of array a
	
	while(i<n1)
	c[k++] = a[i++];
	
	// copying remaining elements of array b
	
	while(j<n2)
	c[k++] = b[j++];
	
	cout << "New merged array is : \n";
	for(i=0; i<(n1+n2); i++)
	{
		cout << c[i] << " ";
	} 
}


/*

Output : 

Enter the number of elements in array 1 : 3
Enter the sorted array :
1
6
9
Enter the number of elements in array 2 : 3
Enter the sorted array :
21
42
63
New merged array is :
1 6 9 21 42 63

*/
