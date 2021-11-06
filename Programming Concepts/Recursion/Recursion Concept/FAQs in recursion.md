## <p align="center"> 💢 What is the difference between Recursion and Loops? </p>

***`Recursion` : When a function calls itself within the function, it is called recursion.***

***`Loop` : Sometimes it is necessary to execute a block of code repeatedly. Programming languages provide a control structure called loop to execute a set of instructions.***
***Loop executes a statement inside the block one after the other. There are three types of loops as while loop, for loop and do while loop.***
***Moreover, an iteration also refers to a loop.***

</br>


> The primary difference between recursion and iteration is that recursion is a process, always applied to a function 

> Iteration is applied to the set of instructions which we want to get repeatedly executed.

</br>

## <p align="center"> `Differences` </p>
</br>

|     `Parameters`                            | `Recursion`               |  `Loops`   |
|:-------------------------------------------:|:----------------------:|:-----------------------:|
| `Speed`                                     |**Execution is slower** | **loop executes faster**|
| `Stack`                                     |**Stack is used to store the local variables when the function is called**|**loop does not use stack**|
| `Condition`            |**If there is no termination condition, it can be an infinite recursion**|**If the condition never becomes false, it will be an infinite loop**|
| &nbsp; &nbsp; `Space Complexity` &nbsp; &nbsp;|**Space complexity of the recursive program is higher**|**Space complexity is less**|
| `Code Readability`     |**A program with recursion is more readable**|**Program with loops are a bit complicated to read**|
| `Hazards`              |**Infinite recursion can lead to system crash**|**Infinite iteration consumes CPU cycles**|

</br>

## Code Snippets for Recursion and Iteration

***Recursion***

```
// Program to calculate the factorial of 5

#include<stdio.h>
int main()
{
	int value = factorial(5);
	printf("Factorial is : %d", value);
	return 0;
}

int factorial (int n)
{
	if(n == 0)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}	
}

```
</br>

***Iteration***

```
// Program to find the factorial of 5 using iteration (for loop)

#include<stdio.h>
int main()
{
	int n=5, fact=1, i;
	for(i=1; i<=n; i++)
	{
		fact = fact*i;
	}
	printf("Factorial is : %d", fact);
	return 0;
}
```

#
