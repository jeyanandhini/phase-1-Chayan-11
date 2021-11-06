## What is Fibonacci number?

**The Fibonacci sequence is a set of numbers that starts with a one or a zero, followed by a one, and then proceeds based on the rule that each successive number is equal to the sum of the two preceding numbers.**
</br>

<table>
	<tr>
		 <td>

</br>
  
![image](https://user-images.githubusercontent.com/76246106/140621587-c70d229b-d1d4-4691-8fc1-b0f87e8df29d.png)
</table> 

**Source : [blogs.glowscotland.org.uk](https://blogs.glowscotland.org.uk/glowblogs/jypetrieuodep/2018/10/09/fibonacci-sequence-significant-coincidence/)**


</br>

## Algorithm

```
Step 1: START
Step 2: Let variables a, b, fib, n, i
Step 3: Initialize variables
          a ← 1,
          b ← 1,
          i ← 2
Step 4: Read n from user
Step 5: Print a and b
Step 6: Repeat until i < n
           fib ← a + b
           print fib
           a ← b,
           b ← fib
           i ← i + 1
Stop 7: STOP
```
</br>

## Pseudo Code
```
START

READ n FROM USER

IF n IS LESS THAN 1
   DISPLAY 0

IF n IS EQUAL TO 1
   DISPLAY 1

IF n IS GREATER THAN OR EQUAL TO 2
   a = 1,
   b = 1,

   DISPLAY a, b
   REPEAT LOOP FROM 2 to n
      Fib = a + b
      DISPLAY Fib
      a = b
      b = Fib
   END FOR
END IF

END
```
#
