## Binary Heap

* **A Binary Heap is a heap data structure that takes the form of a binary tree (Note: not a binary search tree).**
* **Priority queues are efficiently implemented using Binary Heap.**
* **Priority queues are useful for any application that involves processing elements based on some priority.**

> **The binary heap is a binary tree that satisfies the following condition :**

**Heap property**

* **The key stored in each node is either greater than or equal to (≥) or less than or equal to (≤) the keys in the node's children.**

> **The ordering is one of two types :**

* **min-heap property : The value of each node is greater than or equal to the value of its parent, with the minimum-value element at the root.**
**The same property is recursively true for all nodes in the Binary Tree.**


* **max-heap property : The value of each node is less than or equal to the value of its parent, with the maximum-value element at the root.** 
**This same property is recursively true for all nodes in the Binary Tree.**

![Max Heap and Min Heap Diagram](https://algorithmtutor.com/images/max-and-min-heap.png)

            Max Heap                                       Min Heap 

</br>

## Features of Binary Heap

> **Array representation**

**Heaps are commonly implemented using an array. No space is required for pointers; instead, the parent and children of each node can be found by arithmetic on array indices.**

**Let n be the number of elements in the heap and i be an arbitrary valid index of the array storing the heap. If the tree root is at index 1, with valid indices 1 through n, then :**

* **For any given element at position i its left child is at (2 * i)**
* **For any given element at position i its right child is at (2 * i + 1)**
* **For any given element at position i its parent node is at (i/2)**

</br>

### <p align="center"> For reference click [here](https://medium.com/enjoy-algorithm/introduction-to-heap-data-structure-9dd105c2449f) </p>

#
