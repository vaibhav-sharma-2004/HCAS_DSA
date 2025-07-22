#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a=0;
    int b=1;

    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<a<<'\t';
            int c=a+b;
            a=b;
            b=c;
        }
        cout<<endl;
    }
    return 0;
}