// *****
//   ****
//     ***
//       **
//         *
//       **
//     ***
//   ****
// *****

#include <iostream>
using namespace std;

int main()
{
    int i, j, N; // i--> rows , j-->columns , N-->user input

    // Input total number of rows from user
    cout<<"Enter number of rows: "<<endl;
    cin>>N;

    // Print the upper part of the arrow
    for(i=1; i<N; i++)
    {
        // Print leading (2*rownumber-2) spaces
        for(j=1; j<=(2*i-2); j++)
        {
            cout<<" ";
        }

        // Print inverted right triangle star pattern
        for(j=1; j<=N-i+1; j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }

    // Print lower part of the arrow
    for(i=1; i<=N; i++)
    {
        // Print leading (2*N - 2*rownumber) spaces
        for(j=1; j<=(2*N - 2*i); j++)
        {
            cout<<" ";
        }

        // Print simple right triangle star pattern
        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}