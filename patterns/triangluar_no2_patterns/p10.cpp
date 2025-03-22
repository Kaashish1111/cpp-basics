// 9
// 79
// 579
// 3579
// 13579

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int num= (n*2)-1;
    for(int i=1; i<=n; i++){
        int ch=num;
        for(int j=1;j<=i;j++){
            cout << ch;
            ch +=2;
        }
        num -= 2;
        cout << endl;
    }
    return 0;
}