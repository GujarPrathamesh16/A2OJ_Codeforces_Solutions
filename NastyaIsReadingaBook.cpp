#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,c=0;
    cin>>n;
    vector<int>l;
    vector<int>r;
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        l.push_back(x);
        r.push_back(y);  
    }
    cin>>k;
    for(int i=0;i<n;i++){
        if(k<=r[i]){
            c++;
        }
    }
    cout<<(c)<<endl;

    return 0;
}