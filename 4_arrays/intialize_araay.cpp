#include<iostream>
using namespace std;

int main(){

    // int n;
    // cin>>n;

    // int arr[n]={0,1,2,3};

    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    int a[]={1,2,3,4};

    int size=sizeof(a)/sizeof(int);

    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }

    //int b[];--> NOT ALLOWED


    return 0;
}