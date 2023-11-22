#include <iostream>

int main(){

    srand(time(0)); // Uses the current time as a seed to generate random numbers
    int randNum = (rand() % 5) + 1;

    switch(randNum){
        case 1: std::cout << "You win a bumper sticker!\n";
                break;
        case 2: std::cout << "You win a t-shirt!\n";
                break;
        case 3: std::cout << "You win a free lunch!\n";
                break;
        case 4: std::cout << "You won a gift card!\n";
                break;
        case 5: std::cout << "You won concert tickets!\n";
                break;
    }

    return 0;
}