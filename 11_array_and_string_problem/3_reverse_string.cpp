#include<iostream>
using namespace std;

void reverse(string &s){

    int l=0;
    int r=s.size()-1;

    while(l<r){

        swap(s[l],s[r]);

        l++;
        r--;
    }
}

int main(){

    string s="hello";

    reverse(s);

    cout<<s<<endl;

    return 0;
}