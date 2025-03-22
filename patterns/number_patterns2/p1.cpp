// 11111
// 22222
// 33333
// 44444
// 55555

#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}