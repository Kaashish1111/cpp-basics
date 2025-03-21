#include<iostream>
using namespace std;

class custmor{
    string name;
    int account_no;
    int balance;

    public:
    // default constructor
    custmor(){
        name = "Unknown";
        account_no = 0;
        balance = 0;
    }
    // parameterized constructor
    custmor(string name, int account_no, int balance){
        this->name = name;
        this->account_no = account_no;
        this->balance = balance;
    }
    // constuctor overloading
    custmor(string name, int account_no){
        this->name = name;
        this->account_no = account_no;
        balance = 0;
    }

    // inline constructor
    // inline custmor(string a,int b,int c) :name(a),account_no(b),balance(c){}


    // member function to display customer details
    void display_details(){
        cout << "Name: " << name << endl;
        cout << "Account Number: " << account_no << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main(){
    // creating objects using default constructor
    custmor c1;
    c1.display_details();

    // creating objects using parameterized constructor
    custmor c2("John Doe", 123456, 5000);
    c2.display_details();

    // creating objects using constructor overloading
    custmor c3("Jane Smith", 789012);
    c3.display_details();
    return 0;
}