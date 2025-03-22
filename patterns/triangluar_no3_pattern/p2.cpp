// 1
// 00
// 111
// 0000
// 11111

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i%2==0){
                cout << "0";
            }
            else{
                cout << "1";
            }
        }
        cout << endl;
    }
}