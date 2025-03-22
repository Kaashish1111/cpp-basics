//  ***
// *   *
// *   *
// *   *
//  ***
// *   *
// *   *
// *   *
//  ***

#include <iostream>
using namespace std;

int main()
{
    int i, j, N; // i--> rows , j-->columns , N-->size

    // Input total number of rows from user
    cout<<"Enter size: "<<endl;
    cin>>N;

    for(i=1; i<N*2; i++)
    {
        for(j=1; j<=N; j++)
        {
            // Condition for corner and center intersection space
            if((i==1 && (j==1 || j==N)) ||
               (i==N && (j==1 || j==N)) ||
               (i==N*2-1 && (j==1 || j==N)))
            {
                cout<<" ";
            }
            else if(i==1 || i==N || i==(N*2)-1 || j==1 || j==N)
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