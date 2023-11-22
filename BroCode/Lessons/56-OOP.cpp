#include <iostream>

class Human{
    public:
        //Attributes
        std::string name;
        std::string occupation;
        int age;
        int set = 10;

        //Methods
        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }
};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate(){
            std::cout << "You step on the gas!\n";
        }
        void brake(){
            std::cout << "You step on the brakes!\n";
        }
};

int main(){

    // object = A collection of attribute and methods
    //          They can have characteristics and could perform actions
    //          Can be used to mimic real world items (ex. Phone, Book, Dog)
    //          Created from a class which acts as a "blue-print"

    Human person1;
    person1.name = "Richard";
    person1.age = 20;
    person1.occupation = "College Student";

    std::cout << person1.name << '\n';
    std::cout << person1.age << '\n';
    std::cout << person1.occupation << '\n';
    std::cout << person1.set << '\n';

    person1.eat();
    person1.drink();
    person1.sleep();

    Car car1;
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "silver";

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    car1.accelerate();
    car1.brake();

    return 0;
}