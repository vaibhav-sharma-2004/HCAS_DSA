#include<iostream>
using namespace std;

int main(){

    int n=4;
    int m=5;

    int arr[4][5]={
                  {1,2,3,4,5},
                  {6,7,8,9,10},
                  {11,12,13,14,15},
                  {16,17,18,19,20}
                };

    int key=70;        
    int flag=1;    
    
    //outer loop for row
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<m;col++)
        {
            if(key==arr[row][col]){
                cout<<"key present";
                flag=0;
                break;
            }
            //cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    if(flag==1){
        cout<<"key not present";
    }
    

    return 0;
}