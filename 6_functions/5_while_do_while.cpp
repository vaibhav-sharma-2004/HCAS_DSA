#include<iostream>
using namespace std;

int main(){

    int n=5;
    int i=7;

    // while(i<n){
    //     cout<<i<<endl;
    //     i++;
    // }

    do{
        cout<<i<<endl;
        i++;
    }
    while(i<n);

    return 0;
}