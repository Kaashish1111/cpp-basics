// 54321
// 4321
// 321
// 21
// 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;
    for(int i=n;i>=1;i--){
        int num=i;
        for(int j=i;j>=1;j--){
            cout<<num;
            num--;
        }
        cout<<"\n";
    }
}