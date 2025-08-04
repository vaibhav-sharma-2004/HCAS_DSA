#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> a={-2,1,-3,4,-1,2,1,-5,4};
    int size=a.size();

    int sum=0;
    int ans=0;

    for(int i=0;i<size;i++)
    {
        sum=sum+a[i];

        if(sum<0){
            sum=0;//starting an new sub array
        }
        ans=max(ans,sum);
    }

    cout<<ans<<endl;
    return 0;
}