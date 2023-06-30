#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,ans=0,x;
        int flag=0;
        int helper[] = {5,2,1};
        cin>>a>>b;
        if(a==b){
            ans = 0;
        }
        else{
            x = abs(a-b);
            int i=0;
            while(flag!=1){
                if(x==0){
                    flag=1;
                }
                else{
                    if(x!=0){
                        ans = ans + (x/helper[i]);
                        x = x - (x/helper[i])*helper[i];
                        i++;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}