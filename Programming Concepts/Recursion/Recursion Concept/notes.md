## Recursion

* **It is possible for functions to call themselves !**

* **A function is called 'Recursive' if a statement within the body of the function calls the same function, also reffered to as 'circular definition'.**

* **When we make a function call(recursive or normal), the parameters and the return address gets stored at a place in memory known as Stack.**

* **The stack gets unwounded when the control returns from the called function, and thus during every recursive function call we work with fresh set of parameters.**

* **We must use if statement in recursive function to force the function to return without recursive call being executed. This is because we will fall in an indefinite loop and the stack will keep on getting filled with parameters and the return adress each time there is a call, and eventually will result in run-time error as stack would become full then.**

</br>

## Raw Code

```
int recursion(x)
{
  if(x==0)
  return;
 recursion(x-1);
}
```

</br>

## Calculate the factorial value of an integer using non-recursive function

```
#include<stdio.h>
int fact(int);
int main()
{
  int n,f;
  printf("Enter any integer:- \n");
  scanf("%d",&n);
  f=fact(n);
  printf("Factorial value = %d\n",f);
  return 0;
}

int fact(int a)
{
  int factorial=1,i;
  for(i=a; i>=1; i--)
  factorial = factorial*i;
  return(factorial);
}  
```

Output:- 

```
Enter any integer:-
6
Factorial value = 720
```

</br>

## Calculating factorial of an integer value using recursive function

```
#include<stdio.h>
int rec(int);
int main()
{
  int n,f;
  printf("Enter any integer:- \n");
  scanf("%d",&n);
  f=rec(n);
  printf("Factorial value = %d\n",f);
  return 0;
}

int rec(int a)
{
  int fact;
   if(a==1)
     return(1);
 else
    fact=a*rec(a-1);
      return(fact);
} 
```

Output:- 

```
Enter any integer:-
8
Factorial value = 40320
```

#
