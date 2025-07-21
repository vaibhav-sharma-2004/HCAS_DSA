#include<iostream>
using namespace std;

int factorial(int num){

    int ans=1;
    for(int i=1;i<=num;i++)
    {
        ans=ans*i;
    }

    return ans;
}
 
int main(){

    int num=5;

    int fact=factorial(num);
    cout<<fact<<endl;
    return 0;
}