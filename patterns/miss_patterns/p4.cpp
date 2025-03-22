// *       *
//  *     *
//   *   *
//    * *
//     *
//    * *
//   *   *
//  *     *
// *       *

#include <iostream>
using namespace std;

int main()
{
    int i, j, N; // i--> rows , j-->columns , N-->total rows

    // Input total number of rows from user
    cout<<"Enter number of rows: "<<endl;
    cin>>N;

    for(i=1; i<=2*N-1; i++)
    {
        for(j=1; j<=2*N-1; j++)
        {
            if(j==i || (j==2*N - i ))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}