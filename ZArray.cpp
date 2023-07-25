#include<iostream>
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void calZarray(string s, vector<ll>&zarr){
    ll n = s.length();
    zarr.push_back(0);
    for(ll i=1; i<n; i++){
        ll cnt=0;
        for(ll j=i; j<n; j++){
            if(s[j-i] == s[j]){
                zarr[i]++;
            }
            else{
                break;
            }
        }
    }
}
int main(){
    string s;
    cin>>s;
    ll n = s.length();
    vector<ll>zarr(n,0);
    calZarray(s,zarr);
    for(ll i=0; i<n; i++){
        cout<<zarr[i]<<"\t";
    }
    cout<<endl;
    return 0;
}