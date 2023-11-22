#include <iostream>

void printNum(int myNum);
void printNum();
void printGlobalNum();
void printLocalGlobalNum();

int myNum = 3;
// This is a global variable, which can be accessed by all scopes/functions with no other same-named variables as the global variable
// It is best to avoid using global variables because it pollutes the global namespaces, and local variables are much more secure
// A function will use any local variables first before resorting to any global variables



int main(){

    // Local variables = declared inside a function or block {}
    // Global variables = declared outside of all functions

    int myNum = 1;
    // myNum is a local variable in the main() function
    // This means that it can't be directly accessed by other functions such as printNum()

    printNum(myNum);
    printNum();
    printGlobalNum();
    printLocalGlobalNum();

    return 0;
}



void printNum(int myNum){
    std::cout << myNum;
}

// Overloaded function in action
void printNum(){
    int myNum = 2;
    // You can reuse a variable name, as long as it's within a different scope 
    std::cout << myNum;
}

void printGlobalNum(){
    std::cout << myNum;
}

void printLocalGlobalNum(){
    int myNum = 4;
    std::cout << ::myNum;
}