#include<iostream>
using namespace std;

int main(){
    int width;
    cout << "Enter width: ";
    cin >> width;
    int length;
    cout << "Enter length: ";
    cin >> length;
    for(int i=1;i<=width;i++){
        for(int j=1;j<=length;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}