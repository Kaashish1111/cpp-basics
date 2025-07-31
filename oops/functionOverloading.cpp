#include <iostream>
using namespace std;

// Function to add two integers
int sum(int a, int b) {
    return a + b;
}

// Function to add three integers
int sum(int a, int b, int c) {
    return a + b + c;
}

// Function to concatenate two strings
string sum(string a, string b) {
    return a + b;
}

int main() {
    cout << "Sum of 2 and 3: " << sum(2, 3) << endl;
    cout << "Sum of 1, 2, and 3: " << sum(1, 2, 3) << endl;
    cout << "Sum of \"Hello\" and \"World\": " << sum("Hello", "World") << endl;

    return 0;
}
