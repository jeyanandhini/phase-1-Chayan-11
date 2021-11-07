## <p align = "center"> Tower of Hanoi </p>

* **The Tower of Hanoi is one of main applications of recursion. It says if you can solve (n-1) cases, then you can easily solve the nth case.**

* **Tower of Hanoi, is a mathematical puzzle which consists of three towers and more than one ring as depicted.**

* **These rings are of different sizes and stacked upon in an ascending order, i.e. the smaller one sits over the larger one.**

* **The problem is to move all these rings from pole A to pole C using the pole B as spare pole while maintaining the same order.**

* **The main issue is that the smaller disk must always come above the larger disk.**

</br>

<table>
	<tr>
		 <td>

</br>

<img src="https://user-images.githubusercontent.com/76246106/140620568-08f376c4-1d7d-47ab-8cad-c53c92d9d9a3.png" alt="TOH" width="1200"/>
  
</br>
</table> 

**Source : [Medium](https://medium.com/@krishnannavadia/tower-of-hanoi-coding-interview-question-3712abcc3792)**

</br>

## Algorithm

**`Base Case` : if n=1**

* **Move the ring from A to C using B as spare**


**`Recursive Case` :**

* **Move n-1 rings from A to B using C as spare**
* **Move the one ring left on A to C using B as spare**
* **Move n-1 rings from B to C using A as spare**

</br>

## Pseudocode

```
1. FUNCTION MoveTower(disk, source, destination, spare):
2. IF disk == 0, THEN:
    move disk from source to destination
3. ELSE:
    MoveTower(disk - 1, source, spare, destination)   // Step 1 above
    move disk from source to destination              // Step 2 above
    MoveTower(disk - 1, spare, destination, source)   // Step 3 above
4. END IF
```
</br>

**`NOTE`   For n disks, total (2^n – 1) moves are required**
</br>

> **For animation, checkout [TowerofHanoi.info](http://towersofhanoi.info/Animate.aspx)**

#
