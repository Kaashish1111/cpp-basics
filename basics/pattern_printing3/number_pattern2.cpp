//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

#include<iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int no_of_gaps=row-1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=no_of_gaps;j++){
            cout << "  ";
        }
        int num2=num;
        int no_of_times=row-no_of_gaps;
        for(int k=1;k<=no_of_times;k++){
            cout << num2 << " ";
            num2++;
        }
        no_of_gaps--;
        cout << endl;
    }
}