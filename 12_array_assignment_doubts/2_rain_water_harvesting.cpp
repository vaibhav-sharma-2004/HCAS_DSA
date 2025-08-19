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

    // go to each roof and find the water stored in it
    for(int roof=0;roof<n;roof++)
    {

        //step 1: find the maximum roof on the left side
        int maxLeft=-1;

        for(int left=roof-1;left>=0;left--)
        {
            maxLeft=max(maxLeft,arr[left]);
        }

        //step 2: find the maximum roof on the right side

        int maxRight=-1;

        for(int right=roof+1;right<n;right++)
        {
            maxRight=max(maxRight,arr[right]);
        }

        
        int miniRoof=min(maxRight,maxLeft);
        int currentRoof=arr[roof];

        if(miniRoof>=currentRoof){
            water+=(miniRoof-currentRoof);
            
        }
    }

    cout<<water<<endl;

    return 0;
}