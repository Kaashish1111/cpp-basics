// Subtract twice the last digit from the rest of the number. If the result is divisible by 7 (or is 0), then the original number is divisible by 7.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int lastDigit = num % 10;
    int restOfNumber = num / 10;
    int result = restOfNumber - 2 * lastDigit;
    if (result % 7 == 0 || result == 0) {
        cout << "The original number is divisible by 7." << endl;
    }
    else {
        cout << "The original number is not divisible by 7." << endl;
    }
    return 0;
}