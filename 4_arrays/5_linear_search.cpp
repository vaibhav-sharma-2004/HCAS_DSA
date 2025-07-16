#include<iostream>
using namespace std;

int main(){
    

    int arr[7]={1,3,5,8,7,6,11};
    int key=10;
    int n=7;

    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key){
            cout<<"key present"<<endl;
            break;
        }
    }

    if(i==n){
        cout<<"key not present"<<endl;

    }
//APPROACH-2
    // for(i=0;i<n;i++)
    // {
    //     if(arr[i]==key){
    //         cout<<"key present"<<endl;
    //         break;
    //     }

    //     if(i==n-1){
    //         cout<<"key not present"<<endl;
    //     }
    // }

    return 0;
}