#ifndef QUEUE_EXAMPLE_H
#define QUEUE_EXAMPLE_H

class MyQueue {
public:
    MyQueue();
    ~MyQueue();
    void enqueue(int value);
    void dequeue();
    bool isEmpty() const;
    bool isFull() const;
    int front() const;
    int rear() const;
    void display() const;
private:
    static const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int frontIndex;
    int rearIndex;
    int currentSize;
};

#endif // QUEUE_EXAMPLE_H