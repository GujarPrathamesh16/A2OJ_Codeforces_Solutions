#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,flag=0;
    cin>>n;
    int f[n];
    for(int i=1;i<=n;i++){
        cin>>f[i];
    }
    for(int i=1;i<=n;i++){
        if(f[f[f[i]]] == i){
            flag = 1;
            cout<<"YES"<<endl;
            break;
        }
    }
    if(flag==0){
        cout<<"NO"<<endl;
    }
    return 0;
}