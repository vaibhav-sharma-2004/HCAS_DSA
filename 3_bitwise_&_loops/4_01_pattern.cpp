#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        int x=row%2;
        
        for(int col=1;col<=row;col++)
        {
            cout<<x<<" ";
            x=1-x;
        }
        cout<<endl;
    }

    return 0;
}