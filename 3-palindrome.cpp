#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    string ans = "a";
    for(int i=1; i<n; i++){
        ans+="c";
    }
    cout<<ans<<endl;
    return 0;
}