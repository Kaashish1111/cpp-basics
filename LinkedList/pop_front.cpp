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

void popFront(Node*& head) {
    if (head == nullptr) {  // Empty list
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    Node* temp = head;   // Store old head
    head = head->next;   // Move head to next node
    delete temp;         // Free memory
}

int main(){
    Node *head=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);
    head->next=second;
    second->next=third;
    third->next=nullptr;
    Node *temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    popFront(head);
    temp = head;
    cout << "Updated Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return 0;
}