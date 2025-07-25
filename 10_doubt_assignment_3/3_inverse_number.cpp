
#include<bits/stdc++.h>
using namespace std;

int inverseNumber(int number){

    int pos=1;
    int sum=0;

    while(number>0){

        int digit=number%10;

        int x=pos*pow(10,digit-1);
        sum+=x;
        
        number=number/10;
        pos++;
    }

    return sum;

}

int main(){

    int n;
    cin>>n;

    cout<<inverseNumber(n)<<endl;

    return 0;
}