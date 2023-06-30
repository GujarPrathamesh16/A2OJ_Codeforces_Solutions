#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    map<int,int> scores;
    map<int,int>::iterator it;
    for(int i=1;i<=n;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        scores[i] = (a+b+c+d);
    }
    for(it=scores.begin();it!=scores.end();it++){
        if(it->second>scores[1]){
            c++;
        }
    }
    cout<<c+1<<endl;
    return 0;
}