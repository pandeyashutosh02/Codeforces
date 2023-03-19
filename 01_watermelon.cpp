#include<iostream>
using namespace std;
int main(){
    int w;cin>>w;
    if(w%2==0 && w>2){//w should be greater than 2 as it will remainder 2 but it can be divided into even number and 0 & 2 is not the case
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}