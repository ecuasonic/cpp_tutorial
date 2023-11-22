#include <iostream>
#include <iomanip> // There is a function in here to set some precision for floating point numbers

void showBalance(double balance);
double deposit();
double withdraw(double balence);

int main(){

    double balance = 0;
    int choice = 0;
    do{
        std::cout << "********************************\n";   
        std::cout << "Enter your choice: \n";   
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cout << "********************************\n";    
        std::cin >> choice;

        std::cin.clear();
        // This function will reset any error flags when the standard input fails to interpret the input
        fflush(stdin);
        // "This function will clear the input buffer
        // Basically speaking, once we hit the enter we have a new line character within our input buffer so we just need to flush that and get rid of it
        // This should prevent our program from going crazy [from non-integer inputs]"

        switch(choice){
            case 1: 
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Thanks for visiting!\n";
                break;
            default:
                std::cout << "Invalid Choice!\n";
                std::cout << choice;
                break;
        }
    }
    while(choice != 4);
    
    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n'; 
    // This will display our balance up to two decimal places after the decimal point
} 

double deposit(){
    double amount;

    std::cout << "How much to deposit?\n$";
    std::cin >> amount;

    if(amount<0){
        std::cout << "Enter a positive amount to deposit!\n";
        return 0;
    }


    return amount;
}

double withdraw(double balance){
    double amount;

    std::cout << "How much to withdraw?\n$";
    std::cin >> amount;

    if(amount<0){
        std::cout << "Enter a positive amount to withdraw!\n";
        return 0;
    }

    if(balance < amount){
        std::cout << "Insufficient funds!\n";
        return 0;
    }

    return amount;
}