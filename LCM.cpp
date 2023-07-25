#include<iostream>
#include<bits/stdc++.h>
#define ll long long 
using namespace std;

// bool isPrime(ll b){
//     if(b==2 || b==3){
//         return true;
//     }
//     for(ll i=2; i<=b/2; i++){
//         if(b%i==0){
//             return false;
//         }
//     }
//     return true;
// }
int findFactors(ll b){
    ll cnt=0;
    for(ll i=2; i<=b/2; i++){
        if(b%i == 0){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    ll b,ans=0;
    cin>>b;

    if(b <= 2){
        ans = b;
    }
    else{
        for (ll i=1; i*i<=b; i++){
            if(i*i==b){
                 ans++;
            }
            if(b%i==0){
                ans+=2;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}