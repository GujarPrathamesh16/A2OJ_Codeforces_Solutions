#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int cal(int n){
    if(n==0){
        return 1;
    }
    else{
        return (4*(n-1))+cal(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    int ans = cal(n);
    cout<<ans<<endl;
    return 0;
}