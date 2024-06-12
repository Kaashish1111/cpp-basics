//   * * * * * * * * *
//     * * * * * * *
//       * * * * *
//         * * *
//           *

#include<iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    int no_of_spaces=1;
    int row_changing=row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=no_of_spaces;j++){
            cout<<"  ";
        }
        int no_of_stars=(row_changing*2)-1;
        for(int k=1;k<=no_of_stars;k++){
            cout<<"*"<<" ";
        }
        for(int m=1;m<=no_of_spaces;m++){
            cout<<"  ";
        }
        no_of_spaces++;
        row_changing--;
        cout<<endl;
    }
    return 0;
}