#include <iostream>

int main(){

    // Do while loop = do some block of code first
    //                 THEN repeat again if condition is true

    int number; // The default value for an unassigned integer is 0; which makes number < 0 to be false

    /*
    while(number < 0){
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }
    */

    do{
        std::cout << "Enter a non-negative number: ";
        std::cin >> number;
    } while(number < 0);

    std::cout << "The number is: " << number;

    return 0;
}