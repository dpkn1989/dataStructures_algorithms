// /home/sitaram/dataStructures_algorithms/linked_lists/main.cpp
#include <iostream>
#include "circularQueue_example.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    MyCircularQueue queue;
    queue.enqueue(3);
    queue.enqueue(5);
    queue.enqueue(6);
    queue.display();
    queue.enqueue(9); // Attempt to enqueue to full queue
    queue.display();
    queue.dequeue();
    queue.enqueue(9);
    queue.display();
    std::cout << "Is the Queue full? " << (queue.isFull() ? " : Yes" : " : No") << std::endl;
    std::cout << "Is the Queue empty? " << (queue.isEmpty() ? " : Yes" : " : No") << std::endl;
    std::cout << "The front of the queue is: " << queue.front() << std::endl;
    std::cout << "The rear of the queue is: " << queue.rear() << std::endl;
    queue.dequeue();
    std::cout << "The front of the queue is: " << queue.front() << std::endl;
    queue.display();
    queue.dequeue();
    queue.dequeue(); // Attempt to dequeue from empty queue
    return 0;
}