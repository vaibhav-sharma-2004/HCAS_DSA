#include<iostream>
using namespace std;

int main(){

    //char ch[10]="vaibhav";
    //char *ptr=ch;

    char temp='a';
    char *p=&temp;

    cout<<p<<endl;
    cout<<temp<<endl;
    cout<<&temp;

    // cout<<ch<<endl;
    // cout<<ptr<<endl;
    // cout<<&ch<<endl;

    return 0;
}