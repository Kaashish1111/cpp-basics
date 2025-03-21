// *********
//  *     *
//   *   *
//    * *
//     *

#include <iostream>
using namespace std;

int main()
{
    int i, j, N; // i--> rows , j-->columns , N-->total rows

    // Input number of rows from user
    cout<<"Enter number of rows: "<<endl;
    cin>>N;

    /* Iterate through rows */
    for(i=1; i<=N; i++)
    {
        /* Print leading spaces */
        for(j=1; j<i; j++)
        {
            cout<<" ";
        }

        /* Print hollow pyramid */
        for(j=1; j<=(2*N - (2*i-1)); j++)
        {
            /*
             * Print star for first row(i==1),
             * last row(i==N)
             * first column (j==1) and for
             * last column (rows*2-(2*i-1))
             */
            if(i==1 ||i==N || j==1 || j==(2*N - (2*i - 1)))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }

        /* Move to next line */
        cout<<endl;
    }

    return 0;
}