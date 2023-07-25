#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        int n, cnt=0;
        cin>>n;
        for(int i=0; i<n; i++){
            int a,b;
            cin>>a>>b;
            if((a-b) <= 0){
                cnt++;
            }
        }
        cout<<(n-cnt)<<endl;
    }
    return 0;
}