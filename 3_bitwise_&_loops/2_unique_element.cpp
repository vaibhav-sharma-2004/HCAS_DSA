#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    int ans=0;

    while(i<=n){

        int num;
        cin>>num;

        ans=ans^num;
        i++;
    }

    cout<<ans<<endl;
    return 0;
}