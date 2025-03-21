//    *****
//   *****
//  *****
// *****
//*****

#include <iostream>
using namespace std;

int main()
{

    int i, j, N; // i--> rows , j-->columns , N-->total rows

    // Input number of rows from user
    cout<<"Enter number of rows: "<<endl;
    cin>>N;

    for(i=1; i<=N; i++)
    {
        /* Print leading spaces */
        for(j=1; j<=N - i; j++)
        {
            cout<<" ";
        }

        /* Print stars after spaces */
        for(j=1; j<=N; j++)
        {
            cout<<"*";
        }

        /* Move to the next line */
        cout<<endl;
    }

    return 0;
}