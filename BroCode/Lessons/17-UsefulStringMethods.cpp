#include <iostream>

int main(){

    /*
    std::string str; 

    str.length(); 
    Returns integer of str length
    
    str.empty(); 
    Returns 1 if empty and 0 otherwise
    
    str.clear(); 
    Clears str such that there is no string insdie
    
    str.append(str2); 
    Appends str2 onto str itself. Doesn't create new variable.
    
    str.at(index); 
    Returns the character at specified index
    
    str.insert(index, str2);
    Inserts str2 at the specified index.
    
    str.find(char);
    Returns the index of the first instance of the matching character

    str.erase(startIndex, endIndex);
    Removes [startIndex, endIndex) of the string str 
    */

    std::string name = "Richard Barrezueta";
    std::string str = "Hi";

    if(name.length() > 12){
        std::cout << "Your name cannot be over 12 characters long!\n";
    }
    else if(name.empty()){
        std::cout << "You didn't enter your name!";
    }
    else{
        std::cout << "Welcome " << name << "!";
    }

    return 0;
}