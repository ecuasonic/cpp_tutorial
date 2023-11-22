#include <iostream>
#include <queue>

// Used when you need to maintain a LIFO order, such as
//     in function call management (the call stack), expression evaluation, and depth-first search algorithms
// Not provided with iterators

class myClass {
    public:
        int value;
        std::string name;
    myClass(int v, std::string n) : value(v), name(n) {};
};

void printQueue(std::queue<int> q);

int main(){

    // 1. Push
    std::queue<int> myQueue;
    myQueue.push(42);
    myQueue.push(73);
    myQueue.push(11);
    std::cout << "Orignal queue: ";
    printQueue(myQueue);
    std::cout << std::endl;

    // 2. Pop
    std::queue<int> temp2 = myQueue;
    std::cout << "Popped Element: " << temp2.front() << std::endl;
    temp2.pop();
    std::cout << "Pop-queue: ";
    printQueue(temp2);
    std::cout << std::endl;

    // 3. Front (First In)
    std::queue<int> temp3 = myQueue;
    int frontElement = temp3.front();
    std::cout << "Front Element: " << frontElement << std::endl;
    std::cout << "Front-queue: ";
    printQueue(temp3);
    std::cout << std::endl;

    // 4. Back (Last In)
    std::queue<int> temp4 = myQueue;
    int backElement = temp4.back();
    std::cout << "Back Element: " << backElement << std::endl;
    std::cout << "Back-queue: ";
    printQueue(temp4);
    std::cout << std::endl;

    // 5. Size
    std::queue<int> temp5 = myQueue;
    std::cout << "Queue size: " << temp5.size() << std::endl;
    printQueue(temp5);
    std::cout << std::endl;

    // 6. Empty
    std::queue<int> temp6 = myQueue;
    if(temp6.empty()) {
        std::cout << "The queue is empty!";
    }
    else{
        std::cout << "The queue is not empty!";
    }
    std::cout << std::endl;

    // 7. Swap
    std::queue<int> temp7 = myQueue;
    std::cout << "temp7 before swap: ";
    printQueue(temp7);
    std::cout << "temp2 before swap: ";
    printQueue(temp2);
    temp7.swap(temp2);
    std::cout << "temp7 before swap: ";
    printQueue(temp7);
    std::cout << "temp2 before swap: ";
    printQueue(temp2);
    std::cout << std::endl;

    // 8. Emplace
    std::queue<myClass> temp8;
    temp8.emplace(42, "Richard");
    temp8.emplace(23, "Bob");
    myClass& frontObject = temp8.front();
    myClass& backObject = temp8.back();
    std::cout << "frontObject's name: " << frontObject.name << std::endl;
    std::cout << "frontObject's value: " << frontObject.value << std::endl;
    std::cout << std::endl;
    
    return 0;
}

void printQueue(std::queue<int> q){
    while(!q.empty()){
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;
}