#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    int k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char, ll>freq;

    for(int i=0; i<s.length(); i++){
        freq[s[i]]++;
    }
    char x = s[0];
    ll y = 1, openGates = 1, i=1;
    string ans = "NO";
    while(i<s.length()){
        if(s[i] == x){
            y++;
        }
        else{
            if(freq[x] != y){
                openGates++;
            }
            y = 1;
            x = s[i];
        }
        if(openGates > k){
            ans = "YES";
            break;
        }
        i++;
    }
    cout<<ans<<endl;
    return 0;
}