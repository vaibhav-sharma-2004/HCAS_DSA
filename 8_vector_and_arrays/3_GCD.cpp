#include<iostream>
using namespace std;

int main(){

    int a=4;
    int b=8;

    int smaller=min(a,b);

    int GCD=-1;
    for(int num=smaller;num>=1;num--)
    {
        if(a%num==0 && b%num==0){
            GCD=num;
            break;
        }
    }

    cout<<"GCD of a and b is:"<<GCD<<endl;
    return 0;
}