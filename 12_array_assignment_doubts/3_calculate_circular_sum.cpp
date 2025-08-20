#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {

        int n;
        cin>>n;
    
        int arr[n];
    
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    
        int mini_sum=0;
        int curr_sum=0;
       
        int totalsum=0;
    
        for(int i=0;i<n;i++)
        {
            totalsum=totalsum+arr[i];
            curr_sum=curr_sum+arr[i];
    
            if(curr_sum>0){
                curr_sum=0;
            }
    
            mini_sum=min(mini_sum,curr_sum);
        }
    
        int maxCircular=totalsum-mini_sum;// maximum circular sum

        int sum=0;
        int maxLinear=0;
        for(int i=0;i<n;i++)
       {
           sum=sum+arr[i];

           if(sum<0){
            sum=0;//starting an new sub array
           }
           maxLinear=max(maxLinear,sum);
       }

       int ans=max(maxCircular,maxLinear);

       cout<<ans<<endl;
        
    }

    return 0;
}