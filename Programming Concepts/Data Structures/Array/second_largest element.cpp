/* Finding the second largest element in an array

Algorithm :-

1) Initializing the first index = 0 
2) Traversing the array starting from arr[1]
3) If current element in array (arr[i]) is greater than first,then 
   second = first
   first = arr[i]
4) If current element is in between first and second, then update second to store the value of current variable as
   second = arr[i]
5) Return the value stored in the second


*/

#include<iostream>
using namespace std;

int Second_Largest(int arr[], int n)
{
	int largest = 0, result = -1;
	for(int i=1; i<n; i++)
	{
		if(arr[i] > arr[largest]) // Case 1
		{
			result = largest;
			largest = i;
		}
		else if (arr[i] != arr[largest])   // Case 2 : arr[i] == arr[largest], then Ignore!	
		
		/* Case 3 : If arr[i] < arr[largest], then :-
		    sub case 1 : 
			If result = -1 then result = i
			
			sub case 2 :
			If arr[i] <= arr[result] then Ignore!
		
			sub case 3 : 
			arr[result] < arr[i] then result = i
		*/
		{
			if(result == -1 || arr[result] < arr[i])
			result = i;
		}
	}
	return result;
}

int main()
{
	int arr[] = {5, 12, 3, 26, 10};
	int index = Second_Largest(arr, sizeof(arr) / sizeof(arr[0]));
	if(index == -1)
	   cout << "Second largest element doesn't exists" << endl;
	else
	   cout <<  "The Second largest element in the array is : " << arr[index] << endl;
}
