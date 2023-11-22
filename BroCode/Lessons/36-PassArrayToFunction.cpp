#include <iostream>

double getTotal(double prices[], int size);

int main(){

    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << '$' << total;

    return 0;
}

double getTotal(double prices[], int size){
    // When we pass an array to a function, it decays into a "pointer," which points to the address of where the list is
    // This means that we're now working with a pointer and not a list
    // This also means that we can't know how big the array is, without explicitly telling the function what it is

    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }

    return total;
}