//     +
//     +
//     +
//     +
// +++++++++
//     +
//     +
//     +
//     +

#include <iostream>
using namespace std;

int main()
{
    int i, j, N; // i--> rows , j-->columns , N-->total rows

    // Input total number of rows from user
    cout<<"Enter number of rows: "<<endl;
    cin>>N;

    // Run an outer loop from 1 to 2 * N - 1
    for(i=1; i<=(2 * N - 1); i++)
    {
        // For the center horizontal plus
        if(i == N)
        {
            for(j=1; j<=(2 * N - 1); j++)
            {
                cout<<"+";
            }
        }
        else
        {
            // For spaces before single plus sign
            for(j=1; j<=N-1; j++)
            {
                cout<<" ";
            }
            cout<<"+";
        }

        cout<<endl;
    }

    return 0;
}