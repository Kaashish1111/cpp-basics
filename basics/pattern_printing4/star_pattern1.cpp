//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

#include<iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    int no_of_gaps=row-1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=no_of_gaps;j++){
            cout << "  ";
        }
        int no_of_stars=(i*2)-1;
        for(int k=1;k<=no_of_stars;k++){
            cout << "* ";
        }
        for(int m=1;m<=no_of_gaps;m++){
            cout << "  ";
        }
        no_of_gaps--;
        cout << endl;
    }
}