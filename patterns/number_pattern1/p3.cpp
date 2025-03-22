// 11111
// 10001
// 10001
// 10001
// 10001
// 11111

#include <iostream>
using namespace std;

int main() {
    int r,c;
    cout << "Enter the number of rows and columns: ";
    cin >> r >> c;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(i==1 || i==r || j==1 || j==c)
                cout << "1";
            else
                cout << "0";
        }
        cout << endl;
    }
    return 0;
}