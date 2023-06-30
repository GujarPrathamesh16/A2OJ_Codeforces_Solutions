#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d,x,y,z,ans=0,mini,maxi;
    cin>>a>>b>>c>>d;
    vector<long long>helper;
    helper.push_back(a);
    helper.push_back(b); 
    helper.push_back(c);  
    sort(helper.begin(), helper.end());
    x = abs(helper[0]-helper[1]);
    y = abs(helper[1]-helper[2]);
    z = abs(helper[0]-helper[2]);
    if(x>=d && y>=d && z>=d){
        ans = 0;
    }
    else{
        if(x<d){
            ans = ans + (d-x);
        }
        if(y<d){
            ans = ans + (d-y);
        }
        if(z+ans < d){
            ans = ans + (d-z);
        }
    }
    cout<<ans<<endl;
    return 0;
}