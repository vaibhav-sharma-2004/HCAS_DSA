#include<iostream>
using namespace std;

/*
input principle,time and rate of interest from user and find the SI
*/

int main(){

    int principle;
    int time;
    int rate;

    float SI;


    cin>>principle;
    cin>>time;
    cin>>rate;

    SI=(principle*time*rate)/100.0;

    cout<<"simple interest:"<<SI<<endl;
    return 0;
}