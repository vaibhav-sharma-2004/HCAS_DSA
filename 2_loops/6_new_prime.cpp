#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=2;

    int flag=1;// the input number is prime

    while(i<=n-1){
        
        if(n%i==0){
            flag=0;
        }

        i=i+1;
    }

    if(flag==1){
        cout<<"prime number";
    }

    else{
        cout<<"not prime";
    }

    return 0;
}