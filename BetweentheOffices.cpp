#include<iostream>
using namespace std;
int main(){
    int n,cs=0,cf=0;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n-1;i++){
        if(s[i]=='S' && s[i+1]=='F'){
            cf++;
        }
        if(s[i]=='F' && s[i+1]=='S'){
            cs++;
        }
    }
    if(cf>cs){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}