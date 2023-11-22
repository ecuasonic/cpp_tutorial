#include <iostream>

int main() {

    // The const keyword specifies that a variable's value is constant
    // It tells the compiler to prevent anything from modifying it
    // (read-only)

    const double PI = 3.14159;
    // PI = 40.021; This is will raise an error (or what seems like an error)
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm";

    const int LIGHT_SPEED = 299792458;
    
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    return 0;

}