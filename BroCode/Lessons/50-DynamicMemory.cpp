#include <iostream>

int main(){

    // dynamic memory = Memory that is allocated after the program
    //                  is already compiled & running.
    //                  Use the 'new' operator to allocate
    //                  memory in the heap rather than the stack

    //                  Useful when we don't know how much memory
    //                  we will need. Makes our program more flexible,
    //                  especially when accepting user input. 

    int *pNum = NULL;
    // Declare a pointer and initialize it to 'NULL', indicating that it doesn't
    //     initially point to any valid memory location.
    // nullptr is more type safe for this case, but NULL also works

    pNum = new int;
    // Dynamically allocate memory on the heap for an integer
    // The address of the allocated memory is assigned to 'pNum'
    // Prepares the pointer to handle int variables with unknown memory sizes

    *pNum = 21;
    // You store the value '21' in the memory location pointed to by 'pNum'
    // Actually stores the value into the memory location pointed by the pointer

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete pNum;
    // Here we're freeing up the memory at this addrerss
    // If you don't you may cause a memory leak 
    // 'pNum' is now a "dangling pointer" because it no longer points to valid memory
    // Although the value at the memory location is deleted, the pointer still holds onto the memory location

    std::cout << pNum;

    pNum = nullptr;
    // Releases the memory location from the pointer


    char *pGrades = nullptr; // declares null pointer
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size]; // allocates memory for an array of char

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;
    pGrades = nullptr;

    return 0;


    // UNSAFE:
    //     Dereferencing from a null pointer 
    //     Deferencing from a dangling pointer, or a pointer associated with an empty memory address
    //     Dereferencing from a wild pointer, or an uninitialized pointer
    //     Memory leaks (Dynamic memory usage but no delete keyword present)
    //     Buffer overflows and underflows (unsafe pointer arithmetic)


    return 0;
}