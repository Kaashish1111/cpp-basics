#include<iostream>
using namespace std;

int main(){
    int term;
    cout <<"Enter till which term you want factorial of natural numbers: ";
    cin >> term;
    int factorial=1;
    for(int i=1;i<=term;i++){
        factorial *= i;
        cout << "Factroial of " <<i<<" is "<< factorial<<endl;
    }
    return 0;
}