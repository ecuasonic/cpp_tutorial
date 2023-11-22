#include <iostream>

int main() {

    int x ; // Declaration
    x = 5; // Assignment

    int y = 7; // Declaration and assignment combined

    std::cout << x << '\n';
    std::cout << y << '\n';

    // Integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 9.7; // Round down to the nearest interger

    // Double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // Single Character
    char grade = 'A';
    // Char initial = 'BC'; This would result in an error
    // Char variables use the single quotes ('')
    char currency = '$';

    // Boolean (True or False)
    bool student = true;
    bool power = false;
    bool forSale = true;

    // String (Objects that represents a sequence of text)
    std::string name = "Richard";
    std::string day = "Friday";
    std::string food = "Pizza";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";
    // String variables use the double quotes ("")


    return 0;
}