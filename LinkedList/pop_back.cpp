#include<iostream>
using namespace std;

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

// Function to delete the last node (pop back)
void popBack(Node*& head) {
    // Case 1: Empty list
    if (head == nullptr) {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }

    // Case 2: Only one node
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    // Case 3: More than one node
    Node* temp = head;
    while (temp->next->next != nullptr) { // stop at 2nd last node
        temp = temp->next;
    }
    delete temp->next;  // delete last node
    temp->next = nullptr; // set new last node
}

int main() {
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    head->next = second;
    second->next = third;
    third->next = nullptr;

    // Print original list
    Node *temp = head;
    cout << "Original Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    // Perform popBack
    popBack(head);

    // Print updated list
    temp = head;
    cout << "Updated Linked List after popBack: ";
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}
