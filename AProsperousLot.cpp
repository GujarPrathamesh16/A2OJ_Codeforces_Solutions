#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll k,ans=0;
    cin>>k;

    if(k%2==0){
        for(ll i=0; i<(k/2); i++){
            if(abs(ans) >= pow(10,18)){
                cout<<"-1"<<endl;
                return 0;
            }   
            ans = (ans*10)+8;
        }
    }
    else{
        if(k==1){
            ans = 6;
        }
        else{
            for(ll i=0; i<(k/2); i++){
                if(abs(ans) >= pow(10,18)){
                    cout<<"-1"<<endl;
                    return 0;
                }   
                ans = (ans*10)+8;
            }
            if(abs(ans) >= pow(10,18)){
                cout<<"-1"<<endl;
                return 0;
            }
            else{
                ans = (ans*10)+6;
            }   
        }
    }
    if(abs(ans) >= pow(10,18)){
        ans = -1;
    }
    cout<<ans<<endl;
    return 0;
}