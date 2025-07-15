#include<iostream>
using namespace std;

/*
PRINT PATTERN:

*   *** *** *
**  **  **  **
*** *   *   ***


*/

int main()
{
    int n;
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        //first star pattern
        for(int col=1;col<=row;col++)
        {
            cout<<'*';
        }

        // first spaces

        for(int col=1;col<=n-row+1;col++)
        {
            cout<<' ';
        }

        //next star pattern
        for(int col=1;col<=n-row+1;col++)
        {
            cout<<'*';
        }

        //next spaces
        for(int col=1;col<=row;col++)
        {
            cout<<' ';
        }

        //next star
        for(int col=1;col<=n-row+1;col++)
        {
            cout<<'*';
        }

        //next space
        for(int col=1;col<=row;col++)
        {
            cout<<' ';
        }

        //last star
        for(int col=1;col<=row;col++)
        {
            cout<<'*';
        }

        cout<<endl;
    }
    return 0;
}