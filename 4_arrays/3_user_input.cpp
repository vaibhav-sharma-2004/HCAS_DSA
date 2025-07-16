#include<iostream>
using namespace std;

int main(){

    int arr[10];
    int n;
    cout<<"input size (max 1000)";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<10;i++)
    {
        cout<<arr[i];
    }
    return 0;
}