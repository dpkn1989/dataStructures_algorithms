// /home/sitaram/dataStructures_algorithms/linked_lists/main.cpp
#include <iostream>
#include "include/linkedLists_example.h"

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
    return 0;
}