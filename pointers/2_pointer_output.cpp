#include<iostream>
using namespace std;

int main(){

    int x=5;

    int *ptr=&x;

    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr*2<<endl;
    cout<<*(ptr)++<<endl;
    cout<<++(*ptr)<<endl;
    cout<<x+1<<endl;
    cout<<ptr+1<<endl;


    return 0;
}