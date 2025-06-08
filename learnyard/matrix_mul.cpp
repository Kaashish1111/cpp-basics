#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Example matrices
    vector<vector<int>> A = {{1, 2}, {3, 4}};
    vector<vector<int>> B = {{5, 6}, {7, 8}};

    int m = A.size();            // rows in A
    int n = A[0].size();         // cols in A = rows in B
    int p = B[0].size();         // cols in B

    // Initialize result matrix with 0
    vector<vector<int>> result(m, vector<int>(p, 0));

    // Multiply matrices
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the result
    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
