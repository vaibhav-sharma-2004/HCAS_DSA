#include<iostream>
using namespace std;

int main(){

    int a=2;

    int* ptr=&a;

    int* *ptr1=&ptr; // double pointer

    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    cout<<ptr1<<endl;
    cout<<&ptr1<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr1<<endl;

    return 0;
}