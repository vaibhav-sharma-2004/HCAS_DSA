#include<iostream>
using namespace std;

int main(){

    int a=6;
    int b=8;

    int last=a*b;
    // int start=0;
    // if(a>b){
    //     start=a;
    // }

    // else{
    //     start=b;
    // }

    int maxi=max(a,b);
    int LCM=-1;

    //int mini=min(a,b);

    for(int num=maxi;num<=last;num+=maxi)
    {
        if(num%a==0 && num%b==0){
            LCM=num;
            break;
        }

        // if(num%mini==0){
        //     LCM=num;
        //     break;
        // }
    }

    cout<<"LCM of a and b is:"<<LCM<<endl;
    return 0;
}