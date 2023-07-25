#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0;
    float sum=0;
    cin>>n;
    vector<int>values;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        values.push_back(x);
        sum += x;
    }
    float r = sum/float(n);
    if(r >= 4.5){
        ans = 0;
    }
    else{
        sort(values.begin(), values.end());

        for(int i=0; i<n; i++){
            if((sum/n) >= 4.5){
                break;
            }
            if(values[i] < 5){
                sum += (5 - values[i]);
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}