#include <iostream>

// There are two formats to which we can declare and define functions. They perform the same way, but the latter increases readibility.
//     We can declare+define the function before the main function:
/*
    void happyBirthday(){
        std::cout << "Happy Birthday to you!\n";
        std::cout << "Happy Birthday to you!\n";
        std::cout << "Happy Birthday dear you!\n";
        std::cout << "Happy Birthday to you!\n";
        std::cout << '\n';
}
*/
//     Or we can declare the function before the main function then define it after the main function:
void happyBirthday(std::string BDname, int BDage);


// Currently our program is within the main function
int main(){

    // Function = a block of reusable code

    std::string name = "Richard";
    int age = 21;

    happyBirthday(name, age);
    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string BDname, int BDage){
        std::cout << "Happy Birthday to you!\n";
        std::cout << "Happy Birthday to you!\n";
        std::cout << "Happy Birthday dear " << BDname << "!\n";
        std::cout << "Happy Birthday to you!\n\n";
        std::cout << "You are " << BDage << " years old!\n\n";
}

// You first declare + define the function, then write the code within the function
// Similar to python, you can add multiple parameters when creating the function, and arguments when calling the function
//     A difference is that you need to specify the parameter data type (string, int, char)
