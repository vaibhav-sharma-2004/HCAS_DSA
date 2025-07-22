#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        //increasing numbers
        for(int col=1;col<=row;col++)
        {
            cout<<col<<'\t';
        }

        //tab spaces
        for(int space=1;space<=2*(n-row)-1;space++)
        {
            cout<<'\t';
        }

        //decreasing numbers
        for(int col=row;col>=1;col--)
        {
            if(col==n){ // handle the edge case for last row 
                continue;
            }
            cout<<col<<'\t';
        }
        cout<<endl;

    }
}