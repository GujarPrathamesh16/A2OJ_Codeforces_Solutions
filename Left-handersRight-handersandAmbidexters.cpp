#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,r,a,ans=0,sum;
    cin>>l>>r>>a;
    sum = l+r+a;
    if((l==0 || r==0) && a==0 ){
        ans = 0;
    }
    else{
        if((l+a)<r){
            ans = (l+a)*2;
        }
        else if((r+a)<l){
            ans = (r+a)*2;
        }
        else{
            ans = (sum/2)*2;
        }
    }
    cout<<ans<<endl;
    return 0;
}