#include <iostream>

// Node structure to hold data and a link to the next node
// Can be throught as the monomer
struct Node {
    int data; // Represents the data or value stored in the node
    Node* next; // Pointer to the next node
    Node(int val) : data(val), next(nullptr) {} 
    // ***Member Initializer list***
    // Constructor of the 'Node' struct
    //     It intializes the 'data' member with the value provided ('val')
    //     It initializes the 'next' pointer to 'nullptr', indicating that this node initially has no next node
    //     This constructor is called when you create a new "Node" object and pass a value to it
    // Creates a new node with value 'val' and a next node null pointer
};

// LinkedList class to manage the list
// Can be thought as the entire polymer
class LinkedList {
private:
    Node* head; 
    // Creates the pointer to the starting node
    // Memory for the pointer is allocated on the stack, 
    //     but it does not automatically point to an initialized memory location
    //     The pointer 'head' contains an uninitialized memory address or garbage value until until you explicity assign it to point to a valid 'Node' object

public:
    LinkedList() : head(nullptr) {} 
    // Constructor of the 'LinkedList' object
    //     It initializes the 'head' pointer attribute to nullptr
    // This creates branching point / Beginning

    // Add a new node to the end of the list
    void append(int val){
        Node* newNode = new Node(val);
        // Creates pointer 'newNode' to a dynamically-memory allocated Node object with the value 'val'
        // new Node(val) returns a pointer to the newly allocated memory location
        if (!head) {
            // If the head pointer points to nothing or is a nullptr, then the newNode pointer becomes the head pointer
            head = newNode;
        }
        else {
            Node* current = head; // Initializes a pointer named "current" with the memory address of the head node
            // Traverse the list to find the last node, starting from head node
            while(current->next) {
                current = current->next;
                // Stops before the last non-nullptr node
            }
            // Attach the new node to the last node
            current->next = newNode;
        }
    }

    // Print the elements of the list
    void print(){
        Node* current = head;
        while (current) {
            std::cout << current->data << " -> ";
            current = current->next;
            // Stops at the nullptr, and doesn't print out its data
        }
        std::cout << "nullptr" << std::endl;
    }

    // Destructor of LinkedList object
    ~LinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
            // The temp pointer points to the same memory location as head
            // The head pointer set to point to the next node
            // The memory allocated at temp is released
            // Repeat...
        }
    }
};

int main(){
    LinkedList myList;
    myList.append(1);
    myList.append(2);
    myList.append(3);
    myList.append(4);

    myList.print();

    return 0;
}