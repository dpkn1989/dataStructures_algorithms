#ifndef STACK_EXAMPLE_H
#define STACK_EXAMPLE_H

#include "linkedLists_example.h"

class MyStack {
public:
    MyStack();
    ~MyStack();
    void push(int value);
    void pop();
    int top() const;
    bool isEmpty() const;
private:
    MyLinkedList list;
};

#endif // STACK_EXAMPLE_H