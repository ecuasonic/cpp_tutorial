#include <iostream>

int main(){

    // sizeof() = determines the size in bytes of a:
    //            variable, data type, class, objects, etc.

    std::string name = "This sentence is more than 32 characters";
    double gpa = 2.5;
    int coins = 10;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    std::cout << name << ": " << sizeof(name) << " bytes\n";
    std::cout << gpa << ": " << sizeof(gpa) << " bytes\n";
    std::cout << coins << ": " << sizeof(coins) << " bytes\n";
    std::cout << grade << ": " << sizeof(grade) << " bytes\n";
    std::cout << student << ": " << sizeof(student) << " bytes\n";
    std::cout << grades << ": " << sizeof(grades) << " bytes\n";
    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    std::cout << sizeof(grades)/sizeof(char) << " elements\n";
    std::cout << sizeof(students)/sizeof(std::string) << " elements";
    // Array byte size = Array element size * Stored variable type byte size

    return 0;
}