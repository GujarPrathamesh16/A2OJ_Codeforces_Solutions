#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s, ans="";
    cin>>s;
    if(n==1 || n==2){
        ans = s;
    }
    else{
        ans += s[0];
        if(n%2 != 0){
            for(int i=1; i<n; i++){
                if(i%2 != 0){
                    ans = s[i] + ans;
                }
                else{
                    ans += s[i];
                }
            }
        }
        else{
            for(int i=1; i<n; i++){
                if(i%2 != 0){
                    ans += s[i];
                }
                else{
                    ans = s[i] + ans;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}