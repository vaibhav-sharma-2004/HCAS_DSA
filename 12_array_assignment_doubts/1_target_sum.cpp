#include<iostream>
using namespace std;

int main(){

    int n;
    int target;
    cin>>n;
    cin>>target;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    //outer loop
    int last=1<<n;
    int ways=0;

    //assume 0=-ve and 1=+ve

    for(int bit=0;bit<last;bit++)
    {
        //find the negative and positive indexes

        int sum=0; // calculates the sum of current combination

        for(int i=0;i<n;i++)
        {
            if((bit>>i)&1==1){
                sum+=arr[i];
            }

            else{
                sum-=arr[i];
            }
        }

        if(sum==target){
            ways++;
        }
    }

    cout<<ways<<endl;

    return 0;
}