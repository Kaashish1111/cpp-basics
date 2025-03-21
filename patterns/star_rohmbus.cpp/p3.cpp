// *****
// ** **
// * * *
// ** **
// *****

#include <iostream>
using namespace std;

int main()
{
    int i, j, N; // i--> rows , j-->columns , N-->total rows

    // Input number of rows from user
    cout<<"Enter number of rows: "<<endl;
    cin>>N;

    /* Iterate over each row */
    for(i=1; i<=N; i++)
    {
        /* Iterate over each column */
        for(j=1; j<=N; j++)
        {
            /*
             * Print star for,
             * first row (i==1) or
             * last row (i==N) or
             * first column (j==1) or
             * last column (j==N) or
             * row equal to column (i==j) or
             * column equal to N-row (j==N-i+1)
             */
            if(i==1 || i==N || j==1 || j==N || i==j || j==(N - i + 1))
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }

        /* Move to the next line */
        cout<<endl;
    }

    return 0;
}