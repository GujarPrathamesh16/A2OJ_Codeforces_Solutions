#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, x=0, y=0, ans=0;
    cin>>n;
    string s;
    cin>>s;
    int flag = 0;
    for(int i=0; i<s.length(); i++){

        if(x < y){
            flag = 1;
        }
        if(x > y){
            flag = 0;
        }

        if(s[i] == 'U'){
            y += 1;
        }
        else{
            x += 1;
        }

        if((flag==1 && x>y) || (flag==0 && x<y)){
            ans ++;
            (flag==0) ? flag = 1 : flag = 0;
        }

    }
    if(s[0]=='U'){
        ans--;
    }
    cout<<ans<<endl;
    return 0;
}