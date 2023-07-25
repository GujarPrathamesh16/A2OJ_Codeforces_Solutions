// all tc not passed

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,d,h;
        cin>>n>>d>>h;
        vector<ll>hb;
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            hb.push_back(x);
        }
        ll area = (0.5)*d*h, ans=0;
        for(ll i=0; i<n-1; i++){
            if((hb[i+1] - hb[i]) < h){

                ll h1 = h - (hb[i+1] - hb[i]);
                float b1 = float((h1* d)/h);

                ans += area - (0.5 * h1 * b1);
            }
            else{
                ans += area;
            }
        }
        ans+=area;
        cout<<ans<<endl;
    }
    return 0;
}