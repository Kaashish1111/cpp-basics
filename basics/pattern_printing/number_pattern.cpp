#include<iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    int column;
    cout << "Enter the number of columns: ";
    cin >> column;
    int num=1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            cout << num << "\t";
            num++;
        }
        cout << endl;
    }
    return 0;
}