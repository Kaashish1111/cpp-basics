// 55555
// 44445
// 33345
// 22345
// 12345

#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter number of rows: " << endl;
    cin >> rows;
    cout << "Enter number of columns: " << endl;
    cin >> cols;
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i - 1; j++) {
            cout << i;
        }
        for (int j = i; j <= cols; j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
