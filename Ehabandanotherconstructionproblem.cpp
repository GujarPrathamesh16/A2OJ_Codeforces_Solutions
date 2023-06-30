#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,a,b,flag = 0;
    cin>>x;
    for(b=1;b<=x;b++){
        for(int a=b;a<=x;a++){
            if(a%b==0 && (a*b)>x && (a/b)<x){
                flag = 1;
                cout<<a<<"\t"<<b<<endl;
                return 0;
            }
        }
    }
    if(flag==0){
        cout<<"-1"<<endl;
    }
    return  0;
}