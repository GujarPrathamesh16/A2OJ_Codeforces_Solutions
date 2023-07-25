#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(char c, vector<string>x){
    bool ans = false;

    if(x[0][0] == c && x[0][1] == c && x[0][2] == c){
        ans = true;
    }
    else if(x[1][0] == c && x[1][1] == c && x[1][2] == c){
        ans = true;
    }       
    else if(x[2][0] == c && x[2][1] == c && x[2][2] == c){
        ans = true;
    }
    else if(x[0][0] == c && x[1][0] == c && x[2][0] == c){
        ans = true;
    }
    else if(x[0][1] == c && x[1][1] == c && x[2][1] == c){
        ans = true;
    }  
    else if(x[0][2] == c && x[1][2] == c && x[2][2] == c){
        ans = true;
    }
    else if(x[0][0] == c && x[1][1] == c && x[2][2] == c){
        ans = true;
    }
    else if(x[0][2] == c && x[1][1] == c && x[2][0] == c){
        ans = true;
    }  
    else{
        ans = false;
    } 
    return ans;     
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        vector<string>x;
        for(int i=0; i<3; i++){
            string s;
            cin>>s;
            x.push_back(s);
        }
        if(check('X', x)){
            cout<<"X"<<endl;
        }
        else if(check('O', x)){
            cout<<"O"<<endl;
        }
        else if(check('+', x)){
            cout<<"+"<<endl;
        }
        else{
            cout<<"DRAW"<<endl;
        }        
    }
    return 0;
}