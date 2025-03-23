#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if(gcd(num1, num2)==1){
        cout << "The numbers are coprime." << endl;
    }
    else{
        cout << "The numbers are not coprime." << endl;
    }
    return 0;
}
