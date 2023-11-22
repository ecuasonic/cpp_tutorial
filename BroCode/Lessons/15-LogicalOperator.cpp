#include <iostream>

int main() {

    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // ! = reverses the logical state of its operand

    // AND
    int temp1;
    std::cout << "Enter the first temperature (Celsius): ";
    std::cin >> temp1;
    /*
    if(temp1 > 0 && temp1 < 30){
        std::cout << "The temperature is in good!";
    }
    else{
        std::cout << "The temperature is bad!";
    }
    */
    std::cout << (temp1 > 0 && temp1 < 30 ? "The temperature is good!" : "The temperature is bad!") << '\n';


    // OR
    int temp2;
    std::cout << "Enter the second temperature (Celsius): ";
    std::cin >> temp2;
    /*
    if(temp2 <= 0 || temp2 >= 30){
        std::cout << "The temperature is bad!";
    }
    else{
        std::cout << "The temperature is good!";
    }
    */
    std::cout << (temp2 <= 0 && temp2 >= 30 ? "The temperature is bad!" : "The temperature is good!") << '\n'; 


    bool sunny = true;
    if(sunny){
        std::cout << "It is cloudy outside!";
    }
    else{
        std::cout << "It is sunny outside!";
    }

    return 0;    
}