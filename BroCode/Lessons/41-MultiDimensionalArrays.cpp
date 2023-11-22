#include <iostream>
#include <array>
#include <string>

int main(){

    std::array<std::array<std::string, 3>, 3> cars1 = {{{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}}};

    for(std::array<std::string,3> r : cars1){
        for(auto& c : r){
            std::cout << c << ' ';
        }
        std::cout << '\n';
    }

    std::cout << "\n";

    std::string cars[][3] = {{"Ford", "Toyota", "Honda"},
                            {"Chevrolet", "Nissan", "BMW"},
                            {"Audi", "Tesla", "Hyundai"}};
    // You always need to include the column index, since the outer braket represents rows and doesn't account for columns
    // cars[outer][inner] or cars[rows][columns]
    // It also guarentees that all columns will be of the same size

    int rows = sizeof(cars)/sizeof(cars[0]);
    int cols = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout << cars[i][j] << ' ';
        }
        std::cout << '\n';
    }

    std::cout << '\n';
    
    // The "auto" keyword is used for type inference and allows the compiler to deduce the type of a variable
    //     Accesses element by value (creates a copy) but the copy array won't have the same parsing properties as the original
    //     In fact, any copy created by accessing elements by value don't have the parsing properties as the orignal
    // The "&" keyword is to access elements by reference (using the original data, no copy) and will have the same parsing properties as the original
    for(auto& r : cars){
        for(auto& c : r){
            std::cout << c << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}