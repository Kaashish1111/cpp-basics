// 12345
// 23456
// 34567
// 45678
// 56789

#include <iostream>
using namespace std;

int main() {
    int r,c;
    cout << "Enter no of rows: " <<endl;
    cin >> r;
    cout << "Enter no of columns: " <<endl;
    cin >> c;
    for(int i=1; i<=r; i++) {
        int ch = i;
        for(int j=1; j<=c; j++) {
            cout << ch ;
            ch++;
        }
        cout << endl;
    }
    return 0;
}