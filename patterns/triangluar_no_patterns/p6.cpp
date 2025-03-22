// 1
// 12
// 123
// 1234
// 12345

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        int ch=1;
        for(int j=1;j<=i;j++){
            cout << ch;
            ch++;
        }
        cout << "\n";
    }
    return 0;
}
