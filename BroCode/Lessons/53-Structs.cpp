#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
    double set = 1.2;
    // You can set the members to have default values
};

int main(){



    // struct = A structure that group related variables under one name
    //          structs can contain many different data types (string, int, double, bool, etc.)
    //          variables in a struct are known as "members"
    //          members can be accessed with . "Class Member Access Operation"

    student student1;
    student1.name = "Spongebob";
    student1.gpa = 2.3;
    student1.enrolled = true;

    student student2;
    student2.name = "Patrick";
    student2.gpa = 2.1;
    student2.enrolled = true;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n'; 
    // When accessing boolean variables, 1 corresponds with true and 0 corresponds with false

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    std::cout << "This is to show change in set attributes\n";
    std::cout << student2.set << '\n';
    student2.set = 0;
    std::cout << student2.set << '\n';


    return 0;
}