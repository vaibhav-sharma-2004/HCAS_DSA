#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        //print spaces

        for(int col=1;col<=n-row;col++)
        {
            cout<<'\t';
        }

        //print increasing number
        int val=row;
        for(int col=1;col<=row;col++)
        {
            cout<<val<<'\t';
            val++;
        }

        //print decreasing values
        val=val-2; // other way: val=val-2;

        for(int col=1;col<=row-1;col++)
        {
            cout<<val<<'\t';
            val--;
        }
        cout<<endl;
    }

    return 0;
}