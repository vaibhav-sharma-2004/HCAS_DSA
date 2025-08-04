#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> a={-2,1,-3,4,-1,2,1,-5,4};

    int size=a.size();
    int ans=0;

    for(int i=0;i<size;i++)
    {
        int sum=0;
        int maxSubarray_i=0;
        for(int j=i;j<size;j++)
        {
            sum=sum+a[j];

            maxSubarray_i=max(sum,maxSubarray_i);
        }

        ans=max(ans,maxSubarray_i);
    }

    cout<<ans<<endl;

    return 0;
}