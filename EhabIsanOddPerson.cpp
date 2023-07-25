#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,k=0,idx=0,ele=0;
    cin>>n;
    vector<ll>a,b;
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        a.push_back(x);
    }
    b = a;
    sort(b.begin(), b.end());
    if(b != a){
        for(ll i=0; i<n; i++){
            if((b[k] != a[i]) && ((b[k] + a[i])%2 != 0)){
                idx = i;
                ele = b[k];
                break;
            }
            k++;
        }
        for(ll i=0; i<n; i++){
            if(a[i] == ele){
                swap(a[i], a[idx]);
            }
        }
    }

    for(ll i=0; i<n; i++){
        cout<<b[i]<<"\t";
    }
    cout<<endl;
    return 0;
}