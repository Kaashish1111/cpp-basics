// 55555
// 54444
// 54333
// 54322
// 54321

#include <iostream>
using namespace std;

int main() {
    int rows, cols, i, j;

    // Input rows and columns from user
    cout << "Enter number of rows: "<<endl;
    cin >> rows;
    cout << "Enter number of columns: "<<endl;
    cin >> cols;
    for (i = 1; i <= rows; i++) {
        for (j = cols; j > cols - i; j--) {
            cout << j;
        }
        for (j = 1; j <= cols - i; j++) {
            cout << rows - i + 1;
        }
        cout << endl;
    }
    return 0;
}
