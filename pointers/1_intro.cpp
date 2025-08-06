#include<iostream>
using namespace std;

int main(){

    int a=2;

    int *ptr= &a;

    char ch='A';
    char *pt=&ch;

    cout<<pt<<endl;

    cout<<&a<<endl;
    cout<<ptr<<endl;

    cout<<*ptr<<endl;

    cout<<a+1<<endl;
    cout<<ptr+1<<endl;

    cout<<"size:"<<sizeof(ptr)<<endl;

    return 0;
}