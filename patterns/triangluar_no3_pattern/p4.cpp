// 1
// 11
// 101
// 1001
// 11111

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==1 || i==n || j==1 || j==n || i==j){
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