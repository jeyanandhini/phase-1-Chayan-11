-----------------------------------------------------------------------
### <p align="center"> 💭 Why do we need to terminate a string with a null character? </p>

-----------------------------------------------------------------------

* **The reason you need a null terminator on your string is because once it is broken down into assembly language each character gets a byte of sequential logical memory allocated to it in the stack in the main memory (RAM) and that is what the computer looks for to know 2 things.**

    * **The length of the string to find available memory.**
    * **To know where the end of the string is otherwise it will continue to read sequentially through memory until it finds a null terminator.**


* **This means that if you forget a null terminator the pointer indicating that string in memory is going to go into the next block of memory data that has nothing to do with your string.**


- [X] **For source and reference refer [Stackoverflow](https://stackoverflow.com/questions/2911089/null-terminating-a-string/2911196)**
