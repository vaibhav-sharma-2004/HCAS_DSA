#include<iostream>
using namespace std;

int main(){

    char name[100]="vaibhav";

    int i=0;
    int count=0;

    while(name[i]!='\0'){

        count++;
        i++;
    }

    cout<<count<<endl;

    return 0;
}