#include<iostream>
using namespace std;

int main(){

    int n=4;
    int m=5;

    int arr[4][5]={
                  {1,2,3,4,5},
                  {6,7,8},
                  {11,12,13,14,15},
                  {16,17,18,19,20}
                };
    
    for(int col=0;col<m;col++)
    {
        //even col
        if(col%2==0){

            for(int row=0;row<n;row++)
            {
                cout<<arr[row][col]<<" ";
            }
        }

        //odd col
        else{

            for(int row=n-1;row>=0;row--)
            {
                cout<<arr[row][col]<<" ";
            }
        }
    }
    return 0;
}