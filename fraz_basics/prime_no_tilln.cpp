#include <iostream>
using namespace std;

void printPrimes(int n) {
    bool* prime = new bool[n + 1];
    for (int i = 0; i <= n; i++) {
        prime[i] = true;
    }

    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }

    cout << "Prime numbers till " << n << " are: ";
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {
            cout << p << " ";
        }
    }
    cout << endl;

    delete[] prime; // Don't forget to free the memory
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printPrimes(n);
    return 0;
}