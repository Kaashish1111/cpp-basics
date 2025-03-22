// 5
// 54
// 543
// 5432
// 54321
#include<iostream>
using namespace std;
int main(){
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    for(int i=1;i<=row;i++){
        int num = row;
        for(int j=1;j<=i;j++){
            cout << num;
            num--;
        }
        cout << endl;
    }
    return 0;
}