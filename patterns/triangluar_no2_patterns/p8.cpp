// 56789
// 4567
// 345
// 23
// 1

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i=n;i>=1;i--){
        int num=i;
        for(int j=1;j<=i;j++){
            cout << num;
            num++;
        }
        cout << "\n";
    }
    return 0;
}