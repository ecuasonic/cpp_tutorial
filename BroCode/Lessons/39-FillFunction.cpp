#include <iostream>

int main(){

    // fill() = Fills a range of elements with a specified value
    //          fill(begin, end, value)

    std::string foods[10];

    std::cout << foods << '\n';
    std::cout << foods+10 << '\n';
    
    fill(foods, foods + 10, "pizza");

    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;
}