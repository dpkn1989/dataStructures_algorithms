#ifndef CIRCULARQUEUE_EXAMPLE_H
#define CIRCULARQUEUE_EXAMPLE_H

class MyCircularQueue {
public:
    MyCircularQueue();
    ~MyCircularQueue();
    void enqueue(int value);
    void dequeue();
    bool isEmpty() const;
    bool isFull() const;
    int front() const;
    int rear() const;
    void display() const;
private:
    static const int MAX_SIZE = 3;
    int arr[MAX_SIZE];
    int frontIndex;
    int rearIndex;
    int currentSize;
};

#endif // CIRCULARQUEUE_EXAMPLE_H