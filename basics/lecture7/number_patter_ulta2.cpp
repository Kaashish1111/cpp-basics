// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1

#include<iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    for(int i=1;i<=row;i++){
        int num=row;
        for(int j=1;j<=i;j++){
            cout << num << " ";
            num--;
        }
        cout << endl;
    }
    return 0;
}