// 11111
// 2222
// 333
// 44
// 5

#include <iostream>
using namespace std;
int main(){
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    int num = 1;
    for(int i=row; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << num;
        }
        cout << endl;
        num++;
    }
    return 0;
}