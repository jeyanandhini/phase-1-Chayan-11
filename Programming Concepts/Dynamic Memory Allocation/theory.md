-----------------------------------------------------------------------
### <p align="center"> Memory Management in C </p>

-----------------------------------------------------------------------

* **The C programming language provides several functions for memory allocation and management.**
* **These functions can be found in the <stdlib.h> header file.**

|            Function                                     |  Description  | 
|-----------------------------------------------------    |:-------------:|
| void * calloc(int num, int size);                       | This function allocates an array of num elements each of which size in bytes will be size. | 
| void free(void * address);                              | This function releases a block of memory block specified by address.  |   
| void * malloc(size_t size);                             | This function allocates an array of num bytes and leave them uninitialized. |   
| void * realloc(void * address, int newsize);            | This function re-allocates memory extending it upto newsize. |
