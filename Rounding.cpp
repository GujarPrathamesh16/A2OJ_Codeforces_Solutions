#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    cin>>n;
    if(n%10 <= 5){
        cout<<n-(n%10)<<endl;
    }
    else{
        cout<<n+10-(n%10)<<endl;
    }
    return 0;
}