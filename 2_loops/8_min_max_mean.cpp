#include<iostream>
#include<limits.h>
using namespace std;

/*
take N number of inputs and find the minimum value,maximum value and the mean value of N inputs
*/

int main(){

    int n;
    cin>>n;

    int i=1;

    int maxi=INT_MIN;
    int mini=INT_MAX;
    int mean;

    int sum=0;

    while(i<=n){

        int num;
        cin>>num;

        if(num>maxi){
            maxi=num;
        }

        if(num<mini){
            mini=num;
        }

        sum=sum+num;
        i=i+1;
    }

    //find the mean and print maximum,minimum and mean values

    mean=sum/n;

    cout<<"Maximum value:"<<maxi<<endl;
    cout<<"Minimum value:"<<mini<<endl;
    cout<<"Mean value:"<<mean<<endl;
    cout<<"mean value:"<<sum/n<<endl;

    return 0;
}