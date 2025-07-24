#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> a={1,2,5,10,20,50,100,200,500};

    int size=a.size();

    int start=0;
    int end=size-1;
    int key=400;
    bool flag=false;
    while(start<=end){

        int mid=(start+end)/2;

        if(key>a[mid]){
            start=mid+1;
        }

        else if(key<a[mid]){
            end=mid-1;
        }

        else{
            cout<<"key is present:"<<mid<<endl;
            flag=true;
            break;
        }
    }

    if(start>end){
        cout<<"key not present"<<endl;
    }

    if(flag==false){
        cout<<"key is not present";
    }


    return 0;
}