#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int water=0;

    //NAIVE APPROACH:
    // go to each roof and find the water stored in it
    // for(int roof=0;roof<n;roof++)
    // {

    //     //step 1: find the maximum roof on the left side
    //     int maxLeft=-1;

    //     for(int left=roof-1;left>=0;left--)
    //     {
    //         maxLeft=max(maxLeft,arr[left]);
    //     }

    //     //step 2: find the maximum roof on the right side

    //     int maxRight=-1;

    //     for(int right=roof+1;right<n;right++)
    //     {
    //         maxRight=max(maxRight,arr[right]);
    //     }

        
    //     int miniRoof=min(maxRight,maxLeft);
    //     int currentRoof=arr[roof];

    //     if(miniRoof>=currentRoof){
    //         water+=(miniRoof-currentRoof);
            
    //     }
    // }

    //OPTIMIZED APPROACH

    int leftMax[n];
    int rightMax[n];

    leftMax[0]=arr[0];

    for(int i=1;i<n;i++)
    {
        leftMax[i]=max(arr[i],leftMax[i-1]);
    }

    rightMax[n-1]=arr[n-1];

    for(int i=n-2;i>=0;i--)
    {
        rightMax[i]=max(arr[i],rightMax[i+1]);
    }

    for(int roof=1;roof<n-1;roof++)
    {
        int lmax=leftMax[roof-1];
        int rmax=rightMax[roof+1];

        int mini=min(lmax,rmax);

        if(mini>arr[roof]){
            water+=(mini-arr[roof]);
        }
    }

    cout<<water<<endl;

    return 0;
}