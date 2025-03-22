// 10. Given an array of integers, we need to check if there exist two distinct elements in the array such that their sum equals a given target value. If such a pair exists, the function should print true; otherwise, it should print false.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target value: ";
    cin>>target;
    int flag=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((arr[i]+arr[j])==target){
                cout<< "True";
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        cout<<"False";
    }
    return 0;
}