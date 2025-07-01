#include<iostream>
using namespace std;

/*
lottery system:

for n>30 & n<50 , person wins a bike

for n>100 and n<150, person wins a kurkure

for n>200 and n<400 , person wins macbook

for n>400 and n<500 , person wins car

for other values, print happy birthday 
*/

int main(){

    int n;
    cin>>n;

    if(n>30 && n<50){

        cout<<"wins a bike"<<endl;
    }

    else if(n>100 && n<150){
        cout<<"wins a kurkure"<<endl;
    }

    else if(n>200 && n<400){
        cout<<"wins macbook"<<endl;
    }

    else if(n>400 && n<500){
        cout<<"wins a car"<<endl;
    }

    else{
        cout<<"happy birthday"<<endl;
    }

    return 0;
}