#include<iostream>
using namespace std;

string reverse(string s){

    int l=0;
    int r=s.size()-1;

    while(l<r){

        swap(s[l],s[r]);

        l++;
        r--;
    }

    return s;
}

// void reverse(string &s){

//     int l=0;
//     int r=s.size()-1;

//     while(l<r){

//         swap(s[l],s[r]);

//         l++;
//         r--;
//     }

// }


int main(){

    string s="racgtcar";
    string original=s;

    //reverse(s);

    // string reversed=reverse(s);

    // if(reversed==original){
    //     cout<<"pallindrome"<<endl;
    // }

    // else{
    //     cout<<"not pallindome";
    // }

    int l=0;
    int r=s.size()-1;

    while(l<r){

        if(s[l]!=s[r]){

            cout<<"not pallindrome";
            break;
        }

        l++;
        r--;
    }

    if(l==r){
        cout<<"pallindrome";
    }


    return 0;
}