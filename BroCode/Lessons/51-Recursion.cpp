#include <iostream>

void walkIterative(int steps);
void walkRecursive(int steps);
int Ifactorial(int num);
int Rfactorial(int num);

int main(){

    // recursion = a programming technique where a function 
    //             invokes itself from within
    //             break a complex concept into a repeatable single step

    // (iterative vs recursive)

    // advantages = less code and is cleaner
    //              useful for sorting and searching algorithms

    // disadvantages = uses more memory
    //                 slower
    //                 stack overload

    walkIterative(10);
    walkRecursive(10);

    return 0;
}
void walkIterative(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "You take a step!\n";
    }
}
void walkRecursive(int steps){
    if(steps > 0){
        std::cout << "You take a step!\n";
        walkRecursive(steps-1);
    }
}
int Ifactorial(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result *= i;
    }
    return result;
}
int Rfactorial(int num){
    if(num > 0){
        return num * Rfactorial(num - 1);
    }
    else{
        return 1;
    }
}
