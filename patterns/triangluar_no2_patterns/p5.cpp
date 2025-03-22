// 5
// 45
// 345
// 2345
// 12345

#include <iostream>
using namespace std;
int main(){
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    int num = row;
    for(int i=1;i<=row;i++){
        int ch=num;
        for(int j=1;j<=i;j++){
            cout <<ch;
            ch++;
        }
        num--;
        cout << endl;
    }
    return 0;
}