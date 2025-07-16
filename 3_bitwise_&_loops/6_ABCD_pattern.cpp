#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        char p='A';
        for(int col=1;col<=n-row+1;col++)
        {
  
            cout<<p<<" ";
            p++;
        }

        p--;

        for(int col=1;col<=n-row+1;col++)
        {
            cout<<p<<' ';
            p--;
        }
        cout<<endl;
    }
}