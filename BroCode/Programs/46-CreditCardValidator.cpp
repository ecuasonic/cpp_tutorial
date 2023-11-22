#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main(){

    std::string cardNumber = "6011000755834102";
    int result = 0;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    std::cout << cardNumber << (result%10==0 ? " is valid" : " is not valid");

    return 0;
}

int getDigit(const int number){
    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += cardNumber[i] - '0';
        // We need to substract by '0' because the as the string is converted to int, '0' -> 48, '1' -> 49, etc.
        // Substracting by '0' gives the actual value of the interger and not the ascii number
    }

    return sum;
}
int sumEvenDigits(const std::string cardNumber){

    int sum = 0;
    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0')*2);
    }

    return sum;
}