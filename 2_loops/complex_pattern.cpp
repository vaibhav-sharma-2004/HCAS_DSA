#include<iostream>
using namespace std;

/*
print the pattern

    1
   2 3 2
  3 4 5 4 3
 4 5 6 7 6 5 4   
*/

int main(){

    int n;
    cin>>n;

    int row=1;

    while(row<=n){

        // step 1: print space in row
        int i=1;

        while(i<=n-row){

            cout<<" ";
            i=i+1;
        }

        //step 2: increasing values
        int increasing_num=row;
        int j=1;

        while(j<=row){

            cout<<increasing_num<<" ";
            increasing_num=increasing_num+1;

            j=j+1;
        }

        //step 3: print decreasing values
        int decreasing_value=2*row-2;
        int k=1;

        while(k<=row-1){

            cout<<decreasing_value<<" ";
            decreasing_value=decreasing_value-1;
            k=k+1;
        }

        cout<<endl;
        row=row+1;
    }

    return 0;
}