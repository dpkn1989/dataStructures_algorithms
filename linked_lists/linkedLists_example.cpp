#include <iostream>
#include "include/linkedLists_example.h"

void linkedLists_example(void) {
    std::cout << "This is linkedLists_example function." << std::endl;

    Node *head = new Node();
    
    Node *first = new Node();
    first->data = 1;
    head->next = first;

    Node *second = new Node();
    second->data = 2;
    first->next = second;

    Node *third = new Node();
    third->data = 3;
    second->next = third;
    third->next = nullptr;

    // Finding a node with value 2
    Node *current = head->next; // Start from the first node
    while (current != nullptr) {
        if (current->data == 2) {
            std::cout << "Node with value 2 found." << std::endl;
            break;  
        }
        current = current->next;
    }
    if (current == nullptr) {
        std::cout << "Node with value 2 not found." << std::endl;
    }

    // Inserting a new node with value 4 at the end of the list
    Node *fourth = new Node();
    fourth->data = 4;
    fourth->next = nullptr;
    current = head;
    while (current->next != nullptr) {
        current = current->next;    
    }
    current->next = fourth;
    std::cout << "Inserted node with value 4 at the end of the list." << std::endl;
}