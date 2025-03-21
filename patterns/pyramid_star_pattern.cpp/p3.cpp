// *********
//  *******
//   *****
//    ***
//     *

#include <iostream>
using namespace std;

int main()
{
    int i, j, N; // i--> rows , j-->columns , N-->total rows

    // Input total number of rows from user
    cout<<"Enter number of rows: "<<endl;
    cin>>N;

    for(i=1; i<=N; i++)
    {
        /* Print leading spaces */
        for(j=1; j<i; j++)
        {
            cout<<" ";
        }

        /* Print stars */
        for(j=1; j<=(2*N -(2*i-1)); j++)
        {
            cout<<"*";
        }

        /* Move to next line */
        cout<<endl;
    }

    return 0;
}
