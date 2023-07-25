#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,k, sum=0, ans=0;
    cin>>n>>k;
    for(ll i=1; i<=n; i++){
        sum += i;
        ans = sum - k; //ans = eathen candies

        if(ans>=0 && ans + i == n){
            cout<<ans<<endl;
            break;
        }
    }
    return 0;
}