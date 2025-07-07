#include<iostream>
using namespace std;

int main(){

    int initial;
    int last;
    int step;

    cin>>initial;
    cin>>last;
    cin>>step;


    int c;
    int f;

    while(initial<=last){
        
        c=(5/9.0)*(initial-32);

        cout<<"far:"<<initial<<"---"<<"cel:"<<c<<endl;

        initial=initial+step;
    }

    return 0;
}