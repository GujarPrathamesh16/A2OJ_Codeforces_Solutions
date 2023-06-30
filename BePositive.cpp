#include<bits/stdc++.h>
using namespace std;

int greaterThanOrEqualTo(int n){
    float f = (float) n/2;
    int x = n/2;
    if(f==x){
        return x;
    }
    else{
        return x+1;
    }
}

int main(){
    int n,po=0,ne=0,ans;
    cin>>n;
    vector<long long>a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
        if(x>0){
            po++;
        }
        if(x<0){
            ne++;
        }
    }
    int maxEl = *max_element(a.begin(), a.end());
    int x = greaterThanOrEqualTo(n);
    if(po<x && ne<x){
        ans = 0;
    }
    else{
        if(po>=x){
            ans =  (maxEl/2) ;
            if(ans==0){
                ans=1;
            }
        }
        else if(ne>=x){
            ans = (-1*(maxEl/2));
            if(ans==0){
                ans= -1;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}