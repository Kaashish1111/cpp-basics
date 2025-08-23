#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

        // Constructor
        Node(int value) {
            data = value;
            next = nullptr;
        }
};

void pushFront(Node*& head, int value) {
    Node* newNode = new Node(value); // Create a new node
    newNode->next = head; // Point new node to the current head
    head = newNode; // Update head to point to the new node
}

int main(){
    Node *head=new Node(10); // First node (head)
    Node *second=new Node(20); // Second node
    Node *third=new Node(30); // Third node
    // Linking nodes
    head->next=second; // head -> second
    second->next=third; // second -> third
    third->next=nullptr; // last node points to NULL
    // Printing the orginal linked list
    Node *temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

    // Adding a new node at the front
    pushFront(head, 5); // Push 5 to the front of the list
    pushFront(head, 15); // Push 15 to the front of the list

    temp = head;
    // Printing the updated linked list
    cout << "Updated Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return 0;
}