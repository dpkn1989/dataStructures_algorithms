#include <iostream>
#include "include/linkedLists_example.h"

MyLinkedList::MyLinkedList() {
    std::cout << "MyLinkedList constructor called." << std::endl;
    head = tail = nullptr;
}

MyLinkedList::~MyLinkedList() {
    std::cout << "MyLinkedList destructor called." << std::endl;
    Node *current = head;
    while(current) {
        Node *temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
    tail = nullptr;
}

void MyLinkedList::insertAtBeginning(int value) {
    std::cout << "Inserting " << value << " at the beginning of the linked list." << std::endl;
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;

    if(tail == nullptr) {
        tail = newNode;
    }
}

void MyLinkedList::insertAtEnd(int value) {
    std::cout << "Inserting " << value << " at the end of the linked list." << std::endl;
    Node *newNode = new Node(value);
    newNode->next = nullptr;

    if (head == nullptr) {
        head = tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void MyLinkedList::insertAtPosition(int value, int position) {
    std::cout << "Inserting " << value << " at position " << position << " of the linked list." << std::endl;

    if(position == 0) {
        insertAtBeginning(value);
        return;
    }

    Node *newNode = new Node(value);

    Node *current = head;
    int index = 0;

    while (current->next != nullptr && index < (position-1)) {
        current = current->next;
        index++;
    }

    if (current == nullptr) {
        std::cout << "Position out of bounds. Inserting at the end instead." << std::endl;
        insertAtEnd(value);
        return;
    }
    else {
        newNode->next = current->next;
        current->next = newNode;
    }

    if(newNode->next == nullptr) {
        tail = newNode;
    }
}

void MyLinkedList::deĺeteAtbeginning() {
    std::cout << "Deleting node at the beginning of the linked list." << std::endl;

    if (head == nullptr) {
        std::cout << "Linked list is empty. No node deleted." << std::endl;
        return;
    }

    Node *temp = head;
    head = temp->next;
    delete temp;
    std::cout << "Node at the beginning deleted." << std::endl;
    
    if(head == nullptr) {
        tail = nullptr;
    }
}

void MyLinkedList::deleteAtEnd() {
    std::cout << "Deleting node at the end of the linked list." << std::endl;

    if (head == nullptr) {
        std::cout << "Linked list is empty. No node deleted." << std::endl;
        return;
    }

    if (head->next == nullptr) {
        delete head;
        head = tail = nullptr;
        std::cout << "Node at the end deleted." << std::endl;
        return;
    }

    Node *current = head;
    while (current->next != tail) {
        current = current->next;
    }

    delete tail;
    tail = current;
    tail->next = nullptr;
    std::cout << "Node at the end deleted." << std::endl;
}

void MyLinkedList::deleteAtPosition(int position) {
    std::cout << "Deleting node at position " << position << " from the linked list." << std::endl;

    if(position < 0 || head == nullptr) {
        std::cout << "Invalid position or delete attempt on empty list." << std::endl;
        return;
    }

    if(position == 0) {
        Node *temp = head;
        head = temp->next;
        delete temp;
        std::cout << "Node at position 0 deleted." << std::endl;
        return;    
    }

    Node *current = head;
    int index = 0;

    while (current->next != nullptr && index < (position-1)) {
        current = current->next;
        index++;
    }

    if (current->next == nullptr) {
        std::cout << "Position out of bounds. No node deleted." << std::endl;
    }
    else {
        Node *temp = current->next;
        current->next = temp->next;

        if(temp == tail) {
            tail = current;
        }
        delete temp;
        std::cout << "Node at position " << position << " deleted." << std::endl;
    }
}

Node* MyLinkedList::find(int value) {
    std::cout << "Finding " << value << " in the linked list." << std::endl;

    Node *current = head; // Start from the first node
    while (current != nullptr) {
        if (current->data == value) {
            std::cout << "Node with value " << value << " found." << std::endl;
            return current;  
        }
        current = current->next;
    }
    
    std::cout << "Node with value " << value << " not found." << std::endl;
    return nullptr;
}

void MyLinkedList::display() const {
    std::cout << "Displaying linked list contents." << std::endl;

    if (head == nullptr) {
        std::cout << "Linked list is empty." << std::endl;
    }
    else{
        Node *current = head; // Start from the first node
        
        while (current != nullptr) {
           std::cout << current->data << " ";
           current = current->next;
        }
        std::cout << std::endl;
    }
}

void MyLinkedList::reverseList() {
    std::cout << "Reversing the linked list." << std::endl;

    Node *prev = nullptr;
    Node *current = head; // Start from the first node
    Node *next = nullptr;
    tail = head;

    while (current != nullptr) {
        next = current->next; // Store next node
        current->next = prev; // Reverse current node's pointer
        prev = current;       // Move pointers one position ahead
        current = next;
    }
    head = prev; // Update head to point to the new first node
}

void MyLinkedList::reverseListrecursive() {
    std::cout << "Reversing the linked list recursively." << std::endl;
    tail = head;
    head = reverseListrecursiveHelper(head, nullptr);
}

Node* MyLinkedList::reverseListrecursiveHelper(Node* current, Node* previous) {
    if (current == nullptr) {
        return previous;
    }
    Node* next = current->next;
    current->next = previous;
    return reverseListrecursiveHelper(next, current);
}

