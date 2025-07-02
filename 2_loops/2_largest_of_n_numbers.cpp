#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    
       int n;//number of inputs
       cin>>n;

       //int maxi=-2147483648;
       int maxi=INT_MIN;//- infinity

       int i=1;

       while(i<=n){

        int num;//input value of number
        cin>>num;

        if(num>maxi){
            maxi=num;
            i=i+1;
        }

        else{
            i=i+1;
        }

       }

    cout<<"max value is:"<<maxi<<endl;

    return 0;
}