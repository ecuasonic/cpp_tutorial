#include <iostream>

int main() {

    // Ternary Operator = replacement to an if/else statement
    // condition ? expressionTrue : expressionFalse


    int grade;
    std::cout << "What was your grade?: ";
    std::cin >> grade;
    //grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";
    std::cout << (grade >= 60 ? "You pass!" : "You fail!") << '\n';

    int number = 8;
    //number % 2 ? std::cout << "ODD" : std::cout << "EVEN";
    std::cout << (number % 2 ? "ODD" : "EVEN") << '\n';

    bool hungry = true;
    //hungry ? std::cout << "You are hungry" : std::cout << "You are fed";
    std::cout << (hungry ? "You are hungry" : "You are fed") << '\n';

    return 0;
}