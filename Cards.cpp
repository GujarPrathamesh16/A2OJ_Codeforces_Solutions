#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,no;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    map<char,int>m;
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }
    map<char,int>::iterator it;
    int cz = m['z'];
    int co = m['n'];
    for(int i=1;i<=co; i++){
        cout<<1<<"\t";
    }
    for(int i=1;i<=cz;i++){
        cout<<0<<"\t";
    }
    cout<<endl;
    return 0;
}