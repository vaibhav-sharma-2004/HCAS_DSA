#include<iostream>
using namespace std;

int main(){
    int arr[10];

    // arr[0]=1;
    // arr[1]=2;
    // arr[2]=3;
    // arr[3]=4;
    // arr[4]=5;
    // arr[5]=6;
    // arr[6]=7;
    // arr[7]=8;
    // arr[8]=9;
    // arr[9]=10;

    for(int i=0;i<10;i++)
    {
        arr[i]=i+1;
    }

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}