// 54321
// 5432
// 543
// 54
// 5

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    for(int i = n; i >= 1; i--){
        int num=n;
        for(int j = 1; j <= i; j++){
            cout << num;
            num--;
        }
        cout << endl;
    }
}