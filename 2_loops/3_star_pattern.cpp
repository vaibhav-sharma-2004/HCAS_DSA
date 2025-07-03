#include<iostream>
using namespace std;

/*

print the pattern:

*
**
***
****

*/

int main(){

    int n;
    cin>>n;

    int row=1;

    while(row<=n){

        int col=1;

        while(col<=row){

            cout<<'*'<<" ";
            col=col+1;
        }

        cout<<endl; // cout<<"\n"

        row=row+1;
    }
    
    return 0;
}