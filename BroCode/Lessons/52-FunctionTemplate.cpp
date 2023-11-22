#include <iostream>

template <typename T, typename U> // Generates two different templates  
auto max(T x, U y){
    return (x > y) ? x : y;
}
// Now this function works with integers, double, chars, etc.
int main(){

    // function template = describes what a function looks like.
    //                     Can be used to generate as many overloaded functions
    //                     as needed, each using different data types

    //                     Ex. "It's like a cookie-cutter..."
    //                     "Cookies are the same shape, but the dough use can be different"

    // "auto" keyword:
    //      ***Used to simplify the process of declaring and initializing variables with the correct data type based on context***
    //      Used for type inference
    //      It allows the compiler to automatically deduce the data type of a variable or the return type of an expression based on the value assigned to it. 
    //      Instead of explicitly specifying the type, you use 'auto', and the compiler determines the type of from the context

    // function template: 
    //      ***Used to create resuable functions that can handle multiple data types***
    //      Create generic functions that can work with multiple data types
    //      They allow you to define a function once, with one or more template parameters that act as placeholders for types or values
    //      You write a single function template that works with various types by using template paramters
    //      When you call the function, the compiler deduces the appropriate data type based on the arguments you provide

    std::cout << max(1,2) << '\n';

    return 0;
}