#include <iostream>

class Stove{
    // We no longer have accessed to this attribute to outside this class
    private:
        int temperature = 0;
    public:
    Stove(){

    }
    Stove(int temperature){
        setTemperature(temperature);
    }
    int getTemperature(){
        return temperature;
        // Implements only Readability
    }
    void setTemperature(int temperature){
        // We can add checks within the setter
        if(temperature < 0){
            this->temperature = 0;
        }
        if(temperature >= 10){
            this->temperature = 10;
        }
        else{
            this->temperature = temperature;
        }
        // Implements only Writability
    }
};

int main(){

    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITEABLE

    Stove stove;
    stove.setTemperature(10000000);
    std::cout << "The temperature setting is: " << stove.getTemperature() << '\n';

    Stove stove1(1000);
    std::cout << "The temperature setting is: " << stove1.getTemperature() << '\n';

    return 0;
}