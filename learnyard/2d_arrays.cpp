#include <iostream>
using namespace std;

int main() {
    int arr[2][4];

    // Input elements
    cout << "Enter elements of 2x4 matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    // Print matrix with row sums
    cout << "\nMatrix with Row Sums:\n";
    for (int i = 0; i < 2; i++) {
        int row_sum = 0;
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
            row_sum += arr[i][j];
        }
        cout << "| Row sum: " << row_sum << endl;
    }

    // Print column sums
    cout << "\nColumn Sums:\n";
    for (int j = 0; j < 4; j++) {
        int col_sum = 0;
        for (int i = 0; i < 2; i++) {
            col_sum += arr[i][j];
        }
        cout << "Col " << j + 1 << " sum: " << col_sum << endl;
    }

    return 0;
}
