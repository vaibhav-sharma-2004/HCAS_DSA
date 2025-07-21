#include<iostream>
using namespace std;

void useArray(int a[],int n){

    for(int i=0;i<n;i++)
    {
        a[i]=1;
    }
}

int main(){

    int a[]={1,2,3,4,5};
    int n=5;
    cout<<"before function call:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    useArray(a,n);
    useArray(a,n);
    useArray(a,n);
    useArray(a,n);
    useArray(a,n);
    useArray(a,n);
    useArray(a,n);
    useArray(a,n);

    cout<<"after function call:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}