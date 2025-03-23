// Find the number of trailing zeroes in the factorial of a given number n.


// brute force
// #include<iostream>
// using namespace std;
// // Function to calculate factorial
// long long factorial(int n) {
//     long long fact = 1;
//     for (int i = 2; i <= n; i++) {
//         fact *= i;
//     }
//     return fact;
// }
// // Function to count trailing zeros in factorial
// int countTrailingZeros(long long num) {
//     int count = 0;
//     while (num % 10 == 0) {
//         count++;
//         num /= 10;
//     }
//     return count;
// }
// int main(){
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;
//     long long fact = factorial(n);
//     cout << "Factorial of " << n << " is " << fact << endl;
//     int trailingZeros = countTrailingZeros(fact);
//     cout << "Number of trailing zeroes in " << n << "! is " << trailingZeros;
//     return 0;
// }

// optimal approch
#include<iostream>
using namespace std;
int countTrailingZeros(int n) {
    int count = 0;
    while (n >= 5) {
        n /= 5;
        count += n;
    }
    return count;
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int trailingZeros = countTrailingZeros(n);
    cout << "Number of trailing zeroes in " << n << "! is " << trailingZeros;
    return 0;
}