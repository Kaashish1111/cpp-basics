#include<iostream>
using namespace std;

int main(){
    int side;
    cout << "Enter the side of the square: ";
    cin >> side;
    for(int i=1;i<=side;i++){
        for(int j=1;j<=side;j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}