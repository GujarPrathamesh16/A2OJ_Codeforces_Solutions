#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll k,cnt=1;
    cin>>k;
    for(ll i=19; i<11000000; i+=9){
        if(cnt == k){
            cout<<i<<endl;
            break;
        }
        cnt++;
    }
    return 0;
}