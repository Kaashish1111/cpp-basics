// *****
//  *****
//   *****
//    *****
//     *****

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
        for(j=1; j<i; j++)
        {
            cout<<" ";
        }

        for(j=1; j<=N; j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}