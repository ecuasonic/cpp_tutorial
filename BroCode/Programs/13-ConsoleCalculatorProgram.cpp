#include <iostream>

int main() {

    char op;
    double num1;
    double num2;
    double result;
    bool show = true;

    std::cout << "************ CALCULATOR ****************\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1*num2;
            break;
        case '/':
            result = num1/num2;
            break;
        default:
            std::cout << "That wasn't a valid response \n";
            show = false;
            break;
    }

    if(show){
        std::cout << "Result: " << result << '\n';
    }

    std::cout << "****************************************";




    return 0;
}