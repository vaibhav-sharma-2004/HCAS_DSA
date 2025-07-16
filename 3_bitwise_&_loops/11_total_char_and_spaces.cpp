#include<iostream>
using namespace std;

int main(){

    char ch;
    ch=cin.get();

    int digit=0;
    int alpha=0;
    int others=0;
    int spaces=0;

    while(ch!='$'){

        if(ch>='0' && ch<='9'){
            digit++;
        }

        else if(ch>='A' && ch<='Z'){
            alpha++;
        }

        else if(ch==' ' || ch=='\t' || ch=='\n'){
            spaces++;
        }

        else{
            others++;
        }

        ch=cin.get();
    }

    cout<<"no of digits:"<<digit<<endl;
    cout<<"no of alphabets:"<<alpha<<endl;
    cout<<"no of other characters:"<<others<<endl;
    cout<<"no of spaces:"<<spaces<<endl;
    return 0;
}