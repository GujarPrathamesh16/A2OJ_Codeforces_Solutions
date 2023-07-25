#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,cnte=0, cnto=0;
    cin>>n;
    vector<ll>a;
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        a.push_back(x);
        if(x%2==0){
            cnte++;
        }
        else{
            cnto++;
        }
    }
    if(cnte%2!=0 && cnto%2!=0){
        cout<<"First"<<endl;
    }
    else if(cnte%2==0 && cnto%2!=0){
        cout<<"First"<<endl;
    }
    else if(cnte%2==0 && cnto%2==0 && cnto!=0){
        cout<<"First"<<endl;
    }
    else if(cnte%2!=0 && cnto%2==0 && cnto!=0){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }
    return 0;
}
