#include<iostream>
using namespace std;

void incre(int n){
    n++;
    return ;
}

int main(){
    int a = 10;
    incre(a);
    cout << "Value of a after increment: " << a << endl;
}