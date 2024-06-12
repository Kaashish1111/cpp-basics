//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1

#include<iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter number of rows: ";
    cin >> row;
    int no_of_gaps=row-1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=no_of_gaps;j++){
            cout << "  ";
        }
        int no_of_times=row-no_of_gaps;
        int num=i;
        for(int k=1;k<=no_of_times;k++){
            cout << num << " ";
            num--;
        }
        no_of_gaps--;
        cout << endl;
    }
    return 0;
}