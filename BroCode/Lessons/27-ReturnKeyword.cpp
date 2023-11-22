#include <iostream>

double square(double length);
double cube(double length);
std::string concatString(std::string str1, std::string str2);

int main(){

    // return = return a value back to the spot
    //          where you called the encompassing function

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Length: " << length << " cm\n";
    std::cout << "Area: " << area << " cm^2\n";
    std::cout << "Volume: " << volume << " cm^3\n";

    std::string firstName = "Richard";
    std::string lastName = "Barrezueta";
    
    std::string fullName = concatString(firstName, lastName);
    std::cout << "Full Name: " << fullName << '\n'; 


    return 0;
}

double square(double length){
    return length * length;
}

double cube(double length){
    return length * length * length;
}

std::string concatString(std::string str1, std::string str2){
    return str1 + ' ' + str2;
}