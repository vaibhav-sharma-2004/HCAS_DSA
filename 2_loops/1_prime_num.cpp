#include<iostream>
using namespace std;

int main(){

    //input a number
    int num;
    cin>>num;

    //check if num is prime or not
    
    int i=2;

    while(i<num){

        if(num%i==0){

            cout<<"not prime"<<endl;
            return 0;
        }
        
        //updation
        i=i+1;
    }
    
    cout<<"prime number"<<endl;

    return 0;
}

// 1 2 3 4 5 6 7 8