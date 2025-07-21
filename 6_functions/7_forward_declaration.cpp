#include<iostream>
using namespace std;

int getSum(int &x,int y);

int main(){
    
    int a=5;
    int b=10;
    int x=getSum(a,b);
    cout<<x<<endl;
    return 0;
}

int getSum(int &x,int y){

    int sum=x+y;
    return sum;
}