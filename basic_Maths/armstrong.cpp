#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int num = n;
    int sum = 0;
    int digits = 0;
    // Count the number of digits
    while (num != 0) {
        num /= 10;
        digits++;
    }
    num = n;
    while (n != 0) {
        int rem = n % 10;
        sum += pow(rem, digits);
        n /= 10;
    }
    cout << "Sum of digits raised to the power of " << digits << " is: " << sum;
    if (num == sum) {
        cout << "\nThe number is an Armstrong number.";
    } else {
        cout << "\nThe number is not an Armstrong number.";
    }
    return 0;
}