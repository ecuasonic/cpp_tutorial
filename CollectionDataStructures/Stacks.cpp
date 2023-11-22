#include <iostream>
#include <stack>
#include <vector>

// Used in scenerios where the order of processing or handling matters, such as
//     in scheduling tasks, print job management, and breadth-first search algorithms
// Not provided with iterators

class myClass {
    public:
        int value;
        std::string name;
    myClass(int v, const std::string& n) : value(v), name(n) {};
};

void printStack(std::stack<int> stack);

int main(){

    // 1. Push (Add an Element to the Stack) (useful for adding general simple items):
    //     Takes an existing element, and appends a copy of it to the container
    std::stack<int> myStack;
    // Push elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    std::cout << "myStack: ";
    printStack(myStack);
    std::cout << std::endl;

    // 2. Pop (Remove and Retrieve the Top Element):
    std::stack<int> temp1 = myStack;
    int topElement1 = temp1.top();
    // Pop the top element
    temp1.pop();
    std::cout << "Popped element: " << topElement1 << std::endl;
    std::cout << "myStack after Pop: ";
    printStack(temp1);
    std::cout << std::endl;

    // 3. Top (Retrieve the Top Element Without Removing):
    std::stack<int> temp2 = myStack;
    // Retrieve the top element without popping
    int topElement2 = temp2.top();
    std::cout << "Top element: " << topElement2 << std::endl;
    std::cout << "myStack after Top: ";
    printStack(temp2);
    std::cout << std::endl;

    // 4. Checking if the Stack is Empty:
    std::stack<int> temp3 = myStack;
    if (myStack.empty()) {
        std::cout << "Stack is empty" << std::endl;
    }
    else{
        std::cout << "Stack is not empty" << std::endl;
    }
    std::cout << std::endl;

    // 4. Size of the Stack
    std::stack<int> temp4 = myStack;
    std::cout << "Size of the stack: " << temp4.size() << std::endl;

    // 5. Swapping Stack Contents With Another
    std::cout << "temp4 before swap: ";
    printStack(temp4);
    std::cout << "temp1 before swap: ";
    printStack(temp1);
    temp4.swap(temp1);
    std::cout << "temp4 after swap: ";
    printStack(temp4);
    std::cout << "temp1 after swap: ";
    printStack(temp1);
    std::cout << std::endl;
    std::cout << temp2.size() << std::endl;

    // 6. Emplace (useful when adding objects with constructor arguments)
    //     Cretes another instance of the class in the container, that's already appended to the container
    //     The arguments to emplace are forwarded as arguments to the container's class's constructor
    std::stack<myClass> temp6;
    temp6.emplace(42,"Alice");
    temp6.emplace(23, "Bob");
    myClass& topElement = temp6.top(); // Accesses the top element by reference
    std::cout << "Name: " << topElement.name << std::endl;
    std::cout << "Value: " << topElement.value << std::endl;

    return 0;
}

void printStack(std::stack<int> stack){
    while(!stack.empty()){
        std::cout << stack.top() << ' ';
        stack.pop();
    }
    std::cout << std::endl;
}