#include<iostream>
using namespace std;

bool permutation(string s1 ,string s2){
    int freq[26]={0};

    int size1=s1.size();
    int size2=s2.size();

    for(int i=0;i<size1;i++)
    {
        int index=s1[i]-'a';
        freq[index]=freq[index]+1;
    }

    for(int i=0;i<size2;i++)
    {
        freq[s2[i]-'a']--;
    }

    int i;
    for( i=0;i<26;i++)
    {
        if(freq[i]!=0){
            return false;
        }
    }

    return true;
}

int main(){

    string s1="abc";
    string s2="bca";

    bool ans=permutation(s1,s2);

    if(ans==true){
        cout<<"permutation"<<endl;
    }

    else{
        cout<<"not permutation"<<endl;
    }
    return 0;
}