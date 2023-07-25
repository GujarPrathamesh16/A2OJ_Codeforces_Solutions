#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<string>spells;
    for(ll i=0; i<n; i++){
        string x;
        cin>>x;
        spells.push_back(x);
    }
    string y;
    cin>>y;

    for(ll i=0; i<n; i++){

        ll idx = y.find(spells[i]);

        if(idx >=0 && idx <y.length()){
            y.replace(idx, spells[i].length()," ");
        }
    }

    for(ll i=0; i<y.length(); i++){
        if(y[i] != ' '){
            cout<<"Voldemort"<<endl;
            return 0;
        }
    }
    cout<<"Harry"<<endl;
    return 0;
}