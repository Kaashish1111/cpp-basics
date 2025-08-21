#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int value) {
        data = value;
        next = nullptr;
    }

};

int main() {
    // Creating nodes manually
    Node* head = new Node(10);   // First node (head)
    Node* second = new Node(20); // Second node
    Node* third = new Node(30);  // Third node

    // Linking nodes
    head->next = second; // head -> second
    second->next = third; // second -> third
    third->next = nullptr; // last node points to NULL

    // Printing the linked list
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}
