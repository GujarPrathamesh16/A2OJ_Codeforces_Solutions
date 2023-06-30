#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,b,c;
    cin>>n;
    int x = n/3;
    cout<<x<<endl;
    if(3*x == n){
        if(x%3!=0){
            a = x;
            b = x;
            c = x;
        }
        else{
            a = x-2;
            b = x+1;
            c = x+1;
        }
    }
    else{
        if(x%3!=0){
            a = x;
            b = x 
        }
    }
    cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<endl;
    return 0;
}