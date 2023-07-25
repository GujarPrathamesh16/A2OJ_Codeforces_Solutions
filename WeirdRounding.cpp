#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

pair<int,int> countDigits(ll num){
    pair<int,int>ans;
    ll cnt = 0, cntZero=0;
    while(num != 0){
        cnt++;
        if(num%10 == 0){
            cntZero++;
        }
        num /= 10;
    }
    ans.first = cntZero;
    ans.second = cnt;
    return ans;
}

int main(){
    ll n;
    int k, div=0, ans=0;
    cin>>n>>k;
    div = pow(10,k);
    pair<int,int>x = countDigits(n);

    if(x.second < k+1){
        if(x.first == 0){
            ans = x.second;
        }
        else{
            ans = x.second-1;
        }
    }
    else{
        if(x.first < k){
            ans = x.second-1;
        }
        else{
            int cnt=0, zero=0;

            while(n!=0){
                cnt++;
                if(n%10 == 0){
                    zero++;
                    if(zero == k){
                        break;
                    }
                }
                n /= 10;
            }
            ans = cnt - k;
        }
    }
    cout<<ans<<endl;
}