#include<iostream>
using namespace std;

//print if the number is positive or negative
// if num>0 then it is positive , if num<0 then it is negative
//if num=0 then num is zero

// /n==endl

int main(){

    int num;
    cin>>num;

    if(num>0){
        cout<<"it is positive"<<endl;
    }

    else if(num==0){
        cout<<"num is zero"<<endl;
    }

    else{
        cout<<"it is negative"<<endl;
    }
}