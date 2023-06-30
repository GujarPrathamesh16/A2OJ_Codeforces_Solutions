#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int isPerfectSquare(int n){
    int sq = sqrt(n);
    if(sq*sq==n){
        return 1;
    }
    else{
        return 0;
    }
}
int isFibo(int n){
    return isPerfectSquare(5*n*n + 4)
        || isPerfectSquare(5*n*n-4);
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(isFibo(i)==1){
            cout<<"O";
        }
        else{
            cout<<"o";
        }
    }
    cout<<endl;
    return 0;
}