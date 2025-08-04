#include<iostream>
using namespace std;


int main(){

    int original =1234;
    int x=original;

    int reverse=0;

    while(original>0){

        int rem=original%10;

        reverse=reverse*10 + rem;

        original=original/10;
    }

    cout<<reverse<<endl;

    if(x==reverse){
        cout<<"pallindrome";
    }

    else{
        cout<<"not pallindrome";
    }

    return 0;
}