#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int b, g, n, x=0, y=0, ans=0;
    cin>>b>>g>>n;
    for(int i=0; i<=n; i++){
        if(i<=b){
            x = i;
            y = n - i;
            if(y<=g){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}