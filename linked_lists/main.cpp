// /home/sitaram/dataStructures_algorithms/linked_lists/main.cpp
#include <iostream>
#include "include/linkedLists_example.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    MyLinkedList list;
    list.display();
    list.insertAtEnd(3);
    list.insertAtEnd(5);
    list.insertAtEnd(9);
    list.find(5);
    list.find(6);
    list.display();
    return 0;
}