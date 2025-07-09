#include<iostream>
using namespace std;

int main(){

    int a=0;
    int b=1;

    if(a++ && ++b){
        ++a;
    }

    else{
        ++b;
    }

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    return 0;
}