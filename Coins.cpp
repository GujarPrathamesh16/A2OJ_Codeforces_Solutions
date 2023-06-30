#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s,ans;
    cin>>n>>s;
    if(s%n==0){
        ans = (s/n);
    }
    else{
        ans = (s/n)+1;
    }
    cout<<ans<<endl;
    return 0;
}