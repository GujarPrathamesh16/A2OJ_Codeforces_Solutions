// incomplete
#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n,m,ans=0;
    cin>>n>>m;
    vector<int>a;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    if(n > m){
        ans = 0;
    }
    else{
        map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[a[i]]++;
        }
    }
    return 0;
}