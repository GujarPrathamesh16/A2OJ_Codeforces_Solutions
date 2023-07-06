#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long>s;
    vector<long long>ans(n);
    for(int i=0; i<n; i++){
        long long x;
        cin>>x;
        s.push_back(x);
    }
    int j=0;
    for(int i=0; i<n/2; i++){
        if(i%2==0){
            ans[j] = s[n-(i+1)];
            ans[n-(j+1)] = s[i];
        }
        else{
            ans[j] = s[i];
            ans[n-(j+1)] = s[n-(i+1)];
        }
        j++;
    }
    
    if(n%2!=0){
        ans[n/2] = s[n/2];
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<"\t";
    }
    cout<<endl;
    return 0;
}