#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> A = {10, 5, 20, 40};
    int n = A.size();

    // Step 1: Initialize difference array
    vector<int> diff(n + 1, 0);

    // Step 2: Apply updates using difference array
    // update(0, 1, 10)
    diff[0] += 10;
    diff[2] -= 10;

    // Print current array
    vector<int> prefix(n);
    int curr = 0;
    for (int i = 0; i < n; ++i) {
        curr += diff[i];
        prefix[i] = A[i] + curr;
    }
    for (int i = 0; i < n; ++i) cout << prefix[i] << " ";
    cout << endl;

    // update(1, 3, 20)
    diff[1] += 20;
    diff[4] -= 20;

    // update(2, 2, 30)
    diff[2] += 30;
    diff[3] -= 30;

    // Print current array again
    curr = 0;
    for (int i = 0; i < n; ++i) {
        curr += diff[i];
        prefix[i] = A[i] + curr;
    }
    for (int i = 0; i < n; ++i) cout << prefix[i] << " ";
    cout << endl;

    return 0;
}
