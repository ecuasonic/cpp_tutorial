#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main() {

    std::string name;
    int age; 
    std::string inp;

    std::cout << "This is a question to precede the upcoming (cin) input: ";
    std::cin >> inp;

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name); 

    // If you are going to have an input with multiple whitespaces, then you use std::getline(std::in, variable):
    //     input = "word1 word2" --> var1 = "word1 word2"
    // Otherwise, each non-whitespace word will be inputed into each input variable:
    //     input = "word1 word2" --> var1 = "word1" ; var2 = "word2"

    // In the input buffer for the preceding 'cin,' there is a new line character ('\n') or whitespace. 
    // We don't pick up that newline character, but when we reach the getline function, it accepts the newline character that is still within the buffer.
    // To prevent that, make the getline function to be:
    //     std::getline(std::cin >> std::ws, variable)

    // The 'getline(std::cin >> std::ws, variable)' is still prone to any word-overflow from the preceding 'cin,' but splices all whitespace on the right of text after the first word
    

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "The input for the question: " << inp << '\n'; 
    std::cout << "Hello " << name << "." << "\n";
    std::cout << "You are " << age << " years old." << "\n";

    return 0;
}