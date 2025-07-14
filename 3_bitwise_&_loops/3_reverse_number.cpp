#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;

//APPROACH 1
    // while(num>0){

    //     int rem=num%10;
    //     cout<<rem;

    //     num=num/10;
    // }

    // APPROACH 2
    int num2=0;
    while(num>0){

        int rem=num%10;

        num2=(num2*10) + rem;
        num=num/10;
    }

    cout<<"reversed num:"<<num2<<endl;
    cout<<"multiply by 5"<<num2*5<<endl;
    return 0;
}