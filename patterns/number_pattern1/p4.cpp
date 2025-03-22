// 10101
// 01010
// 10101
// 01010
// 10101

#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout << "Enter no of rows: " <<endl;
    cin >> r;
    cout << "Enter no of columns: " <<endl;
    cin >> c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if((i+j)%2!=0){
                cout << "0";
            }
            else{
                cout << "1";
            }
        }
        cout << endl;
    }
    return 0;
}