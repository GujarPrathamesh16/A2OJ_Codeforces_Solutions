#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,ans,k=0;
        cin>>a>>b>>c;
        if(b==0 || a==0 && c==0){
            ans = 0;
        }
        else{
            while(c>=2 && b>=1){
               k++; 
               c-=2;
               b-=1;
            }
            while(a>=1 && b>=2){
                k++;
                a-=1;
                b-=2;
            }
            ans = k*3;
        }
        cout<<ans<<endl;
    }
    return 0;
}
