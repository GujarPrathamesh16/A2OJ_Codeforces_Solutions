#include<iostream>
using namespace std;
int main(){
    int x,ans;
    cin>>x;
    int rem = x%4;
    if(rem==0){
        cout<<"1"<<"\t"<<"A"<<endl;
    }
    else if(rem==1){
        cout<<"0"<<"\t"<<"A"<<endl;
    }
    else if(rem==2){
        cout<<"1"<<"\t"<<"B"<<endl;
    }
    else if(rem==3){
        cout<<2<<"\t"<<"A"<<endl;
    }
    return 0;
}