#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,help=0;
    cin>>n;
    vector<char>s;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        s.push_back(c);
    }
    for(int i=0;i<n;i++){
        if(s[i]=='-' && help>0){
            help--;
        }
        else if(s[i]=='+'){
            help++;
        }
    }
    cout<<help<<endl;
    return 0;
}