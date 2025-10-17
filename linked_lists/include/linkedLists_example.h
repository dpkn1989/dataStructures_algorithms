#ifndef LINKEDLISTS_EXAMPLE_H
#define LINKEDLISTS_EXAMPLE_H

struct Node {
    int data;
    Node* next;
};

class MyLinkedList {
public:
    MyLinkedList();
    ~MyLinkedList();

    void insertAtBeginning(int value);
    void insertAtEnd(int value);
    void find(int value);
    void display() const;
private:
    Node* head;
};

#endif // LINKEDLISTS_EXAMPLE_H
