// /home/sitaram/dataStructures_algorithms/linked_lists/main.cpp
#include <iostream>
#include "include/linkedLists_example.h"
#include "include/stack_example.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    MyLinkedList list;
    list.display();
    list.insertAtEnd(5);
    list.insertAtEnd(9);
    list.insertAtEnd(12);
    list.find(5);
    list.find(6);
    list.insertAtBeginning(3);
    list.display();
    list.insertAtPosition(14, 2);
    list.display();
    list.deĺeteAtbeginning();
    list.display();
    //list.reverseList();
    list.reverseListrecursive();
    list.display();
    std::cout << std::endl << "------------------ Stack Operations ------------------" << std::endl;
    MyStack stack;
    stack.push(12);
    stack.push(23);
    stack.push(39);
    std::cout << "Top element of the stack is: " << stack.top() << std::endl;
    stack.pop();
    std::cout << "Top element of the stack after pop is: " << stack.top() << std::endl;
    stack.pop();
    stack.isEmpty() ? std::cout << "Stack is empty." << std::endl : std::cout << "Stack is not empty." << std::endl;
    stack.pop();
    stack.pop(); // Attempt to pop from empty stack
    return 0;
}