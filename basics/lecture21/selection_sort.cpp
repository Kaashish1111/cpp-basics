#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the size of array: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=1;i<n;i++){
        int j=i;
        while(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout << "The sorted array is: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}