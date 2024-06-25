// Code Challenge:
// Implement a recursive C++ function to find the height of a binary tree. The height of a binary tree is the 
// length of the longest path from the root node to any leaf node.

// Recursive data structures like linked lists and trees are commonly used in various programming scenarios. 
// Understanding how to work with them recursively is crucial.



// Code Example:
// Let's take a look at a recursive data structure example: a linked list.



#include <iostream>

// Define a Node structure for a singly linked list
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Recursive function to print the elements of a linked list
void printList(Node* head) {
    if (head == nullptr) {
        std::cout << "End of list" << std::endl;
        return;
    }

    std::cout << head->data << " -> ";
    printList(head->next);
}

void hieght_r(Node * head){
    int count{};
    if(head){
        count++; 
    }
    std::cout << "The height of the tree is " << count << std::endl;
    hieght_r(head->next); 
    if(head == nullptr){
        return; 
    }
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    std::cout << "Linked list: ";
    printList(head);

    delete head;
    delete head->next;
    delete head->next->next;

    return 0;
}
