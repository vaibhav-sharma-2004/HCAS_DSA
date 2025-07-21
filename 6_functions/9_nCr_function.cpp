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

int nCr(int n,int r=1){// default argument

    int val1=factorial(n);
    int val2=factorial(r);
    int val3=factorial(n-r);

    int ans=val1/(val2*val3);

    return ans;
}
 
int main(){

    int n;int r;
    cin>>n;
    cin>>r;

    int ans=nCr(n);
    cout<<"nCr is:"<<ans<<endl;
    return 0;
}