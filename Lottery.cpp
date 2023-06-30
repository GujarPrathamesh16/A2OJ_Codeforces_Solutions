#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void makePairs(vector<long long>arr, long long k){
    
}
int main(){
    long long n;
    cin>>n;
    vector<long long>temp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        temp.push_back(x);
    }
    vector<long long>arr;
    for(int i=0;i<n;i++){
        if(temp[i]>=0){
            arr.push_back(temp[i]);
        }
    }
    for(int i=0;i<n;i++){
        makePairs(arr,i+1);
    }
    return 0;
}