// 1
// 10
// 101
// 1010
// 10101

#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter N: "<<endl;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            // For every odd column print 1, else print 0
            if (j % 2 == 1) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}