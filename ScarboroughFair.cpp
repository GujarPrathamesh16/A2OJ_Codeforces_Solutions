#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char s[n+4];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=1;i<=m;i++){
        int l,r;
        char c1,c2;
        cin>>l>>r>>c1>>c2;
        for(int j=l-1;j<r;j++){
            if(s[j]==c1){
                s[j]=c2;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}