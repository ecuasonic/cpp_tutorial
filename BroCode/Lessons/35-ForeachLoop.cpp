#include <iostream>

int main(){

    // foreach loop = loop that eases the traversal over an 
    //                iterable data set
    // Less syntax than a typical For loop but is less flexible 

    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
        std::cout << students[i] << '\n';
    }

    std::cout << '\n';

    for(std::string student : students){
        std::cout << student << '\n';
    }

    std::cout << '\n';

    int grades[] = {65, 72, 81, 93};

    for(int grade : grades){
        std::cout << grade << '\n';
    }

    return 0;
}