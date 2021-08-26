 ### <p align = center >⭐Array </p>

-------------------------------------------------------------------------
### ♦ Definition:- 

* Arrays are kind of data structure that can store a fixed-size sequential collection of elements of the same type. 
* An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.
* It is a variable capable of holding more than 1 value at a time.

-------------------------------------------------------------------------------
### ♦ Basic Property:- 

* All array elements are similar to one another.
* All array elements are stored in adjacent memory locations.

------------------------------------------------------------------------------
### ♦ Declaration:- 

**Arrays can be declared in two ways:**
```
int arr[10]; // mentioning size is compulsory while declaring

```
 **OR**
 
 ```
 int num[]={45,23,99,53,16}; // here mentioning size is optional
 
 ```
----------------------------------------------------------------------------

### ♦ Note:- 

* Arrays have storage classes, default - *'auto'.*
* Sorting:- *Arranging array elements in ascending or descending order.*
* Bubble Sort:- *Comparing adjacent elements repeatedly.*
* Selection Sort:- *Comparing 0th element with all others.*

-------------------------------------------------------------------------------

### ♦ Arrays and pointers:- 

**There are 5 ways to access elements using pointers:-**

* Set up a pointer holding base adress of the array:

```
int arr[10], *p;
p=arr;
```

* In for loop we can use any of the expressions:

```
*p; p++;

*(p+i)

 p[i]
 
 *(i+p)
 
 i[p]
 ```
 
 ---------------------------------------------------------------------------------------------------------
 
 ### ♦ For passing array to a function we usually pass two things:- 

- [X] Base adress of array  

- [X] Size of array

------------------------------------------------------------------------------------------------------------


 ### ♦ Array can neither grow nor shrink in size during execution of a program, but array size is made flexible by changing value of MAX:- 

```
#define MAX 20
int arr[MAX];
```

--------------------------------------------------------------------------------------------------------------------


 ### ♦ If we are to create a variable sized array, we declare it using:- 

```
int *p;
p = (int*) malloc (n*sizeof(int));
```

 ### ♦ To access all elements, we can use p[i].

-------------------------------------------------------------------------------------------------
