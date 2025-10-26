#include <iostream>
#include "circularQueue_example.h"

MyCircularQueue::MyCircularQueue()
{
    std::cout << "MyCircularQueue constructor called." << std::endl;
    frontIndex = -1;
    rearIndex = -1;
    currentSize = 0;
    for(int i = 0; i < MAX_SIZE; ++i) {
        arr[i] = 0;
    }
}

MyCircularQueue::~MyCircularQueue()
{
    std::cout << "MyCircularQueue destructor called." << std::endl;
}

void MyCircularQueue::enqueue(int value)
{
    if (isFull()) {
        std::cout << "Queue is full. Cannot enqueue " << value << "." << std::endl;
        return;
    }
    if(isEmpty()) {
        frontIndex = 0;
        rearIndex = 0;
    }
    else {
        rearIndex = (rearIndex + 1) % MAX_SIZE;
    }

    arr[rearIndex] = value;
    currentSize++;
    std::cout << "Enqueued: " << value << std::endl;
}

void MyCircularQueue::dequeue()
{
    if (isEmpty()) {
        std::cout << "Queue is empty. Cannot dequeue." << std::endl;
        return;
    }
    if(frontIndex == rearIndex) {
        // Queue will be empty after this dequeue
        frontIndex = -1;
        rearIndex = -1;
        currentSize = 0;
        std::cout << "Dequeued last element. Queue is now empty." << std::endl;
        return;
    }

    int dequeuedValue = arr[frontIndex];
    currentSize--;
    frontIndex = (frontIndex + 1) % MAX_SIZE;
    std::cout << "Dequeued: " << dequeuedValue << std::endl;
}

bool MyCircularQueue::isEmpty() const
{
    return currentSize == 0;
}

bool MyCircularQueue::isFull() const
{
    return currentSize == MAX_SIZE;
}

int MyCircularQueue::front() const
{
    if (isEmpty()) {
        std::cout << "Queue is empty. No front element." << std::endl;
        return -1; // Indicating empty queue
    }
    return arr[frontIndex];
}

int MyCircularQueue::rear() const
{
    if (isEmpty()) {
        std::cout << "Queue is empty. No rear element." << std::endl;
        return -1; // Indicating empty queue
    }
    return arr[rearIndex];
}

void MyCircularQueue::display() const
{
    if (isEmpty()) {
        std::cout << "Queue is empty." << std::endl;
        return;
    }

    std::cout << "Queue elements: ";
    for(int i = frontIndex; i != rearIndex; i = (i + 1) % MAX_SIZE) {
        std::cout << arr[i] << " ";
    }
    std::cout << arr[rearIndex] << " "; // Print the rear element
    std::cout << std::endl;
}