#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;
    int cnt=0;

    // while(num>0){

    //     int rem=num%2;

    //     cnt=cnt+rem;
        
    //     num=num/2;
    // }

    //cout<<"set bits:"<<cnt<<endl;

    // APPROACH 2

    while(num>0){

        int last=num&1;
        cnt+=last;
        num=num>>1;
    }
    cout<<cnt<<endl;
    return 0;
}