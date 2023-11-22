#include <iostream>

void swapVal(std::string x, std::string y);
void swapRef(std::string &x, std::string &y);

int main(){

    std::string x = "Kool-aid";
    std::string y = "Water";
    std::string temp;

    swapVal(x,y); // Does nothing ; Creates copies of inputed variables and swaps those
    swapRef(x,y); // Swaps the inputed variables

    std::cout << "X: " << x << '\n'; 
    std::cout << "Y: " << y << '\n'; 

    return 0;
}

void swapVal(std::string x, std::string y){
    // When we pass through variables through for loops or function, we are accessing the variable by value (creates a copy)
    std::string temp = x;
    x = y;
    y = temp;
}

void swapRef(std::string &x, std::string &y){
    // Here, we are passing in the memory address of the variables
    // The usage of '&' after the variable type will access the variable by reference (original variable)
    std::string temp = x;
    x = y;
    y = temp;
}