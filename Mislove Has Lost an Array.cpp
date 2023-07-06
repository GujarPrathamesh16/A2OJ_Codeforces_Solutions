#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l,r, maxi=1, mini=1,i=1, j=1;
    cin>>n>>l>>r;

    int k=1;
    while(i<r){
        k *= 2;
        maxi += k;
        i++;
    }
    while(i<n){
        maxi += k;
        i++;
    }
    k = 1;
    while(j<l){
        k *= 2;
        mini += k;
        j++;
    }
    while(j<n){
        mini += 1;
        j++;
    }
    cout<<mini<<"\t"<<maxi<<endl;
    return 0;
}