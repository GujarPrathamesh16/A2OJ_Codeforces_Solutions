#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, sum=0, k=0;
    cin>>n;
    vector<ll>a;
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        a.push_back(x);
    }
    vector<ll>helper;
    helper.push_back(a[n-1]);
    sum = a[n-1];
    for(ll i=n-2; i>=0; i--){
        if(a[i] < helper[k]){
            helper.push_back(a[i]);
            sum += a[i];
        }
        else{
            if(a[i] >= helper[k]-1 && (helper[k]-1 > 0)){
                helper.push_back(helper[k]-1);
                sum += helper[k]-1;
            }
            else{
                helper.push_back(0);
                break;
            }
        }
        k++;
    }
    cout<<sum<<endl;
    return 0;
}