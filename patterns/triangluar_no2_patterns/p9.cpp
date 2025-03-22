// 13579
// 3579
// 579
// 79
// 9

#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter no of rows: ";
    cin >> n;
    int ch=1;
    for(int i=n;i>=1;i--){
        int num = ch;
        for(int j=0;j<i;j++){
            cout << num;
            num +=2;
        }
        ch +=2;
        cout << endl;
    }
    return 0;
}
