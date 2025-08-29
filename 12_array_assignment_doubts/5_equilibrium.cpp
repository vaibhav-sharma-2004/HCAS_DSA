#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int sum=0;
    int total=0;

    for(int i=0;i<n;i++)
    {
        total+=arr[i];
    }

    for(int i=0;i<n;i++)
    {
       sum+=arr[i];
       
       if(sum-arr[i]==total-sum){
        cout<<i+1<<endl;
        return 0;
       }
    }

    cout<<-1<<endl;

    return 0;
}