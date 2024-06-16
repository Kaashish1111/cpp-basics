#include<iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

int mul(int a, int b){
    return a * b;
}

void greeting(){
    cout << "Hello \n";
    cout << "How are you \n";
    return ;
}

int main(){
    int num1,num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "The sum of numbers you entred is: "<< sum(num1,num2) << endl;
    cout << "The product of numbers you entred is: " << mul(num1,num2) << endl;
    greeting();
    return 0;
}