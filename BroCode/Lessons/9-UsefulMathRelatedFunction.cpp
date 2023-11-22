#include <iostream>
#include <cmath>

int main() {

    double x = 3.14;
    double y = 4;

    double max = std::max(x,y);
    double min = std::min(x,y);

    std::cout << "Maximum: " << max << '\n';
    std::cout << "Minimum: " << min << '\n';
    std::cout << "2^4 = " << pow(2,4) << '\n';
    std::cout << "sqrt(9) = " << sqrt(9) << '\n';
    std::cout << "abs(-3) = " << abs(-3) << '\n';
    std::cout << "round(3.14) = " << round(3.14) << '\n';
    std::cout << "ceil(3.14) = " << ceil(3.14) << '\n';
    std::cout << "floor(3.14) = " << floor(3.14) << '\n';

    return 0;
}