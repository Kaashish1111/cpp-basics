// 12345
// 1234
// 123
// 12
// 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    for(int i=n;i>=1;i--){
        int ch=1;
        for(int j=1;j<=i;j++){
            cout <<ch;
            ch++;
        }
        cout << "\n";
    }
    return 0;
}