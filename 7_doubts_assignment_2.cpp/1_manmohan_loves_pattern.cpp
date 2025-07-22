#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        if(row%2==1){

            for(int col=1;col<=row;col++)
            {
                cout<<1;
            }
        }

        else{

            cout<<1;

            for(int col=1;col<=row-2;col++)
            {
                cout<<0;
            }
            cout<<1;
        }
        cout<<endl;
    }
    return 0;
}