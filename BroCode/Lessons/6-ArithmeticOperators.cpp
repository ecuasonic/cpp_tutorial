#include <iostream>

int main() {

    // Arithmetic operators = return the result of a specific
    //                        arithmetic operation (+ - * /)

    int students = 20;

    students = students + 1;
    students += 2;
    students++;

    students = students - 1;
    students -= 2;
    students--;

    students = students * 2;
    students *= 2;
    
    students = students / 2;
    students /= 2; // Since we are working with an int varible, any decimal portion will be truncated

    int remainder = students % 3;

    std::cout << "Number of students: " << students << '\n';
    std::cout << "(Remainder mod 3) = " << remainder << '\n';

    // Parenthesis
    // Multiplication & Division (Left to Right)
    // Addition & Substraction (Left to Right)

    int num = 6 - 5 + 4 * 3 / 2; // 6 - 5 + ((4 * 3) / 2) = 6 - 5 + 6 = 7

    std::cout << "The equation output is " << num;

    return 0;

}