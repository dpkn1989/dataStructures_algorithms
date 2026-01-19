#ifndef LINKEDLISTS_EXAMPLE_H
#define LINKEDLISTS_EXAMPLE_H

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class MyLinkedList {
public:
    MyLinkedList();
    ~MyLinkedList();

    void insertAtBeginning(int value);
    void insertAtEnd(int value);
    void insertAtPosition(int value, int position);
    void deĺeteAtbeginning();
    void deleteAtEnd();
    void deleteAtPosition(int position);
    Node* find(int value);
    void display() const;
    void reverseList();
    void reverseListrecursive();
    Node* reverseListrecursiveHelper(Node* current, Node* previous);
    Node* getHead() const;
    Node* getTail() const;
private:
    Node* head;
    Node* tail;
};


#endif // LINKEDLISTS_EXAMPLE_H
