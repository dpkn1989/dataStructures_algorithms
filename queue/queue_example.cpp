#include <iostream>
#include "queue_example.h"

MyQueue::MyQueue()
{
    std::cout << "MyQueue constructor called." << std::endl;
    frontIndex = 0;
    rearIndex = -1;
    currentSize = 0;
    for(int i = 0; i < MAX_SIZE; ++i) {
        arr[i] = 0;
    }
}

MyQueue::~MyQueue()
{
    std::cout << "MyQueue destructor called." << std::endl;
}

void MyQueue::enqueue(int value)
{
    if (isFull()) {
        std::cout << "Queue is full. Cannot enqueue " << value << "." << std::endl;
        return;
    }

    arr[++rearIndex] = value;
    currentSize++;
    std::cout << "Enqueued: " << value << std::endl;
}

void MyQueue::dequeue()
{
    if (isEmpty()) {
        std::cout << "Queue is empty. Cannot dequeue." << std::endl;
        return;
    }

    int dequeuedValue = arr[frontIndex++];
    currentSize--;
    std::cout << "Dequeued: " << dequeuedValue << std::endl;
}

bool MyQueue::isEmpty() const
{
    return currentSize == 0;
}

bool MyQueue::isFull() const
{
    return currentSize == MAX_SIZE;
}

int MyQueue::front() const
{
    if (isEmpty()) {
        std::cout << "Queue is empty. No front element." << std::endl;
        return -1; // Indicating empty queue
    }
    return arr[frontIndex];
}

int MyQueue::rear() const
{
    if (isEmpty()) {
        std::cout << "Queue is empty. No rear element." << std::endl;
        return -1; // Indicating empty queue
    }
    return arr[rearIndex];
}

void MyQueue::display() const
{
    if (isEmpty()) {
        std::cout << "Queue is empty." << std::endl;
        return;
    }

    std::cout << "Queue elements: ";
    for (int i = frontIndex; i <= rearIndex; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}