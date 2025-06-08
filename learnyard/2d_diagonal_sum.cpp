#include <iostream>
using namespace std;

int main() {
    int arr[2][4];

    // Input elements
    cout << "Enter elements of 2x2 matrix:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }

    // Output matrix
    cout << "\nMatrix is:\n";
    int sum=0;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(i==j || i+j==2-1){
                sum += arr[i][j];
            }
        }
        cout << "\n";
    }
 cout<<sum;
    return 0;
}
