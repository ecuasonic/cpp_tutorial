#include <iostream>

int main() {

    // If statement = do something if a condition is true.
    //                If not, then don't do it.

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome to the site!";
    }

    else if (age < 0){
        std::cout << "You haven't been born yet!";
    }

    else{
        std::cout << "You are denied access!";
    }

    return 0;
}