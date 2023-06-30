#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    map<int,int>m;
    map<int,int>::iterator it;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    for(it = m.begin(); it != m.end(); it++){
        if(it->first!=0){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}