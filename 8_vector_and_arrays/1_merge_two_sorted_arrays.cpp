#include<iostream>
using namespace std;

int main(){

    int n=4;
    int m=3;

    int a[n+m]={3,5,8};
    int b[n]={1,2,4,6};

    int i=m-1;
    int j=n-1;
    int k=m+n-1;

    cout<<"before merging:";
    for(int i=0;i<m+n;i++){
        cout<<a[i]<<" ";
    }

    while(i>=0 && j>=0){

        if(a[i]>b[j]){

            a[k]=a[i];
            k--;
            i--;
        }

        else{
            a[k]=b[j];
            k--;
            j--;
        }
    }


    while(j>=0){
        a[k]=b[j];
        j--;
        k--;
    }
    
    //NOT NEEDED
    // while(i>=0){
    //     a[k]=b[i];
    //     i--;
    //     k--;
    // }

    cout<<endl;
    cout<<"after merging:";
    for(int i=0;i<m+n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}