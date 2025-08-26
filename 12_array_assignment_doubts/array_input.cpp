#include<iostream>
using namespace std;

int main(){

    //declare an array
    int n=6;
    int arr[n];

    //input from user

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}