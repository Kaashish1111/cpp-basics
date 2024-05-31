#include<iostream>
using namespace std;

int main(){
    int base;
    cout << "Enter a number: ";
    cin >> base;
    int exponent;
    cout << "Enter exponent: ";
    cin >> exponent;
    int result =1;
    for(int i=1;i<exponent;i++){
        result *= base;
    }
    cout << "The power of given number is: " << result<< endl;
    return 0;
}