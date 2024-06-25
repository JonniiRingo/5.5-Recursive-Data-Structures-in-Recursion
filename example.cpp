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
