#include<iostream>
using namespace std;

int increase(int &a){

    a=a+5;
    return a;
}

int main(){

    int a=5;
    int b=increase(a);
    cout<<a<<endl;
    return 0;
}