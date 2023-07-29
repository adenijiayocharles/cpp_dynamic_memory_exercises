##### Dynamic Memory Allocation
During the execution of a C++ program, the program requires some space (memory) to store all of the instructions (statements), variables, functions, etc that makes up the program. The OS makes available to our program multiple segments of memory for its operations. Two of the notable memory segments available are
*   **Stack**: constant space which is allocated to the program by the OS during the compilation of the program. The programmer has no control over this memory space as it is allocated and deallocated automatically by the C++ compiler.
*   **Heap**: this is also known as dynamic memory of the system that is thought of as expandable and shrinkable during a program execution. It is from this expandable memory that a programmer can request or allocate memory from and once done, can then deallocate the memory or free the memory. Memory from the heap is usually allocated at runtime.

Therefore dynamic memory allocation is the process of allocating and deallocation memory from the heap during the execution of a program. To allocate a memory from the heap, the **new** operator is used and to deallocate the memory, the delete **operator** is used.

The major importance of dynamic memory allocation is that it allows developers to expand the memory required for their programs to run. This is essentially important when dealing with arrays where we do not know its size at compilation time.

##### C++ dynamic memory allocation
To request or allocate memory in C++, we use the new operator as shown in the example below. Upon allocating the memory, its address is then stored in a pointer
```
data_type *pointer_variable = new data_type
```
where **data_type** is any predefined data type int, char, etc  and **pointer_variable** is a pointer variable that holds the address of the allocated memory address. 

To dynamically allocate memory to an integer
```
#include <iostream>;

using namespace std;

int main()
{
    int number = 5;
    int *intPtr = new int(number);

    if (intPtr != NULL) {
        cout << *intPtr << endl;
    }

    delete intPtr;
}


```
Once the execution of the program ends, the allocated memory is freed using the **delete** operator.






