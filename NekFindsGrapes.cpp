#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n,m,ae=0,ao=0,be=0,bo=0,ans=0;
    cin>>n>>m;
    vector<long int>a;
    vector<long int>b;
    for(long int i=0;i<n;i++){
        long int x;
        cin>>x;
        a.push_back(x);
        if(x%2==0){
            ae++;
        }
        else{
            ao++;
        }
    }
    for(long int i=0;i<m;i++){
        long int x;
        cin>>x;
        b.push_back(x);
        if(x%2==0){
            be++;
        }
        else{
            bo++;
        }
    }
    if(ae<bo){
        ans = ans+ ae;
    }
    else{
        ans = ans + bo;
    }
    if(be<ao){
        ans = ans+ be;
    }
    else{
        ans = ans + ao;
    }
    cout<<ans<<endl;
    return 0;
}