#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        int arr[3];
        arr[0] = a;
        arr[1] = b;
        arr[2] = a^b;
        cout<<arr[n%3]<<endl;

    }
    return 0;
}