// 5
// 44
// 333
// 2222
// 11111

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: "; 
    cin >> n;
    int ch=n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch;
        }
        ch--;
        cout << endl;
    }
    return 0;
}