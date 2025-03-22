// 12345
// 12345
// 12345
// 12345
// 12345

#include <iostream>
using namespace std;

int main() {
    int r,c;
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;
    for (int i = 1; i <= r ;i++){
        for(int j = 1; j <= c;j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}