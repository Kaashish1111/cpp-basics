// 14. Given an array of integers, we need to find the 2nd maximum element in the array. The function should print the 2nd maximum value found in the array. If no such value is found print -1.

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    if (n < 2) {
        cout << "-1"; // If array has less than 2 elements, no 2nd max can exist
        return 0;
    }
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int firstMax = INT_MIN, secondMax = INT_MIN;
    // Find first and second max using a single loop
    for(int i = 0; i < n; i++) {
        if(arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if(arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }
    if(secondMax == INT_MIN) {
        cout << "-1"; // No second max found
    } else {
        cout << "Second Maximum: " << secondMax;
    }
    return 0;
}
