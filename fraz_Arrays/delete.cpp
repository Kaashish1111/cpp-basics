// 17. Given an array of size N, delete the element at the Xth position, shifting the remaining elements to the left. After deletion, the size of the array reduces by one.
#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter the position to delete: ";
    cin>>x;
    for(int i=x;i<n;i++){
        arr[i]=arr[i+1];
    }
    cout<<"Array after deletion: ";
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}