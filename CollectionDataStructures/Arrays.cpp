#include <iostream>
#include <algorithm>

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << "\n\n";
}

int main(){
    // 1. Declaration and Initialization
    int myArray[] = {1,2,3,4,5};
    // This deelcares an array of integers and intializes it with the provided values.
    // Memory is allocated on the stack, and each element is initialized with the corresponding value
    // The size of the array is determined by the number of elements in the initialization list
    int myArray2[5]; 
    // Memory is allocated on the stack for the array, and this memory contains uninitialized values
    // You need to manually initialize the elements if you want specific values
    //     Otherwise, the elements will contain garbage values
    // May contain whatever values happen to be in that memory location
    int myArray3[5] = {1,2,3};
    // Memory is allocated on the stack for the array, and this memory contains uninitialized values
    // The first three elements are explicitly initialized with the values 1,2,3
    //     The remaining two elements will be initialized to 0 because they are not explicitly assigned values
    
    // 2. Accessing Elements
    int element = myArray[2];

    // 3. Looping Through Arrays
    std::cout << "Original: ";
    printArray(myArray, 5);

    // 4. Modifying Elements
    myArray[1] = 10;
    std::cout << "Modified: ";
    printArray(myArray, 5);

    // 5. Finding Elements
    int target = 3;
    if (std::find(std::begin(myArray), std::end(myArray), target) != std::end(myArray)) {
        std::cout << "Element " << target << " found in the array." << std::endl;
    }
    // Returns an iterator pointing to the first occurence of the value within the specified range.
    // If the value is not found, it returns the "last" iterator (indicating the end of the range)
    std::cout << "Memory location of first element: " << std::begin(myArray) << std::endl;
    std::cout << "Memory location of one past the last element: " << std::end(myArray) << std::endl;
    std::cout << "Element size of array: " << std::end(myArray) - std::begin(myArray) << std::endl;

    // 6. Sorting
    std::sort(std::begin(myArray), std::end(myArray));
    std::cout << "Sorted: ";
    printArray(myArray, 5);

    // 7. Searching
    int key = 4;
    int *found = std::find(std::begin(myArray), std::end(myArray), key);
    if (found != std::end(myArray)) {
        std::cout << "Element " << key << " found at index " << (found - std::begin(myArray)) << std::endl;
    }
    else {
        std::cout << "Element " << key << " not found in the array." << std::endl;
    }

    // 8. Copying and Cloning
    int anotherArray[5];
    std::copy(std::begin(myArray), std::end(myArray), std::begin(anotherArray)); // Copy elements to another array

    // 9. Aggregate Functions
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += myArray[i];
    }
    std::cout << "Sum of elements: " << sum << std::endl;

    // 10. Reversing
    std::reverse(std::begin(myArray), std::end(myArray));
    std::cout << "Reversed: ";
    printArray(myArray, 5);

    return 0;
}
