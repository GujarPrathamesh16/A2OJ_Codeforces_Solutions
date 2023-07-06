#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int w, h, u1,d1, u2, d2;
    cin>>w>>h>>u1>>d1>>u2>>d2;
    int ans = w, i = h;
    while(i>=0){
        ans+=i;
        if(i==d1){
            ans -= u1;
        }
        if(i==d2){
            ans -= u2;
        }
        if(ans < 0){
            ans = 0;
        }
        i--;
    }
    cout<<ans<<endl;
    return 0;

}