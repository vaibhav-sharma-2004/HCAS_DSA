#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int target;
    cin>>target;

    sort(arr.begin(),arr.end());

    //#APPROACH 1- O(N^3)
    // for(int a=0;a<n-2;a++)// 1st element
    // {
    //     for(int b=a+1;b<n-1;b++)//2nd element
    //     {
    //         for(int c=b+1;c<n;c++)//3rd element
    //         {
    //             int ele1=arr[a];
    //             int ele2=arr[b];
    //             int ele3=arr[c];

    //             if(ele1+ ele2+ele3==target){
    //                 cout<<ele1<<", "<<ele2<<" and "<<ele3<<endl;
    //             }
    //         }
    //     }
    // }

    //APPROACH-2 O(N^2)

    for(int i=0;i<n-2;i++)
    {
        int j=i+1;
        int k=n-1;

        while(j<k){

            int a=arr[i];
            int b=arr[j];
            int c=arr[k];

            int sum=a+b+c;

            if(sum==target){
                cout<<a<<", "<<b<<" and "<<c<<endl;
                j++;
                k--;
            }

            else if(sum>target){
                k--;
            }

            else if(sum<target){
                j++;
            }
        }
    }

    return 0;
}