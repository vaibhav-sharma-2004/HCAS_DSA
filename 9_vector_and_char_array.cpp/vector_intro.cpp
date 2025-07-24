#include<iostream>
#include<vector>
using namespace std;

int main(){

    //int n;
    //cin>>n;

    vector<int> a;
    //a.resize(n);

    // a.push_back(1);
    // a.push_back(2);
    // a.push_back(3);
    // a.push_back(4);
    // a.push_back(5);
    // a.push_back(6);

    // int size=a.size();

    // for(int i=0;i<size;i++)
    // {
    //     cout<<a[i]<<" ";
    // }

    // for(int i=1;i<=6;i++)
    // {
    //     cout<<"element is:"<<i<<endl;
    //     a.push_back(i);
    //     cout<<"size:"<<a.size()<<" "<<"capacity:"<<a.capacity()<<endl;
    // }

    int m=5;

    vector<int> b(m); 
    //b.resize(m);

    b.push_back(10);
    int size=b.size();
    for(int i=0;i<size;i++)
    {
        cout<<b[i]<<" ";
    }


    return 0;
}