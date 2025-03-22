// 1
// 23
// 345
// 4567
// 56789

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        int num=i;
        for(int j=1;j<=i;j++){
            cout << num;
            num++;
        }
        cout << "\n";
    }
    return 0;
}