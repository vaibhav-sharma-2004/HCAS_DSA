#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int arr[7]={3,5,6,7,2,10,1};

    int n=7;
    int maxi=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }

    cout<<"maximum number:"<<maxi<<endl;

    return 0;
}