// TLE Error

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    long long a,b,x,y,ans=0;
    cin>>a>>b>>x>>y;

    for(long long i=1; i<=a; i++){
        float r = float (y*i)/x;
        int integer = int(r);
        if(integer == r && r <= b){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}