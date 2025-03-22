//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

#include <iostream>
using namespace std;

int main()
{
    int i, j, N;
    int stars, spaces;

    // Input number of rows from user
    cout<<"Enter number of rows to print: "<<endl;
    cin>>N;


    stars = 1;
    spaces = N - 1;

    /* Iterate through rows */
    for(i=1; i<2*N; i++)
    {
        /* Print spaces */
        for(j=1; j<=spaces; j++)
            cout<<" ";

        /* Print stars */
        for(j=1; j<stars*2; j++)
            cout<<"*";

        /* Move to next line */
        cout<<endl;

        if(i<N)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }

    return 0;
}