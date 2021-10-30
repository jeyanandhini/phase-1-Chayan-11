## Spiral Traversal in Matrix

* **The Spiral Matrix problem takes a 2-D array of n-rows and m-columns as input and prints the elements of the matrix in spiral order.**

* **The spiral begins at the top left corner of the input matrix, and simply prints the elements it encounters, while looping towards the center of the matrix, in a clockwise manner.**
#
</br>

### <p align="center"> `Algorithm` </p>

```
1. Four variables containing the indices for the corner points of the array are initialized.

2. The algorithm starts from the top left corner of the array, and traverses the first row from left -> right.

3. Once it traverses the whole row it does not need to revisit it, and it increments the top corner index.

4. Once completed, it traverses the rightmost column from top -> bottom.

5. Once this completes, there is no need to revisit the rightmost column, hence it decrements the right corner index.

6. Next, the algorithm traverses the bottommost row and decrements the bottom corner index afterwards.

7. Lastly, the algorithm traverses the leftmost column, incrementing the left corner index once it’s done.

8. This continues until the left index is greater than the right index, and the top index is greater than the bottom index.
```
