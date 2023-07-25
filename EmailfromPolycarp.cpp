#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string s1,string s2){
    map<char,int>m1;
    map<char,int>m2;

    for(ll i=0; i<s1.length(); i++){
        m1[s1[i]]++;
    }
    for(ll i=0; i<s2.length(); i++){
        m2[s2[i]]++;
    }

    for(ll i=0; i<s1.length(); i++){
        if(m2[s1[i]] < m1[s1[i]] ){
            cout<<"NO"<<endl;
            return;
        }
    }
    for(ll i=0; i<s2.length(); i++){
        if(m1[s2[i]]==0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    ll n;
    cin>>n;
    for(ll i=0; i<n; i++){
        string s1,s2;
        cin>>s1>>s2;
        solve(s1,s2);
    }
    return 0;
}