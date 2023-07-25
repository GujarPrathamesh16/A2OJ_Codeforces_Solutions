#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,k, mini=n,type=0,tno=0;
    cin>>n>>k;
    vector<ll>a;
    for(ll i=0; i<k; i++){
        ll x,y;
        cin>>x;
        a.push_back(x);
        y = (n%x);
        if(mini > y){
            mini = y;
            tno = n/x;
            type = i+1;
        }
    }
    cout<<type<<"\t"<<tno<<endl;
    return 0;
}