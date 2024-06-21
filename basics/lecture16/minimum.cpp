#include<iostream>
#include<climits>
using namespace std;

int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    int ans= INT_MAX;
    for(int i=0;i<5;i++){
        if(ans>a[i]){
            ans=a[i];
        }
    }
    cout<<"Minimum value is: "<<ans<<endl;
    return 0;
}