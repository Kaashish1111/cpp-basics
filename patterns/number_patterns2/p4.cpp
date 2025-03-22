// 1  2  3  4  5
// 6  7  8  9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

#include <iostream>
using namespace std;

int main() {
    int r,c;
    cout << "Enter no of rows: " <<endl;
    cin >> r;
    cout << "Enter no of columns: " <<endl;
    cin >> c;
     int ch = 1;
    for(int i=1; i<=r; i++) {
        for(int j=1; j<=c; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}