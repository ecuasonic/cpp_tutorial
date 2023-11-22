#include <iostream>

struct Car{
    std::string model;
    std::string color;
    int year;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main(){

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    std::cout << &car1 << '\n';
    printCar(car1);
    std::cout << '\n';
    paintCar(car1, "Gold");
    printCar(car1);

    return 0;
}

void printCar(Car &car){
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
    std::cout << &car << '\n';
}
void paintCar(Car &car, std::string color){
    car.color = color;
}