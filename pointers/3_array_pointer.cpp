#include<iostream>
using namespace std;

void solve(int arr[],int n){

    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<sizeof(arr);
}

int main(){

    int n=5;
    int arr[n]={10,20,40,50,60};

    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // cout<<sizeof(arr)<<endl;
    // int n=5;

    // solve(arr,n);

    // cout<<*arr<<endl;
    // cout<<(*arr)+1<<endl;
    // cout<<*(arr+1)<<endl;

    // cout<<arr[1]<<" "<<" "<<*(arr+1)<<" "<<*(1+arr)<<" "<<1[arr]<<" "<<endl;
    int *ptr= arr;

    //arr=arr+1;//WRONG
    ptr=ptr+1;

    return 0;
}