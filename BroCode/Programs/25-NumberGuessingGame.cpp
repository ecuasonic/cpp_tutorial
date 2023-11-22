#include <iostream>

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "********* NUMBER GUESSING GAME *********\n";
    
    do{
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Guess is too high! Try again!\n\n";
        }
        else{
            std::cout << "Guess is too low! Try again!\n\n";
        }

    }while(guess != num);

    std::cout << "You guessed the number! Great job!\nIt took you " << tries << " tries!";
    std::cout << "****************************************";

    return 0;
}