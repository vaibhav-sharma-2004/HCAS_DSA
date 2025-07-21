#include<iostream>
using namespace std;

int main(){

    char ch;
    cin>>ch;

    switch(ch){

        case 'N':
           cout<<"North"<<endl;
           break;
        
        case 'S':
            cout<<"South"<<endl;
            break;
        
        case 'E':
             cout<<"East"<<endl;
             break;
        
        case 'W':
              cout<<"West"<<endl;
              break;

        default:
           cout<<"wrong"<<endl;
           break;
    }

    return 0;
}