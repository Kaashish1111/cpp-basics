// 16. Given an array of N+1 size containing N elements  we need to insert an element val at the Xth position (0-Based Indexing), shifting the existing elements to the right.
#include<iostream>
using namespace std;
int main(){
    int n, val, x;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n+1];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter the value to insert: ";
    cin>>val;
    cout<<"Enter the position to insert: ";
    cin>>x;
    for(int i=n-1;i>=x;i--){
        arr[i+1]=arr[i];
    }
    arr[x]=val;
    cout<<"Updated array: ";
    for(int i=0; i<=n; i++)
        cout<<arr[i]<<" ";
    return 0;
}