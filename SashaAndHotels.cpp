#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0;
    long long d;
    cin>>n>>d;

    vector<long long>hotels;
    for(int i=0; i<n; i++){
        long long x;
        cin>>x;
        hotels.push_back(x);
    }

    for(int i=0; i<n-1; i++){
        int dist = hotels[i+1] - hotels[i];

        if(dist > 2*d){
            ans+=2;
        }
        if(dist == 2*d){
            ans++;
        }
    }
    cout<<(ans+2)<<endl;
}