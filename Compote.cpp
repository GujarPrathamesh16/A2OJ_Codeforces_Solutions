#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,k=0,flag=0,ans=0;
    cin>>a>>b>>c;
    while(flag==0){
        if(a*4<=c && a*2<=b){
            k=a;
            flag=1;
        }
        else{
            a--;
        }
    }
    ans = k*7;
    cout<<ans<<endl;
    return 0;
}