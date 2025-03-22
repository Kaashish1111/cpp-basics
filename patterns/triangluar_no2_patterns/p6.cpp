// 12345
// 2345
// 345
// 45
// 5

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int num=1;
    for(int i=n; i>=1; i--){
        int ch=num;
        for(int j=1; j<=i; j++){
            cout << ch;
            ch++;
        }
        num++;
        cout << endl;
    }
    return 0;
}