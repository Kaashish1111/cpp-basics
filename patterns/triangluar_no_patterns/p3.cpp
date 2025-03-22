// 55555
// 4444
// 333
// 22
// 1

#include <iostream>
using namespace std;
int main() {
    int i, j, N;
    cout << "Enter N: ";
    cin >> N;
    for (i = N; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            cout << i;
        }
        cout << "\n";
    }
    return 0;
}
