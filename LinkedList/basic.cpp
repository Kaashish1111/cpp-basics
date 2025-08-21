#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
    public:
    Node* head;
    LinkedList() {
        head = nullptr;
    }
    void pushFront(int value){
        Node* newNode = new Node(value);
    }
};

int main() {
    return 0;
}