#include <iostream>
#include "include/stack_example.h"

MyStack::MyStack() {
    std::cout << "MyStack constructor called." << std::endl;
}

MyStack::~MyStack() {
    std::cout << "MyStack destructor called." << std::endl;
}

void MyStack::push(int value) {
    std::cout << "Pushing " << value << " onto the stack." << std::endl;
    list.insertAtBeginning(value);
}

void MyStack::pop() {
    if (list.getHead() == nullptr) {
        std::cout << "Stack is empty. Cannot pop." << std::endl;
        return;
    }
    std::cout << "Popping top element from the stack." << std::endl;
    list.deĺeteAtbeginning();
}

int MyStack::top() const {
    if (list.getHead() == nullptr) {
        std::cerr << "Stack is empty. No top element." << std::endl;
        throw std::runtime_error("Stack is empty");
    }
    std::cout << "Retrieving top element from the stack." << std::endl;
    return list.getHead()->data;
}

bool MyStack::isEmpty() const {
    bool empty = (list.getHead() == nullptr);
    std::cout << "Checking if stack is empty: " << (empty ? "Yes" : "No") << std::endl;
    return empty;
}