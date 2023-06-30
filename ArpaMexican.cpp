#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,t,ans=0;
    cin>>n>>k>>t;
    if(t<=k){
        ans = t;
    }
    else{
        if(t<=n){
            ans = k;
        }
        else{
            ans = k-(t-n);
        }
    }
    cout<<ans<<endl;
    return 0;
}