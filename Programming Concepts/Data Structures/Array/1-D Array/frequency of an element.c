// Frequency of an element in an array

#include<stdio.h>
int main()
{
	int num, arr[50], key, i;
	printf("Enter the number of elements wanted in the array : ");
	scanf("%d", &num);
	printf("Enter the array elements : \n");
	for(i=0; i<num; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	int freq = 0;
	printf("Enter the number whose frequency is to be found : ");
	scanf("%d", &key);
	for(i=0; i<num; i++)
	{
		if(arr[i] == key)
		{
			freq = freq + 1;
		}
	}
	printf("Frequency of the number %d is : %d", key, freq);
}


/*

Output : 

Enter the number of elements wanted in the array : 5
Enter the array elements :
12
45
12
12
49
Enter the number whose frequency is to be found : 12
Frequency of the number 12 is : 3

*/
