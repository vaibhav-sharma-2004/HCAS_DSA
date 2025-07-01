#include<iostream>
using namespace std;

//print all even numers till n

int main(){

    int n;
    cin>>n;

    int i=0;

    // while(i<=n){

    //     if(i%2==0){
    //         cout<<i<<" ";
    //     }

    //     i=i+1;
    // }

    //alternate way

    while(i<=n){

        cout<<i<<" ";

        i=i+2;
    }
    
    return 0;
}