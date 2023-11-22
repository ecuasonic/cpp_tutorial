#include <iostream>

int main(){

    // pointers = variable that stores a memory address of another variable
    //            sometimes it is easier to work with an address

    // & address-of operator
    // * dereference operator

    std::string name = "Bro";
    int age = 21;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << *pName << " at " << pName << '\n';
    std::cout << *pAge << " at " << pAge << '\n';
    std::cout << *pFreePizzas << " at " << pFreePizzas << '\n';

    return 0;
}