// 01010
// 01010
// 01010
// 01010
// 01010
// 01010

#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(j%2==0){
                cout << "1";
            }
            else{
                cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}