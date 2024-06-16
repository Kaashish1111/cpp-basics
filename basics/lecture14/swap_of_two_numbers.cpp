#include<iostream>
using namespace std;

void Swap (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

//  there's a an inbuilt function in cpp i.e swap()

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swap: " << endl;
    cout << "a = " << a << ", b = " << b << endl;
    Swap(a, b);
    cout << "After swap: " << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}
