#include<iostream>
using namespace std;

/*
1
2 3
4 5 6 
7 8 9 10

*/

int main(){

    int n;
    cin>>n;// no of rows

    int row=1;
    int number=1;

    while(row<=n){

        int col=1;
        //number=1

        while(col<=row){

            cout<<number<<" ";

            number=number+1;
            col=col+1;
        }

        cout<<endl;

        row=row+1;
    }

    return 0; 
}