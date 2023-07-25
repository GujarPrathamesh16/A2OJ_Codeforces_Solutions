#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>odd;
    vector<int>even;
    if(n==1 || n==2){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;

        for(int i=1; i<=n; i++){
            if(i%2==0){
                even.push_back(i);
            }
            else{
                odd.push_back(i);
            }
        }
        cout<<even.size()<<"\t";
        for(int i=0; i<even.size(); i++){
            cout<<even[i]<<"\t";
        }
        cout<<endl;
                
        cout<<odd.size()<<"\t";
        for(int i=0; i<odd.size(); i++){
            cout<<odd[i]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}