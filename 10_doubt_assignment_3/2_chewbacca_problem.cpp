#include<iostream>
#include<string.h>
using namespace std;

string newString(string &s){

    int size=s.length();

    for(int i=size-1;i>=0;i--)
    {
        if(i==0 && s[i]=='9'){
            continue;
        }

        int dig=s[i]-'0';

        if(dig>9-dig){

            s[i]=9-dig+'0';
        }
    }

    return s;
}

int main(){

    string s;
    cin>>s;

    cout<<newString(s)<<endl;

    return 0;
}