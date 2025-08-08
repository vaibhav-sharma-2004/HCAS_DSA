#include<iostream>
using namespace std;

void solve(int* &q){

    //*q=*q+1;
    q=q+1;
    //cout<<q<<endl;
}

int main(){
    int a=5;
    int *ptr=&a;

    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    solve(ptr);

    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    return 0;
}