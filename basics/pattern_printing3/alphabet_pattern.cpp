//           A
//         B B
//       C C C
//     D D D D
//   E E E E E

#include<iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter number of rows: ";
    cin >> row;
    char ch;
    cout << "Enter character: ";
    cin >> ch;
    int no_of_gaps=row-1;
    char ch2=ch;
    for(int i=1; i<=row; i++){
        for(int j=1;j<=no_of_gaps;j++){
            cout << "  ";
        }
        int no_of_times=row-no_of_gaps;
        for(int k=1;k<=no_of_times;k++){
            cout << ch2 << " ";
        }
        ch2++;
        no_of_gaps--;
        cout << endl;
    }
    return 0;
}