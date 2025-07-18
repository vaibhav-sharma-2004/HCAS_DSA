#include<iostream>
using namespace std;

void printPrime(int n){

    int i;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0){
            break;
        }
    }

    if(i==n){
        cout<<"prime number"<<endl;
    }

    else{
        cout<<"not a prime number"<<endl;
    }
}

int main(){

    int n;
    cin>>n;
    printPrime(n);

    int m;
    cin>>m;
    printPrime(m);
    return 0;
}