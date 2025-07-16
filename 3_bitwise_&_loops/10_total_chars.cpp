#include<iostream>
using namespace std;

int main(){

    char ch;
    cin>>ch;

    int digit=0;
    int alpha=0;
    int others=0;


    while(ch!='$'){

        if(ch>='0' && ch<='9'){
            digit++;
        }

        else if(ch>='A' && ch<='Z'){
            alpha++;
        }

        else{
            others++;
        }
        cin>>ch;
    }

    cout<<"no of digits:"<<digit<<endl;
    cout<<"no of alphabets:"<<alpha<<endl;
    cout<<"no of other characters:"<<others<<endl;
    
    return 0;
}