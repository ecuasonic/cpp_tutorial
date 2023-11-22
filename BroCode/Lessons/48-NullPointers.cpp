#include <iostream>

int main(){

    // Null value = a special value that means something has no value.
    //              When a pointer is holding a null value,
    //              that pointer is not pointing to anything (null pointer)

    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when determining if an address
    //     was successfully assigned to a pointer

    // When using pointers, be careful that your code isn't
    //     dereferencing nullptr or pointer to free memory
    //     this will cause undefined behavior

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;
    
    if(pointer == nullptr){
        std::cout << "address was not assigned!\n";
        // If you dereference a null pointer, it can lead to memory corruption, crashes, and unpredictable behavior
    }
    else{
        std::cout << "address was assigned!\n";
        std::cout << *pointer;
    }

    return 0;
}