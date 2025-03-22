// 11011
// 11011
// 00000
// 11011
// 11011
//  only odd no of rows and columns
#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout << " Enter no of rows: " <<endl;
    cin >> r;
    cout << " Enter no of columns: " <<endl;
    cin >> c;
    int quo=r/2;
    int rem=r%2;
    int bw=quo+rem;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(i==bw || j==bw){
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