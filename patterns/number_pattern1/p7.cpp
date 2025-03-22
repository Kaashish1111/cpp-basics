// 01110
// 10001
// 10001
// 10001
// 01110

#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout <<"Enter no of rows: " <<endl;
    cin >> r;
    cout <<"Enter no of columns: " <<endl;
    cin >> c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(i==1 || i==r){
                if(j==1 || j==r){
                    cout <<"0";
                }
                else{
                    cout <<"1";
                }
            }
            else if(j==1 || j==c){
                cout <<"1";
            }
            else{
                cout <<"0";
            }
        }
        cout << endl;
    }
}