// 1
// 01
// 010
// 1010
// 10101

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << num;
            num=(num+1)%2;
        }
        cout << endl;
    }
}