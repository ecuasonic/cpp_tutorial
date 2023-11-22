#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;
    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }

};

class Dem{
    public:
        std::string name;
        int age;
        double gpa;
    Dem(std::string x, int y, double z){
        name = x;
        age = y;
        gpa = z;
    }
};

int main(){

    // constructor = special method that is automatically called when an object is instantiated
    //               useful for assigning values to attributes as arguments

    Student student1("Spongebob", 25, 3.2);
    Dem student2("Richard", 20, 4.0);

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << "\n\n";

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << "\n\n";

    return 0;
}