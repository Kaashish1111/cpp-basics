// Alternate adding and subtracting the digits from left to right. If the result is divisible by 11 (or is 0), then the original number is divisible by 11.

#include<iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool isDivisibleBy11(int num) {
    int leftSum = 0, rightSum = sumOfDigits(num);
    while (num > 0) {
        leftSum += num % 10;
        num /= 10;
        rightSum -= num % 10;
        num /= 10;
    }
    return leftSum - rightSum == 0 || leftSum - rightSum == 11 || leftSum - rightSum == -11;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << (isDivisibleBy11(num)? "The number is divisible by 11." : "The number is not divisible by 11.") << endl;
    return 0;
}