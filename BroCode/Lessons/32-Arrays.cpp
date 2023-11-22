#include <iostream>

int main(){

    // Array = A data structure that can hold multiple values
    //         Values are accessed by an index number
    //         "Kind of like a variable that holds multiple values"
    //         This is a type of data structure

    std::string cars[] = {"Corvette", "Mustang", "Camry"};

    std::cout << cars << "\n\n";
    // This returns the memory address of the car[] array variable

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << "\n\n";    
  
    std::cout << cars[1] << '\n';
    cars[1] = "Camaro";
    std::cout << cars[1] << "\n\n";    

    // Arrays should be of the same data type, such as string, int, boolean, of characters
    // There can't be a mix of variable types in the same array

    std::string foods[3];
    // Declaring arrays require the size of the array
    std::cout << foods[1];
    // Prints out nothing
    foods[0] = "Banana";
    foods[1] = "Rice";
    foods[2] = "Corn";

    double prices[] = {5.00, 7.50, 9.99, 15.00};
    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';

    return 0;
}