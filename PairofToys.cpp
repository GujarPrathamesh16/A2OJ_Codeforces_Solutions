#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,k,ans=0,diff=0;
    cin>>n>>k;
    if(n >= k){
        if(k%2==0){
            ans = (k/2) - 1;
        }
        else{
            ans= k/2;
        }
    }
    else{
        diff = k - n;
        if(k%2==0){
            ans = ((k/2) - 1) - (diff-1);
        }
        else{
            ans = (k/2) - (diff-1);
        } 
    }
    if(ans < 0 || n==1){
        ans = 0;
    }
    cout<<ans<<endl;

    return 0;
}