#include <iostream>
#include "include/linkedLists_example.h"

MyLinkedList::MyLinkedList() {
    std::cout << "MyLinkedList with dummy head created." << std::endl;
    head = new Node();
    head->data = 0; // Dummy head node
    head->next = nullptr;
}

MyLinkedList::~MyLinkedList() {
    std::cout << "MyLinkedList desstructor called." << std::endl;
}

void MyLinkedList::insertAtBeginning(int value) {
    std::cout << "Inserting " << value << " at the beginning of the linked list." << std::endl;
}

void MyLinkedList::insertAtEnd(int value) {
    std::cout << "Inserting " << value << " at the end of the linked list." << std::endl;
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    if (head->next == nullptr) {
        head->next = newNode;
    }
    else {
        Node *current = head->next;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
   }
}

void MyLinkedList::find(int value) {
    std::cout << "Finding " << value << " in the linked list." << std::endl;

    Node *current = head->next; // Start from the first node
    while (current != nullptr) {
        if (current->data == value) {
            std::cout << "Node with value " << value << " found." << std::endl;
            break;  
        }
        current = current->next;
    }
    if (current == nullptr) {
        std::cout << "Node with value " << value << " not found." << std::endl;
    }
}

void MyLinkedList::display() const {
    std::cout << "Displaying linked list contents." << std::endl;

    Node *current = head->next; // Start from the first node
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    if (current == nullptr) {
        std::cout << "Linked list is empty." << std::endl;
    }
}