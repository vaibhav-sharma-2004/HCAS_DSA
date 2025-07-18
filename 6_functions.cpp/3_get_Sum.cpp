#include<iostream>
using namespace std;

int getSum(int a,int b){

    int sum=a+b;
    return sum;
}

int main(){

    int a=5;
    int b=10;
    int x=getSum(a,b);
    cout<<x<<endl;
    return 0;
}