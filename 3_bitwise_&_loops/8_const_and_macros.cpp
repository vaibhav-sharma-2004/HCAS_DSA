#include<iostream>
using namespace std;
#define PI 3.14+1
#define F(n) for(int i=1;i<=n;i++){cout<<i;}

#define DF(n) for(int i=0;i<n;i++)\
{\
    for(int j=0;j<n;j++)\
    {\
        cout<<i*j;\
    }\
}

int main(){

    // int row;
    // cin>>row;

    //const int nrow=row;
    
    //cout<<row<<endl;

    int n;
    cin>>n;

    F(n);
    cout<<endl;

    int r=1;

    cout<<2*PI*r;
    return 0;
}