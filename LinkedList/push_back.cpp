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
void pushBack(Node* &head,int value){
    Node* newNode= new Node(value);
    // If list is empty
    if (head == nullptr) {
        head = newNode;
        return;
    }

    // Otherwise, traverse to the last node
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Link new node at the end
    temp->next = newNode;
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
    pushBack(head,5);
    pushBack(head,15);
    temp = head;
    cout << "Updated Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return 0;
}