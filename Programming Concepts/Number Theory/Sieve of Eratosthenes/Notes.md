## What is Sieve of Eratosthenes?

* **Sieve of Eratosthenes is a systematic procedure for finding prime numbers that begins by arranging all of the natural numbers in numerical order.**

* **After striking out the number 1, simply strike out every second number following the number 2, every third number following the number 3, and continue in this manner to strike out every nth number following the number n.**

* **The numbers that remain are prime.** 
</br>

<table>
	<tr>
		 <td>
    </br>

![sieveoferatosthenes](https://user-images.githubusercontent.com/76246106/139143441-a2dba56d-741d-4e3a-8554-5b32d9d44ec9.png)

</table>
</br>  

## Algorithm

**To find all the prime numbers less than or equal to a given integer n by Eratosthenes method:**

```
1. Firstly, take all numbers between 2 and n. 

2. Mark all proper multiples of 2 (as 2 is the smallest prime number) as composite.

3. Find the next number that hasn't been marked as composite, it's 3 (as 3 is the next prime number), mark all proper multiples of 3 as composite.

4. The next unmarked number is 5, which is the next prime number, and mark all proper multiples of it.

5. Continue this procedure until all numbers gets processed in the row.

6. Iterating over the prime numbers in order, they are already marked, who are divisible by at least one of the prime numbers, as divisible.

7. If a number is reached and it is not marked, then it isn't divisible by any smaller prime number and therefore has to be prime.
```
</br>

## Pseudo Code

```
Input: An integer (n > 1).
 
 Let A be an array of Boolean values, indexed by integers 2 to n,
 initially all set to true.
 
 for i = 2, 3, 4, ..., not exceeding n:
    A[i] = true.
     for j = i2, i2+i, i2+2i, i2+3i, ..., not exceeding n:
       A[j] = false.
 
 Output: all i such that A[i] is true.
 ```
 
 #
