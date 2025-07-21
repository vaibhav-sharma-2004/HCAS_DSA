#include<iostream>
using namespace std;

int main(){

    int a[5]={5,4,3,2,1};



    int n=sizeof(a)/sizeof(int);

    cout<<"before sorting:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n-1;i++)// -> outer loop define the current index
    {
        int mini_ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[mini_ind]>a[j]){
                mini_ind=j;
            }
        }

        swap(a[i],a[mini_ind]);
    }

    cout<<"after sorting:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}