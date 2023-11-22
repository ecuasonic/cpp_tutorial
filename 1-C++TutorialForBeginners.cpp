#include <iostream> // iostream is a header file that contains functions for basic input and output operations

int main(){

    // This is a comment

    /*
        This
        is 
        a
        multi-line
        comment
    */

    std::cout << "Hello World" << std::endl << "How are you doing today" << '\n' << "I am learning" << '\n'; 
    std::cout << "This is the last line";
    return 0;
}

/*
    The main function is where the program begins ; We begin by invoking the main function and reading any code within it
    'std' = 'standard' ; 'cout' = 'character output' ; 'std::endl' = 'standard endline'
        std::endl with flush the output buffer ; '\n' does not
    If we reach return 0, then that means that there were no problems in this program ; if it returns 1, then there was a problem
*/